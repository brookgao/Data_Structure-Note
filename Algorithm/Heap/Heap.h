//
//  Heap.h
//  Data_Structure
//
//  Created by GaoBrook on 15/3/14.
//  Copyright (c) 2015年 gao. All rights reserved.
//


#include "Header.h"

class MyHeap{
public:
    MyHeap() = default;
    MyHeap(vector<int> h, int n):heap(h),num(n){}
    void creatHeap();
    void add_item(int item);
    int deletetop();
    void heapsort();
    void print() const{
        for(auto i =heap.begin()+1;i!=heap.end();i++)
            cout<<*i<<", ";
    }
    
private:
    vector<int> heap;
    int num=0;
    void swap(int x, int y);
    void siftup(int i);
    void siftdown(int i);
};

void MyHeap::creatHeap(){
    int input = 0;
    heap.push_back(0);
    while (cin>>input) {
        heap.push_back(input);
        num++;
    }
    cout<<"num="<<num<<endl;
    for (int i=num/2; i>=1; i--)
        siftdown(i);

}

void MyHeap::swap(int x, int y){
    int t;
    t = heap[x];
    heap[x] = heap[y];
    heap[y] = t;
}

void MyHeap::siftup(int i){
    int flag = 0;
    if (i == 1)
        return;

    while (flag==0&&i!=1) {
        if(heap[i]<heap[i/2])
            swap(i, i/2);
        else
            flag = 1;
        i = i/2;
    }
}

void MyHeap::siftdown(int i){
    int t=i;
    int flag=0;
    
    while (i*2<=num&&flag==0) {  //判断有无左子树
        if(heap[i]>heap[i*2])
            t = 2*i;
        if(i*2+1<=num){     //判断有无右子树
            if(heap[t]>heap[2*i+1])
                t = 2*i+1;
        }
        if (t != i){
            swap(i, t);
            i = t;
        }else{
            flag = 1;
        }
    }
}

void MyHeap::heapsort(){
    while (num>1) {
        swap(1, num);
        num--;
        siftdown(1);
    }
}

int MyHeap::deletetop(){
    int t;
    t = heap[1];
    heap[1] = heap[num];
    heap.erase(heap.begin()+num);
    num--;
    siftdown(1);
    return t;
}