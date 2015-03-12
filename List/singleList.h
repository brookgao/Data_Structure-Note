//
//  singleList.h
//  Data_Structure
//
//  Created by GaoBrook on 15/3/7.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include <iostream>

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void ClearList(ListNode *head);
void CreateListReverse(ListNode *head, int n);
void CreateList(ListNode *head, int n);


