// Problem5-2-3_CharacterCount.c : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char character;
	size_t count = 0;
	do
	{
		character = getchar();
		if (character == 'a')
		{
			count++;
		}
	} while (character != '\n');
	printf("%zu", count);
	return 0;
}

