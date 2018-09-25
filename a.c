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
    int arr[]={10,20,30,40};
    sum=0;
    int sum=arrsum(arr);
    printf("Sum is : %d",sum);
    printf("Sum is : %d",sum);
    return 0;
}