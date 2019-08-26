#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a[100000],n=0;
    while(scanf("%d%d",&x,&y)==2)
    {
        if(x>y)
            a[n]=1;
        else if(x<y)
            a[n]=0;
        else if(x==y)
            break;
    n++;
    }
    int i=0;
    while(i<n)
    {
        if(a[i]==1)
            cout<<"Decrescente"<<endl;
        else if(a[i]==0)
            cout<<"Crescente"<<endl;
        i++;
    }
    return 0;
}
