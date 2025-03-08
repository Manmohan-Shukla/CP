#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    cout << st.size() << endl;
    st.push(10);
    st.push(14320);
    st.push(1450);
    st.push(103);
    st.push(1120);
    st.push(130);
    st.push(1320);
    st.push(210);
    cout << st.size() << endl;
    st.pop();
     cout << st.size() << endl;
     cout<<st.top();
}