#include <bits/stdc++.h>
using namespace std;
void bstring(string ans, string original)
{
    if (original == "")
    {
        cout << ans << endl;
        return;
    }
    char ch = original[0];
    bstring(ans, original.substr(1));
    bstring(ans + ch, original.substr(1));
}
 
void ostring(string ans, string original,vector<string>& v)
{
    if (original == "")
    {
        v.push_back(ans);
        return;
    } 
    char ch = original[0];
    ostring(ans, original.substr(1),v);
    ostring(ans + ch, original.substr(1),v);
}
int main()
{
    string str = "abc";
    vector<string> v;
    ostring("", str,v);
    for(string ele: v){
        cout<<ele<<endl;
    }
}