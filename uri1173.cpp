#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,N[10];
    cin>>n;
    N[0]=n;
    for(int i=1;i<10;i++)
    {
        N[i]=2*N[i-1];
    }
    for(int i=0;i<10;i++)
        printf("N[%d] = %d\n",i,N[i]);
    return 0;
}
