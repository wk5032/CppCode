//
//  BubbleSort.cpp
//  testxcodecpp
//
//  Created by weikai on 2023/5/1.
//

#include "BubbleSort.hpp"

/* 对顺序表L作交换排序 (冒泡排序初级版)*/
void BubbleSort0(SqList *L)
{
    int i,j;
    for(i=1;i<L->length;i++)
    {
        for(j=i+1;j<=L->length;j++)
        {
            if(L->r[i]>L->r[j])
            {
                swap(L,i,j); //交换L->r[i]与L->r[j]的值
            }
        }
    }
}

/* 对顺序表L作交换排序 */
void BubbleSort(SqList *L)
{
    int i,j;
    for(i=1;i<L->length;i++)
    {
        for(j=L->length-1;j>=i;j--)  //j是从后往前循环
        {
            if(L->r[j] > L->r[j+1]) //若前者大于后者
            {
                swap(L,j,j+1); //交换L->r[j]与L->r[j+1]的值
            }
        }
    }
}
/* 对顺序表L作交换排序 */
void BubbleSort2(SqList *L)
{
    int i,j;
    bool flag = true;   //flag用来作为标记
    for(i=1;i<L->length && flag;i++)  //若flag为True，则有数据交换，否则退出循环
    {
        flag = false;    //初始为False
        for(j=L->length-1;j>=i;j--)  //j是从后往前循环
        {
            if(L->r[j] > L->r[j+1]) //若前者大于后者
            {
                swap(L,j,j+1); //交换L->r[j]与L->r[j+1]的值
                flag = true;    //如果有数据交换，则flag为True
            }
        }
    }
}
