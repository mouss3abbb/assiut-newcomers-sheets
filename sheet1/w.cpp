#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    if(s == '+' ){
        if(a+b == c){
            cout<<"Yes\n";
        }
        else{
            cout<<a+b<<"\n";
        }
    }

    else if(s == '-' ){
        if(a-b == c){
            cout<<"Yes\n";
        }
        else{
            cout<<a-b<<"\n";
        }
    }
    else{
        if(a*b == c){
            cout<<"Yes\n";
        }
        else{
            cout<<a*b<<"\n";
        }
    }

}