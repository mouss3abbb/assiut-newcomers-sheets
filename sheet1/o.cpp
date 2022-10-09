#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char c;
    cin>>a>>c>>b;
    // Note to add break after each case
    switch (c)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            break;
    }
    return 0;
}