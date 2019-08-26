#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    float sum=0;
    for(int i=1;i<=39;i+=2)
    {
        sum+=(float)i/pow(2,n);
        n++;
    }
    printf("%.2f\n",sum);
    return 0;
}
