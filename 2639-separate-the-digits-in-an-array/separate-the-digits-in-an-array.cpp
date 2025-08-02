class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;

        for(int i=0; i<nums.size(); i++){
            vector<int> temp;

            int num = nums[i];

            if(num == 0){
                temp.push_back(0);
            } else {
                while(num > 0){
                    temp.push_back(num%10);
                    num /= 10;
                }

                reverse(temp.begin(), temp.end());
            }

            res.insert(res.end(), temp.begin(), temp.end());
        }

        return res;
    }
};