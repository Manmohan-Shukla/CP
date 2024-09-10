// binary triangle version 2

#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the number of rows for binary triangle";
    cin >> a;
    int k = 23;
    for (int i = 1; i <= a; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            if ((i%2==0&&j%2==0)||(i%2!=0&&j%2!=0))
            {
                cout<<1;
            }
            else{
                cout<<0;
            }
            
        }
        cout << endl;
    }
}
