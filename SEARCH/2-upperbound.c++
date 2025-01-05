# include <bits/stdc++.h>
using namespace std;
 int main(){
    vector<int> v;
    int n,target;
    cin>>target;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>> ele;
        v.push_back(ele);
    }
    int low=0;
    int high = v.size()-1;
    while (low<=high)
    { 
        int mid =low+(high-low)/2;
        if(v[mid]==target){
          return v[mid+1];
        }
        else if (v[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
 }