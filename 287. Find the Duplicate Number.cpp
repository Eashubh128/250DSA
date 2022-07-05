class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        int right =nums.size()-1;
       sort(nums.begin(),nums.end());
        
        for(int left=0;left<right;left++)
        {
            if(nums[left]==nums[left+1])
            {
                return nums[left];
            }
        }
        
        
        
   return 0;}
};
