//
//  main.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/7.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include <iostream>
#include "singleList.h"
using std::cin;using std::cout; using std::endl;





int main(int argc, const char * argv[]) {
    
    Node *head;             //创建头指针
    head = new Node;        //创建头结点
    
    CreateListReverse(head, 10);
    Node *p = head->next;
    
    while (p) {
        cout<<p->data<<", ";
        p = p->next;
    }
    return 0;
     
}