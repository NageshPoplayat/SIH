#include<stdio.h>
int arrsum(int a[])
{
    int length = a.length(),sum=0;
    for(int i=0;i<length;i++)
    {
        sum= sum+a[i];
    } 
    return sum;
}

int main()
{
    int arr[]={10,20,30};
    int sum=arrsum(arr);
    printf("%d",sum);
    return 0;
}