class Solution {
public:
    bool isPowerOfThree(int n) {
        bool ans = false;
        if (n <= 0)
            return false;
        if (n == 1)
            return true;
        else
            ans = (n % 3 == 0 && isPowerOfThree((n / 3)));
        return ans;
    }
};