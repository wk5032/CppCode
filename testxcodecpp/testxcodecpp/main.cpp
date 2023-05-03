//
//  main.cpp
//  testxcodecpp
//
//  Created by weikai on 2023/4/29.
//


#include "CommonMethod.hpp"
#include "BubbleSort.hpp"
#include "QuickSort.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...

    //SqList sqlList = {{0,9,1,5,8,3,7,4,6,2},MAXSIZE+1};
    SqList sqlList = {{0,2,1,3,4,5,6,7,8,9},MAXSIZE+1};
    PrintSqList(&sqlList);
    //BubbleSort0(&sqlList);
    //BubbleSort(&sqlList);
    //BubbleSort2(&sqlList);
    
    //QuickSort(&sqlList);
    QuickSortWithCppLib(&sqlList);
    PrintSqList(&sqlList);
    
    return 0;
    
}
