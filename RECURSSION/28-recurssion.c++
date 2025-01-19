# include <bits/stdc++.h>
using namespace std;

bool ispower2(int n){
    if(n==1 ) return true;
    if(n%2 !=0) return false;
    ispower2(n/2);
}

int main(){

 if(ispower2(90)) cout<<"yes"<<" ";
 else cout<<"no";
}