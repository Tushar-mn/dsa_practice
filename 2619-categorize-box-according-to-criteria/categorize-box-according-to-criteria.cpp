class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long vol = 1LL * length * width * height;

        bool Bulky = (length >= pow(10,4) || width >= pow(10,4) || height >= pow(10,4) || vol >= pow(10,9));
        bool Heavy = (mass >= 100);

        if(Bulky && Heavy){
            return "Both";
        } else if(Bulky){
            return "Bulky";
        } else if(Heavy){
            return "Heavy";
        } else {
            return "Neither";
        }
    }
};