# include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    
    
    int m=n-1;
    int nsp=1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m+1-i; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < nsp; k++)
        {
            cout<<" ";
        }
         nsp+=2;
        for (int j = 0; j < m+1-i; j++)
        {
            cout<<"*";
        }
       
        cout<<endl;
    }
    
}