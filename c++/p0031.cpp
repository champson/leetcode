/* 31. Next Permutation 
 *
 * Implement next permutation, which rearranges numbers into the lexicographically 
 * next greater permutation of numbers. If such arrangement is not possible, it must
 * rearrange it as the lowest possible order (ie, sorted in ascending order).
 *
 * The replacement must be in-place, do not allocate extra memory.
 *
 * Here are some examples. Inputs are in the left-hand column and its corresponding 
 * outputs are in the right-hand column.
 * 1,2,3 → 1,3,2
 * 3,2,1 → 1,2,3
 * 1,1,5 → 1,5,1
 */
class Solution {
  public:
    void nextPermutation(vector<int>& nums) {
      if (nums.size() <= 1) return;
      int i = nums.size() - 1, j;
      while (i > 0 && nums[i] <= nums[--i]) ;
      j = i + 1;
      while (j < nums.size() && nums[i] < nums[j]) j++;
      if (j - 1 != i) swap(nums[i++], nums[j-1]);
      j = nums.size() - 1;
      while (i < j)
        swap(nums[i++], nums[j--]);
    }
};
