#include<bits/stdc++.h>
#define N 100000
using namespace std;
int main()
{
    int n,i=0,x,y;
    cin>>n;
    double arr[n];
    while(i<n)
    {
        cin>>x>>y;
        if(y==0)
            arr[i]=N;
        else
            arr[i]=(double)((double)x/(double)y);
       i++;
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]==N)
            cout<<"divisao impossivel"<<endl;
        else
            printf("%.1lf\n",arr[j]);
    }
    return 0;
}
