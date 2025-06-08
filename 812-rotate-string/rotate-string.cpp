class Solution {
public:
    vector<string> str;

    void reverse(string& s, int first, int second){
        while(first < second){
            swap(s[first], s[second]);
            first++;
            second--;
        }
    }

    void rotate(string s){
        int n = s.size();
        for(int i=0; i<n; i++){
            int k = 1;
            reverse(s, 0, n-1);
            reverse(s, 0, k-1);
            reverse(s, k, n-1);
            k++;

            str.push_back(s);
        }
    }

    bool rotateString(string s, string goal) {
        rotate(s);

        for(string ch: str){
            if(ch == goal){
                return true;
                break;
            }
        }
        return false;
    }
};