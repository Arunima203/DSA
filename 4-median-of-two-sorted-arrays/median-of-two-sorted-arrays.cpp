class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 =nums1.size();
        int n2 =nums2.size();
        int i,j;
        int k = i+j;
        vector<int> nums(n1+n2);
        int n=n1+n2;
        for( i=0;i<n1;i++) {
            nums[i]=nums1[i];
        }
        for(int j=0;j<n2;j++){
            nums[n1+j]=nums2[j];
        }
        sort(nums.begin(),nums.end());
        for(int k=0;k<n;k++) {
            cout<<nums[k] << " ";
        }    
        
        if(n%2!=0) {
            return nums[n/2];
        }
        else
            return (nums[(n/2)-1]+nums[n/2])/2.0;
        
    }
};