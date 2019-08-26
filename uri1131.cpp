#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t,i=0,g=0,d=0,game=0,b=0;
    while(scanf("%d%d",&x,&y)==2)
    {
        game++;
        if(x>y)
            i++;
        else if(x<y)
            g++;
        else if(x==y)
            d++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        while(1)
                {
                    cin>>t;
                    if(t==2 || t==1)
                        break;
                }
         if(t==2)
            {
                cout<<game<<" grenais"<<endl;
                cout<<"Inter:"<<i<<endl;
                cout<<"Gremio:"<<g<<endl;
                cout<<"Empates:"<<d<<endl;
                if(i>g)
                    cout<<"Inter venceu mais"<<endl;
                else if(i<g)
                    cout<<"Gremio venceu mais"<<endl;
                else if(i==g)
                    cout<<"Não houve vencedor"<<endl;
                b=1;
            }
         if(b==1)
                break;
    }
    return 0;
}
