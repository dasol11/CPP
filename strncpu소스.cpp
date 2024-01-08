#include <stdio.h>
#include <string.h>

char* my_strncpy( char *pd,  char *ps, int n);

int main(void) {

	
	char str[80] = "strawberry";
	printf("바꾸기전 문자 : %s", str);
	char str2[80] = "apple";
	my_strncpy(str, str2 , 4);
	printf("바뀐 후 문자 : %s", str);
	return 0;

}



char* my_strncpy(char* pd,  char* ps, int n)
{
	int i = 0;
	char* po = pd;
	while (i < n)
	{
		*pd =  *ps;
		pd++;
		pd++;
	}
	*pd = '\0';
	return 0;


}