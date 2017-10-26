#include <iostream>
#include <cstring>

static int gQuickSort[1024] = {0};

int get_middle(int arr[], int start, int end) {
	// gQuickSort
	int front = 0;           //区间位置 游标
	int tail = end - start;  //存放在gQuickSort数组 区间位置 游标

	// loop
	int flag_value = arr[start];        //基准值（关键字）
	int postion = start + 1;            // why not 'start' ,else 'start + 1'
	int copy_length = end - start + 1;  // to remake a sorted array .

	while (postion <= end)  // when the array size == 2, it also work well.
	{
		if (arr[postion] > flag_value) {
			gQuickSort[tail] = arr[postion];
			tail--;
		} else {
			gQuickSort[front] = arr[postion];
			front++;
		}
		postion++;
	}

	gQuickSort[front] = flag_value;
	memmove(&arr[start], gQuickSort,
	        sizeof(int) * copy_length);  // partion sorted by the 'flag_value'

	return start + front;  // the postion which  is setted to the 'flag_value' in
	// gQuickSort.
	// when return the postion ,the array[] also has been sorted by the 'flag
	// value'(the postion).
	// So,we must know the flag_value' new position in the sorted array[]
}

void _quick_sort(int arr[], int start, int end) {
	int middle = 0;
	if (start >= end) {
		// std::cout << "start :" << start << "end :" << end << std::endl;
		return;  // this is rcursive loop end condition. Very important.
	}

	middle = get_middle(arr, start, end);
	_quick_sort(arr, start, middle - 1);
	_quick_sort(arr, middle + 1, end);
}

void quick_sort(int arr[], int length) {
	int median = 0;
	if (NULL == arr || 0 == length) {
		return;
	}
	// the 3rd parameter is 'length-1' not 'length'
	// because it doesn't contain the arr[length],it
	// ends at arr[length-1]
	//[0,length-1] [0,length)
	_quick_sort(arr, 0, length - 1);
}