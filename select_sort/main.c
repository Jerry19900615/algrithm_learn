#include <stdio.h>


/**
 * 选择排序
 */

void select_sort(int numbers[], int count) {
    int lowest_index = 0, tmp;
    int i, j;
    for (i = 0; i < count-1;i ++) {
        lowest_index = i;
        for (j=i+1;j < count;j++) {
            if (numbers[j] < numbers[lowest_index]) {
                lowest_index = j;
            }
        }
        tmp = numbers[i];
        numbers[i] = numbers[lowest_index];
        numbers[lowest_index] = tmp;
    }
}

int main(int argc,char **argv) {
    int nums[] = {4, 2, 1, 5, 7, 9};
    printf("nums[0] = %d\n", nums[0]);
    select_sort(nums, 6);
    printf("nums[0] = %d\n", nums[0]);
    return 0;
}