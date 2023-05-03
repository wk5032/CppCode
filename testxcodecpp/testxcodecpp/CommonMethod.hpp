//
//  CommonMethod.hpp
//  testxcodecpp
//
//  Created by weikai on 2023/5/1.
//

#ifndef CommonMethod_hpp
#define CommonMethod_hpp

#include <stdio.h>

#define MAXSIZE 9  //用于要排序数组个数最大值，可根据需要修改
typedef struct
{
    int r[MAXSIZE+1]; //用于存储要排序数组，r[0]用作哨兵或临时变量
    int length;       /* 用于记录顺序表的长度 */
}SqList;

/* 交换L中数组r的下标为i和j的值 */
void swap(SqList *L, int i, int j);
void PrintSqList(SqList *L);

#endif /* CommonMethod_hpp */
