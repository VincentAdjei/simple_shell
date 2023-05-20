#include "shell.h"

/**
 * *_strncpy - copies a string
 * @dest: the destination string
 * to be copied
 * @src: the source string
 * @n: the amount of characters
 * to be copied
 * Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest(j) = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * *_strncat - concatenates two strings
 * @dest: the first or destination str
 * @src: the second or source string
 * @n: the amount of bytes
 * to be maximally used
 * Return: the concanated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i])

/**
 * *_strncpy - copies a string
 * @dest: the destination string
 * to be copied
 * @src: the source string
 * @n: the amount of characters
 * to be copied
 * Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest(j) = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * *_strncat - concatenates two string
 * @dest: the first or destination str
 * @src: the second or source string
 * @n: the amount of bytes
 * to be maximally used
 * Return: the concanated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 * *_strchr - locates a character
 * in a string
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: (s) a pointer
 * to the memory areas
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
} != '\0')
#include "shell.h"

/**
 * *_strncpy - copies a string
 * @dest: the destination string
 * to be copied
 * @src: the source string
 * @n: the amount of characters
 * to be copied
 * Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest(j) = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * *_strncat - concatenates two strings
 * @dest: the first or destination str
 * @src: the second or source string
 * @n: the amount of bytes
 * to be maximally used
 * Return: the concanated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 * *_strchr - locates a character
 * in a  string
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: (s) a pointer
 * to the memory areas
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}		i++;
	while (src[j] != '\0' && j < n)
{
	dest[i] = src[j];
	i++;
	j++;
}
	if (j < n)
	dest[i] = '\0';
	return (s);
}
/**
 * *_strchr - locates a character
 * in a  string
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: (s) a pointer
 * to the memory areas
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}