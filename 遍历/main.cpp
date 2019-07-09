#include<bits/stdc++.h>
#include "CreatTree.h"
using namespace std;
//前序遍历非递归
void PreOrder(TreeNode *T){
    TreeNode *p = T;
    stack<TreeNode*> st;
    while(p || !st.empty()){
        if(p != NULL){
            st.push(p);
            cout << p -> data << endl;
            p = p -> left;
        }
        else{
            p = st.top();
            st.pop();
            p = p -> right;
        }
    }
}
//中序遍历非递归
void MidOrder(TreeNode *T){
    TreeNode *p = T;
    stack<TreeNode*> st;
    while(p || !st.empty()){
        if(p != NULL){
            st.push(p);
            p = p -> left;
        }
        else{
            p = st.top();
            st.pop();
            cout << p -> data << endl;
            p = p -> right;
        }
    }
}
//后序遍历非递归
void PostOrder(TreeNode *T){
    TreeNode *p = T;
    TreeNode *last = NULL;
    stack<TreeNode*> st;
    while(p || !st.empty()){
        while(p){
            st.push(p);
            p = p -> left;
        }
        p = st.top();
        if(p -> right == NULL || p -> right == last){
            st.pop();
            cout << p -> data << endl;
            last = p;
            p = NULL;
        }
        else{
            p = p -> right;
        }
    }
}
int main(){
    TreeNode *T;
    cout << "中序遍历创建树，请输入数字，叶子树以#号代替" << endl;
    CreateBiTree(T);
    cout << "前序遍历：" << endl;
    PreOrder(T);
    cout << "中序遍历：" << endl;
    MidOrder(T);
    cout << "后序遍历：" << endl;
    PostOrder(T);
    return 0;
}
