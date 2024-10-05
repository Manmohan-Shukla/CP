// three largest element
#include <bits/stdc++.h>
using namespace std;
void threegreatest(int a[],int n){
    int max_1 = INT_MIN;
    int max_2 = INT_MIN;
    int max_3 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_1)
        {
            max_3 = max_2;
            max_2 = max_1;
            max_1 = a[i];
        }
        else if (a[i] > max_2)
        {
            max_3 = max_2;
            max_2 = a[i];
        }
        else if (a[i] > max_3)
        {
            max_3 = a[i];
        }
    }
    if (max_1 == INT_MIN)
    {
        cout<<"NO 1 st maximum element"<<endl;
    }
    else{
        cout<<max_1<<endl;
    }
    if (max_2 == INT_MIN)
    {
        cout<<"NO 2nd maximum element"<<endl;
    }
    else{
        cout<<max_2<<endl;
    }
    if (max_3 == INT_MIN)
    {
        cout<<"NO 3rd maximum element"<<endl;
    }
    else{
        cout<<max_3<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    threegreatest(a,n);
}