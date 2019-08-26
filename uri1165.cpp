#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,num,sum,i=0,j;
    cin>>n;
    while(i<n)
    {
     sum=0;
     cin>>num;
     for(j=2;j<=num;j++)
     {
        if(num%j==0)
            break;
     }
     if(j==num)
        cout<<num<<" eh primo"<<endl;
     else
        cout<<num<<" nao eh primo"<<endl;
        i++;
    }
return 0;
}
