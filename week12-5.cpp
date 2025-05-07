//week12-5.cpp
//Leetcode1920. Build array from permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size(); //陣列的大小
        vector<int> ans(N); //C++的陣列大小射程n
        //題目說FOR迴圈對所有的i
        for(int i=0; i<N; i++){
            ans[i] = nums[nums[i]];//照著公視做
        }



        return ans;

    }
};
