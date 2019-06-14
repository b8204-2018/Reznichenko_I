#include "shop.h"

void Shop::SetName(string name) {
    this->name = name;
}

string Shop::GetName() {
    return name;
}

void Customer::PayMoney(int payMoney) {
    this->payMoney = payMoney;
}

int Customer::GetMoney() {
    return payMoney;
}

void Shop::SetCash(int money) {
    this->money = c->GetMoney() + money;
}

int Shop::GetCash() {
    return money;
}

void Shop::ToClose() {
    status = false;
}

void Shop::ToOpen() {
    status = true;
}

string Shop::GetStatus() {
    return status ? "Магазин открыт" : "Магазин закрыт";
}

string Department::GetStatus() {
    return status ? "Отдел открыт" : "Отдел закрыт";
}

void Department::SetType(string type) {
    this->type = type;
}

string Department::GetType() {
    return type;
}

void Seller::SetPrice(int price) {
    this->price = price;
}

int Seller::GetPrice() {
    return price;
}

int Shop::CountDiscount(int discount){
    return (s->GetPrice() - s->GetPrice()/discount);
}

int Shop::PriceWithDiscount() {
    if (s->GetPrice() >= 1000 && s->GetPrice() < 5000) {return CountDiscount(10); }
    else if (s->GetPrice() >= 5000) {return CountDiscount(15); }
    else return s->GetPrice();
}

Shop::Shop(Seller *s, Customer *c) {
    s = new Seller();
    c = new Customer();
}

Seller* Shop::getClass() const {
    return s;
}