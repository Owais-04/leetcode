

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; 

        std::string str = "";
        while (n > 0) {
            if (n % 2 == 0) str += '0';
            else str += '1';
            n /= 2;
        }
        std::reverse(str.begin(), str.end());

        //power of 2 when only one 1
        return count(str.begin(), str.end(), '1') == 1;
    }
};
