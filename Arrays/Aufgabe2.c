#include <stdio.h>

void main()
{
	char satz[] = "Der maximale Ertrag der subterraren Agrarprodukte steht im reziproken Verhältnis zur geistigen Kapazität ihrer Produzenten";
	
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < sizeof(satz) / sizeof(char); j++)
		{
			if ((int)satz[j] == i + (int)'A' || (int)satz[j] == i + (int)'a')				
			{
				printf("%c", satz[j]);
			}

			if (i < 3 && ((int)satz[j] == i + (int)'Ä' || (int)satz[j] == i + (int)'ä'))
			{
				printf("%c", satz[j]);
			}
		}
				
	}
	getchar();
}