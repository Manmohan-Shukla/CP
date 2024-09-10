// floyd's triangle

#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the number of rows for floyd's triangle";
    cin >> a ;
    int mid=1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           cout<<mid<<" ";
            mid++;
        }
        cout << endl;
    }
}
