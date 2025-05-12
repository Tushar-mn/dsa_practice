class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nge;
        stack<int> st;
        for(int val: nums2){
            while(!st.empty() && val > st.top()){
                nge[st.top()] = val;
                st.pop();
            }
            st.push(val);
        }

        while(!st.empty()){
            nge[st.top()] = -1;
            st.pop();
        }

        vector<int> res;
        for(int val: nums1){
            res.push_back(nge[val]);
        }
        return res;
    }
};