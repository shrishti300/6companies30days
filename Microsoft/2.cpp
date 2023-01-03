/* Combination Sum with a twist. */


class Solution {
public:
vector<vector<int>>res;
void solver(vector<int>&ans,int j,int k,int n){
    if(n==0 && k==0){
        res.push_back(ans);
        return;
    }
    if(k==0) return;
    for(int i=j;i<10;i++){
        if(n>=i && k>0){
            ans.push_back(i);
            solver(ans,i+1,k-1,n-i);
            ans.pop_back();
        }
    }
    if(n!=0)
    return;
}
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int>ans;
        solver(ans,1,k,n);
        return res;
    }
};