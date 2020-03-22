#include "list.h"
void test(){
	List lst;
	ListInit(&lst);
	LisPushBack(&lst, 1);
	LisPushBack(&lst, 2);
	LisPushBack(&lst, 3);
	LisPushBack(&lst, 4);
	LisPushBack(&lst, 5);
	printList(&lst);
	ListPopBack(&lst);
	printList(&lst);
}
int main(){
	test();
	system("pause");
	return 0;
}