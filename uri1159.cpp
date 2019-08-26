#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        else
            { int i=0,sum=0;
                while(1)
                {
                    if(n%2==0)
                    {
                        sum+=n;
                        i++;
                    }
                    if(i==5)
                        break;
                    n++;
                }
                cout<<sum<<endl;
            }
    }
    return 0;
}
