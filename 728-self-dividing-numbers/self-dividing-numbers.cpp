class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;

        for(int i=left; i<=right; i++){
            int temp = i;
            bool isFound = true;

            while(temp != 0){
                int rem = temp%10;

                if(rem == 0 || i%rem != 0){
                    isFound = false;
                    break;
                }

                temp /= 10;
            }

            if(isFound){
                arr.push_back(i);
            }
        }

        return arr;
    }
};