/* 18. 4Sum
 * Given an array S of n integers, are there elements a, b, c, and d in
 * S such that a + b + c + d = target? Find all unique quadruplets in the
 * array which gives the sum of target.
 *
 * Note: The solution set must not contain duplicate quadruplets.
 *
 * For example, given array S = [1, 0, -1, 0, -2, 2], and target = 0.
 *
 * A solution set is:
 * [
 * [-1,  0, 0, 1],
 * [-2, -1, 1, 2],
 * [-2,  0, 0, 2]
 * ]
 */

class Solution {
  public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int i, j, low, high, s = nums.size(), x, t;
      vector<vector<int>> res;
      std::sort(nums.begin(), nums.end());
      for (i = 0; i < s - 3; i++) {
        x = target - nums[i];
        for (j = i + 1; j < s - 2; j++) {
          t = x - nums[j];
          low = j + 1;
          high = s - 1;
          while (low < high) {
            if (nums[low] + nums[high] == t) {
              res.push_back({nums[i], nums[j], nums[low], nums[high]});
              if (nums[low] == nums[high]) break;
              while (nums[low] == nums[++low]) ;
              while (nums[high] == nums[--high]) ;
            } else if (nums[low] + nums[high] > t) 
              high--;
            else
              low++;
          }
          while (j < s - 3 && nums[j] == nums[j+1]) j++;
        }
        while (i < s - 2 && nums[i] == nums[i+1]) i++;
      }
      return res;
    }
};
