class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        long long sum = 0;
        int steps = 0;

        while(true){
            steps++;
            sum += steps;

            if(sum >= target && (sum-target)%2 == 0){
                return steps;
            }
        }
    }
};