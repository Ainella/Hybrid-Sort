#include "Mergesort_Lib.h"
#include <iostream>
using namespace std;

int* merge(int *left,int *right,int left_size,int right_size)
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

int* mergesort(int *arr,int n)
{
    if(n==1)
    {
        int *output = new int[1];
        output[0]=arr[0];
        return output;
    }
    int mid=n/2;
    int* output1=mergesort(arr,mid);
    int* output2=mergesort(&arr[mid],n-mid);
    int* output=merge(output1,output2,mid,n-mid);
    delete[] output1;
    delete[] output2;
    return output;
}

