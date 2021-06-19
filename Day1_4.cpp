#include<bits/stdc++.h>
using namespace std;

void kadane(vector<int> nums, int n){

    
    int maxi = INT_MIN;
    int sum = 0;


    for(int i=0;i<n;i++){

        sum = sum +nums[i];
        maxi = max(sum,maxi);
        if(sum<0) sum = 0;
    }

    cout<<maxi;
    
}

int main(){

    int n,x;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }

    kadane(nums,n);



    return 0;
}