# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n%15==0){
        cout<<"number is divisible by 5 and 3";  
    }
    else{
        cout<<"number is not divisible by 5 and 3";
    }
}