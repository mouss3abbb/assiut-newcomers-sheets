#include<bits/stdc++.h>
using namespace std;

int main(){
    double x;
    cin>>x;
    double fraction = x - int(x);
    if(fraction)
        cout<<"float "<<int(x)<<" "<<fraction;
    else
        cout<<"int "<<x;
    return 0;
}