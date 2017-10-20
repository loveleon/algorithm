#include <cassert>
typedef struct _NODE {
	int data;
	struct _NODE *left;
	struct _NODE *right;
} NODE;

NODE *find_data(NODE *pnode, int value)  // sorted binary tree
{
	// assert(pnode != NULL);
	if (NULL == pnode) return NULL;

	if (pnode->data == value) return pnode;
	if (pnode->data > value) {
		return find_data(pnode->left, value);
	} else {
		return find_data(pnode->right, value);
	}
	// return NULL;
}