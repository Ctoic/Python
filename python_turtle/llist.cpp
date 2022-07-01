#include<iostream>
using namespace std ;

class Node
{
    public:
    int data ;
    Node* next ;

    Node()
    {
        data = 0;
        next  = NULL;

    }

};

class Link
{
    public:
    Node* root ;
    Link()
    {
        root = NULL;

    }

    bool isempty()
    {
        if(root == NULL)
        {
            return true ;

        }
        else 
        {
            return false ;

        }
    }

    bool search(int value)
    {
        if(isempty())
        {
            cout<<"Nothing inthe List:"<<endl;
            return false ;
        }
        else
        {
            Node* temp = root ;
            while(temp->next!=NULL)
            {
                if(temp->data == value)
                {
                    return true ;
                    break;            
                }
                else
                {
                    temp = temp->next;

                }
            }

            return false ;

        }


    }
    Node* getNode(int val)
    {
        Node* newnode = new Node();
        newnode->data = val;
        newnode->next  = NULL;


        return newnode;

    }

    void insert(int val)
    {
        if(isempty())
        {
            root   = getNode(val);
            return;

        }
        else
        {
            
        }
    
    }

};


int main()
{


    return  0 ;
}