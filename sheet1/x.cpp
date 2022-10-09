#include <bits/stdc++.h>
using namespace std;


int main()
{
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    int start = max(l1,l2);
    int end = min(r1,r2);
    if(end < start)
        cout<<-1;
    else
        cout<<start<<" "<<end;
    return 0;
}