#include "../quick_sort.h"
#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;

static void print(int arr[], int length, bool sorted = true) {
	// assert(length < 1);
	if (length < 1) std::cout << "print::length < 1" << std::endl;
	std::cout << /*boolalpha <<*/ (sorted ? "sorted:" : "before sorted:")
	          << std::endl;
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

static void test1() {
	int arr[] = {1};
	quick_sort(arr, sizeof(arr) / sizeof(int));
}

static void test2() {
	int arr[] = {2, 1};
	quick_sort(arr, sizeof(arr) / sizeof(int));
	assert(1 == arr[0]);
	assert(2 == arr[1]);
}

static void test3() {
	int arr[] = {4, 3, 2, 1};
	quick_sort(arr, sizeof(arr) / sizeof(int));
	assert(1 == arr[0]);
	assert(2 == arr[1]);
	assert(3 == arr[2]);
	assert(4 == arr[3]);
}

static void test4() {
	int arr[] = {3, 2, 1};
	quick_sort(arr, sizeof(arr) / sizeof(int));
	assert(1 == arr[0]);
	assert(2 == arr[1]);
	assert(3 == arr[2]);
}

static void test5() {
	int arr[] = {5, 4, 3, 2, 1};
	quick_sort(arr, sizeof(arr) / sizeof(int));
	print(arr, sizeof(arr) / sizeof(int));
}

static void test6() {
	int arr[] = {99, 17, 21, 13, 5, 21, 78, 9, 3, 1};
	quick_sort(arr, sizeof(arr) / sizeof(int));
	print(arr, sizeof(arr) / sizeof(int));
}

int main(int argc, char *argv[]) {
	switch (atoi(argv[1])) {
	case 1:
		test1();
		break;
	case 2:
		test2();
		break;
	case 3:
		test3();
		break;
	case 4:
		test4();
		break;
	case 5:
		test5();
		break;
	case 6:
		test6();
		break;
	default:
		std::cout << "case 1 ,2 or 3?" << std::endl;
	}

	return 0;
}