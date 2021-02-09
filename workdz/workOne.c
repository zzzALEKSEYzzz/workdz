#include <stdio.h>
#include <stdlib.h>

int pusk;

int main()
{
	FILE *fp;

	//если файла нет то это первый запуск
	if (!fopen("save.txt", "r")) { printf("first-run!\n"); }
	else  printf("run!\n"); 
	
	printf("enter an integer: ");
	scanf("%d", &pusk);

	//сохраняем число в файл
	fp = fopen("save.txt", "a");
	fprintf(fp, "%d ", pusk);
	fclose(fp);

	//выводим в консоль результат
	if (pusk != 42) { pusk++; printf("%d\n", pusk); }
	else  printf("The Ultimate Question\n"); 

	system("pause");
	return 0;
}