#include <cstdlib>

int find_no_recursive(int array[], int length, int value) {
	if (NULL == array || 0 == length) return -1;
	for (int index = 0; index < length; ++index) {
		if (array[index] == value) return index;
	}
	return -1;
}

// recursive
int _find(int index, int array[], int length, int value) {
	if (index == length) return -1;
	if (value == array[index]) return index;
	return _find(index + 1, array, length, value);
}
int find_recursive(int array[], int length, int value) {
	if (NULL == array || 0 == length) {
		return -1;
	}
	int index = 0;
	return _find(index, array, length, value);
}