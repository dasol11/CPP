#include <stdio.h>

int main(void)
{

	int arr[] = { 11,22,33 };
	int* ptr = arr;
	// *ptr + 1이면 11 + 1 저장된 값인 11 을 불러오고 1 더하기
	// *(ptr+1)이면 주소+4
	printf("%d %d %d", *ptr, *(ptr + 1), *ptr + 1);

}