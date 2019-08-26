#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,x,y;
    cin>>n;
    while(i<n)
    {
        int j=0,sum=0;
        cin>>x>>y;
        while(j<y)
        {
            if(x%2!=0)
            {
                sum+=x;
                j++;
            }
            x++;
        }
        cout<<sum<<endl;
        i++;
    }
    return 0;
}
