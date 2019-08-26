#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,sum,i=0;
    cin>>n;
    while(i<n)
    {
     sum=0;
     cin>>num;
     for(int j=1;j<num;j++)
     {
        if(num%j==0)
            sum+=j;
     }
     if(sum==num)
        cout<<num<<" eh perfeito"<<endl;
     else
        cout<<num<<" nao eh perfeito"<<endl;
        i++;
    }
    return 0;
}
