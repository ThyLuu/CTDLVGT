//khai bao cau truc du lieu cay nhi phan 
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

typedef Node *Tree;

Node *CreateNode(int init)
{
    Node *p = new Node;
    p->data = init;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void CreateTree(Tree &root)
{
    root = NULL;
}

void DestroyTree(Tree &root)
{
    if (root)
    {
        DestroyTree(root->left);
        DestroyTree(root->right);
        delete root;
    }
}

void AddNode(Tree &root, Node *node)
{
    if (root)
    {
        if (root->data == node->data)
            return;
        if (node->data < root->data)
            AddNode(root->left, node);
        else
            AddNode(root->right, node);
    }
    else
    {
        root = node;
    }
}

Node *FindNode(Tree root, int x)
{
    if (root)
    {
        if (root->data == x)
            return root;
        if (x < root->data)
            return FindNode(root->left, x);
        return FindNode(root->right, x);
    }
    return NULL;
}

void PrintTree(Tree root)
{
    if (root)
    {
        PrintTree(root->left);
        cout << root->data << ' ';
        PrintTree(root->right);
    }
}

void NLR(Tree root)
{
    if (root)
    {
        NLR(root->left);
        NLR(root->right);
    }
}

void LNR(Tree root)
{
    if (root)
    {
        LNR(root->left);
        LNR(root->right);
    }
}

void LRN(Tree root)
{
    if (root)
    {
        LRN(root->left);
        LRN(root->right);
    }
}

void FindAndReplace1(Tree &p, Tree &tree)
{
    if (tree->left)
        FindAndReplace1(p, tree->left);
    else
    {
        p->data = tree->data;
        p = tree;
        tree = tree->right;
    }
}

void FindAndReplace2(Tree &p, Tree &tree)
{
    if (tree->right)
        FindAndReplace2(p, tree->right);
    else
    {
        p->data = tree->data;
        p = tree;
        tree = tree->left;
    }
}

void DeleteNode(Tree &root, int x)
{
    if (root)
    {
        if (x > root->data)
            DeleteNode(root->right, x);
        else if (x < root->data)
            DeleteNode(root->left, x);
        else
        {
            Node *p = root;
            if (!root->left)
                root = root->right;
            else if (!root->right)
                root = root->left;
            else
                FindAndReplace1(p, root->right);
            delete p;
        }
    }
    else
    {
        cout << "Not found!\n";
    }
}

//struct TreeNode {
//    int data;
//    TreeNode* left;
//    TreeNode* right;
//};
//void insertNode(TreeNode*& root, int value) {
//    if (root == NULL) {
//        root = new TreeNode;
//        root->data = value;
//        root->left = NULL;
//        root->right = NULL;
//    }
//    else if (value < root->data) {
//        insertNode(root->left, value);
//    }
//    else {
//        insertNode(root->right, value);
//    }
//}
//void printTree(TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    printTree(root->left);
//    cout << root->data << " ";
//    printTree(root->right);
//}
//
//int main() {
//    TreeNode* root = NULL;
//    int arr[] = { 5, 3, 7, 1, 4, 6, 8 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < size; i++) {
//        insertNode(root, arr[i]);
//    }
//    printTree(root);
//}
