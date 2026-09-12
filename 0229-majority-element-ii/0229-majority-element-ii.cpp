class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        int count = 1;
        sort(nums.begin(),nums.end());
        vector<int> mElement;
        
            for(int i =1;i<n;i++){
                if(nums[i] == nums[i-1]){
                    count++;          
                }    
        
                else {
                    if (count > n/3){
                    mElement.push_back(nums[i-1]);

                    }

                count=1;
            }   

            }
            if(count> n/3){
                     mElement.push_back(nums[n-1]);         
                }


        
        return mElement;    
    }
};