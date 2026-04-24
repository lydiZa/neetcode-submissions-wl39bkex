class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> n_map;
        for(int i=0;i<nums.size();i++){
            n_map[nums[i]] = i;
        }
        int j =0;
       while(j <nums.size()){
            int difference = target - nums[j];
            if(n_map.find(difference)!=n_map.end() && j != n_map[difference]){
                return {j, n_map[difference]};
            }
            j++;
       }
       return {};
    }
};
