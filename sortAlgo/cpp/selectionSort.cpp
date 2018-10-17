#include <vector>
#include <iostream>

#include "functools.h"

using namespace std;

void SelectionSort(vector<int>& A);

main(int argc, char const *argv[])
{
    /* code */
    vector<int> A {1, 7, 3, 2, 4};
    printVector(A);
    SelectionSort(A);
    printVector(A);
    return 0;
}

void SelectionSort(vector<int>& A)
{
    if (A.size() < 2) return;

    for(int i = 0; i < A.size(); i++)
    {
        int minIndex = i;
        int minValue = A[i];
        int j = i;
        for (; j < A.size(); j++)
        {
            if (A[j] < minValue)
            {
                minIndex = j;
                minValue = A[j];
            }
        }
        // 交换A[i]和A[minIndex]的值
        A[minIndex] = A[i]; 
        A[i] = minValue;
    }
}