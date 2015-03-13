//
//  BinaryTree.h
//  Data_Structure
//
//  Created by GaoBrook on 15/3/10.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include <iostream>
#include <stack>
#include <queue>
using std::cin; using std::cout; using std::endl;
using std::stack; using std::queue;

struct TreeNode{
    char val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void CreateBiTree(TreeNode* &T);
void PreOrderTraverse(TreeNode *T);
void InOrderTraverse(TreeNode *T);
void PostOrderTraverse(TreeNode *T);

void DepthFirstSearch(TreeNode *T);
void BreathFirstSearch(TreeNode *T);
int MaxDepth(TreeNode *T);