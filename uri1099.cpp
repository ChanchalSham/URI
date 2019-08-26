#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,sum;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++)
   {
       sum=0;
       scanf("%d%d",&x,&y);
       if(x>y)
        swap(x,y);
       for(int j=x+1;j<y;j++)
       {
           if(j%2!=0)
            sum+=j;
       }
       arr[i]=sum;
   }
   for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
}
