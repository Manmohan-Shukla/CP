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
    if(n>m){
        if(n>o){
            cout<<"n is gretaest"<<n;
        }
        else{
            cout<<"o is greatest"<<o;
        }
    }
    else{
       if(m>o){
            cout<<"m is gretaest"<<m;
        }
        else{
            cout<<"o is greatest"<<o;
        } 
    }
}