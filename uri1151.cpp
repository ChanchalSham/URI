#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=1,m;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-3;i++)
    {
        cout<<a+b<<" ";
        m=a;
        a=b;
        b=m+b;
    }
    cout<<a+b<<endl;
    return 0;
}
