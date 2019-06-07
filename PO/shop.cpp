#include "shop.h"

void Shop::SetName(string name) {this->name = name; }

string Shop::GetName() {return name; }

void Shop::SetCash(int money) {this->money = money;}

int Shop::GetCash() {return money; }

void Shop::ToClose() {status = false; }

void Shop::ToOpen() {status = true; }

string Shop::GetStatus() {
    return status ? "Магазин открыт" : "Магазин закрыт";
}

string Department::GetStatus() {
    return status ? "Отдел открыт" : "Отдел закрыт";
}

void Department::SetType(string type) {this->type = type; }

string Department::GetType() {return type; }

void Shop::SetPrice(int price) {this->price = price; }

int Shop::GetPrice() {return price; }

int Shop::CountDiscount(int discount){
    return (GetPrice() - GetPrice()/discount);
}

int Shop::PriceWithDiscount() {
    if (GetPrice() >= 1000 && GetPrice() < 5000) {return CountDiscount(10); }
    else if (GetPrice() >= 5000) {return CountDiscount(15); }
    else return GetPrice();
}