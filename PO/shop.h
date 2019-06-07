#ifndef CLASSES_SHOP_H
#define CLASSES_SHOP_H

#include <string>

using namespace std;

class Shop{
    string name;
    int money;
    bool status;
    int price;
protected:
    int CountDiscount(int discount);
public:
    void SetName(string name);
    string GetName();
    void SetCash(int money);
    int GetCash();
    void ToClose();
    void ToOpen();
    virtual string GetStatus();
    void SetPrice(int price);
    int GetPrice();
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
