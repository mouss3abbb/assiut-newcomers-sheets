#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin>>c;
    // When adding integer to char the result is integer, so you need to cast it to char again
    cout<<((c <= 'Z')?char(c+32):char(c-32));
    return 0;
}