# include <iostream>
using namespace std;

int pow(int x,int n){
    // if(n==0) return 1;
    if(n==1) return x;
    // return x* pow(x,n-1);
    int ans=pow(x,n/2);
    if(n%2==0) return ans*ans;
    if(n%2!=0) return ans*ans*x;
}

// T.C => O(log(n))
// S.C => O(log(n))
int main(){
 cout<<pow(3,6);
}