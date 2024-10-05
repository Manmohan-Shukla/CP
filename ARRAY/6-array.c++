#include <iostream>
#include <vector>
using namespace std;



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
    int max=0,max2=0;
    for(int i=0;i<n;i++){
         if(v[i]>max){
            max2=max;
            max=v[i];
         }
        else if(max2<v[i]&&v[i]!=max){
            max2=v[i];
        }
    }
    cout<<max2;
    // display(v);
}