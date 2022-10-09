#include<bits/stdc++.h>
using namespace std;

int main(){

    // First solution using C++ and <iomanip>
    const double PI = 3.141592653;
    double r;
    cin>>r;
    cout<<fixed<<setprecision(9);
    cout<<PI*r*r;

    // Second solution using C functions
    scanf("%lf",&r);
    printf("%.9lf",r*r*PI);
    
    return 0;
}