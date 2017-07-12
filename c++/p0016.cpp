/* 16. 3Sum Closest
 * Given an array S of n integers, find three integers in S such that
 * the sum is closest to a given number, target. Return the sum of the
 * three integers. You may assume that each input would have exactly one solution.
 *
 * For example, given array S = {-1 2 1 -4}, and target = 1.
 *
 * The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
 */

class Solution {
  public:
    int threeSumClosest(vector<int>& nums, int target) {
      int best = nums[0] + nums[1] + nums[2];

      std::sort(nums.begin(), nums.end());
      int s = nums.size(), low, high, sum;
      for (int i = 0; i < s; i++) {
        low = i + 1;
        high = s - 1;
        while (low < high) {
          int sum = nums[low] + nums[high] + nums[i] - target;
          if (abs(sum) < abs(best - target))
            best = nums[low] + nums[high] + nums[i];
          if (sum == 0) {
            return best;
          } else if (sum > 0) {
            high--;
          } else {
            low++;                    
          }
        }
        while (i + 1 < s && nums[i] == nums[i+1]) i++;
      }
      return best;
    }
};
