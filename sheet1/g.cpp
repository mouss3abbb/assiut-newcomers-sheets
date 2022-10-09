#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    // Note to explicitly cast to long long to avoid integer overflow
    long long sum = (long long)n*(n+1)/2;
    cout<<sum;

    // The main formula for summation from n to m is 
    // (first term + second term)*(number of terms)/2
    // (n + m)*(n - m + 1)/2
    return 0;
}