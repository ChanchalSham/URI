#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,m;
    cin>>x>>y;
    for(int i=1;i<=y;i+=x)
    {
        for(int j=0;j<x;j++)
            {
                if(i+j-1==y)
                    break;
                printf("%d ",i+j);
            }
        printf("\n");
    }
    return 0;
}
