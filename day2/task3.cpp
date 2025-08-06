#include <iostream>
using namespace std;

void swap(int * a , int * b){
    int temp = *a ;
    *a = *b ;
    *b = temp;
}

int main(){
    int a , b;
    cout << "enter Two number : ";
    cin >> a;
    cin >> b;
    swap(&a , &b);
    cout << "Now A is : " << a << " and B is : " << b <<endl;
    return 0;
}