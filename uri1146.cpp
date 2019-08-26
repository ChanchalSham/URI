#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(scanf("%d",&x)==1)
    {
        if(x==0)
            break;
        else
        {
            for(int i=1;i<x;i++)
                cout<<i<<" ";
        }
        cout<<x<<endl;
    }
    return 0;
}
