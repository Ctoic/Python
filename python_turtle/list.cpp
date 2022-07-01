#include<iostream>
using namespace std ;

// create Node class
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

    // create a function to get data
    void getdata()
    {
        cout<<"Enter your data"<<endl;
        cin>>data;
        cout<<"Enter your data"<<endl;
        cin>>data;
        
    }

    /// create a function to get next node
    void getnext(Node* n)
    {
        next = n ;
    }
    // create a function to set data
    void setdata(int d)
    {
        data = d ;
    }
    // create a function to set next
    void setnext(Node* n)
    {
        next = n ;
    }
    
};

// create a List class
class List
{
    public:
    Node* head ;
    List()
    {
        head = NULL;

    }
    // create a function to check if list is empty
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
    // create a function to get node
    Node* getnode(int val)
    {
        Node* newnode = new Node();
        newnode->data = val;
        newnode->next = NULL;
    }

    // create a function to display list
    void display()
    {
        if(isempty())
        {
            cout<<"nothing to Display"<<endl;

        }
        else
        {
            Node* temp = head ;
            while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next ;
            }
            cout<<endl;
        }
    }
    // create a function to search a node
    bool search(int val)
    {
        if(isempty())
        {
            return false ;
            cout<<"nothing to Display"<<endl;

        }
        else
        {
            Node* temp = head ;
            while (temp->next!=NULL)
            {
                if(temp->data == val)
                {
                    return true ;
                }
                temp = temp->next ;
            }
        }
    }
    // create a function to delete a node
    void deleteNode(int val)
    {
        if(isempty())
        {
            cout<<"nothing to Display"<<endl;

        }
        else
        {
            Node* temp = head ;
            while (temp->next!=NULL)
            {
                if(temp->data == val)
                {
                    temp->next = temp->next->next ;
                    break;
                }
                temp = temp->next ;
            }
        }
    }
};