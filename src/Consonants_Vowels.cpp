/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

int is_vowel(char);

void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	int i;
	*consonants = *vowels = 0;
	if (str == NULL)
		return;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (((str[i] >= 65) && (str[i] <= 90)) || ((str[i] >= 97) && (str[i] <= 122)))
		{
			if (is_vowel(str[i]))
				(*vowels)++;
			else
				(*consonants)++;
		}
	}
}
int is_vowel(char c)
{
	int i;
	if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U'))
	{
		return 1;
	}
	return 0;
}