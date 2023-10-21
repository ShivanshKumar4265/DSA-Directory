#include<stdio.h>
void bubble(int a[],int num)
main()
{
    int i,j,num,temp;
    printf("Enter number of elements");
    scanf("%d",&num);
    int a[num];
    printf("\n Enter the array element\n");
    for (i=0;i<=num-1;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,num);
    printf("Ascending order of given numbers");
    for(i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
}


void bubble(int a[],int num)
{
    int i,j,temp;
    i=num;
    if(i<0)
    {
        for(j=0;j<num+1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        bubble(a,num-1);
    }
    else{
        return 0;
    }
}