
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n, flag = 0;
   cin>>n;
   for(int i = 2; i <= n; i++)
   {
       if(n % i == 0)
       {
           flag++;

       }
   }
   if(flag == 1)
   {
      cout<<"NO PUNISHMENT"<<endl;
   }
   else
   {
      for(int k = 1; k <= n; k++)
      {
          cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
      }
   }
}
