//
//  sort.cpp
//  Data_Structure
//
//  Created by GaoBrook on 15/3/18.
//  Copyright (c) 2015年 gao. All rights reserved.
//

#include "sort.h"

void swap(int a[], int i, int j){
    int tmp;
    tmp = a[i];
    a[i]=a[j];
    a[j]=tmp;
}

void BubbleSort(int a[], int n){   //冒泡排序
    for (int i = 0; i<n-1; i++) {
        for (int j = 0; j<n-i-1; j++) {
            if(a[j]>a[j+1]){
                swap(a, j, j+1);
            }
        }
    }
}

void QuickSort(int a[], int left, int right){   //快排
    if (left>right)
        return;
    int i = left, j = right;
    int mid = a[left];
    while (i!=j) {
        while (a[j]>=mid&&i<j)
            j--;
        while (a[i]<=mid&&i<j)
            i++;
        
        if (i<j)
            swap(a, i, j);
    }
    a[left] = a[i];
    a[i] = mid;
    QuickSort(a, left, i-1);
    QuickSort(a, i+1,right);
}

void SelectSort(int a[], int n){        //选择排序
    int i,j,min;
    for (i=0; i<n; i++) {
        min = i;                    //每次选择最小
        for (j=i+1; j<n; j++) {
            if (a[j]<a[min])
                min = j;
        }
        
        if(min != i)
            swap(a, i, min);
    }
}

void InsertSort(int a[], int n){   //直接插入排序
    int i,j;
    int tmp=0;      //比较值
    for (i=1; i<n; i++) {
        if (a[i]<a[i-1]) {
            tmp = a[i];
            for (j=i-1; a[j]>tmp&&j>=0;j--)
                a[j+1] = a[j];
            a[j+1] = tmp;
        }
    }
}

void ShellSort(int a[], int n){    //shell排序
    int i, j, tmp;
    int gap = n/2;
    while (gap>0) {
        for (i = gap; i<n; i++) {
            tmp = a[i];
            for (j=i; j>=gap&&tmp<a[j-gap]; j-=gap)
                a[j] = a[j-gap];
            a[j] = tmp;
        }
        gap /= 2;
    }
}



