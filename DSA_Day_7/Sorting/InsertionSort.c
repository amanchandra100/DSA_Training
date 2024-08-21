#include<stdio.h>

void insertionSort(int arr[],int count){

    for (int i = 0; i < count; i++)
    {
       int key=arr[i];
       int j=i-1;
       while (j>=0 && arr[j]>key)
       {
            arr[j+1]=arr[j];
            j=j-1;
       }
       arr[j+1]=key;
       
    }
}

void main(){
    int count;
    int arr[4]={200,3,40,10};
    count=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,count);
   

    for (int i = 0; i < count; i++)
    {
       printf("%d ",arr[i] );
    }
    
    
}