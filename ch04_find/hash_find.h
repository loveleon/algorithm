#include <iostream>
#include <string>
using namespace std;

typedef struct _NODE_LIST {
	int data;
	struct _NODE_LIST* next;
} NODE_LIST;

NODE_LIST* hash_find(NODE_LIST* array[], int mod, int value) {
	// if (NULL == array) {
	// 	return NULL;
	// }

	// array[value % mod] = (NODE_LIST *)malloc(sizeof(NODE_LIST));
	int index = value % mode;
	if (NULL == array[index]) return NULL;

	NODE_LIST* pnode = array[index];
	while (pnode) {
		if (value == pnode->data)
			return pnode;
		else {
			pnode = pnode->next;
		}
	}
	// return NULL;
	return pnode;  // pnode == NULL
}