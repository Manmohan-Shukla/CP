// star diamond

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the rows of pyramid";
    cin >> a;
    int nst = 1;
    int nsp = a - 1;
    for (int i = 1; i <= 2 * a - 1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        if (i < a)
        {
            nsp--;
        }
        else
        {
            nsp++;
        }
        for (int k = 0; k < nst; k++)
        {
            cout << "*";
        }
        if(i<a){nst+=2;}
        else{nst-=2;}
        cout << endl;
    }
}