#include <iostream>
#include <string>

using namespace std;

class Shop {
private:
    string name;
    double cash = 0;  //сумма в кассе
    int buyer = 0;
    double price = 0.0;
protected:
    bool isOpened = true;

public:
    Shop(string n) {
        name = n;
    }

    string ShopName() {
        cout << "Название торгового центра: ";
        return name;
    }

    double CashHas() {
        cout << "Наличие денег в кассе: ";
        return this->cash;
    }

    virtual string OpenOrNot() {
        if (isOpened == true) {
            return "opened";
        }
        else return "closed";
    }

    virtual void MakeOpened() {
        isOpened = true;
    }

    virtual void MakeClosed() {
        isOpened = false;
    }

    int SetBuyer(int kol) { //кол-во покупателей
        this->buyer = kol;
        return this->buyer;
    }

    double BuyTheProduct (int buyer, double price){
        this->buyer = buyer;
        if (buyer > 0) {
            this->price = price*buyer;
            return this->price;
        }
        else  return 0;
    }
};

class Department : public Shop {
private:
    string name;
    string typeOfDepartment;
public:
    Department(string name, string typeOfDepartment) : Shop(name) {
        this->name = name;
        this->typeOfDepartment = typeOfDepartment;
    }

    string DepartmentName() {
        cout << "Название отдела: ";
        return name;
    }

    string typeOfDepartmentName() {
        cout << "Тип отдела: ";
        return typeOfDepartment;
    }
};

void printStatus(Shop &shop) {
    cout << "Status - " << shop.OpenOrNot() << endl;
}

void DoStatusOpen(Shop &shop) {
    shop.MakeOpened();
}

void DoStatusClose(Shop &shop) {
    shop.MakeClosed();
}

int main() {
    Shop s("The Shop");
    Department d ("Zara", "Woman clothes");

    cout << s.ShopName() << endl;
    cout << d.DepartmentName() << endl;
    cout << d.typeOfDepartmentName() << endl;

    printStatus(d);

    DoStatusClose(d); //d.MakeClosed();
    printStatus(d);  //закрыт
    DoStatusOpen(d);
    printStatus(d);  //открыт

    cout << d.BuyTheProduct(d.SetBuyer(5), 10);

    return 0;
}