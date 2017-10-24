#include "../bubble_sort.h"

int main(int argc, char* argv[]) {
	int arr[] = {100, 12, 34, 12, 56, 16, 21, 10, 11, 17, 1};
	bubble_sort(arr, sizeof(arr) / sizeof(int));
	print(arr, sizeof(arr) / sizeof(int));

	return 0;
}