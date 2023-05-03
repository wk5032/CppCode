//
//  QuickSort.hpp
//  testxcodecpp
//
//  Created by weikai on 2023/5/1.
//

#ifndef QuickSort_hpp
#define QuickSort_hpp

#include <stdio.h>
#include <algorithm>
#include "CommonMethod.hpp"

int Partition(SqList *L, int low, int high);
void QSort(SqList *L, int low, int high);
void QuickSort(SqList *L);
void QuickSortWithCppLib(SqList *L);


#endif /* QuickSort_hpp */
