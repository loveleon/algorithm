#include <iostream>  //for NULL
// maybe define NULL 0
#define NULL 0
/*
*@param input:array[]  待排序数组
*@param input:length	数组大小
*@param input:step		(shell sort)步长(step每次减半，初始为长度一半)
*/
void shell_sort(int array[], int length, int step) {
	int outter = 0, inner = 0;
	int median = 0;

	if (NULL == array || 0 == length) {
		return;
	}

	//计算每趟shell sort，边界范围值
	// shell sort 最终到step = 1时候，最后一次排序
	for (; step >= 1; step -= 2) {  // test right
		// for (; step >= 1; step /= 2) {//test right
		//因为step = length/2（usually）
		for (int index = 0; index < step; index++) {
			if ((index + step) > (length - 1))  //越界
			{
				continue;
			} else {
				outter = index + step;  //每趟shell sort都需要calculate 边界值
				while ((outter + step) <= (length - 1)) {
					outter += step;  // outter 边界值
				}
			}

			for (; outter >= (index + step); outter -= step) {
				//每趟插入排序过程
				for (inner = index; inner <= (outter - step); inner += step) {
					//注意inner +=step not 'inner++'
					//类似冒泡
					if (array[inner] >= array[inner + step]) {
						median = array[inner];
						array[inner] = array[inner + step];
						array[inner + step] = median;
					}
				}
			}
		}

	}
}