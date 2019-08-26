#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],max=0,pos=0;
    for(int i=0;i<100;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    for(int i=0;i<100;i++)
    {
        if(a[i]==max)
        pos=i+1;
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}
