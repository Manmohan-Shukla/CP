#include <bits/stdc++.h>
using namespace std;

void Remove(string ans, string original)
{
    if (original.length() == 0)
    {
        cout << ans;
        return;
    }
    char ch = original[0];
    if (ch == 'a')
        Remove(ans, original.substr(1));
    else
        Remove(ans + ch, original.substr(1));
}
// S.C bekar
void Remove2(string ans, string original, int idx)
{
    if (original.length() == 0)
    {
        cout << ans;
        return;
    }
    char ch = original[0];
    if (ch == 'a')
        Remove2(ans, original, idx + 1);
    else
        Remove2(ans + ch, original, idx + 1);
}


int main()
{
    string str = "Manmohan Shukla";
    Remove("", str);
}

// string s = " ";
// for (int i = 0; i < str.length(); i++)
// {
//     if (str[i] != 'a')
//         s += str[i];
// }
// cout << s;