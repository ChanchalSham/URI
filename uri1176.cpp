#include<bits/stdc++.h>
using namespace std;
long long int fib(long long int n)
{
    if (n==0)
        return 0;
    else if(n==1)
        return 1;
    else
    {
         long long int a=0,b=1,sum;
         for(int i=2;i<=n;i++)
         {
             sum=a+b;
             a=b;
             b=sum;
         }
         return sum;
    }
}
int main()
{
    int m,i=0;
    cin>>m;
    while(i<m)
    {
        long long int n;
        cin>>n;
        printf("Fib(%lld) = %lld\n",n,fib(n));
        i++;
    }
    return 0;
}
