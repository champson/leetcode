/* Given a set of candidate numbers (C) (without duplicates) and a target number (T),
 * find all unique combinations in C where the candidate numbers sums to T.
 *
 * The same repeated number may be chosen from C unlimited number of times.
 *
 * Note:
 * All numbers (including target) will be positive integers.
 * The solution set must not contain duplicate combinations.
 * For example, given candidate set [2, 3, 6, 7] and target 7, 
 * A solution set is: 
 * [
 * [7],
 * [2, 2, 3]
 * ]
 */
class Solution {
  public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> result;
      sort(candidates.begin(), candidates.end());
      combinationSum(candidates, result, 0, target);
      return result;
    }

    bool combinationSum(vector<int>& candidates, vector<vector<int>> &result,
        int start, int target) {
      bool found = 0;
      for (int i = start; i < candidates.size(); i++) {
        if (candidates[i] > target)
          break;

        if (candidates[i] == target) {
          result.push_back({candidates[i]});
          return true;
        }
        vector<vector<int>> combins;
        if (combinationSum(candidates, combins, i, target - candidates[i])) {
          for (int j = 0; j < combins.size(); j++)
            combins[j].insert(combins[j].begin(), candidates[i]);
          result.insert(result.end(), combins.begin(), combins.end());
          found = 1;
        }
      }
      return found;
    }
};
