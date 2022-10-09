#include<bits/stdc++.h>
using namespace std;

int main(){

    // Note the number entered will always have 4 digits
    int x;
    cin>>x;

    // Integer division by 10 removes the last digit
    // Integer division by 100 removes the last 2 digits and so on
    int first_digit = x/1000;
    // The puts C function prints only string and adds new line at end
    puts(first_digit%2?"ODD":"EVEN");
    return 0;
}