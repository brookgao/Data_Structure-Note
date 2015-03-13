//
//  BinaryTree.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/10.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include "BinaryTree.h"

void CreateBiTree(TreeNode* &T){
    char ch;
    cin>>ch;
    if(ch == '#')
        T = NULL;
    else{
        T = new TreeNode(ch);
        CreateBiTree(T->left);
        CreateBiTree(T->right);
    }
}

void DepthFirstSearch(TreeNode *T){                 //深度优先,非递归
    stack<TreeNode*> nodeStack;
    nodeStack.push(T);
    TreeNode *root;
    while(!nodeStack.empty()){
        root = nodeStack.top();
        cout<<root->val<<", ";
        nodeStack.pop();
        if (root->right)
            nodeStack.push(root->right);
        if (root->left)
            nodeStack.push(root->left);
    }
}

void BreathFirstSearch(TreeNode *T){                //广度优先
    queue<TreeNode*> nodeQueue;
    nodeQueue.push(T);
    TreeNode *root;
    while (!nodeQueue.empty()) {
        root = nodeQueue.front();
        cout<<root->val<<", ";
        nodeQueue.pop();
        if (root->left)
            nodeQueue.push(root->left);
        
        if (root->right)
            nodeQueue.push(root->right);
    }
    
}

int MaxDepth(TreeNode *T){         //最大深度
    int depth = 0;
    if (T) {
        int Ldepth = MaxDepth(T->left);
        int Rdepth = MaxDepth(T->right);
        depth = Ldepth>=Rdepth?Ldepth+1:Rdepth+1;
    }
    return depth;
}


void PreOrderTraverse(TreeNode *T){   //前序
    if (T == NULL)
        return;
    
    cout<<T->val<<", ";
    PreOrderTraverse(T->left);
    PreOrderTraverse(T->right);
}

void InOrderTraverse(TreeNode *T){     //中序
    if (T == NULL)
        return;
    
    PreOrderTraverse(T->left);
    cout<<T->val<<", ";
    PreOrderTraverse(T->right);
}

void PostOrderTraverse(TreeNode *T){   //后序
    if (T == NULL)
        return;
    PreOrderTraverse(T->left);
    PreOrderTraverse(T->right);
    cout<<T->val<<", ";
}



