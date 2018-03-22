#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int low, int high, int piIndex){
    int pivot= arr[piIndex];
    swap(&arr[piIndex], &arr[high]);
    int i= low;

    for (int j=low; j< high; j++){
        if (arr[j] < pivot){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[high]);
    return i;
}


void lastElement(int arr[], int low, int high){
    if (low< high){
        int m= partition(arr, low, high, high);
        if (low < m)
            lastElement(arr, low, m-1);
        if (m < high)
            lastElement(arr, m+1, high);
    }
}

void medianElement(int arr[], int low, int high){
    if (low< high){
        int m= partition(arr, low, high, (low+high)/2);
        if (low < m)
            lastElement(arr, low, m-1);
        if (m < high)
            lastElement(arr, m+1, high);
    }
}

void randomElement(int arr[], int low, int high, int piIndex){
    if (low< high){
        int m= partition(arr, low, high, piIndex);
        if (low < m)
            lastElement(arr, low, m-1);
        if (m < high)
            lastElement(arr, m+1, high);
    }
}




