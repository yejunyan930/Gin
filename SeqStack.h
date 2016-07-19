
typedef struct{
	SElemType *base;
	SElemType *top;
	int stacksize;
}Sqstack;
#define MAXSIZE 100
int InitStack(Sqstack &s)
{
	s.base = new SElemType[MAXSIZE];
	if (!s.base)
		exit(1);
	s.top = s.base;
	s.stacksize = MAXSIZE;
	return true;
}
int StackEmpty(Sqstack s)
{
	if (s.base == NULL)
		return -1;
	if (s.base == s.top)
		return true;
	return false;
}

int DestroyStack(Sqstack &s)
{
	if (s.base == NULL)
		return false;
	if (StackEmpty(s)){
		free(s.base);
		free(s.top);
		printf("Ïú»Ù¿ÕÕ»³É¹¦\n");
	}
	free(s.base);
	s.base = s.top = NULL;
	s.stacksize = 0;
	return true;
}


int	StackLength(Sqstack s){
	if (s.base == NULL)
		return -1;
	return s.top - s.base;
}


int Push(Sqstack &s, SElemType e)
{
	if (s.top - s.base == s.stacksize)
		return -1;
	*s.top++ = e;
	return true;
}


SElemType Pop(Sqstack &s)
{
	char e;
	if (s.top == s.base)
		return -1;
	e = *--s.top;
	return e;
}

SElemType GetTop(Sqstack s)
{
	if (s.top != s.base)
		return *(s.top - 1);
}


int StackTraverse(Sqstack s)   
{
	Sqstack q;
	q = s;
	if (s.top == s.base)
		return -1;
	while (q.top != q.base) {
		printf("%d", *--q.top);
	}
	printf("\n");
	return true;
}