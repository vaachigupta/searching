#include<stdio.h>
int binarysearch(int arr[], int x, int high, int low){
    int mid=low+(high-low)/2;
    while(low<=high){

        if (arr[mid]==x)
        return mid;

        else if (arr[mid]>x)
        mid=mid-1;

        else if (arr[mid]<x)
        mid=mid+1;
        }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int x;
    //printf("Enter a number to search: ");
    //scanf("%d", &x);
    x=40;
    int result = binarysearch(arr,x,6,0);
    if (result==-1)
    printf("number not found");
    else
    printf("Number found at index %d", result);
    return 0;
}