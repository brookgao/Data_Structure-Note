//
//  BinaryTree.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/10.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include "BinaryTree.h"

using std::cin; using std::cout; using std::endl;
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

void 

