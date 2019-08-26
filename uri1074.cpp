#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
    if(a[i]==0)
        printf("NULL\n");
    else if(a[i]>0)
    {
     if(a[i]%2==0)
            printf("EVEN POSITIVE\n");
     else
        printf("ODD POSITIVE\n");
    }

     else if(a[i]<0)
    {
     if(a[i]%-2==0)
            printf("EVEN NEGATIVE\n");
     else
        printf("ODD NEGATIVE\n");
    }
    }
    return 0;
}




