class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans1=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second==1){
                ans1=ans1+i.first;
            }
        }
        return ans1;
    }
};
