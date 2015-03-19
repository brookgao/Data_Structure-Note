//
//  stackqueue.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/18.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include "stackqueue.h"

void InitQueue(SqQueue *Q){
    Q->front = 0;
    Q->rear = 0;
}


int QueueLength(SqQueue Q){
    return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}

bool InQueue(SqQueue *Q, int e){
    if((Q->rear+1)%MAXSIZE==Q->front)
        return false;
    
    Q->data[Q->rear] = e;
    Q->rear = (Q->rear+1)%MAXSIZE;
    return true;
}

bool DeQueue(SqQueue *Q, int *e){
    if (Q->front == Q->rear)
        return false;
    *e = Q->data[Q->front];   //可有可无，返回删除的值
    Q->front = (Q->front+1)%MAXSIZE;
    
    return true;
}