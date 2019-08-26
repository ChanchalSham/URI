#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,sum=0,count=0;
    cin>>a>>n;
    while(n<=a)
        cin>>n;
    for(int i=a;;i++)
    {
        sum+=i;
        count++;
        if(sum>n)
            break;
    }
    cout<<count<<endl;
    return 0;
}

