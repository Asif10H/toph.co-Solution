
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, result = 0;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        result += pow(i, 2);
    }
    cout<<result<<endl;

}
