#include <iostream>
#include "shop.h"

int main() {
    Department_Clothes dep_c;

    vector <Customer> byuer(N);

    if(dep_c.GetStatus()){}
    else {
        dep_c.ToOpen();
    }

    Seller sel;

    sel.SetPrice(1000);
    byuer[0].SetReady(true);
    byuer[1].SetReady(false);

    for(int i = 0; i < byuer.size(); i++){

        if(sel.Bargain(byuer[i])){
            sel.SetDiscountPlus();
        }
        else{
            sel.SetDiscountNegative();
        }

        if(byuer[i].BeGlad(sel.GetDiscount())){
            byuer[i].PayMoney(3000);
        }
        else{
            byuer[i].PayMoney(500);
        }

        int cash = byuer[i].GetMoney();

        if (cash >= sel.GetPrice()){
            dep_c.Cash(byuer[i].Pay());
        }
        else{
            dep_c.Cash(cash);
        }
    }

    cout << "Day proceeds: " << dep_c.GetCash();



    return 0;
}