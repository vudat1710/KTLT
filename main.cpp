#include "random.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "quickSort.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#define MAX 100

int main(){
    int n, piIndex;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    //int* arr= randomArray(n);
    //int* arr= randomSorted(n);
    int* arr= randomReverse(n);
    //cout << "Nhap pivot index: ";
    //cin >> piIndex;
    clock_t tStart = clock();
    //insertionSort(arr, n);
    //selectionSort(arr, n);
    lastElement(arr, 0, n-1);
    //medianElement(arr, 0, n-1);
    //randomElement(arr, 0, n-1, piIndex);
    cout << "time taken: " << (double)(clock() - tStart)/CLOCKS_PER_SEC;
    return 0;
}
