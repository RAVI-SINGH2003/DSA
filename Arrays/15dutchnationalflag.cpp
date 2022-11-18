//ye problem na quicksort ke partotion function ka hi modification hai
//   void sortColors(vector<int>& nums) {
//         //see prpcoding sort 0,1,2 
//         //maintain 3 pointers i j k
//         //0 to i-1 0s
//         //i to j-1 1s
//         //j to k unknown
//         //k+1 till end 2s       
//         int n = nums.size(); 
//         int low = 0,high = n-1 , mid = low;
//         while(mid<=high)
//         {
//             switch(nums[mid])
//             {
//                 case 0 : swap(nums[mid++] ,nums[low++]); break;
//                 case 1 : mid++; break;
//                 case 2 : swap(nums[mid] ,nums[high--]); break;
//             }
//         }
//     }