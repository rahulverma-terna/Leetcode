class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int,int>map;
        map[0]=-1;
        int max_length=0;
        int cur_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                cur_sum--;
            else cur_sum++;
            if(map.find(cur_sum)!=map.end())
                max_length=max(max_length,i-map[cur_sum]);
            else map[cur_sum]=i;
        }
        
    
        return max_length;
    }

};
