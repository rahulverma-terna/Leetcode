class Solution {
public:
    int pivotIndex(vector<int>& nums) {
int sum=0,ls=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            sum=sum-nums[i];
            if(ls==sum)
                return i;
            ls=ls+nums[i];
        }
        return -1;
    }
    
};
