#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    float m=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1f\n",m);
    if(m>=7.0)
        cout<<"Aluno aprovado."<<endl;
    if(m<5.0)
        cout<<"Aluno reprovado."<<endl;
    if(m>=5.0&&m<=6.9)
        {
            cout<<"Aluno em exame."<<endl;
          float m2;
          cin>>m2;
            printf("Nota do exame: %.1f\n",m2);
            if((m+m2)/2>=5.0)
                cout<<"Aluno aprovado."<<endl;
                if((m+m2)/2<=4.9)
                cout<<"Aluno reprovado."<<endl;
        printf("Media final: %.1f\n",(m+m2)/2);
        }
        return 0;
        }



