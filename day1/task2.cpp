#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int Mult(int a, int b) { return a * b; }
float Div(int a, int b)
{
    if (b == 0)
    {
        return -1;
    }
    else
    {
        return a / b;
    }
}

int main()
{
    int ch = 1;
    while (ch)
    {
        int choice;
        int a, b;
        float res;
        cout << "Enter Two Number : ";
        cin >> a;
        cin >> b;
        cout << "enter 1 for Addition , 2 for substration , 3 for Multiplication , 4 for Division " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            res = add(a, b);
            break;
        case 2:
            res = sub(a, b);
            break;
        case 3:
            res = Mult(a, b);
            break;
        case 4:
            res = Div(a, b);
            break;
        default:
            break;
        }

        if (res == -1 && choice == 4)
        {
            cout << "Cannot Devide By 0 " << endl;
        }
        else
        {
            cout << "The Result is : " << res << endl;
        }
        cout << "Do you still want to continue ?? ";
        cin >> ch;
    }
    return 0;
}