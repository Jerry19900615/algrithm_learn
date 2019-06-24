#include <stdio.h>

/**
*binary_search 对实现有序数组的二分查找
*numbers要查找的数组
*count数组的长度
*item要查找的元素
*成功返回元素的index, 失败返回-1
*/
int binary_search(int numbers[], int count, int item) {
	int low, high;
	low = 0;
	high = count-1;

	while(low <= high) {
		int mid = (low+high)/2;
		int guess = numbers[mid];
		if (guess == item) {
			return mid;
		} else if (guess < item) {
			low = mid+1;
		} else {
			high = mid-1;
		}
	}
	return -1;
}


int main(int argc,char **argv) {
	int nums[] = {1, 2, 3, 4, 5};
	int item = 3;
	int idx = binary_search(nums, sizeof(nums)/sizeof(nums[0]), item);
	if (idx == -1) {
		printf("not found %d\n", item);
		return 0;
	}
	printf("index of %d is %d\n", item, idx);
	return 0;
}