#include<stdio.h>
void sort(int , int *);
void binarysearch(int ,int ,int * ,int);
main()
{
    int i,n,search;
    printtf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in the array\n");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    sort(n,&a[0])
    printf("Sorted array is \n");
    for(i=0;i<n;i++){printf("%d ",a[i]);}
    printf("\nEnter element to search: ");
    scanf("%d", &search) ;
    binarysearch(n, 1, &a[0], search);
}

void sort(int n, int *a)
{
    int i,j,temp;
    for (i = 0; i < n-1; i++)    
    {
        for (j=i+1; j <n; j++)   
        {
            if(a[i]>a[j]
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temmp;
            })
        }

    }
}


void binarysearch(int low, int high, int *a, int search)
{
    int mid;
    if(low>high)
    {
        printf("Search is not successful\n");
    }
    mid=(low+high)/2;
    if (a[mid]==search)
    {
        printf("Search successful");
    }
    else if(search<a[mid])
    {
        binarysearch(low,mid-1,a,search);
    }
    else{
        binarysearch(mid+1,high,a,search);}
    }
