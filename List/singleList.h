//
//  singleList.h
//  Data_Structure
//
//  Created by GaoBrook on 15/3/7.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include <stdio.h>
struct Node{
    int data;
    Node *next;
};

void ClearList(Node *head);
void CreateListReverse(Node *head, int n);
void CreateList(Node *head, int n);


