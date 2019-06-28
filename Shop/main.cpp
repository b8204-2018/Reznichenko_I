#include <iostream>
#include "shop.h"

int main() {
    Department dep;

    if(dep.GetStatus()){}
    else {
        dep.ToOpen();
    }

    Seller sel;

    sel.SetPrice(1000);

    vector <Customer> byuer(N);

    for(int i = 0; i < byuer.size(); i++){
        byuer[i].PayMoney(500 * (i + 1));

        int cash = byuer[i].GetMoney();

        if (cash >= sel.GetPrice()){
            dep.Cash(dep.PriceWithDiscount(sel.GetPrice()));
        }
        else{
            dep.Cash(cash);
        }
    }

    cout << "Day proceeds: " << dep.GetCash();

    return 0;
}