#include <stdio.h>
#include <memory.h>
#include "list.h"

//void ListInit(List* lst){
//	 // 初始化空的带头双向循环链表
//	lst->_header = (ListNode*)malloc(sizeof(ListNode));
//
//}
//
//void ListPushBack(List* lst, DataType data){
//	ListNode* node = createListNode(data);
//	ListNode* prev = lst->_header->_prev;
//	prev->_next = ;
//}
//
//void ListPushFront(List* lst, DataType data){
//
//}
// 尾删
void ListPopBack(List* lst){
	ListNode* header = lst->_header;
	if (header->_next == header)
		return NULL;
	ListNode* last = lst->_header->_next;
	ListNode* prev = lst->_header->_prev;
	
		free(cur);
	}
}
//
//void ListPopFront(List* lst);
//void ListInsert(List* lst, DataType data);
//void ListErase(ListNode* pos);
void printList(List* lst){
	ListNode* cur = lst->_header;
	while (cur){
		printf("%d ", cur);
		cur = cur->_next;
	}
	printf("\n");
}
