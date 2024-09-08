# include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character  ";
    cin>>ch;
    int ascii = (int)ch;//typecasting
    //97 to 122 lower
    //65 to 90 capital
    if((ascii>=97&&ascii<=122)||(ascii>=65&&ascii<=90)){
     cout<<"it is a character ";
    }
    else{
        cout<<"it is not a character";
    }
}