#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int n1=a[0],n2=a[1],n3=a[2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
    }
    printf("%d\n%d\n%d\n",a[0],a[1],a[2]);
    printf("\n%d\n%d\n%d\n",n1,n2,n3);
    return 0;
}
