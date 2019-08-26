#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,hd,m1,m2,md;
    cin>>h1>>m1>>h2>>m2;
    hd=h2-h1;
    if (hd < 0)

    {

         hd= 24 + (h2 - h1);

    }

    md = m2 - m1;

    if (md < 0)

    {

        md = 60 + (m2 - m1);

        hd--;

    }

    if (h2 == h1 && m2 == m1)

    {

        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);

    return 0;
}
