#include <stdio.h>
#include <string.h>

int main(void) {

	char str[80];

	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	printf("ù ��° �ܾ� : %s \n", str);
	scanf("%s", str);
	printf("���ۿ� �����ִ� �ι�° �ܾ� : %n", str);
	
	return 0;
}