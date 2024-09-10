#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the sides of star rectangle";
    cin >> a ;
    for (int i = 1; i <= 2*a-1; i++)
    {
        for (int j = 1; j <= 2*a-1; j++)
        {
            int d=i;
            int b=j;
            if(d>a){d=2*a-i;}
            if(b>a){b=2*a-j;}
            int n= min(d,b);
            cout<<a-n+1;
        }
        cout << endl;
    }
}
