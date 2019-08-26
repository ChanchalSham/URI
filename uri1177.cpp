#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(i<1000)
    {
        for(int j=0;j<t;j++)
        {
            if(i==1000)
                break;
            printf("N[%d] = %d\n",i,j);
            i++;
        }
    }
    return 0;
}
