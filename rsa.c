#include "factors.h"

/**
 * main - 
 * @argc:
 * @argv:
 * Return:
 */
int main(int argc, char **argv)
{
	FILE *stream;
	char *snum;
	long int num; /* should be extensible */
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
			num = atol(snum);
			factorize(num);
			fclose(stream);
			return (EXIT_SUCCESS);
		}
	} else
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
}

/**
 * factorize - 
 * @n:
 * Return:
 */
void factorize(long int n)
{
	/*unsigned long long p, q, i;

	for (i = 2; i < n / 2; i++)
	{
		
	}
	printf("%llu=%llu*%llu\n", n, p, q);
	*/
	long int f;

if (n%2 == 0){
	printf("%lu=%lu*%i\n", n, n/2, 2);
	return;
}

f = 3;
while (f*f <= n)
{
	if (n%f == 0){
		printf("%lu=%lu*%lu\n", n, n/f, f);
		return;
	}
	else{
		f += 2;
	}
}
printf("%lu=%lu*%i\n", n, n, 1);
return;
}
