#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    
    string n;
    cin>>n;
    int sum=0;
    int x = n.size();
    for(int i=0;i<x;i++){
        sum+=n[i]-'0';
    }
    
    for(int i=1;i<=sum;i++){
          if(i%4==0 && i%5==0){
              cout<<"FizzBuzz"<<" ";
          }
          else if(i%4==0) cout<<"Fizz"<<" ";
          else if(i%5==0) cout<<"Buzz"<<" ";
          else{
              cout<<i<<" ";
          }
    }
    return 0;
}