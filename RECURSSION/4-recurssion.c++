# include <iostream>
using namespace std;

void sum(int k,int n){
if(n==0){
    cout<<k<<endl;
    return;
}
sum(k+n,n-1);
}


int sum2(int n){
    if(n==0) return 0;
    return n+sum2(n-1);
}

int main(){
// sum(0,10); 
cout<<sum2(20); 
}