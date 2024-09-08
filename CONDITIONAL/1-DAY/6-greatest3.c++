# include<iostream>
using namespace std;
int main(){
    int n,m,o;
     cout<<"enter a number";
    cin>>n;
     cout<<"enter a number";
    cin>>m;
     cout<<"enter a number";
    cin>>o;
    if(n>m&&n>o){
        cout<<"n is greatest"<<n;
    }
    if(o>m&&n<o){
        cout<<"o is greatest"<<o;
    }
    if(m>n&&m>o){
        cout<<"m is greatest"<<m;
    }
}