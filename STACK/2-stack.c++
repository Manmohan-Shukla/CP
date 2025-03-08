#include <bits/stdc++.h>
using namespace std;
int main()
{
        stack<int> st;

    st.push(10);
    st.push(14320);
    st.push(1450);
    st.push(103);
    st.push(1120);
    st.push(130);
    st.push(1320);
    st.push(210);
    // while (st.size()>0)
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    stack<int> temp;
    while (st.size()>0)
    {
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
}