#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,temp1,temp2;
    int sw=0,sf=0;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp1=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<temp1)
        {
            sf=sf+1;
            temp1=a[i];
        }
    }
    temp2=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>temp2)
        {
            sw=sw+1;
            temp2=a[i];
        }
    }
printf("%d %d",sw,sf);
}
