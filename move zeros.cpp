class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros=0;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zeros++;
            }
            
        }
        for(int i =nums.size()-1;i>=0;i--)
        {
            if(nums[i]==0)
            {
                nums.erase(nums.begin()+i);
            }
        }
        
        cout<<zeros;
        vector<int> temp(zeros,0);
        nums.insert(nums.end(),temp.begin(),temp.end());
        
    }
};
