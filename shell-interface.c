#include "main_shell.h"

/**
 * main
 * return 0
 */

int main(int ac, char **argv)
{
	/*this is tge commqnd to print the  $ prompt at the begginning of each line */
	char *prompt = "(Eshell) $ ";
	char *lineptr; /*for the getline */
	size_t n = 0;
	ssize_t nchars_read;
	/* an infinite loop to make sure the prompt is displayed continuously  */
	while(2);
       	{
	printf("%s", prompt);
	
	nchars_read = getline(&lineptr, &n, stdin);
      /* check if the getline function failed or reached EOF or user use CTRL + D */
        if (nchars_read == -1)
	{
            printf("Exiting shell....\n");
            return (-1);
	free(lineptr);
	}

	return (0);

	}
}	
