#include <stdio.h>

//��������� ����� ����� ����� �� � �� 500 (�������� � ������� �������������)  

int main()
{
	int a;
	printf("Enter a ");
	scanf_s("%d", &a);
	int x = a;
	while (x < 500)
	{
		x++;
		a += x;
	}
	printf("Sum = %d", a);


	getchar(); getchar();
	return 0;
}