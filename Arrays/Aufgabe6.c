//#include <stdio.h>
//
//void main()
//{
//	char array1[] = "Arrays finde ich super";
//	char temp;
//
//	//6a
//	/*for (int i = 0; i < (sizeof(array1) / sizeof(char)) - 1; i+=2)
//	{
//		temp = array1[i];
//		array1[i] = array1[i + 1];
//		array1[i + 1] = temp;
//	}
//
//	for (int i = 0; i < sizeof(array1) / sizeof(char); i++)
//	{
//		printf("%c", array1[i]);
//	}*/
//
//
//
//	//6b
//	temp = array1[0];
//	for (int i = 1; i < sizeof(array1) / sizeof(char); i++)
//	{
//		array1[i - 1] = array1[i];
//	}
//	array1[sizeof(array1) / sizeof(char) - 2] = temp;
//
//	for (int i = 0; i < sizeof(array1) / sizeof(char); i++)
//	{
//		printf("%c", array1[i]);
//	}
//
//	getchar();
//}