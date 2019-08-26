#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    double x,sum=0;
    while(1)
    {
        scanf("%lf",&x);
        if(x<0||x>10)
            cout<<"nota invalida"<<endl;
        else
            {
                count++;
                sum+=x;
            }
        if(count==2)
            {
                count=0;
                printf("media = %.2lf\n",double((double)sum/2));
                sum=0;
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                while(scanf("%d",&t)==1)
                {
                    if(t==2 ||t==1)
                        break;
                    else
                        cout<<"novo calculo (1-sim 2-nao)"<<endl;
                }
            }
        if(t==2)
                break;
    }
    return 0;
}
