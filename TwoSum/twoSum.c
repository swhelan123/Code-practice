// function to find two numbers in an array that add up to a target value

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int len, int target) {

  int *result = (int *)malloc(2 * sizeof(int));

  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (nums[i] + nums[j] == target) {
        result[0] = i;
        result[1] = j;
        return result;
      }
    }
  }
  return NULL;
}

int main(void) {

  int target = 5;

  int nums[] = {1, 2, 3, 4, 5};

  int len = sizeof(nums) / sizeof(nums[0]);

  int *result = twoSum(nums, len, target);

  printf("Indices: %d, %d\n", result[0], result[1]);

  free(result);

  return 0;
}
