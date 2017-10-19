#include "traversal_point.h"

int main(int argc, char *argv[]) {
	int length = atoi(argv[1]);  // list length
	assert(length > 0);

	NODE *pnode_list = make_test_node_list(length);
	print_recurse(pnode_list);

	return 0;
}