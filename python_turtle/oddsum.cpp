#include<iostream>
using namespace std ;


int oddsum(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return oddsum(num-1);
    }
}

int main()
{

    cout<<oddsum(4);
    return 0 ;
}