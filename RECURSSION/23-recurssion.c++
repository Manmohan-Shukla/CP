# include<iostream>
using namespace std;

void generater(string s,int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    generater(s+'0',n-1);
    if(s=="" || s[s.length()-1]=='0') generater(s+'1',n-1);
}

int main(){
int n=5;
string s="";
generater(s,n);
}
