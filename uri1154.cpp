#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,count=1;
    cin>>n;
    sum=n;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
            break;
        sum+=n;
        count++;
    }
    printf("%.2f\n",(float)sum/count);
    return 0;
}
