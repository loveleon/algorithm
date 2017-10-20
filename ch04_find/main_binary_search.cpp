#include "binary_search.h"
#include <cstdlib>  //atoi
#include <cstdio>

int main(int argc, char *argv[]) {
	int arr[] = {1, 2, 3, 4, 5, 5, 7, 8, 9, 10, 11};  //二分查找输入
	int index = -1;
	index = binary_search(arr, sizeof(arr) / sizeof(int),
	                      atoi(argv[1]));  // argv1 输入查找值
	printf("index : %d\n", index);
	return 0;
}