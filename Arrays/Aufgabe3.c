//#include <stdio.h>
//
//void main()
//{
//	int zahlen[] = { 3,6,3,5,6,3,8,9,4,2,7,8,9,1,2,4,5 };
//	int zahlen2[] = { 3,6,3,5,6,3,8,9,4,2,7,8,9,1,2,4,5,4,2,7,8,9,1,2,4,5 };
//
//	
//	if (sizeof(zahlen) > sizeof(zahlen2))
//	{
//		for (int i = 0; i < sizeof(zahlen) / sizeof(int); i++)
//		{
//			printf("%i", zahlen[i]);
//		}
//	}
//	else if (sizeof(zahlen) < sizeof(zahlen2))
//	{
//		for (int i = 0; i < sizeof(zahlen2) / sizeof(int); i++)
//		{
//			printf("%i", zahlen2[i]);
//		}
//	}
//
//	getchar();
//}