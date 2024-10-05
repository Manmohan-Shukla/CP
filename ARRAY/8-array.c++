# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    for (i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1]){
            break;
        }
       
    }
    if(i==n-1){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is unsorted"<<endl;
    }
    
}





class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        // sorting idx
        reverse(nums.begin() + idx + 1, nums.end());
        //
        int j = -1;
        for (int i = idx + 1; i < n; i++) {
            if (nums[i] > nums[idx]) {
                j = i;
                break;
            }
        }
        // swapping idx idx+1
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
        return;
    }
};