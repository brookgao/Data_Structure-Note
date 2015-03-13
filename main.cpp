//
//  main.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/7.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include <iostream>
#include <stack>
#include "SingleList.h"
#include "BinaryTree.h"


void getList(ListNode *head, int n, int times){
    head->next = NULL;
    ListNode *tmp = head;
    for (int i = 1; i<n; i++) {
        for (int j=0; j<times; j++) {
            ListNode *newNode = new ListNode(i);
            tmp->next = newNode;
            tmp = newNode;
        }
    }
    tmp->next = NULL;
}


bool isSameTree(TreeNode *p, TreeNode *q) {
    if (p&&q){
        if(p->val == q->val)
            return isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
        else
            return false;
    }else if(!p&&!q){
        return true;
    }
    return false;
}

int getDepth(TreeNode *T){
    int depth = 0;
    if (T){
        int lDepth = getDepth(T->left);
        int rDepth = getDepth(T->right);
        if(abs(lDepth-rDepth)>1||lDepth == -1||rDepth == -1)
            return -1;
        depth = lDepth >=rDepth?lDepth+1:rDepth+1;
    }
    return depth;
}

bool isBalanced(TreeNode *root) {
    int depth = 0;
    bool balance = false;
    depth = getDepth(root);
    if(depth == -1)
        balance = false;
    return balance;
}

int main(int argc, const char * argv[]) {
    TreeNode *BiTree1;
    CreateBiTree(BiTree1);
    PreOrderTraverse(BiTree1);
    cout<<std::endl;
    /*
    TreeNode *BiTree2;
    CreateBiTree(BiTree2);
    PreOrderTraverse(BiTree2);
    cout<<endl;
    */
    bool isBa = isBalanced(BiTree1);
    cout<<"isBalanced: "<<isBa<<endl;
    return 0;
}