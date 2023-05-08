#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ab;
	ssize_t nrd, nwr;
	char *mop;

	if (!filename)
	return (0);

	ab = open(filename, O_RDONLY);

	if (ab == -1)
		return (0);

	mop = malloc(sizeof(char) * (letters));
	if (!mop)
	return (0);

	nrd = read(ab, mop, letters);
	nwr = write(STDOUT_FILENO, mop, nrd);

	close(ab);

	free(mop);

	return (nwr);
}
