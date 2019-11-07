
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    vector<int> arr2;
    for(int i = 0; i < n; i++)
    {
        cin>>arr1[i];
        arr2.push_back(arr1[i]);
    }
    sort(arr2.begin(), arr2.end());
    int count = 0;

    for(int j = 0; j < n; j++)
    {
        if(arr2[j] == arr1[j])
        {
            count++;
        }
    }
    if(count == n)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
