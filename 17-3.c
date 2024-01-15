#include <stdio.h>

struct profile
{
	char name[20];
	double grade;
	int eng;

};

void input_data(struct profile *ps);
void elite(struct profile *ps);

int main(void)
{

	struct profile new_staff[5];
	input_data(new_staff);
	elite(new_staff);

	return 0;
	
}

void input_data(struct profile* new_staff)
{
	
	int i;
	printf("이름, 학점, 영어, 점수를 입력하세여.\n");

	for (i = 0; i < 5; i++)
	{
		scanf("%s %lf %d", (*new_staff).name, &(*new_staff).grade, &(*new_staff).eng);
		new_staff++;

	}

	
}

void elite(struct profile* new_staff)
{
	int i;
	for (i = 0; i < 5; i++)
	{	
		if ((*new_staff).grade >= 4.0 && (*new_staff).eng >= 900)
		{
			printf("%s, %.1lf, %d\n", (*new_staff).name, (*new_staff).grade, (*new_staff).eng);
		}
		new_staff++;

	}
}