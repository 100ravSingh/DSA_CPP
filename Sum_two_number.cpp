class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> Arr;
        int sum = 0;
        for(int i = 0;i<(nums.size()-1);i++)
        for(int j = i+1;j<nums.size();j++)
        {
            sum = nums[i] + nums[j];
            if (sum == target)
            {
                Arr.push_back(i);
                Arr.push_back(j);
            }
        }
        return Arr;
    }
};