#include <iostream>
#include "shop.h"

int main() {
    Seller sel;
    Customer byuer;
    Shop store(&sel, &byuer);
    return 0;
}