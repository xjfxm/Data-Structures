#include<stdio.h>
#define MAXSIZE 20
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE];
	int length;
}SeqList;
void initList(SeqList *L)
{
	L->length = 0;
}
int main()
{
	SeqList L;
	initList(&L);
	printf("%d\n", L.length);
	return 0;
}