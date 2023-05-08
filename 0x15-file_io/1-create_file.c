#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int ab;
	int letters;
	int max;

	if (!filename)
	return (-1);

	ab = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ab == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	max = write(ab, text_content, letters);

	if (max == -1)
	return (-1);

	close(ab);

	return (1);
}
