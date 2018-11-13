#include <iostream>
using namespace std;

int main() {
    int number, i, chislo, sum;
    sum = 0;
    printf("Vvedite chislo: ");
    scanf("%d", &number);
    int *p = new int[number];
    for (i = 0; i < number; i++) {
        printf("p[%d]= ", i);
        scanf("%d", &chislo);
        p[i] = chislo;
    }
    for (i = 0; i < number; i++) {
        sum += p[i];
    }
    cout << "\nsum = " << sum << endl;
    system("pause");
        return 0;
}