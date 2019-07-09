#ifndef CREATTREE_H_INCLUDED
#define CREATTREE_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    char data;
    struct TreeNode *left, *right;
};

void CreateBiTree(TreeNode *&T)
{
    char ch;
    cin >> ch;
    if (ch == '#')
        T = nullptr;
    else
    {
        T = new TreeNode();
        T -> data = ch;
        CreateBiTree(T -> left);
        CreateBiTree(T -> right);
    }
}
#endif // CREATTREE_H_INCLUDED
