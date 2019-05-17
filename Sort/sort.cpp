#include "sort.h"

void DoubleSort::set(int *arr, int n) {
    size = 2*n - 1;
    sorted = new int[size];
    size/=2;
    sorted[size] = arr[0];
    left = size;
    right = size;
}

void DoubleSort::sort(int *arr, int n) {
    set(arr, n);
    bool flag;
    for (int i = 1; i <= size; i++) {
        flag = false;
        if (arr[i] <= sorted[left]) {
            left--;
            sorted[left] = arr[i];
        }
        else if (arr[i] >= sorted[right]) {
            right++;
            sorted[right] = arr[i];
        }
        else {
            int j = left;
            int l = left;
            int r = right;
            while (!flag) {
                j = (l + r)/2;
                if (sorted[j] < arr[i]) l = j + 1;
                else if (sorted[j] > arr[i]) r = j - 1;
                if ((arr[i] <= sorted[j + 1]) && (arr[i] >= sorted[j])) flag = true;
            }
            if (j - left < right - j) {
                for (int k = left; k <= j; k++) sorted[k - 1] = sorted[k];
                left--;
                sorted[j] = arr[i];
            }
            else {
                for (int k = right; k >= j + 1; k--) sorted[k + 1] = sorted[k];
                right++;
                sorted[j + 1] = arr[i];
            }
        }
    }
    int i = 0;
    for (int j = left; j <= right; j++) {
        arr[i] = sorted[j];
        i++;
    }
    delete[] sorted;
}
