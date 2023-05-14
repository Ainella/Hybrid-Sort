#include <iostream>
#include "InsertionSort_Lib.h"
using namespace std;

/*
void insertionSort(int *arr, int n)
{
    for (int m = n; m > 0; m--)
    {
        int largest = 0;
        for(int i=0; i < m; i++)
        {
            if(arr[i]>arr[largest])
                largest=i;
        }
        if(largest!=m-1)
            swap(arr[largest],arr[m-1]);
    }
}
*/
void insertionSort(int* arr,int n)
{
    int count=0;
    for(int i=1; i<n; i++)
    {
        for(int j=i; j>0 && arr[j-1]>arr[j]; j--)
        {
            count++;
            int tmp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=tmp;
        }
    }
}



