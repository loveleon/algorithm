#include <iostream>
#include <string>

void bubble_sort(int array[], int length) {
	int outter = 0, inner = 0;
	int median = 0;

	for (outter = length - 1; outter >= 1; outter--) {
		for (inner = 0; inner < outter; inner++) {
			if (array[inner] > array[inner + 1]) {
				// array[inner] = median;
				median = array[inner];
				array[inner] = array[inner + 1];
				array[inner + 1] = median;
			}
		}
	}
}

//如果任何一次array[inner]与array[inner+1]没有交换过，
//则，array[]已经有序了。注意：outter 临界条件
void bubble_sort_with_flag(int array[], int length) {
	int outter = 0, inner = 0;
	int flag = 1;
	int median = 0;

	for (outter = length - 1; outter >= 1; outter--) {
		flag = 0;
		for (inner = 0; inner < outter; inner++) {
			if (array[inner] > array[inner + 1]) {
				median = array[inner];
				array[inner] = array[inner + 1];
				array[inner + 1] = median;
				if (flag == 0) flag = 1;  //只要没有交换过，则置flag = 1
			}
		}
	}
}

void print(int array[], int length) {
	for (int i = 0; i < length; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}