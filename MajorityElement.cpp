class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,counter=0,candidate=-1;
        for(i=0;i<nums.size();i++){
            
           
            if(candidate==nums[i])
                counter++;
            else  if(counter==0){
                candidate=nums[i];
                counter++;
            }
            else counter--;
        }
        return candidate;
    }
};
