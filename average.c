extern int count;
extern int total;
// main의 total은 정적 변수이기 때문에 input.c의 total을 공유함

double average(void)
{
	return total / (double)count;

}