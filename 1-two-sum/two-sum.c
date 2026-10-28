/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* n=(int*)malloc(2 * sizeof(int));
    for(int i=0;i<numsSize;i++) {
        for(int j=numsSize-1;j>=i+1;j--) {
            if(nums[i]+nums[j]==target) {
               n[0]=i;
               n[1]=j;
            }
        }
    
    }

return n ;    
}