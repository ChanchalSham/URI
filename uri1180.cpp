#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min=0,pos=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,pos);
    return 0;
}
