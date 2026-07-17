class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0,r = nums.size()-1;
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid]>nums[r]){
                l =mid+1;
            }
            else{
                r=mid;
            }
        }
       
        int res = bs(nums,0,l-1,target);
        if(res!=-1)return res;
        return bs(nums,l,nums.size()-1,target);
    }

    int bs(vector<int>&nums,int l,int r,int target){
            while(l<=r){
                int mid = (l+r)/2;
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid]>target){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            return -1;
        }

};