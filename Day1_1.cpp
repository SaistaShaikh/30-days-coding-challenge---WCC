#include<bits/stdc++.h>
using namespace std;



void sort(vector<int>& nums){
    int l=0;
    int m=0;
    int h=nums.size() - 1;

    while(m<=h){
        if(nums[m]==0){
            swap(nums[l],nums[m]);
            m++;
            l++;
        }
        else if(nums[m]==1){
            m++;
        }
        else if(nums[m]==2){
            swap(nums[m],nums[h]);
            h--;
        }

    }
    
    
}



int main(){
    int n;
    cin>>n;
    int x;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }

    sort(nums);

     for(int i=0;i<n;i++){
         
         cout<<nums[i]<<"  ";
     }
    return 0;
}