#include <bits/stdc++.h>
using namespace std;
vector<int> dp;
vector<int> get_digits(int n)
{
    vector<int> v;
    while (n > 0)
    {
        if (n % 10 != 0)
            v.push_back(n % 10);
        n /= 10;
    }
    return v;
}

int f(int n)
{
    if (n == 0)
        return 0;
    if (n <= 9)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    vector<int> d = get_digits(n);
    int res = INT_MAX;
    for (int i = 0; i < d.size(); i++)
    {
        res = min(res, f(n - d[i]));
    }
    return dp[n] = 1 + res;
}

int fbu(int num)
{
    dp[0] = 0;
    for (int i = 0; i <= 9; i++)
        dp[i] = 1;
    for (int n = 10; n <= num; n++)
    {
        vector<int> d = get_digits(n);
        int res = INT_MAX;
        for (int i = 0; i < d.size(); i++)
        {
            res = min(res, dp[n - d[i]]);
        }
        dp[n] = 1 + res;
    }
    return dp[num];
}
int main()
{
    int n;
    cin >> n;
    dp.resize(1000003, -1);
    cout << fbu(n) << endl;
}