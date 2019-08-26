#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float a[3];
    float b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        b[i]=(a[0]*2+a[1]*3+a[2]*5)/10;
        a[0]=a[1]=a[2]=0;
    }
    for(int i=0;i<n;i++)
        printf("%.1f\n",b[i]);
    return 0;
}
