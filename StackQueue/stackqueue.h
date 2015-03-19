//
//  stackqueue.h
//  Data_Structure
//
//  Created by GaoBrook on 15/3/18.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#ifndef __Data_Structure__stackqueue__
#define __Data_Structure__stackqueue__

#include "Header.h"
#define MAXSIZE 100

struct SqQueue{  //数组实习循环队列
    int data[MAXSIZE];
    int front;
    int rear;
};


void InitQueue(SqQueue *Q);
int QueueLength(SqQueue Q);
bool InQueue(SqQueue *Q, int e);
bool DeQueue(SqQueue *Q, int *e);



#endif /* defined(__Data_Structure__stackqueue__) */
