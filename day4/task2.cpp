#include <iostream>

class BankAccount
{
private:
    int balance;

public:
    BankAccount();
    ~BankAccount();

    void deposite(int val)
    {
        this->balance += val;
        std ::cout << "The deposit is done";
    }

    bool Withdraw(int val)
    {
        int balence = this->balance;
        if (val > balance)
        {
            return false;
        }
        else if (balance - val < 50)
        {
            return false;
        }
        else
        {
            this->balance -= val;
        }
    }

    void show_balence()
    {
        std::cout << "The current Balence is : " << this->balance << std::endl;
    }
};

BankAccount::BankAccount()
{
    this->balance = 50; // minimum balance and strarting balance .
}

BankAccount::~BankAccount()
{
    this->balance = -1; // back account is now closed .
}

int main()
{
    BankAccount user1;
    int ch = 1;
    while (ch)
    {
        int choise;
        std::cout << "Enter what do you want to do 1 for balance Check 2 for withdrawl 3 for deposit 4 for exit" << std ::endl;
        std ::cin >> choise;
        switch (choise)
        {
        case 1:
            user1.show_balence();
            break;
        case 2:
        {
            int val;
            std ::cout << "Enter how much amout you want to widthdrw : ";
            std ::cin >> val;
            bool ans = user1.Withdraw(val);
            if (ans)
            {
                std::cout << "Withdrawel was completed successfully";
            }
            else
            {
                std::cout << "Withdrawel was failed due to balance issue";
            }
            break;
        }
        case 3:
        {
            int value;
            std ::cout << "Enter how much amout you want to deposit : ";
            std ::cin >> value;
            user1.deposite(value);
            break;
        }

        default:
            break;
        }
        std ::cout << "Enter the choise 1/0 :";
        std ::cin >> ch;
    }
    std :: cout << "------------------------Thank You------------------------";
    return 0;
}