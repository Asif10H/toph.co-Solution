
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    double a, b, c, s, area;
    cin>>T;
    for(int i = 1; i <= T; i++)
    {
        cin>>a>>b>>c;
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));

        if(a+b >= c && b+c >= a && c+a >= b)
        {
            printf("%.2f\n", area);
        }
        else
        {
           cout<<"Oh, No!"<<endl;
        }

    }
}
