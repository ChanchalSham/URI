#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sd,sh,sm,ss,ed,eh,em,es,rd=0,rh=0,rm=0,rs=0;
    scanf("%*s%d",&sd);
    scanf("%d%*s%d%*s%d",&sh,&sm,&ss);
    scanf("%*s%d",&ed);
    scanf("%d%*s%d%*s%d",&eh,&em,&es);
    if(es>=ss)
        rs=es-ss;
    else
    {
        rs=60+es-ss;
        rm--;
    }
    if(em>=sm)
        rm+=em-sm;
    else
    {
        rm+=(60+em-sm);
        rh--;
    }
    if(eh>=sh)
        rh+=eh-sh;
    else
    {
        rh+=(24+eh-sh);
        rd--;
    }
    rd+=ed-sd;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",rd,rh,rm,rs);
    return 0;
}
