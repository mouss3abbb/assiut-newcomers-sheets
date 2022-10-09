#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin>>c;

    // Char compare is allowed
    if(c <= '9')
        cout<<"IS DIGIT";
    else{
        cout<<"ALPHA\n";
        cout<<((c <= 'Z')?"IS CAPITAL":"IS SMALL");
    }
        
    return 0;
}