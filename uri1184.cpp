#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    float a[12][12],sum=0.0;
    char ch;
    cin>>ch;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
           {
               cin>>a[i][j];
               if(i>j)
               {
                   sum+=a[i][j];
                   count++;
               }
           }
    }
    if(ch=='S')
        printf("%.1f\n",sum);
    else if(ch='M')
        printf("%.1f\n",sum/count);
    return 0;
}



