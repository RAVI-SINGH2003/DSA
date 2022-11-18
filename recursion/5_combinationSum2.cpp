//Approach -1 using sets
//TC: O(2^N *(2^N)log(2^N))
// class Solution
//{
// public:
//     set<vector<int>> s;
//     void helper(vector<int> &v, vector<int> temp, int target, int sum, int idx)
//     {
//         if (sum == target)
//         {
//             sort(temp.begin(), temp.end());
//             s.insert(temp);
//             return;
//         }
//         if (sum > target)
//         {
//             return;
//         }
//         if (idx >= v.size())
//             return;
//         temp.push_back(v[idx]);
//         sum += v[idx];
//         helper(v, temp, target, sum, idx + 1);
//         temp.pop_back();
//         sum -= v[idx];
//         helper(v, temp, target, sum, idx + 1);
//     }
//     vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
//     {
//         helper(candidates, {}, target, 0, 0);
//         vector<vector<int>> ans(s.begin(), s.end());
//         return ans;
//     }
// };

//Approach -2(optimal)

//TC : O(2^N *K)  //k is the aveage length of combinations  *k for storing temp in ans
//SC: O(k*x) x=no of combinations and k = average length of combinations
// AS = O(N)

// class Solution
// {
    // public: 
    // vector<vector<int>> ans;
    // void helper(vector<int> &v, vector<int> temp, int target, int idx)
    // {
    //     if (target==0)
    //     {
    //         ans.push_back(temp);
    //         return;
    //     }
    //     for(int i = idx; i<v.size(); i++)
    //     {
    //         if(v[i]>target)
    //         break;
    //         if(i==idx || v[i]!=v[i-1])
    //         {
    //             temp.push_back(v[i]);
    //             helper(v,temp,target-v[i],i+1);
    //             temp.pop_back();
    //         }
    //     }
    // }
    // vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    // {
    //     sort(candidates.begin(),candidates.end());
    //     helper(candidates, {}, target, 0);
    //     return ans;
    // }
    // };


           

