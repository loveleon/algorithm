/*
*对一个节点链接中的所有数据进行打印
*
*/
#include <iostream>
#include <string>
#include <cstdio>  // printf
#include <cassert>
#include <cstdlib>  //rand() % 10
using namespace std;

typedef struct _NODE {
	int data;
	struct _NODE *next;
} NODE;

NODE *make_onenode(int ndata) {
	NODE *node = (NODE *)malloc(sizeof(NODE));
	// assert(node != NULL)
	node->data = ndata;
	node->next = NULL;
	return node;
}

NODE *make_test_node_list(int length) {
	int i = 0;
	assert(length > 0);

	NODE *phead = make_onenode(rand() % 100);

	for (i = 0; i < length - 1; i++) {
		NODE *tmp = make_onenode(rand() % 100);
		if (tmp != NULL) {
			tmp->next = phead;
			phead = tmp;
		}
	}
	return phead;
}

// print NODE
void print(NODE *pnode) {
	if (pnode == NULL) return;
	while (pnode) {
		printf("%d\t", pnode->data);
		pnode = pnode->next;
	}
}

// recursive print function 递归打印
//链表最后一个节点的next 指向NULL（零界）
void print_recurse(NODE *pnode) {
	if (NULL == pnode)
		return;
	else
		printf("%d\t", pnode->data);
	print_recurse(pnode->next);
}