/* 15. 3Sum
 * Given an array S of n integers, are there elements a, b, c in S such that 
 * a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
 *
 * Note: The solution set must not contain duplicate triplets.
 *
 * For example, given array S = [-1, 0, 1, 2, -1, -4],
 *
 * A solution set is:
 * [
 *   [-1, 0, 1],
 *   [-1, -1, 2]
 * ]
 */

class Solution {
  public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> result;

      std::sort(nums.begin(), nums.end());
      int s = nums.size(), low, high, sum;
      for (int i = 0; i < s; i++) {
        low = i + 1;
        high = s - 1;
        while (low < high) {
          int sum = nums[low] + nums[high] + nums[i];
          if (sum == 0) {
            result.push_back({nums[i], nums[low], nums[high]});
            if (nums[low] == nums[high]) break;
            while(nums[low] == nums[++low]) ;
            while(nums[high] == nums[--high]) ;
          } else if (sum > 0) {
            high--;                    
          } else {
            low++;                    
          }
        }
        while (i + 1 < s && nums[i] == nums[i+1]) i++;
      }
      return result;
    }
};

