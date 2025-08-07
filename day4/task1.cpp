#include<iostream>
#include <string>

class User
{
private:
    std::string name;
    std::string email;
public:
    User();

    void setdata(std::string name , std :: string email){
        this->name =name;
        this->email =email;
    }

    void display(){
        std :: cout << "The name of the user is : " << this->name  << std :: endl;
        std :: cout << "The email of the user is : " << this->email << std ::endl;
    }
};

User::User(){
    this->name = "";
    this->email = "";
}


int main (){
    User user1 ;
    user1.setdata("sharad" , "sharadvyas132@gmail.com");
    user1.display();
    return 0;
}