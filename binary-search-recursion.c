#include<stdio.h>
int binary_search(int a[],int s,int low,int high)
{
    if(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==s)
            return mid;
        if(a[mid]>s)
            return binary_search(a,s,low,mid-1);
        else
            return binary_search(a,s,mid+1,high);
    }

    return -1;
}
int main(void)
{
    int a[]={2,1,4,3,5,7,6,9,10,8};
    int n=sizeof(a)/sizeof(a[0]);
    int s=4;
    int result=binary_search(a,s,0,n-1);

    if(result==-1)
    {
        printf("Result is not found");
    }
    else
        printf("Item is found at index %d \n",result);
    return 0;
}

