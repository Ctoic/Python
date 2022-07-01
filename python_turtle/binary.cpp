#include<iostream>
#include<queue>
using namespace std ;

class Nodebst
{
public:
	int data ;
	Nodebst* left ;
	Nodebst* right;

	Nodebst()
	{
		data = 0 ;
		left = right = NULL;

	}

};

class BST
{
public:

	Nodebst* root ;
	BST()
	{
		root  = NULL;


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
	Nodebst* getnode(int val)
	{
		Nodebst* newnode = new Nodebst();
		newnode->data = val;
		newnode->left = NULL;
		newnode->right = NULL;


		return newnode;

	}

	void insert(int value)
	{
		if(isempty())
		{
			root  = getnode(value);

		}
		else
		{
			Nodebst* temp = root ;
			while(temp!=NULL)
			{
				if(temp->data > value)
				{
					if(temp->left)
					{

						temp = temp->left;

					}
					else 
					{
						temp->left= getnode(value);
						break;

					}
				}
				else if(temp->data < value)
				{
					if(temp->right)
					{
						temp = temp->right;

					}
					else 

					{
						temp->right = getnode(value);
						break;
					}
				}
				else
				{
					cout<<"Duplicate Found :"<<endl;
					break;

				}
			}
		}
	}

	void levelorder(Nodebst* root )
	{
		Nodebst* temp = root ;
		queue<Nodebst*>q;
		q.push(temp);
		while(!q.empty())
		{
			temp = q.front();
			cout<<temp->data;

			q.pop();
			if(temp->left !=NULL)
			{
				q.push(temp->left);

			}
			if(temp->right !=NULL)
			{
				q.push(temp->right);

			}

		}

	}

};


int main()
{
	BST btree;
	btree.insert(1);
	btree.insert(23);
	btree.insert(8);
	btree.insert(4);
	btree.insert(2);
	btree.insert(3);
	Nodebst* rootptr;

	btree.levelorder(rootptr);


	return 0;
}