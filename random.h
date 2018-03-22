#include <iostream>
#include <cstdlib>
using namespace std;

int* randomArray(int n){
    int MAX,*a;
    cout << "Nhap MAX: ";
    cin >> MAX;
    a= new int[n];
    for (int i=0; i<n; i++){
        a[i]= random() % MAX;
    }
    return a;
    delete []a;
}

int* randomSorted(int n){
    int M,*a;
    cout << "Nhap MAX: ";
    cin >> M;
    a= new int[n];
    a[0]=random() % M;
    for (int i=1; i<n; i++){
        a[i]= a[i-1]+ random() % M;
    }
    return a;
    delete []a;
}

int* randomReverse(int n){
    int M,*a;
    cout << "Nhap MAX: ";
    cin >> M;
    a= new int[n];
    a[0]=random() % M;
    for (int i=1; i<n; i++){
        a[i]= a[i-1]- random() % M;
    }
    return a;
    delete []a;
}
