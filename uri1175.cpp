#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[20],j=19;
    for(int i=0;i<20;i++)
        cin>>a[i];
    for(int i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,a[j]);
        j--;
    }
    return 0;
}
