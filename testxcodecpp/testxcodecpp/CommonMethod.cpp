//
//  CommonMethod.cpp
//  testxcodecpp
//
//  Created by weikai on 2023/5/1.
//

#include "CommonMethod.hpp"


/* 交换L中数组r的下标为i和j的值 */
void swap(SqList *L, int i, int j)
{
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}

void PrintSqList(SqList *L)
{
    int i;
    for(i=1;i<L->length;i++)
    {
        printf("%d,", L->r[i]);
    }
    printf("\n");
}
