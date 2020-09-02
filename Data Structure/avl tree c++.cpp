#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 
class Node
{ 
	public: 
	int key; 
	Node *left; 
	Node *right; 
	int height; 
};  
int height(Node *N) 
{ 
	if (N == NULL) 
		return 0; 
	return N->height; 
} 
Node* newNode(int key) 
{ 
	Node* node = new Node(); 
	node->key = key; 
	node->left = NULL; 
	node->right = NULL; 
	node->height = 1;  
	return(node); 
}
Node *rightRotate(Node *y) 
{ 
	Node *x = y->left; 
	Node *T2 = x->right; 
	x->right = y; 
	y->left = T2; 
	y->height = max(height(y->left), 
					height(y->right)) + 1; 
	x->height = max(height(x->left), 
					height(x->right)) + 1; 

 
	return x; 
} 
Node *leftRotate(Node *x) 
{ 
	Node *y = x->right; 
	Node *T2 = y->left; 
	y->left = x; 
	x->right = T2; 
	x->height = max(height(x->left),	 
					height(x->right)) + 1; 
	y->height = max(height(y->left), 
					height(y->right)) + 1; 
	return y; 
} 
int getBalance(Node *N) 
{ 
	if (N == NULL) 
		return 0; 
	return height(N->left) - height(N->right); 
} 
Node* insert(Node* node, int key) 
{ 	
	if (node == NULL) 
		return(newNode(key)); 

	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 
	else 
		return node; 
	node->height = 1 + max(height(node->left), 
						height(node->right)); 
	int balance = getBalance(node); 
	if (balance > 1 && key < node->left->key) 
		return rightRotate(node); 
	if (balance < -1 && key > node->right->key) 
		return leftRotate(node); 
	if (balance > 1 && key > node->left->key) 
	{ 
		node->left = leftRotate(node->left); 
		return rightRotate(node); 
	} 

 
	if (balance < -1 && key < node->right->key) 
	{ 
		node->right = rightRotate(node->right); 
		return leftRotate(node); 
	} 

	return node; 
} 

void preOrder(Node *root) 
{ 
	if(root != NULL) 
	{ 
		cout << root->key << " "; 
		preOrder(root->left); 
		preOrder(root->right); 
	} 
} 


 void postorder(Node* root)
          { if(root!=NULL)
            { postorder(root->left);
              postorder(root->right);
              cout<<root->key<<" ";
             }
           }
 void levelorder(Node* node)
          { 
		  queue <Node*> q;
            q.push(node);
            while(!q.empty())
            { node=q.front();
              cout<<node->key<<" ";
              if(node->left!=NULL)
              q.push(node->left);
              if(node->right!=NULL)
              q.push(node->right);
              q.pop();
             }
           }
  void inorder(Node* node)
          { if(node!=NULL)
            { inorder(node->left);
              cout<<node->key<<" ";
              inorder(node->right);
             }
           }

Node* find_min(Node* root)
{
	while(root->left!=NULL)
		root=root->left;
	//cout<<"\nMINIMUM DATA = "<<root->key;
	return root;
}

Node* deletion(Node* root,int data)
{
	if(root==NULL) return root;
	 if(root->key > data)
	{
		root->left = deletion(root->left,data);
	}
	else if(root->key < data)
	{
		root->right = deletion(root->right,data);
	}
	else
	{
		if(root->left ==NULL && root->right ==NULL)
		{
			Node *temp=root;
			delete temp; 
			root=NULL;
		}
		else if(root->left ==NULL)
		{
			Node* temp=root;
			root=root->right;
			delete temp;
			//return root;
		}
		else if(root->right==NULL)
		{
			Node* temp = root;
			root=root->left;
			delete temp;
		//	return root;
		}
		else { 
			Node *temp = find_min(root->right);
			root->key = temp->key;
			root->right = deletion(root->right,temp->key);
		//delete temp;
		}
		
	}
	if(root==NULL) return root;
		root->height = max(height(root->left) , height(root->right)) +1;
		
			int balance = getBalance(root);
		
		
		if(balance > 1 &&  getBalance(root->left)>=0)
		{
			return rightRotate(root);
		}
		else if(balance>1 &&  getBalance(root->left)<0)
		{
			root->left =leftRotate(root->left);
			return rightRotate(root);
		}
		else if(balance <-1 &&  getBalance(root->right)<=0)
		{
			return leftRotate(root);
			
		}
		else if(balance < -1 &&  getBalance(root->right)>0)
		{
			root->right = rightRotate(root->right);
			return leftRotate(root);
		}
		else return root;
	
	
	return root;
}

int main() 
{ 
	Node *root = NULL; 
	char ch;
    cout<<"\nENTER THE NODES TO FORM :press -1 to exit";
	while(1)
	{
		int x;
		cin>>x;
		if(x!=-1)
		root=insert(root , x); 
		else break;
	}
	
	cout << "Preorder traversal of the "
			"constructed AVL tree is \n"; 
	preOrder(root); 
	cout<<endl<<"INORDER:"<<" ";
	inorder(root);
	cout<<endl<<"POSTORDER  : ";
	postorder(root);
	cout<<endl<<"LEVELORDER :  ";
	levelorder(root);
	do
	{
		cout<<"\nENTER THE NODE TO DELETE !";
		int x;
		cin>>x;
		root = deletion(root , x);
		cout<<"\nDO YOU CONTINUE ? ";
		cin>>ch;
	}while (ch=='y');
		cout << "Preorder traversal of the "
			"constructed AVL tree is \n"; 
	preOrder(root); 
	cout<<endl<<"INORDER:"<<" ";
	inorder(root);
	cout<<endl<<"POSTORDER  : ";
	postorder(root);
	cout<<endl<<"LEVELORDER :  ";
	levelorder(root);	
	return 0; 
} 

