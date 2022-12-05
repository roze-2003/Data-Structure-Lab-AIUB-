#include <iostream>
using namespace std;

struct node
{
    int value;
	node *left;
	node *right;
};

struct node *root = NULL;

void insert(int key, node *TRoot)
{
    if(root == NULL)
    {
		root = new node;
		root->value = key;
		root->left = NULL;
		root->right = NULL;
	}

	else
    {
        if(key < TRoot->value)
        {
            if(TRoot->left != NULL)
            {
                insert(key, TRoot->left);
            }

            else
            {
                TRoot->left = new node;
                TRoot->left->value = key;
                TRoot->left->left = NULL;
                TRoot->left->right = NULL;
            }
        }

        else if(key > TRoot->value)
        {
            if(TRoot->right != NULL)
            {
                insert(key, TRoot->right);
            }

            else
            {
                TRoot->right = new node;
                TRoot->right->value = key;
                TRoot->right->right = NULL;
                TRoot->right->left = NULL;
            }
        }
    }
}

void inorder_search(node *TRoot)
{
	if(TRoot != NULL)
    {
		inorder_search(TRoot->left);
		cout << TRoot->value << " ";
		inorder_search(TRoot->right);
	}
}

void postorder_search(node *TRoot)
{
	if(TRoot != NULL)
    {
		postorder_search(TRoot->left);
		postorder_search(TRoot->right);
		cout << TRoot->value << " ";
	}
}

int main()
{
	insert(6, root);
	insert(9, root);
	insert(12, root);
	insert(15, root);
	insert(1, root);
	insert(8, root);

	cout << "In-order Traversing of the Tree: ";
    inorder_search(root);

    cout<<endl;

    cout << "Post-order Traversing of the Tree: ";
    postorder_search(root);


    return 0;
}

