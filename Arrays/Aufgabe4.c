//#include <stdio.h>
//
//void main()
//{
//	char array1[] = "Programmieren ist schoen!              ";
//	char array2[] = "Der Computer funktioniert nicht!       ";
//	char arrayTemp[] = "Programmieren ist schoen!                ";
//
//	for (int i = 0; i < sizeof(array1) / sizeof(char); i++)
//	{
//		printf("%c", array1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sizeof(array2) / sizeof(char); i++)
//	{
//		printf("%c", array2[i]);
//		array1[i] = array2[i];
//		array2[i] = ' ';
//	}
//
//	printf("\n\n");
//
//	for (int i = 0; i < sizeof(arrayTemp) / sizeof(char); i++)
//	{
//		array2[i] = arrayTemp[i];
//	}
//
//	for (int i = 0; i < sizeof(array1) / sizeof(char); i++)
//	{
//		printf("%c", array1[i]);
//	}
//	printf("\n");
//
//	for (int i = 0; i < sizeof(array2) / sizeof(char); i++)
//	{
//		printf("%c", array2[i]);
//	}
//	getchar();
//}