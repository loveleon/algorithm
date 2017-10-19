#include "recursive_loop.h"
#include <cstdlib>  //atoi
#include <cassert>

int main(int argc, char *argv[]) {
	int m = atoi(argv[1]);
	assert(m > 0);
	int sum = calculate_recurs(m);
	cout << "sum :" << sum << endl;
	return 0;
}