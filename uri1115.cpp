#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a[100000],n=0;
    while(scanf("%d%d",&x,&y)==2)
    {
        if(x>0&&y>0)
            a[n]=1;
        else if(x<0&&y>0)
            a[n]=2;
        else if(x<0&&y<0)
            a[n]=3;
        else if(x>0&&y<0)
            a[n]=4;
        else if(x==0||y==0)
            break;
    n++;
    }
    int i=0;
    while(i<=n)
    {
        if(a[i]==1)
            cout<<"primeiro"<<endl;
        else if(a[i]==2)
            cout<<"segundo"<<endl;
        else if(a[i]==3)
            cout<<"terceiro"<<endl;
        else if(a[i]==4)
            cout<<"quarto"<<endl;
        i++;
    }
    return 0;
}

