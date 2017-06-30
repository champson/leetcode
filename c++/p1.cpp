/* Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 *
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 *
 * Example:
 * Given nums = [2, 7, 11, 15], target = 9,
 *
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].  */

class Solution1 {
  public:
    // O(n*n) time, O(1) space
    vector<int> twoSum(vector<int>& nums, int target) {
      int size = nums.size();
      vector<int> result;
      for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
          if (nums[i] + nums[j] == target) {
            result.push_back(i);
            result.push_back(j);
            return result;
          }
        }
      }
    }
};

// O(n) time, O(n) space
class Solution2 {
  public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //use map will get O(nlogn) time complexity, but better space complexity. 
      unordered_map<int, int> visited;
      unordered_map<int, int>::const_iterator it;
      int expect;
      for (int i = 0,  size = nums.size(); i < size; i++) {
        expect = target - nums[i];
        if ((it = visited.find(expect)) != visited.end()) {
          return vector<int>{it->second, i};
        }
        visited[nums[i]] = i;
      }
    }
};
