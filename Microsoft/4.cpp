/*
You are given an integer array nums of length n.
 Return maximum length of Rotation Function.*/

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
       int n=nums.size();
       int sum=0,test_sum=0,res=INT_MIN;
       for(int i=0;i<n;i++){
           sum+=nums[i];
           test_sum+=(i*nums[i]);
       } 
       res=max(res,test_sum);
       for(int i=n-1;i>=0;i--){
           test_sum=test_sum+sum-n*nums[i];
           res=max(res,test_sum);
       }
       return res;
    }
};