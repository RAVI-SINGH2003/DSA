// vector<vector<int>> ans;
// void helper(vector<int> &v, vector<int> temp, int target, int sum, int idx)
// {
//     if (sum == target)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     if (sum > target)
//     {
//         return;
//     }
//     if (idx >= v.size())
//         return;
//     temp.push_back(v[idx]);
//     sum += v[idx];
//     helper(v, temp, target, sum, idx);
//     temp.pop_back();
//     sum -= v[idx];
//     helper(v, temp, target, sum, idx + 1);
// }
// vector<vector<int>> combinationSum(vector<int> &candidates, int target)
// {
//     helper(candidates, {}, target, 0, 0);
//     return ans;
// }

// TC : O(2^N *K)  //k is the aveage length of combinations  *k for storing temp in ans
// SC: O(k*x) x=no of combinations and k = average length of combinations
// AS = O(N)