class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini = 1,maxi=1;

        for(int i=1;i<(int)nums.size();i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i] == nums[i-1]+1){
                maxi++;
            }
            else{
                maxi = max(maxi,mini);
                mini = 1;
            }
        }
        return max(maxi,mini);

    }
};
