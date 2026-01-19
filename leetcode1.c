#include <stdlib.h>
#include <stdio.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    for (int j = 0 ; j < numsSize ; j++){
        for (int i = j + 1 ; i < numsSize ; i++){
            if (nums[i] + nums[j] == target){
                int* result = malloc(2*sizeof(int));
                if (result == NULL){
                    return NULL;
                }
                result[0] = i, result[1] = j;
                return result;
            }
        }
        

    }
    return NULL;
}