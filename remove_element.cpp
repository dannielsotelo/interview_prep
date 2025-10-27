class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // num of elements not matching val, also current element

        for (int i : nums)
        {
            if(i != val)
            {
                nums[k++] = i;
            }
        }
        return k;
    }
};