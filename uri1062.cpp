#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[6],sum=0;
    int count=0;
    for (int i=0;i<6;i++)
    {
        cin>>a[i];
        if(a[i]>0.0)
        {
            count++;
            sum+=a[i];
        }
    }
    printf("%d valores positivos\n%.1f\n",count,(sum/count));
    return 0;
}
