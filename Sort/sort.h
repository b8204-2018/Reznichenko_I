#ifndef UNTITLED_SORT_H
#define UNTITLED_SORT_H

#include <string.h>

using namespace std;

class Sort {
public:
    virtual void sort(int *arr, int n) = 0;
};

class DoubleSort : public Sort {
    int right, left;
    int size;
    int *sorted;
    void set(int *arr, int n);
public:
    void sort(int *arr, int n);
};

#endif //UNTITLED_SORT_H
