// APPROACH-1
//  TC : O(N!*N) = *n for for loop from 0 to n-1
 //  SC: o(n) + o(n) for temp array and map
//  AS:O(N)

// map<int, bool> mpp;
// void helper(vector<int> &nums, vector<int> temp, vector<vector<int>> &ans, int idx)
// {
//     if (idx == nums.size())
//     {
//         ans.push_back(temp);
//         return;
//     }
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (mpp[nums[i]] == false)
//         {
//             temp.push_back(nums[i]);
//             mpp[nums[i]] = true;
//             helper(nums, temp, ans, idx + 1);
//             temp.pop_back();
//             mpp[nums[i]] = false;
//         }
//     }
// }
// vector<vector<int>> permute(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     helper(nums, {}, ans, 0);
//     return ans;
// }

//APPROACH-2
// TC : O(N!*N) = *N for storing temp in ans
//SC : O(N!*N) for storing permutaion in array; 
// AS:O(N)

// void helper(vector<int> &nums, vector<vector<int>> &ans, int idx)
// {
//     if (idx == nums.size())
//     {
//         ans.push_back(nums);
//         return;
//     }
//     int n = nums.size();
//     for (int i = idx; i < n; i++)
//     {
//         swap(nums[i], nums[idx]);
//         helper(nums, ans, idx + 1);
//         swap(nums[i], nums[idx]);
//     }
// }
// vector<vector<int>> permute(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     helper(nums, ans, 0);
//     return ans;
// }