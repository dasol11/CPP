#include <stdio.h>
#include <string.h>

int main(void)
{
	wchar_t str[] = L"ABC"; // 유니코드 문자열
	int size = sizeof(str);
	int len = wcslen(str); // strlen을 사용하면 유니코드기반의 문자열이기 때문에 컴파일에러 발생  
	
	printf("배열의 크기: %d \n", size);
	printf("문자열 크기: %d \n", len);
	
	return 0;

}