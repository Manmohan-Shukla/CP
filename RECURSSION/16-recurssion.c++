#include <bits/stdc++.h>
using namespace std;

void printsub(int arr[], int n, int idx, vector<int> ans)
{
    if (idx == n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }

    printsub(arr, n, idx + 1, ans);
    ans.push_back(arr[idx]);
    printsub(arr, n, idx + 1, ans);
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<int> v;
    int n = sizeof(arr) / sizeof(arr[1]);
    printsub(arr, n, 0, v);
}