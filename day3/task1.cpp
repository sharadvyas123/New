#include<iostream>
#include <cstdlib>

struct student {
    int id;
    int marks;
    char name[50];
};

int main(){
    struct student * students[3];
    struct student * s1 =(struct student *) malloc(sizeof(struct student));
    struct student * s2 =(struct student *) malloc(sizeof(struct student));
    struct student * s3 =(struct student *) malloc(sizeof(struct student));
    students[0] = s1;
    students[1] = s2;
    students[2] = s3;

    for(int i = 0 ; i < 3 ; i ++)
    {
        std :: cout << "Enter the id : ";
        std :: cin >> students[i]->id;
        std :: cout << "Enter the Marks : ";
        std :: cin >> students[i]->marks;
        std :: cout << "Enter the Name : ";
        std :: cin >> students[i]->name;
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Student " << i + 1 << "'s id is :" << students[i]->id << " and makrs is : " << students[i]->marks <<" abd name is : " << students[i]->name << std::endl;
    }
    

    return 0;
}