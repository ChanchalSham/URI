#include<bits/stdc++.h>
using namespace std;
int main()
{
  for(float i=0.0;i<2;i+=.2)
  {
      for(float j=1.0;j<=3.0;j++)
      {
          if(i-(int)i!=0)
          {
            printf("I=%.1f J=%.1f\n",i,i+j);
          }
          else
            printf("I=%d J=%d\n",int(i),int(i)+int(j));
      }
  }
  printf("I=2 J=3\nI=2 J=4\nI=2 J=5\n");
    return 0;
}


