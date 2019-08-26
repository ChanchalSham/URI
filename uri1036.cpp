#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,r1,r2;
    cin>>a>>b>>c;
    if(a==0||(b*b-4*a*c)<0)
    cout<<"Impossivel calcular"<<endl;
    else
        {
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("R1 = %.5f\n",r1);
    printf("R2 = %.5f\n",r2);
        }
        return 0;
}
