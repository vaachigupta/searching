#include <stdio.h>
int main(){
    int num[]={34,3,45,7,87,23,90,67,12,37};
    int n,i;
    printf("Enter a number to search: ");
    scanf("%d", &n);
    for(i=0;i<=9;i++)
    {
        if(num[i]==n)
        printf("\nNumber found at index %d", i);
    }
    return 0;
}