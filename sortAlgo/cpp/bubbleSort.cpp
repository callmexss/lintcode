#include <vector>
#include <iostream>

#include "functools.h"

using namespace std;

void BubbleSort(vector<int> & A);

main(int argc, char const *argv[])
{
    /* code */
    vector<int> A {1, 7, 3, 2, 4};
    printVector(A);
    BubbleSort(A);
    printVector(A);
    return 0;
}

void BubbleSort(vector<int> & A)
{
    if (A.size() < 2)
    {
        return;
    }

    for (int i = 0; i < A.size(); i++)
    {
        bool flag = false;
        // 冒泡排序每次内循环一次都会确定一个元素的位置
        // 第 i 次循环时倒数 i+1个数已经有序
        for (int j = 0; j < A.size() - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
                flag = true;
            }
        }
        
        // 如果某次没有发生交换，则已经全部有序
        if (!flag)
         {
            break;
        }
    }
}