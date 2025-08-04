class Solution {
public:

    int reverse(int n){
        int temp = n;
        int rev = 0;
        while(temp != 0){
            int rem = temp % 10;
            rev = rem + rev*10;

            temp /= 10;
        }

        return rev;
    }

    bool isSameAfterReversals(int num) {
        int rev1 = reverse(num);
        int rev2 = reverse(rev1);

        return (rev2 == num)? true: false;
    }
};