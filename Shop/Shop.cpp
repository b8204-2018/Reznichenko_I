#include "Shop.h"

void Customer::PayMoney(int payMoney) {
    this->payMoney = payMoney;
}

int Customer::GetMoney() {
    return this->payMoney;
}

bool Customer::BeGlad(int cash) {
    if (cash > 0){
        return true;
    }
    else return false;
}

int Customer::Pay() {
    return (this->payMoney - this->payMoney/5);
}

bool Customer::IsReadyToBuy() {
    return this->ready;
}

void Customer::SwitchReadyToByu() {
    if(this->ready){
        this->ready = false;
    }
}

void Customer::SetReady(bool ready) {
    this->ready = ready;
}

void Shop::ToOpen() {
    status = true;
}

bool Shop::GetStatus() {
    return status;
}

int Department_Clothes::Cash(int money) {
    return (this->money += money);
}

int Department_Clothes::GetCash() {
    return this->money;
}

void Seller::SetPrice(int price) {
    this->price = price;
}

int Seller::GetPrice() {
    return this->price;
}

bool Seller::Bargain(Customer &C) {
    if (Like(C)){
        true;
    }
    else false;
}

bool Seller::Like(Customer &C) {
    if (C.IsReadyToBuy()){
        return true;
    }
    else return false;
}

void Seller::SetDiscountPlus() {
    this->discount = 5;
}

void Seller::SetDiscountNegative() {
    this->discount = 0;
}

int Seller::GetDiscount() {
    return this->discount;
}


