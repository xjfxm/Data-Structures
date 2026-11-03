#include<stdio.h>
#define MAXSIZE 10
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE];
	int length;
}SeqList;
void initList(SeqList* L)
{
	L->length = 0;
}
int appendElem(SeqList *L, int num)
{
	if (L->length >= MAXSIZE)
	{
		printf("full");
			return 0;
	}
	L->data[L->length] = num;
	L->length++;
	return 1;
}
int main()
{
	SeqList L;
	initList(&L);
	appendElem(&L, 22);

}