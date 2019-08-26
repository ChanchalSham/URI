#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    long int pa,pb;
    double ga,gb;
    cin>>t;
    while(i<t)
    {
     cin>>pa>>pb>>ga>>gb;
     int year=0;
     while(pa<=pb)
     {
      pa=pa+(double)((double)pa*ga)/100;
      pb=pb+(double)((double)pb*gb)/100;
      year++;
      if(year>100)
        break;
     }
     if(year<=100)
        cout<<year<<" anos."<<endl;
     else if(year>100)
        cout<<"Mais de 1 seculo."<<endl;
     i++;
    }
    return 0;
}
