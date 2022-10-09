#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    // To avoid overflow we take log for both sides
    // log(a^b) > log(c^d) and then we put the power before the log
    // b*log(a) > d*log(c)
    if(b*log(a) > d*log(c))
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}