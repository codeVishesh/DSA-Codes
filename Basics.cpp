#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data inserting in left of: " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data inserting in right of: " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrderTravarsal(node *root)
{
    // LNR
    if (root == NULL)
    {
        return;
    }

    inOrderTravarsal(root->left); //Left
    cout << root->data << " "; //N -> Print (NULL)
    inOrderTravarsal(root->right); //Right
}

void preOrderTravarsal(node *root)
{
    // NLR
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " "; //N - > Print (NULL)
    preOrderTravarsal(root->left); //left
    preOrderTravarsal(root->right); //right
}

void postOrderTravarsal(node *root){

    // RLN
    if(root == NULL){
        return;
    }

    preOrderTravarsal(root->right);
    preOrderTravarsal(root->left);
    cout << root->data << " ";
}
int main()
{

    node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // Build the binary tree here
    root = buildTree(root);
    cout << "Level Order Traveral of the tree: " << endl;
    levelOrderTraversal(root);

    cout << endl;

    cout << "\nInorder Traveral of the tree: " << endl;
    inOrderTravarsal(root);

    cout << endl;

    cout << "\nPreorder Traveral of the tree: " << endl;
    preOrderTravarsal(root);

    cout << endl;

    cout << "\nPostorder Traveral of the tree: " << endl;
    postOrderTravarsal(root);

    return 0;
}