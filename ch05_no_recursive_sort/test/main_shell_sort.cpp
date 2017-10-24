#include <iostream>
#include <string>
#include "../shell_sort.h"

using namespace std;

void print(int array[], int length) {
	for (int index = 0; index < length; index++) {
		std::cout << array[index] << " ";
	}
	std::cout << std::endl;
	return;
}

int main(int argc, char *argv[]) {
	int arr_2n[] = {13, 4, 49, 38, 27, 49, 5, 6, 9, 76};
	int arr_2n_1[] = {13, 4, 49, 38, 27, 49, 5, 6, 9, 76, 1};
	int length_2n = sizeof(arr_2n) / sizeof(int);
	int length_2n_1 = sizeof(arr_2n_1) / sizeof(int);
	int step_2n = length_2n / 2;
	int step_2n_1 = length_2n_1 / 2;

	shell_sort(arr_2n, length_2n, step_2n);
	print(arr_2n, length_2n);

	shell_sort(arr_2n_1, length_2n_1, step_2n_1);
	print(arr_2n_1, length_2n_1);

	return 0;
}