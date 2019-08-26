#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    int count=0;
    for (int i=0;i<5;i++)
    {
        cin>>a[i];
        if(a[i]%2==0||a[i]%(-2)==0)
        {
            count++;
        }
    }
    printf("%d valores pares\n",count);
    return 0;
}
