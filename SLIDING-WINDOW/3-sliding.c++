#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int maxsum = INT_MIN;
    int prevsum = 0;
    int maxidx = -1;
    for (int i = 0; i < k; i++)
    {
        prevsum += arr[i];
    }

    maxsum = prevsum;
    int i = 1;
    int j = k;
    while (j < n)
    {
        int currsum = prevsum + arr[j] - arr[i - 1];
        while (maxsum < currsum)
        {
            maxsum = currsum;
            maxidx = i;
        }

        prevsum = currsum;
        i++;
        j++;
    }
    cout << maxsum << endl;
    cout << maxidx << endl;
}