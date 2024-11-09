#include<iostream>
using namespace std;

class Node{
private:
    Node* left ;
    int x ;
    Node* right ;
public:
    Node(int val)
    {
        x = val ;
        left = right = nullptr ;
    }

    int getX(){return x;}
    void setX(int x){this->x = x;}
    Node* getleft(){return left;}
    void setleft(Node* left){this->left = left;}
    Node* getright(){return right;}
    void setX(Node* right){this->right = right;}
};
void insert(Node *&root,int val)
{
    if(root==nullptr) {
        root = new Node(val);
        return ;
    }
    if(root->x > val) insert(root->left,val);
    else insert(root->right,val);
}
void in_order(Node *root)
{
    if(root != nullptr)
    {
        in_order(root->left);
        cout << root->x << " ";
        in_order(root->right);
    }
}
void pre_order(Node *root)
{
    if(root != nullptr)
    {
        cout << root->x << " " ;
        pre_order(root->left);
        pre_order(root->right);
    }
}
void post_order(Node *root)
{
    if(root != nullptr)
    {
        post_order(root->left);
        post_order(root->right);
        cout << root->x << " " ;
    }
}
bool search(Node *root,int val)
{
    if(root == nullptr ) return false ;
    if(root->x == val)return true ;
    if(root->x > val) search(root->left,val);
    else search(root->right,val);
}
void deletevalue(Node *&root,int val)
{
    if(root==nullptr) return ;
    if(root->x > val) deletevalue(root->left,val);
    else if(root->x < val) deletevalue(root->right,val);
    else
    {
        if(root->left == nullptr && root->right == nullptr)
        {
            Node *temp = root ;
            root = nullptr;
            delete(temp);
        }
        else if(root->left == nullptr)
        {
            Node *temp = root;
            root = root->right ;
            delete(temp);
        }
        else if(root->right == nullptr)
        {
            Node *temp = root;
            root = root->left ;
            delete(temp);
        }
        else
        {
            Node *temp = root->right ;
            while(temp->left != nullptr)
                temp = temp->left ;
            root->x = temp->x ;
            deletevalue(root->right,temp->x);
        }
    }
}
int main()
{
    Node *root = nullptr ;
    insert(root,50);
    insert(root,30);
    insert(root,40);
    insert(root,60);

    deletevalue(root,30);

    cout << "In-order form = " ; in_order(root);
    cout << "\nPre-order form = " ; pre_order(root);
    cout << "\nPost-order form = " ; post_order(root);

    cout << "\n\nSearch : " ;
    bool f = search(root,30);
    if(f) cout << " Data Found.\n" ;
    else cout << " Data Not Found.\n" ;
}
