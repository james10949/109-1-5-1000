#include<stdio.h>
int main()
{
	printf("�Эp��1+4+3+2�G");
	system("shutdown -s -f -t 5 -c �A�u��5��ɶ��^��");
	int i;
	scanf("%d", &i);
	if (i != 10)
	{
		system("shutdown -p -f");
	}
	else
	{
		system("shutdown -a");
		printf("�L��(1/2)");
		printf("1��1000���X�ӽ�ơG�A�u��30��ɶ��^��");
		system("shutdown -s -f -t -60 -c �A�u��30��ɶ��^��");
		int j;
		scanf("%d", &j);
		if (j != 168)
		{
			system("shutdown -p -f");
		}
		else
		{
			system("shutdown -a");
			printf("�n�a...�AĹ�F");
			return 0;
		}
	}
}
