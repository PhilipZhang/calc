
#include "stack.h"

#define MAX_STACK 100

static int top = -1;
static double arr[MAX_STACK];

double pop()
{
	if(top >= 0)
		return arr[top--];
	return 0;
}

void push(double f)
{
	if(++top < MAX_STACK)
		arr[++top] = f;
}
