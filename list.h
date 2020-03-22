typedef int DataType;

typedef struct ListNode{
	struct ListNode* _next;
	struct ListNode* _prev;
	DataType _data;
}ListNode;

typedef struct List{
	ListNode* _header;
}List;

void ListInit(List* lst);
void ListPushBack(List* lst, DataType data);
void ListPushFront(List* lst, DataType data);
void ListPopBack(List* lst);
void ListPopFront(List* lst);
void ListInsert(List* lst, DataType data);
void ListErase(ListNode* lst);
void printList(List* lst)


