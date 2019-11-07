
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t, a, b, sum;
   cin>>t;
   for(int i = 1; i <= t; i++)
   {
       cin>>a>>b;
       sum = 0;
       for(int m = 1; m <= b; m++)
       {
           sum += a;
       }
       cout<<sum<<endl;
   }
}
