#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        printf("%d %d %d\n%d %d %d\n",i,i*i,i*i*i,i,i*i+1,i*i*i+1);
    }
    return 0;
}


