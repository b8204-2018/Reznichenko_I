#ifndef CLASSES_SHOP_H
#define CLASSES_SHOP_H

#include <string>

using namespace std;

class Customer{
    int payMoney;
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

class Shop{
    string name;
    bool status;
    int money;
protected:
    int CountDiscount(int discount);
public:
    Seller* s;
    Customer* c;
    Shop (Seller* s, Customer* c);
    ~Shop();
    Seller* getClass() const;
    void SetName(string name);
    string GetName();
    void SetCash(int money);
    int GetCash();
    void ToClose();
    void ToOpen();
    virtual string GetStatus();
    int PriceWithDiscount();
};

class Department : public Shop {
    bool status;
    string type;
public:
    string GetStatus();
    void SetType(string type);
    string GetType();
};

#endif //CLASSES_SHOP_H
