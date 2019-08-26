#include<bits/stdc++.h>
using namespace std;
int main()
{
    double N[12][12];
    char p;
    double sum = 0.0;

    cin >> p;

    for(int i = 0; i < 12; i++)
        {
            for(int j = 0; j < 12; j++)
            {
                   cin >> N[i][j];
            if(i < j && (j+i) > 11)
                {
                    sum += N[i][j];
                }
            }
   }

    if(p == 'S')
         printf("%.1lf\n", sum);
    else if(p == 'M')
         printf("%.1lf\n", sum/30.0);
    return 0;
}









