#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float a[12][12],sum=0.0;
    char ch;
    cin>>n>>ch;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
           {
               cin>>a[i][j];
               if(i==n)
               sum+=a[i][j];
           }
    }
    if(ch=='S')
        printf("%.1f\n",sum);
    else if(ch='M')
        printf("%.1f\n",sum/12);
    return 0;
}
