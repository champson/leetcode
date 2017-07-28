/* 34. Search for a Range
 * Given an array of integers sorted in ascending order, find the starting and ending position of a given target value.
 *
 * Your algorithm's runtime complexity must be in the order of O(log n).
 *
 * If the target is not found in the array, return [-1, -1].
 *
 * For example,
 * Given [5, 7, 7, 8, 8, 10] and target value 8,
 * return [3, 4].
 */
class Solution {
  public:
        vector<int> searchRange(vector<int>& nums, int target) {
                int left = -1, right = 1, resultL = -1, resultR = 1;
                      int low = 0, high = nums.size() - 1, mid;
                            while (low <= high) {
                                      mid = (low + high) / 2;
                                              if (nums[mid] > target)
                                                          high = mid - 1;
                                                      else if (nums[mid] < target)
                                                                  low = mid + 1;
                                                              else {
                                                                          resultL = resultR = left = right = mid;
                                                                                    break;
                                                                                            }
                                                                    }
                                  if (left == -1)
                                            return {-1, -1};

                                        while (low <= left) {
                                                  mid = (low + left) / 2;
                                                          if (nums[mid] == target) {
                                                                      left = mid - 1;
                                                                                resultL = mid;
                                                                                        } else
                                                                                                    low = mid + 1;
                                                                                              }

                                              while (right <= high) {
                                                        mid = (right + high) / 2;
                                                                if (nums[mid] == target) {
                                                                            right = mid + 1;
                                                                                      resultR = mid;
                                                                                              } else
                                                                                                          high = mid - 1;
                                                                                                    }
                                                    return {resultL, resultR};
                                                        }
};/
class Solution {
  public:
        vector<int> searchRange(vector<int>& nums, int target) {
                int left = -1, right = 1, resultL = -1, resultR = 1;
                      int low = 0, high = nums.size() - 1, mid;
                            while (low <= high) {
                                      mid = (low + high) / 2;
                                              if (nums[mid] > target)
                                                          high = mid - 1;
                                                      else if (nums[mid] < target)
                                                                  low = mid + 1;
                                                              else {
                                                                          resultL = resultR = left = right = mid;
                                                                                    break;
                                                                                            }
                                                                    }
                                  if (left == -1)
                                            return {-1, -1};

                                        while (low <= left) {
                                                  mid = (low + left) / 2;
                                                          if (nums[mid] == target) {
                                                                      left = mid - 1;
                                                                                resultL = mid;
                                                                                        } else
                                                                                                    low = mid + 1;
                                                                                              }

                                              while (right <= high) {
                                                        mid = (right + high) / 2;
                                                                if (nums[mid] == target) {
                                                                            right = mid + 1;
                                                                                      resultR = mid;
                                                                                              } else
                                                                                                          high = mid - 1;
                                                                                                    }
                                                    return {resultL, resultR};
                                                        }
};/
class Solution {
  public:
        vector<int> searchRange(vector<int>& nums, int target) {
                int left = -1, right = 1, resultL = -1, resultR = 1;
                      int low = 0, high = nums.size() - 1, mid;
                            while (low <= high) {
                                      mid = (low + high) / 2;
                                              if (nums[mid] > target)
                                                          high = mid - 1;
                                                      else if (nums[mid] < target)
                                                                  low = mid + 1;
                                                              else {
                                                                          resultL = resultR = left = right = mid;
                                                                                    break;
                                                                                            }
                                                                    }
                                  if (left == -1)
                                            return {-1, -1};

                                        while (low <= left) {
                                                  mid = (low + left) / 2;
                                                          if (nums[mid] == target) {
                                                                      left = mid - 1;
                                                                                resultL = mid;
                                                                                        } else
                                                                                                    low = mid + 1;
                                                                                              }

                                              while (right <= high) {
                                                        mid = (right + high) / 2;
                                                                if (nums[mid] == target) {
                                                                            right = mid + 1;
                                                                                      resultR = mid;
                                                                                              } else
                                                                                                          high = mid - 1;
                                                                                                    }
                                                    return {resultL, resultR};
                                                        }
};/
class Solution {
  public:
        vector<int> searchRange(vector<int>& nums, int target) {
                int left = -1, right = 1, resultL = -1, resultR = 1;
                      int low = 0, high = nums.size() - 1, mid;
                            while (low <= high) {
                                      mid = (low + high) / 2;
                                              if (nums[mid] > target)
                                                          high = mid - 1;
                                                      else if (nums[mid] < target)
                                                                  low = mid + 1;
                                                              else {
                                                                          resultL = resultR = left = right = mid;
                                                                                    break;
                                                                                            }
                                                                    }
                                  if (left == -1)
                                            return {-1, -1};

                                        while (low <= left) {
                                                  mid = (low + left) / 2;
                                                          if (nums[mid] == target) {
                                                                      left = mid - 1;
                                                                                resultL = mid;
                                                                                        } else
                                                                                                    low = mid + 1;
                                                                                              }

                                              while (right <= high) {
                                                        mid = (right + high) / 2;
                                                                if (nums[mid] == target) {
                                                                            right = mid + 1;
                                                                                      resultR = mid;
                                                                                              } else
                                                                                                          high = mid - 1;
                                                                                                    }
                                                    return {resultL, resultR};
                                                        }
};/
class Solution {
  public:
        vector<int> searchRange(vector<int>& nums, int target) {
                int left = -1, right = 1, resultL = -1, resultR = 1;
                      int low = 0, high = nums.size() - 1, mid;
                            while (low <= high) {
                                      mid = (low + high) / 2;
                                              if (nums[mid] > target)
                                                          high = mid - 1;
                                                      else if (nums[mid] < target)
                                                                  low = mid + 1;
                                                              else {
                                                                          resultL = resultR = left = right = mid;
                                                                                    break;
                                                                                            }
                                                                    }
                                  if (left == -1)
                                            return {-1, -1};

                                        while (low <= left) {
                                                  mid = (low + left) / 2;
                                                          if (nums[mid] == target) {
                                                                      left = mid - 1;
                                                                                resultL = mid;
                                                                                        } else
                                                                                                    low = mid + 1;
                                                                                              }

                                              while (right <= high) {
                                                        mid = (right + high) / 2;
                                                                if (nums[mid] == target) {
                                                                            right = mid + 1;
                                                                                      resultR = mid;
                                                                                              } else
                                                                                                          high = mid - 1;
                                                                                                    }
                                                    return {resultL, resultR};
                                                        }
};/
class Solution {
  public:
        vector<int> searchRange(vector<int>& nums, int target) {
                int left = -1, right = 1, resultL = -1, resultR = 1;
                      int low = 0, high = nums.size() - 1, mid;
                            while (low <= high) {
                                      mid = (low + high) / 2;
                                              if (nums[mid] > target)
                                                          high = mid - 1;
                                                      else if (nums[mid] < target)
                                                                  low = mid + 1;
                                                              else {
                                                                          resultL = resultR = left = right = mid;
                                                                                    break;
                                                                                            }
                                                                    }
                                  if (left == -1)
                                            return {-1, -1};

                                        while (low <= left) {
                                                  mid = (low + left) / 2;
                                                          if (nums[mid] == target) {
                                                                      left = mid - 1;
                                                                                resultL = mid;
                                                                                        } else
                                                                                                    low = mid + 1;
                                                                                              }

                                              while (right <= high) {
                                                        mid = (right + high) / 2;
                                                                if (nums[mid] == target) {
                                                                            right = mid + 1;
                                                                                      resultR = mid;
                                                                                              } else
                                                                                                          high = mid - 1;
                                                                                                    }
                                                    return {resultL, resultR};
                                                        }
};/
class Solution {
  public:
        vector<int> searchRange(vector<int>& nums, int target) {
                int left = -1, right = 1, resultL = -1, resultR = 1;
                      int low = 0, high = nums.size() - 1, mid;
                            while (low <= high) {
                                      mid = (low + high) / 2;
                                              if (nums[mid] > target)
                                                          high = mid - 1;
                                                      else if (nums[mid] < target)
                                                                  low = mid + 1;
                                                              else {
                                                                          resultL = resultR = left = right = mid;
                                                                                    break;
                                                                                            }
                                                                    }
                                  if (left == -1)
                                            return {-1, -1};

                                        while (low <= left) {
                                                  mid = (low + left) / 2;
                                                          if (nums[mid] == target) {
                                                                      left = mid - 1;
                                                                                resultL = mid;
                                                                                        } else
                                                                                                    low = mid + 1;
                                                                                              }

                                              while (right <= high) {
                                                        mid = (right + high) / 2;
                                                                if (nums[mid] == target) {
                                                                            right = mid + 1;
                                                                                      resultR = mid;
                                                                                              } else
                                                                                                          high = mid - 1;
                                                                                                    }
                                                    return {resultL, resultR};
                                                        }
};/
class Solution {
  public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int left = -1, right = 1, resultL = -1, resultR = 1;
      int low = 0, high = nums.size() - 1, mid;
      while (low <= high) {
        mid = (low + high) / 2;
        if (nums[mid] > target)
          high = mid - 1;
        else if (nums[mid] < target)
          low = mid + 1;
        else {
          resultL = resultR = left = right = mid;
          break;
        }
      }
      if (left == -1)
        return {-1, -1};

      while (low <= left) {
        mid = (low + left) / 2;
        if (nums[mid] == target) {
          left = mid - 1;
          resultL = mid;
        } else
          low = mid + 1;
      }

      while (right <= high) {
        mid = (right + high) / 2;
        if (nums[mid] == target) {
          right = mid + 1;
          resultR = mid;
        } else
          high = mid - 1;
      }
      return {resultL, resultR};
    }
};

