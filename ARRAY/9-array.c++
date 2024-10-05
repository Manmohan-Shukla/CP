#include <bits/stdc++.h>
using namespace std;
int triplet(int arr[], int n, int target)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    count++;
                }
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<triplet(arr,n,target);
}