//
//  main.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/7.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include <iostream>
#include "SingleList.h"
#include "BinaryTree.h"
using std::cin;using std::cout; using std::endl;

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



int main(int argc, const char * argv[]) {
    TreeNode *BiTree;
    CreateBiTree(BiTree);
    PreOrderTraverse(BiTree);
    
    return 0;
}