/* 33. Search in Rotated Sorted Array
 * Suppose an array sorted in ascending order is rotated at some pivot
 * unknown to you beforehand.
 *
 * (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
 *
 * You are given a target value to search. If found in the array return
 * its index, otherwise return -1.
 *
 * You may assume no duplicate exists in the array.
 */
class Solution {
  public:
    int binarySearch(vector<int> &nums, int left, int right, int target) {
      int i = 0;
      while (left <= right) {
        i = (left + right) / 2;
        if (nums[i] == target) return i;
        if (nums[i] > target)
          right = i - 1;
        else
          left = i + 1;
      }
      return -1;
    }
    int search(vector<int>& nums, int target) {
      int low = 0, high = nums.size() - 1, mid;
      while (low < high) {
        mid = (low + high) / 2;
        if (nums[low] > nums[mid]) {
          //search in nums[mid..high]
            if (nums[mid] <= target && nums[high] >= target)
              return binarySearch(nums, mid, high, target);
          high = mid - 1;
        } else {
          //search in nums[low..mid]
          if (nums[low] <= target && nums[mid] >= target)
            return binarySearch(nums, low, mid, target);
          low = mid + 1;
        }
      }
      if (low == high && nums[low] == target)
        return low;
      return -1;
    }
};
