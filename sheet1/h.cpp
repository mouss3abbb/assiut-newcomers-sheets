#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    // Integer division is the same as floor
    cout<<"floor "<<a<<" / "<<b<<" = "<<a/b<<"\n";
    // Ceil equals floor + 1 if there's a remainder, otherwise equals floor
    cout<<"ceil "<<a<<" / "<<b<<" = "<<a/b+bool(a%b)<<"\n";
    // Note that 
    double fraction = a*1.0/b - a/b;
    cout<<"round "<<a<<" / "<<b<<" = "<<a/b + (fraction >= 0.5)<<"\n";
    return 0;
}