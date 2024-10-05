#include <bits/stdc++.h>
#include <vector>
using namespace std;
void name(vector<int> &n)
{
    int noo = 0;
    int noz = 0;
    int h = n.size();
    for (int i = 0; i < h; i++)
    {
        if (n[i] == 0)
            noo++;
        else
            noz++;
    }
    for (int i = 0; i < h; i++)
    {
        if (i < noo)
        {
            n[i] = 0;
        }
        else
        {
            n[i] = 1;
        }
    }
}
void sort01m2(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (v[i] == 0)
        {
            i++;
        }
        if (v[j] == 1)
        {
            j--;
        }
        if (v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}
int main()
{
}