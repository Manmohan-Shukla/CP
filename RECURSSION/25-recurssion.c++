# include<bits/stdc++.h>
using namespace std;
void parantheses(string s,int n,int open,int close){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) parantheses(s+'(',n,open+1,close);
    if(close<open) parantheses(s+')',n,open,close+1);
}

int main(){
int n=5;
string s="";
parantheses(s,n,0,0);
}