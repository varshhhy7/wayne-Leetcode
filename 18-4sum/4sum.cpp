class Solution
{
public:
    vector<vector<int>> result;

    void twoSum(vector<int> &nums, long long target, int i, int j, int first, int second)
    {
        while (i < j)
        {
            if ((long long)nums[i] + nums[j] > target)
                j--;
            else if ((long long)nums[i] + nums[j] < target)
                i++;
            else
            {
                result.push_back({nums[first], nums[second], nums[i], nums[j]});
                i++;
                j--;
                while (i < j && nums[i] == nums[i - 1]) i++;
                while (i < j && nums[j] == nums[j + 1]) j--;
            }
        }
    }

    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        if (n < 4) return {};
        result.clear();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < n - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                long long newTarget = (long long)target - nums[i] - nums[j];
                twoSum(nums, newTarget, j + 1, n - 1, i, j);
            }
        }

        return result;
    }
};
