class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //insert into a map
        map<int,int> n_map;
        for(int i=0;i<nums.size();i++){
            n_map[nums[i]] = i;
        }

        int idx = 0;
        while(idx < nums.size()){
            int difference = target - nums[idx];
            if(n_map.find(difference)!=n_map.end() && n_map[difference]!=idx){
                return {idx, n_map[difference]};
            }
            idx++;
        }
        return {};
    }
};
