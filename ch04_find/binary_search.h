#include <iostream>
#include <string>
using namespace std;

//二分查找
/*
@param input :array 输入数组
@param input :length 数组长度
@param input :value 查找值
*/
int binary_search(int array[], int length, int value) {
	int start = 0;
	int end = length - 1;

	while (start <= end)  //  '=<'  '<' all right?
	{
		int middle = start + ((end - start) >> 1);  //>> 优先级 低低于 +
		if (array[middle] == value)
			return middle;
		else if (value > array[middle]) {
			start = middle + 1;
		} else {
			end = middle - 1;
		}
	}
	return -1;
}