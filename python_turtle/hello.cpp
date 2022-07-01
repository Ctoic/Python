#include<iostream>
using namespace std ;

class Node
{
    public:
    int data ;
    Node* next ;
    Node()
    {
        data = 0 ;
        next  = NULL;

    }

    };
class Link
{
    public:
    Node* head ;
    Link()
    {
        head = NULL;

    }

    bool isempty()
    {
        if(head == NULL)
        {
            return true ;

        }
        else 
        {
           return  false ;

        }

      
    }
    Node* getnode(int val)
    {
        Node* newnode = new Node();
        newnode->data = val;
        newnode->next = NULL;

        return newnode;
    }
    




};

