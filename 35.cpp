class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int ans = 0;
        int s = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= target)
            {
                return i;
            }
            else if (target > nums[s - 1])
            {
                return s;
            }
        }
        return 0;
    }
};