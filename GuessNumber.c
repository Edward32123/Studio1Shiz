#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANGE 100

int main(int argc, const char** argv)
{
	srand(time(NULL));

	int guessedNumber;
	int hiddenNumber = rand()%MAX_RANGE + 1;
	while(1)
	{
		fprintf(stdout, "Enter a number between 1 to %d: ", MAX_RANGE);
		fscanf(stdin, "%d", &guessedNumber);

		if(guessedNumber == hiddenNumber)
		{
			fprintf(stdout, "Your guess is correct.\n");
			break;
		}
		else if (guessedNumber > hiddenNumber)
		{
			fprintf(stdout, "Your guess it too high.\n");
		}
		else if (guessedNumber < hiddenNumber)
		{
			fprintf(stdout, "Your guess is too low.\n");
		}
	}
	return 0;
}
