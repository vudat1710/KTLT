#include <iostream>
#include <cstdlib>

using namespace std;

void selectionSort(int arr[], int n){
    int min_index;
    for (int i=0; i<n; i++){
        min_index=i;
        for (int j=i+1; j<n; j++){
            if (arr[min_index]> arr[j]) min_index=j;
        }
        int temp= arr[i];
        arr[i]=arr[min_index];
        arr[min_index]= temp;
    }
}
