//
//  singleList.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/7.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include "singleList.h"

void ClearList(Node *head){     //清空单链表
    Node *p, *q;
    p = head->next;
    while (p) {
        q = p;
        p = p->next;
        delete q;
    }
    head->next = NULL;
}

void CreateListReverse(Node *head, int n){  //倒叙插入
    head->next = NULL;
    for (int i = 0; i<n; i++) {
        Node *newNode = new Node;
        newNode->data = i;
        newNode->next = head->next;
        head->next = newNode;
    }
}


void CreateList(Node *head, int n){    //正序插入
    head->next = NULL;
    Node *end = head;
    for (int i=1; i<n; i++) {
        Node *newNode = new Node;
        newNode->data = i;
        end->next = newNode;
        end = newNode;
    }
    end->next = NULL;
}


