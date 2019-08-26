#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,in=0,out=0;
    cin>>n1;
    int a[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
        if(a[i]>=10&&a[i]<=20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}


