class Solution {
public:
    int climbStairs(int n) {
        double s5 = sqrt(5);
        double next = (1+s5)/2;
        double prev = (1-s5)/2;
        n++;
        return round((pow(next,n)-pow(prev,n))/s5);
    }
};
