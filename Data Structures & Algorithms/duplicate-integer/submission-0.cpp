class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> count;
        for(int num:nums){
            if(count.find(num)!=count.end()){
                count[num]+=1;return true;
            }
            else{
                count[num] = 1;
            }
        }
        return false;
        
    }
};