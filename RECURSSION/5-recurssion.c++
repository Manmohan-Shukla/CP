# include <iostream>
using namespace std;


int pow(int a ,int b){
    if(a==0 && b==0){
        cout<<"invalid";
    }
    if(a==0)return 0;
    int p=1;
    for (int i = 1; i <= b; i++)
    {
        p*=a;
    }
    return p;
}
 int power (int a,int b)
 {
    if(b==0) return 1;
    return a*power(a,b-1);
 }
int main(){
    cout<<pow(3,4);
    cout<<power(3,4);
}