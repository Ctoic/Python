#include<iostream>
using namespace std ;

class boy
{
    public:
    string name ;
    float age ;
    string last_name ;
    int grade ;
    float gpa ;

    boy()
    {
        name = '\0';
        age = 0.0 ;
        last_name = '\0';
        grade = 0;
        gpa = 0.0;

    }

    void getter()
    {
        cout<<"Enter name age last name grade and Gpa of the student :"<<endl;
        cin>>name>>age>>last_name>>grade>>gpa;

        return ;
    }

    string fullname(string name , string last)
    {
        string fullname = name + last;


        return fullname;


    }

};


int main()
{
    boy najam;
    najam.getter();
    cout<<najam.age;



    return 0 ;
}