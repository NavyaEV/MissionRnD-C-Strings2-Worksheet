/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int stringlen(char *);
int bruteforce(char *, char *);
int stringlen(char *s)
{
	int i = -1;
	while (s[++i] != '\0')
	{
	}
	return i;
}
int bruteforce(char *text, char *pattern)
{
	int i, j, occ_count = 0;
	for (i = 0; i<stringlen(text); i++)
	{
		if (text[i] == pattern[0])
		{
			for (j = 1; j<stringlen(pattern); j++)
			{
				if (text[i + 1] == pattern[j])
					i++;
				else
					break;
			}
			if (j == stringlen(pattern))
			{
				occ_count++;
				if (stringlen(pattern) == 1)
				{
					i = i;
				}
				else
				{
					i = i - 1;
				}
			}
		}

	}
	return occ_count;
}

int count_word_in_str_way_1(char *str, char *word){
	int i;
	if ((str == NULL) || (word == NULL))
		return -1;
	i = bruteforce(str, word);
	return i;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}
