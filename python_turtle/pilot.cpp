#include<iostream>
using namespace std ;

// create class Student
class Student
{
    string name ;
    int age ;
    float gpa ;
    // create constructor
    Student(string n , int a , float g)
    {
        name  = n;
        age  = a ;
        gpa = g ;

    }

    // create getname function
    public:
    void getname()
    {
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your name"<<endl;
        cin>>gpa;
                

    }
    //create setname function
    void setname(string n)
    {
        name = n ;

    }
    //create getage function
    void getage()
    {
        cout<<"Enter your age"<<endl;
        cin>>age;
        cout<<"Enter your age"<<endl;
        cin>>gpa;
                

    }
    //create setage function
    void setage(int a)
    {
        age = a ;

    }
    //create getgpa function
    void getgpa()
    {
        cout<<"Enter your gpa"<<endl;
        cin>>gpa;
        cout<<"Enter your gpa"<<endl;
        cin>>gpa;
                

    }

    // create setgpa function
    void setgpa(float g)
    {
        gpa = g ;

    }

    // createa display function
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"GPA : "<<gpa<<endl;

    }

    //create a child class
    class Student1
    {
        string name ;
        int age ;
        float gpa ;
        // create constructor
        Student1(string n , int a , float g)
        {
            name  = n;
            age  = a ;
            gpa = g ;

        }

        // create getname function
        public:
        void getname()
        {
            cout<<"Enter your name"<<endl;
            cin>>name;
            cout<<"Enter your name"<<endl;
            cin>>gpa;
                    

        }
        //create setname function
        void setname(string n)
        {
            name = n ;

        }
        //create getage function
        void getage()
        {
            cout<<"Enter your age"<<endl;
            cin>>age;
            cout<<"Enter your age"<<endl;
            cin>>gpa;
                    

        }
        //create setage function
        void setage(int a)
        {
            age = a ;

        }
        //create getgpa function
        void getgpa()
        {
            cout<<"Enter your gpa"<<endl;
            cin>>gpa;
            cout<<"Enter your gpa"<<endl;
            cin>>gpa;
                    

        }
        // create setgpa function
        void setgpa(float g)
        {
            gpa = g ;

        }
        // createa display function
        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"GPA : "<<gpa<<endl;

        }
    };

};

int main()
{
    
}