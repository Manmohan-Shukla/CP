#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
 
    int n;
    
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
       vector<int>h (n,0);
    int low = 0;
    int high = v.size() - 1;
    int goo;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == 0)
        {
            if (v[mid + 1] == 0)
            {
                low = mid + 1;
            }
            else
            {
                goo=mid;
            }
        }
        else if (v[mid] < 0)
        {
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
    }
    for (int i=n-goo;i<n;i++){
        h.push_back(1);
    }
    
}