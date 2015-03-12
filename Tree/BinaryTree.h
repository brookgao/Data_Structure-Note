//
//  BinaryTree.h
//  Data_Structure
//
//  Created by GaoBrook on 15/3/10.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include <iostream>

struct TreeNode{
    char val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void CreateBiTree(TreeNode* &T);
void PreOrderTraverse(TreeNode *T);