# include <iostream>
using namespace std;
class Stack
{public:
int arr[5];
int idx ;
Stack(){
    idx=-1;
}
void push(int val){
    if(idx==4){ cout<<"Stack is full"; return;}
    idx++;
    arr[idx]=val;
}
void pop(){
    idx--;
}
int top(){
    return arr[idx];
}
int size()
{
    return idx+1;
}

};


int main(){
Stack st;
st.push(01);
st.push(67);
st.push(46);
cout<<st.size();
st.pop();
cout<<st.size();

}