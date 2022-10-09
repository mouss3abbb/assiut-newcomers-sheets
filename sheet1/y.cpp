#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // Note that
    // (a*b)%n = (a%n * b%n)%n
    // This applies for + and - too but not /
    // Remember a%100 returns a number less than 100 so there's no overflow
    int result = ((a%100)*(b%100)*(c%100)*(d%100))%100;
    if(result < 10)
        cout<<0;
    cout<<result;
    return 0;
}