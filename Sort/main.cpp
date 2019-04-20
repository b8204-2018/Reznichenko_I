#include <string.h>
#include <iostream>
#include "sort.h"

using namespace std;


void printSortedArray(Sort &sort, int *arr, int n) {
    int *res = new int[n];
    memcpy(res, arr, n * sizeof(int));

    sort.sort(res, n);

    for (int i = 0; i < n; i++) {
        cout << " " << res[i];
    }
}

int main() {
    int a[] = {6, 8, 3, 0, 7};
    DoubleSort sort1;

    printSortedArray(sort1, a, 5);

    return 0;
}