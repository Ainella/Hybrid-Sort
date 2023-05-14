#include "Heapsort_Lib.h"
#include <iostream>
using namespace std;

void heap(int *arr,int k)
{
    if(k==0)
        return;
    int p=(k-1)/2;
    if(arr[p]<arr[k])
    {
        swap(arr[p],arr[k]);
        heap(arr,p);
    }
}

void fix(int *arr,int n,int p)
{
    int l=2*p+2;
    int k=2*p+1;
    int largest;
    if(l < n && k < n) // 2 child
    {
        if (arr[k]>arr[l]) // select largest
            largest=k;
        else
            largest=l;
    }
    else if (k < n) // 1 child
    {
        largest=k;
    }
    else // no child
        return;

    if(arr[p]<arr[largest]) // need fix if parent smaller than child
    {
        swap(arr[p],arr[largest]);
        fix(arr,n,largest);
    }
}

void heapSort(int *arr, int n)
{
    for (int i = 0; i<n; i++)
        heap(arr,i);

    for(int last=n-1; last>0; last--)
    {
        swap(arr[0],arr[last]);
        fix(arr, last, 0);
    }
}


