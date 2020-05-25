#include<iostream>
using namespace std;
int main()
{
    int i,temp1,temp2,sw=0,sf=0,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
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
    cout<<sw<<" "<<sf;
    return 0;
}
