#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tn=0,count=0;
    float num,sum=0;
    while(1)
    {
        if(count==2)
            break;
        cin>>num;
        if(num>=0.0 && num<=10.0)
        {
            count++;
            sum+=num;
        }
        else
            tn++;
    }
    for(int i=0;i<tn;i++)
        cout<<"nota invalida"<<endl;

    printf("media = %.2f\n",(float)((float)sum/2));
    return 0;
}
