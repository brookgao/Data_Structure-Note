//
//  main.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/7.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include "Header.h"
#include "SingleList.h"
#include "BinaryTree.h"
#include "Heap.h"

int main(int argc, const char * argv[]) {
    MyHeap Heap;
    Heap.creatHeap();
    Heap.print();
    cout<<endl;
    Heap.heapsort();
    Heap.print();
    return 0;
}