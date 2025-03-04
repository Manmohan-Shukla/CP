# include<iostream>
# include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(90);
    q.push(30);
    q.push(320);
    q.push(89);
    q.push(64);
    q.push(900);
    cout<<q.front()<<endl;
}