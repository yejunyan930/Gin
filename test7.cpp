#include<stdio.h>
#include<stdlib.h>
typedef int SElemType;
#include"SeqStack.h"
void main(){
	Sqstack s;
	SElemType e;
	int n, i;
	InitStack(s);
	printf("输入栈元素的个数:");
	scanf_s("%d", &n);
	printf("输入元素:");
	for (i = 0; i<n; i++){
		scanf_s("%d", &e);
		Push(s, e);
	}
	printf("栈的长度为%d\n", StackLength(s));
	printf("当前的栈顶元素为%d \n", GetTop(s));
	printf("栈内元素为:");
	StackTraverse(s);
	printf("出栈后的元素为");
	Pop(s);
	StackTraverse(s);
	DestroyStack(s);
}