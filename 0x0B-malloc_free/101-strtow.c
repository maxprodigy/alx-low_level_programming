#include "main.h"
#include <stdlib.h>

/**
*strtow - splits a stirng into words
*@str: string to be splitted
*
*Return: pointer to the array of splitted words
*/

char **strtow(char *str)
{
char **goose;
int i, j = 0, temp = 0, size = 0, words = num_words(str);

if (words == 0)
return (NULL);
goose = (char **) malloc(sizeof(char *) * (words + 1));

if (goose != NULL)
{
for (i = 0; i <= len(str) && words; i++)
{
if ((str[i] != ' ') && (str[i] != '\0'))
size++;
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
goose[j] = (char *) malloc(sizeof(char) * size + 1);
if (goose[j] != NULL)
{
while (temp < size)
{
goose[j][temp] = str[(i - size) +temp];
temp++;
}
goose[j][temp] = '\0';
size = temp = 0;
j++;
}
else
{
while (j-- >= 0)
free(goose[j]);
free(goose);
return (NULL);
}
}
}
goose[words] = NULL;
return (goose);
}

else
return (NULL);
}

/**
* count_words - counts the number of words in string
*@str: string to be used
*Return: number of words
*/

int count_words(char *str)
{
int i = 0, words = 0;

while (i <= len(str))

{
if ((str[i] != ' ') && (str[i] != '\0'))
{
i++;
}
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
words += 1;
i++; i;
}
else
{
i++;
}
}
return (words);
}

/**
* len - returns length of string
*@str: string to be counted
* Return: length of the string
*/

int len(char *str)
{
int len = 0;

if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
