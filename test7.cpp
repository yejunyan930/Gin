#include<stdio.h>
#include<stdlib.h>
typedef int SElemType;
#include"SeqStack.h"
void main(){
	Sqstack s;
	SElemType e;
	int n, i;
	InitStack(s);
	printf("����ջԪ�صĸ���:");
	scanf_s("%d", &n);
	printf("����Ԫ��:");
	for (i = 0; i<n; i++){
		scanf_s("%d", &e);
		Push(s, e);
	}
	printf("ջ�ĳ���Ϊ%d\n", StackLength(s));
	printf("��ǰ��ջ��Ԫ��Ϊ%d \n", GetTop(s));
	printf("ջ��Ԫ��Ϊ:");
	StackTraverse(s);
	printf("��ջ���Ԫ��Ϊ");
	Pop(s);
	StackTraverse(s);
	DestroyStack(s);
}