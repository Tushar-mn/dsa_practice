class Solution {
public:
    vector<vector<int>> temp;

    void reverse(vector<int>& s, int first, int second){
        while(first<second){
            swap(s[first], s[second]);
            first++;
            second--;
        }
    }

    void rotate(vector<int>& nums){
        int n = nums.size();
        for(int i=0; i<n; i++){
            vector<int> search = nums;
            int k=1;
            reverse(nums, 0, n-1);
            reverse(nums, 0, k-1);
            reverse(nums, k, n-1);
            k++;

            temp.push_back(search);
        }
    }
    int search(vector<int>& nums, int target) {
        rotate(nums);
        
        for(auto& val: temp){
            if(val == nums){
                for(int i=0; i<val.size(); i++){
                    if(target == val[i]){
                        return i;
                        break;
                    }
                }
            }
        }

        return -1;
    }
};