#include "Shop.h"

void Customer::PayMoney(int payMoney) {
    this->payMoney = payMoney;
}

int Customer::GetMoney() {
    return this->payMoney;
}

void Shop::ToClose() {
    status = false;
}

void Shop::ToOpen() {
    status = true;
}

bool Shop::GetStatus() {
    return status;
}

void Department::Cash(int money) {
    this->money += money;
}

int Department::GetCash() {
    return this->money;
}

void Seller::SetPrice(int price) {
    this->price = price;
}

int Seller::GetPrice() {
    return this->price;
}

int Department::CountDiscount(int discount, int price){
    return (price - price/discount);
}

int Department::PriceWithDiscount(int p) {
    if (p >= 1000 && p < 5000) {
        return CountDiscount(10, p);
    }
    else if (p >= 5000) {
        return CountDiscount(15, p);
    }
    else{
        return p;
    }
}

