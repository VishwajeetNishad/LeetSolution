class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        map<int,int>sum;
        for(int i=0;i<n;i++){
        int num = nums[i];
        int required = target - num;
            if(sum.find(required) != sum.end()){
                return {sum[required],i};
            }
            sum[num] =i;
        }
        return {-1,-1};
    }
};