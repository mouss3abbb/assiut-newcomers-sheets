#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin>>age;

    int years = age/365;
    int months = (age%365)/30;
    int days = (age%365)%30;
    cout<<years<<" years\n";
    cout<<months<<" months\n";
    cout<<days<<" days\n";
    return 0;
}