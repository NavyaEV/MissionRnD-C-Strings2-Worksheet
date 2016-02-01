/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i = 0, l = 0, x = 0, y = 0;
	char *s = NULL;
	while (str[i] != '\0')
	{
		l = y;
		while (str[i] != 32)
		{
			x = i;
			l++;
			i++;
			if (str[i] == '\0')
				break;
		}
		y = l;
		while (str[i] == 32)
		{
			i++;
			y = 0;
		}
	}
	s = (char *)malloc(l*sizeof(char));
	for (i = (x - l + 1), y = -1; i < x + 1; i++)
	{
		s[++y] = str[i];
	}
	s[++y] = '\0';
	return &s[0];
}