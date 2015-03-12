//
//  singleList.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/7.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include "SingleList.h"

void ClearList(ListNode *head){     //清空单链表
    ListNode *p, *q;
    p = head->next;
    while (p) {
        q = p;
        p = p->next;
        delete q;
    }
    head->next = NULL;
}

void CreateListReverse(ListNode *head, int n){  //倒叙插入
    head->next = NULL;
    for (int i = 0; i<n; i++) {
        ListNode *newNode = new ListNode(0);
        newNode->val = i;
        newNode->next = head->next;
        head->next = newNode;
    }
}

void CreateList(ListNode *head, int n){    //正序插入
    head->next = NULL;
    ListNode *end = head;
    for (int i=1; i<n; i++) {
        ListNode *newNode = new ListNode(0);
        newNode->val = i;
        end->next = newNode;
        end = newNode;
    }
    end->next = NULL;
}

