#include<bits/stdc++.h>
using namespace std;
int main()
{
    float Salary;
    cin>>Salary;
    if((Salary>=0)&&(Salary<=400.00))
    {
        printf("Novo salario: %.2f\n",Salary+Salary*.15);
        printf("Reajuste ganho: %.2f\n",Salary*.15);
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if((Salary>=400.01)&&(Salary<=800.00))
    {
        printf("Novo salario: %.2f\n",Salary+Salary*.12);
        printf("Reajuste ganho: %.2f\n",Salary*.12);
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if((Salary>=800.01)&&(Salary<=1200.00))
    {
        printf("Novo salario: %.2f\n",Salary+Salary*.1);
        printf("Reajuste ganho: %.2f\n",Salary*.1);
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if((Salary>=1200.01)&&(Salary<=2000.00))
    {
        printf("Novo salario: %.2f\n",Salary+Salary*.07);
        printf("Reajuste ganho: %.2f\n",Salary*.07);
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(Salary>2000.00)
    {
        printf("Novo salario: %.2f\n",Salary+Salary*.04);
        printf("Reajuste ganho: %.2f\n",Salary*.04);
        cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;
}
