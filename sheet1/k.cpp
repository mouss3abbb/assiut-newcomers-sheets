#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int min_number = a;
    if(min_number > b)
        min_number = b;
    if(min_number > c)
        min_number = c;
    int max_number = a;
    if(max_number < b)
        max_number = b;
    if(max_number < c)
        max_number = c;
    cout<<min_number<<" "<<max_number;
    return 0;
}