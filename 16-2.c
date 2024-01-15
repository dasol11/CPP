#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[32];
	char* ps, * pt;
	int len = 1;
	ps = (char*)calloc(1, 1);

	while (1)
	{
		printf("메모 입력 : ");
		fgets(temp, sizeof(temp), stdin);
		temp[strlen(temp) - 1] = '\0';
		if (strcmp(temp, "end") == 0) break;
		len += strlen(temp) + 1;
		pt = (char*)realloc(ps, len);




	}



}