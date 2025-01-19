#include <bits/stdc++.h>
using namespace std;

void duplicatesub(string ans, string original, vector<string> &v, bool flag)
{
    if (original == "")
    {
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if (original.length() == 1)
    {
        if (flag == true) duplicatesub(ans + ch, original.substr(1), v, true);
        duplicatesub(ans , original.substr(1), v, true);
        return;
    }
    char dh = original[1];
    if (ch == dh)
    {
        if (flag == true) duplicatesub(ans + ch, original.substr(1), v, true);
        duplicatesub(ans, original.substr(1), v, false);
    }
    else{
        if (flag == true) duplicatesub(ans + ch, original.substr(1), v, true);
        duplicatesub(ans , original.substr(1), v, true);
    }
}
int main()
{
    string str = "aabc";
    vector<string> v;
    duplicatesub("", str, v, true);
    for (string ele : v)
    {
        cout << ele << endl;
    }
}