#include <iostream>
using namespace std;

void reverse(int *array)
{
    int *start = array;
    int *end = array + 4;
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    reverse(arr);
    cout << "Reversed Array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}