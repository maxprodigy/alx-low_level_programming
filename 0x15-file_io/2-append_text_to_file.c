#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ab;
	int letters;
	int max;

	if (!filename)
	return (-1);

	ab = open(filename, O_WRONLY | O_APPEND);

	if (ab == -1)
	return (-1);

	if (text_content)
	{
	for (letters = 0; text_content[letters]; letters++)
			;

	max = write(ab, text_content, letters);

	if (max == -1)
	return (-1);
	}

	close(ab);

	return (1);
}
