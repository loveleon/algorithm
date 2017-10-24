#include <iostream>

void insert_sort(int array[], int length) {
	int outter = 0, inner = 0;
	int median = 0;  // median 是个哨兵,

	for (outter = 1; outter <= length - 1; outter++) {
		if (array[outter] < array[outter - 1]) {
			//如果a[outter] > 有序区中所有，则a[outter]位置不变
			median = array[outter];  // median 是个哨兵，且是a[outter]副本
			inner = outter - 1;
			do {  //在a[1,...outter-1]范围查找a[outter]插入位置
				array[inner + 1] = array[inner];  //将关键字大于a[outter]的右移
				inner--;
			} while (median < array[inner]);
			array[inner + 1] = median;
		}
	}
}