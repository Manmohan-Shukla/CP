# include<iostream>
using namespace std;
int main (){
    int SP,CP;
    cout<<"enter CP ";
    cin>>CP;
    cout<<"enter SP ";
    cin>>SP;
    int diff=SP-CP;
    if(diff>0){
        cout<<"seller has made profit of "<<diff;
    }
    else{
        cout<<"seller has incurred loss of "<<-diff;
    }
}