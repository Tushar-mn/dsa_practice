class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> freq;

        for(int val: deck){
            freq[val]++;
        }

        int gcdVal = 0;
        for(auto& [val, count]: freq){
            gcdVal = __gcd(gcdVal, count);
        }

        return gcdVal >= 2;
    }
};