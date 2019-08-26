#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    int ceven=0,cpositive=0,cnegetive=0;
    for (int i=0;i<5;i++)
    {
        cin>>a[i];
        if(a[i]%2==0||a[i]%(-2)==0)
        {
            ceven++;
        }
        if(a[i]>0)
            cpositive++;
        if(a[i]<0)
            cnegetive++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",ceven,(5-ceven),cpositive,cnegetive);
    return 0;
}

