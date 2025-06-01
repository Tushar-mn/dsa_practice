class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        int count = 0;

        for(int i=0; i<n; i++){
            bool isDuplicate = false;
            for(int j=0; j<count; j++){
                if(nums[i] == temp[j]){
                    isDuplicate = true;
                    break;
                }
            }

            if(!isDuplicate){
                temp.push_back(nums[i]);
                count++;
            }
        }
        
        for(int i=0; i<count; i++){
            nums[i] = temp[i];
        }
        
        return count;
    }
};