#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n=0,a[100000],b[100000];
    while(scanf("%d%d",&x,&y)==2)
    {
        if(x>y)
            swap(x,y);
        if(x<=0||y<=0)
                break;
            a[n]=x;
            b[n]=y;
        n++;
    }
    int i=0;
    while(i<n)
    {
        int sum=0;
        for(int j=a[i];j<=b[i];j++)
        {
            printf("%d ",j);
            sum+=j;
        }
        cout<<"Sum="<<sum<<endl;

    i++;
    }
    return 0;
}
