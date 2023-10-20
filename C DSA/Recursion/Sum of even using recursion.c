#include<stdio.h>
void sum(int a[],int num,int sum);
{
    if(num==0)
    {
        if((a[num]%2==0))
        {
            sum+=(a[num]);
        }
        sum(a,num-1,sum);
    }
    else
    {
        printf("Sum=%d",sum);
    }
}
main()
{
    int i,a[100],num,sum=0;
    printf("\nEnter the number of array elements:");
    scanf("%d",&num);
    printf("Enter array elements");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,num-1,sum);
}