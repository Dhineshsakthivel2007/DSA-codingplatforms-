class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        vector<int> vec2;
        vec2=nums;
        nums.clear();
        for(int x:vec2)
        {
            if(x!=0)
            {
                nums.push_back(x);
            }
            else if(x==0)
            {
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            nums.push_back(0);
        }
    }
};