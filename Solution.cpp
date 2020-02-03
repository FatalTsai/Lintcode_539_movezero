class Solution {
public:
    /**
     * @param nums: an integer array
     * @return: nothing
     */
    void moveZeroes(vector<int>& nums) {
        //size_t is unsigned int 
        size_t i=0;
        for(size_t j=0;j<nums.size();j++)
        {
            if(nums[j]!=0)
            {
                nums[i]=nums[j];
                i++;
            }
        }
        for(;i<nums.size();i++)
        {
            nums[i]=0;
        }
        // ref:https://www.jiuzhang.com/solution/move-zeroes/#tag-highlight-lang-cpp
    }

};
