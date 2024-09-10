//star plus

#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the rows of star plus";
    cin >> a ;
    int mid=(a+1)/2;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j==mid||i==mid)
            {
               cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout << endl;
    }
}
