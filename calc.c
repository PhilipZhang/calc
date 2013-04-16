
#include "calc.h"
#define MAX_CMD_LENGTH 100 


double cal(const char* cmd, int* bValid)
{
	int i;
	int lnum, rnum;
	int mov; // the movement to read a number or operator, including spaces
	char op;
	for(i = 0; i < MAX_CMD_LENGTH && cmd[i] != '\0';)
	{
		mov = readNum(cmd, i, &lnum, bValid);
		i += mov;
		mov = readNum(cmd, i, &rnum, bValid);
		i += mov;
		mov = readOp(cmd, i, &op, bValid);
		i += mov;
	}
}
