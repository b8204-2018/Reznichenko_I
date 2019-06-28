#ifndef SHOP_SHOP_H
#define SHOP_SHOP_H
#define N 2

#include <string>
#include <vector>

using namespace std;

class Customer{
    int payMoney = 0;
public:
    void PayMoney(int payMoney);
    int GetMoney();
};

class Seller{
    int price;
public:
    void SetPrice(int price);
    int GetPrice();
};

class Shop {
    bool status = true;
public:
    void ToClose();
    void ToOpen();
    bool GetStatus();
};

class Department : public Shop{
    int money;
protected:
    int CountDiscount(int discount, int price);
public:
    Seller s;
    void Cash(int money);
    int PriceWithDiscount(int p);
    int GetCash();
};


#endif //SHOP_SHOP_H
