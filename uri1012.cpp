#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C;
    cin>>A>>B>>C;
    double tri=.5*A*C;
    double cir=3.14159*C*C;
    double trap=.5*(A+B)*C;
    double sq=B*B;
    double rect=A*B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",trap);
    printf("QUADRADO: %.3lf\n",sq);
    printf("RETANGULO: %.3lf\n",rect);
    return 0;
}
