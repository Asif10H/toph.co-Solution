

#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t, a, arr[10001];
   //vector<long long int>arr;
   cin>>t;
   for(int i = 1; i <= t; i++)
   {
       cin>>a;
       for(int m = 0; m < a; m++)
       {
           cin>>arr[m];
       }
       sort(arr, arr+a, greater<long long int>());
       cout<<arr[0]<<endl;
   }
}
