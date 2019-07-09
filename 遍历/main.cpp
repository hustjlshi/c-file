#include<bits/stdc++.h>
#include "CreatTree.h"
using namespace std;
//ǰ������ǵݹ�
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
//��������ǵݹ�
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
//��������ǵݹ�
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
    cout << "������������������������֣�Ҷ������#�Ŵ���" << endl;
    CreateBiTree(T);
    cout << "ǰ�������" << endl;
    PreOrder(T);
    cout << "���������" << endl;
    MidOrder(T);
    cout << "���������" << endl;
    PostOrder(T);
    return 0;
}
