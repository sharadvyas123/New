#include <iostream>
using namespace std;

int main (){
    int arr[] = {1,2,3,4,5};
    int * ptr = arr;
    cout<< "Printing the array by the Pointer" <<endl;
    for (int i = 0 ; i < 5 ; ++i)
    {
        cout << "Value at the index" << i << ":" << *(ptr+i) << " , Address : "<< ptr + i << endl;
    }
    return 0;
}