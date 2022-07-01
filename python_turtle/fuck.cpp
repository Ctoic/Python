#include<iostream>
using namespace std ;


class Student 
{
    string name ;
    int age ;
    float gpa ;


    Student(string n , int a , float g)
    {
        name  = n;
        age  = a ;
        gpa = g ;

    }

    public:

    void getname()
    {
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your name"<<endl;
        cin>>gpa;
                

    }


};

int main()
{


    return 0 ;
}