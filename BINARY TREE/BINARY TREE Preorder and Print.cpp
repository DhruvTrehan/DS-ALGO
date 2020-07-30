#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node*left;
        node*right;
		
		node(int d)
		{
            data = d;
            left = NULL;
            right = NULL;
        }
};
node* buildTree()    // will return the address of tree root
{
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void print(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main()
{ 
    node* root = buildTree();
    print(root);
return 0;
}











