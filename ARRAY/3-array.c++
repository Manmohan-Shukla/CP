// last occurence
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(8);
    v.push_back(85);
    v.push_back(4);
    v.push_back(45);
    v.push_back(97);
    v.push_back(80);
    v.push_back(45);
    v.push_back(741);
    int idx = -1;
    int x = 45;
    // brute
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            idx = i;
        }
    }

    // more optimised approach

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            idx = i;
            break;
        }
    }

    cout << idx;
}