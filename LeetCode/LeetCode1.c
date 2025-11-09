//Code: Find Indices of Two Numbers That Add Up to Target
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int result[2];  // static so it can be returned safely
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL; // if no pair found (though the problem guarantees one)
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    
    int* ans = twoSum(nums, 4, target, &returnSize);
    
    if (ans != NULL) {
        printf("[%d, %d]\n", ans[0], ans[1]);
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
