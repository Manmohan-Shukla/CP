# include<bits/stdc++.h>
using namespace std;
void printdec(int n,int i){
    if(i>n) return ;
    cout<<i<<" ";
    printdec(n,i+1);
    if(i>1) cout<<i-1<<" ";
}

int main(){
int n=4;
printdec(n,1);
}