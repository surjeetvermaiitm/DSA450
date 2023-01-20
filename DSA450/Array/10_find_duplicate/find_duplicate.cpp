class Solution {
public:
    //hashing method
    // int findDuplicate(vector<int>& nums) {
    //     int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         if(nums[abs(nums[i])]<0){
    //             return abs(nums[i]);
    //         }
    //         else{
    //             nums[abs(nums[i])]=-1*nums[abs(nums[i])];
    //         }
    //     }
    //     return -1;
    // }
    //ll cycle concept
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        //find tip of cycle;
        int p1=nums[0];
        int p2=slow;
        while(p1!=p2){
            p1=nums[p1];
            p2=nums[p2];
        }
        return p1;
    }
};