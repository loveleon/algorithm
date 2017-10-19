#include "find_recurse.h"
#include <iostream>
#include <string>
#include <cstring>  // strlen
#include <cstdlib>  //atoi
using namespace std;

int main(int argc, char *argv[]) {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 21, 22, 23, 24};
	int value = atoi(argv[1]);  //待输入
	int index = -1;
	index = find_recursive(arr, sizeof(arr) / sizeof(int), value);
	cout << "index(1) : " << index << endl;

	return 0;
}