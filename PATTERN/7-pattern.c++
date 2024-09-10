//star cross

#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the rows of star cross";
    cin >> a ;
    int mid=a+1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j==i||i+j==mid)
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
