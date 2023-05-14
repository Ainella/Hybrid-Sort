#include "Hybridsort.h"
#include <iostream>
using namespace std;

int* local_merge(int *left,int *right,int left_size,int right_size)// merge sorted array
{
    int output_size=left_size+right_size;
    int *output = new int[output_size];
    int l=0;
    int r=0;
    for(int i=0; i<output_size; i++)
    {
        if(l==left_size)
        {
            output[i]=right[r];
            r++;
        }
        else if(r==right_size)
        {
            output[i]=left[l];
            l++;
        }
        else if(left[l]<=right[r])
        {
            output[i]=left[l];
            l++;
        }
        else
        {
            output[i]=right[r];
            r++;
        }
    }
    return output;
}

void local_insertionSort(int *arr, int n) {
    for (int i = 1 ; i < n ; i++) {
        int val = arr[i];
        int cur = i;
        while ( (cur > 0) && arr[cur - 1] > val ) {
            arr[cur] = arr[cur - 1];
            cur--;
        }
        arr[cur] = val;
    }
}

int* hybridsort(int *arr,int n)
{
    if(n<=10) // use insertionsort small size array
    {
        local_insertionSort(arr,n);
        return arr;
    }
    int mid=n/2;
    int* output1=hybridsort(arr,mid);
    int* output2=hybridsort(&arr[mid],n-mid);
    int* output=local_merge(output1,output2,mid,n-mid);
    if(output1!=arr)
        delete[] output1;

    if(output2!=&arr[mid])
        delete[] output2;
    return output;
}
