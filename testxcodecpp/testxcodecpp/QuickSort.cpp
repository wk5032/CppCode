//
//  QuickSort.cpp
//  testxcodecpp
//
//  Created by weikai on 2023/5/1.
//

#include "QuickSort.hpp"

int Partition(SqList *L, int low, int high)
{
    int pivotkey;
    
    pivotkey = L->r[low];
    while (low < high) {
        while (low < high && L->r[high] >= pivotkey) {
            high--;
        }
        swap(L, low, high);
        while (low < high && L->r[low] <= pivotkey) {
            low++;
        }
        swap(L, low, high);
    }
    return low;
}

void QSort(SqList *L, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot = Partition(L, low, high);
        QSort(L, low, pivot - 1);
        QSort(L, pivot + 1, high);
    }
}

void QuickSort(SqList *L)
{
    QSort(L, 1, L->length);
}

void QuickSortWithCppLib(SqList *L)
{
    std::sort(L->r, L->r + L->length);
}
