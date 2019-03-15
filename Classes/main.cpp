#include <iostream>
#include <string>

using namespace std;

class Shop {
private:
    string name;
    int kassa = 0;

protected:
    bool isClosed = false;  //0

public:
    Shop(string n) {
        name = n;
    }

    string ShopName() {
        cout << "Название торгового центра: ";
        return name;
    }

    float the_kassa() {
        cout << "Наличие денег в кассе: ";
        return this->kassa;
    }

    bool Open() {
        return !isClosed;
    }

    void MakeOpened() {
        isClosed = true;
    }

    void MakeClosed() {
        isClosed = false;
    }

    /*float buy (bool buyer, float price){
        this->buyer = buyer;
        if (buyer == 0) {
            //this->product = 0;
            this->price = price;
            return this->price;
        }
        else { return 0; }
    }*/
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

    void StatusOfDepartment() {
        if (Open() == true) {cout << "Отдел открыт";}
        else {cout << "Отдел закрыт";}
    }
};

int main() {
    Shop s("The Shop");
    Department d ("Be free", "Woman clothes");

    cout << s.ShopName() << endl;
    cout << s.the_kassa() << endl;

    cout << d.DepartmentName() << endl;
    cout << d.typeOfDepartmentName() << endl;
    d.StatusOfDepartment();
    d.MakeOpened();
    cout << endl;
    d.StatusOfDepartment();
    return 0;
}