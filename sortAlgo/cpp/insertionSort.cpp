#include <vector>
#include <iostream>

#include "functools.h"

using namespace std;

void InsertionSort(vector<int>& A);

main(int argc, char const *argv[])
{
    /* code */
    vector<int> A {1, 7, 3, 2, 4};
    printVector(A);
    InsertionSort(A);
    printVector(A);
    return 0;
}

void InsertionSort(vector<int>& A)
{
    if (A.size() < 2) return;
    
    for(int i = 1; i < A.size(); i++)
    {
        // 初始状态认为前i个元素有序
        int value = A[i];
        int j = i - 1;
        // 查找插入位置
        for (; j >= 0; j--)
        {
            // 如果当前值比要插入的值大，整体右移
            if (A[j] > value)
            {
                A[j + 1] = A[j];   
            }
            else
            {
                break;
            }
        }
        // 将value插入A[j+1]所在位置
        A[j + 1] = value;
    }
}