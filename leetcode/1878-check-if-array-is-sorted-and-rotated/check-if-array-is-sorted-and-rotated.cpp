class Solution {
public:
    bool check(vector<int>& nums) {
        std::vector<int> nums1=nums;
        std::sort(nums.begin(),nums.end());
        int count=0;
        int a=0;
        int c=0;
        while(count!=1){
            a=nums1.back();
            for(int i=nums1.size()-1;i>0;i--){
                nums1[i]=nums1[i-1];
            }
            nums1.front()=a;
            if(nums==nums1){
                return true;
                count=1;
            }
            c++;
            if(c>nums1.size()) break;
        }
        return false;

    }
};