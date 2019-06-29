#ifndef SHOP_SHOP_H
#define SHOP_SHOP_H
#define N 2

#include <string>
#include <vector>

using namespace std;

class Customer{
    int payMoney;
    bool ready;
public:
    void PayMoney(int payMoney);
    int GetMoney();
    bool BeGlad(int cash);
    int Pay();
    bool IsReadyToBuy();
    void SwitchReadyToByu();
    void SetReady(bool ready);
};

class Seller{
    int price;
    int discount;
public:
    void SetPrice(int price);
    int GetPrice();
    bool Like(Customer &C);
    bool Bargain(Customer &C);
    void SetDiscountPlus();
    void SetDiscountNegative();
    int GetDiscount();
};

class Shop {
    bool status = true;
protected:
    int CountDiscount(int discount, int price);
public:
    void ToOpen();
    bool GetStatus();
};

class Department_Clothes : public Shop{
    int money = 0;
public:
    int Cash(int money);
    int PriceWithDiscount(int p);
    int GetCash();
};


#endif //SHOP_SHOP_H
