class Solution {
  public:
    
    pair<int, int> sum(vector<int>& a, int target){
        int n = a.size();
        int right = 0;
        int left = 0;
        int sum = 0;
        
        while(right < n){
            sum += a[right];
            
            while(sum > target){
                sum -= a[left];
                left++;
            }
            
            if(sum == target){
                return {left+1, right+1};
            }
            right++;
        }
        return {-1, -1};
    }
    
    vector<int> subarraySum(vector<int> &arr, int target) {
        
        pair<int,int> res = sum(arr, target);
        
        if(res.first == -1){
            return {-1};
        }
        
        return {res.first, res.second};
    }
};