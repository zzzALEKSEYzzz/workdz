#include <stdio.h>
#include <stdlib.h>

int pusk;

int main()
{
	FILE *fp;

	//���� ����� ��� �� ��� ������ ������
	if (!fopen("save.txt", "r")) { printf("first-run!\n"); }
	else  printf("run!\n"); 
	
	printf("enter an integer: ");
	scanf("%d", &pusk);

	//��������� ����� � ����
	fp = fopen("save.txt", "a");
	fprintf(fp, "%d ", pusk);
	fclose(fp);

	//������� � ������� ���������
	if (pusk != 42) { pusk++; printf("%d\n", pusk); }
	else  printf("The Ultimate Question\n"); 

	system("pause");
	return 0;
}