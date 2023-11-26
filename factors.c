#include "factorize.h"

/**
 * main - factors main program
 * @argc: args count
 * @argv: args vector
 * Return: EXIT_SUCCESS on success, otherwise EXIT_FAILURE
 */
int main(int argc, char **argv)
{
	FILE *stream;
	char *snum;
	long int num;
	size_t n;

	if (argc == 2)
	{
		if (access(argv[1], F_OK | R_OK))
		{
			fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		} else
		{
			stream = fopen(argv[1], "r");
			getline(&snum, &n, stream);
			while (!feof(stream))
			{
				num = atol(snum);
				factorize(num);
				getline(&snum, &n, stream);
			}
			fclose(stream);
			return (EXIT_SUCCESS);
		}
	} else
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
}
