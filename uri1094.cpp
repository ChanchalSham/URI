#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ctotal=0,rtotal=0,stotal=0,total=0,in;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     cin>>in>>ch;
     total+=in;
     if(ch=='C')
        ctotal+=in;
     else if(ch=='R')
        rtotal+=in;
     else if(ch=='S')
        stotal+=in;
     in=0;
     ch=' ';
    }
    float cper=((float)ctotal/(float)total)*100;
    float rper=((float)rtotal/(float)total)*100;
    float sper=((float)stotal/(float)total)*100;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",ctotal);
    printf("Total de ratos: %d\n",rtotal);
    printf("Total de sapos: %d\n",stotal);
    printf("Percentual de coelhos: %.2f ",cper);
    cout<<"%"<<endl;
    printf("Percentual de ratos: %.2f ",rper);
    cout<<"%"<<endl;
    printf("Percentual de sapos: %.2f ",sper);
    cout<<"%"<<endl;
    return 0;
}
