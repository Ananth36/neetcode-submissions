class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long k = 1;
        while(true){
            long long hours = 0;
            for(long long pile:piles){
                while(pile>0){
                    pile-=k;
                    hours+=1;
                }
            }
            if(hours<=h)return k;
            k++;
        }
    }
};
