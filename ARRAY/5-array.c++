#include <iostream>
#include <vector>
using namespace std;

void reverse (vector<int> &v,int i,int j){
while(i<=j){
    int temp =v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;

}
return;
}

int display (vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main()
{
    vector<int> v;
    int n,k;
    cout << "enter the size of vector" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout<<"enter the target "<<endl;
    cin>>k;
    
    reverse(v,0,n-k-1);
    reverse(v,n-k,n-1);
    reverse(v,0,n-1);

    display(v);
}