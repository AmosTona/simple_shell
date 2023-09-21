#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * return 0
 * main_shell.c prints the $ prompt
 */

#define MAX_INPUT_SIZE 1024
#define MAX_TOKEN_SIZE 64
#define MAX_NUM_TOKENS 64
/*splits the input string into tokens*/
char **tokenize (char *input)
{
	char **tokens = malloc(MAX_NUM_TOKENS *sizeof(char*));
	char *token = strok(input, "\n\t");
	int i = 0;

	while (token !=NULL)
	{
		tokens [i] = token;
		i++;
		token = strok (NULL, "\n\t");
	}
	tokens [i] = NULL;
	return tokens;
}

/*executes builtin commands*/
void exec_builtin (char **tokens)
{
	if (strcmp (tokens [0], "quit")==0)
	{
		exit (0);
	}
	elseif (strcmp(tokens [0], "help")==0)
	{
		printf ("Supported commands:\n");
		printf ("quit -exit the shell \n");
		printf ("help - Display this menu\n");
	}
}



/* executes non_builtin commands using fork()*/
Void exec.external (char **tokens)
{
	pid.t pid = fork();

	if (pid ==0)
	{
		execvp (tokens [0], tokens);
		printf ("command not found \n");
		exit 1;
	}
	wait (NULL);
}

int main (int argc, char*argv[]);
{
	char input [MAX_INPUT_SIZE];
	char **tokens;

	while (TRUE);
	{
		/*print prompt*/
		printf ("$");

		/*get input*/
		fgets(input, MAX_INPUT_SIZE, stdin);

		/*tokenize input*/
		tokens = tokenize (input);

		/*excecute built in commands*/
		exec_builtin (tokens);

		/*execute external commands*/
		exec_external (tokens);
	}
}
