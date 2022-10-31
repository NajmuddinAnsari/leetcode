class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {
            vector<vector < int>> ans;
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size() - 2; i++)
            {
                if ((i == 0) || (i > 0 && nums[i] != nums[i - 1]))
                {
                    int low = i + 1;
                    int high = nums.size() - 1;
                    while (low < high)
                    {
                        int target = nums[i] + nums[low] + nums[high];
                        if (target == 0)
                        {
                            vector<int> triplet = { nums[i],
                                nums[low],
                                nums[high]
                            };
                            ans.push_back(triplet);
                            while ((low < high) && (nums[low] == nums[low + 1]))
                            {
                                low++;
                            }
                            while ((low < high) && (nums[high] == nums[high - 1]))
                            {

                                high--;
                            }
                            high--;
                        }
                        else if ((nums[i] + nums[low] + nums[high]) < 0)
                        {
                            low++;
                        }
                        else
                        {
                            high--;
                        }
                    }
                }
            }
            return ans;
        }
};