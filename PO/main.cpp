#include <iostream>
#include "shop.h"

int main() {
    Shop store;
    store.SetName("Калина Молл");
    cout << store.GetName();
    store.SetCash(300);
    cout << endl << store.GetCash();
    store.ToOpen();
    cout << endl << store.GetStatus();
    store.ToClose();
    cout << endl << store.GetStatus();

    cout << endl;

    Department dep;
    dep.SetName("A");
    cout << endl << dep.GetName();
    dep.ToClose();
    cout << endl << dep.GetStatus();
    dep.SetType("Clothes");
    cout << endl << dep.GetType();

    cout << endl;

    store.SetPrice(5000);
    cout << store.PriceWithDiscount();
    return 0;
}