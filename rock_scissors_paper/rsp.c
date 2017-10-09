#include "rsp.h"
#include "inputs.h"

int main(void)
{
	printf("*****Rock, Scissors, Paper Game*****\n\n");
	
	while(1)
	{
		get_user();
		get_comp();
		game(user, computer);
	
		tot_result(result);
	
		printf("User: %s! Computer: %s!\n", select_word[user-3], select_word[computer-3]);
		printf("The result is... %s\n", result_word[result]);
		printf("Total %d wins %d loses %d ties\n\n", results[WIN], results[LOSE], results[TIE]);
	}
	
	return 0;
}

void game(int user, int computer)
{
	extern int result;
	
	result = (user - computer + 3) % 3;
}

void tot_result(int game_result)
{
	extern int results[3];
	
	switch(game_result)
	{
		case TIE  : results[TIE]++;
					break;
		case WIN  : results[WIN]++;
					break;
		case LOSE : results[LOSE]++;
					break;
		default   : puts("Error occured!");
					exit(EXIT_FAILURE);
	}
}

void get_user(void)
{
	extern int user;
	char temp_user;
	
	printf("Enter character. r. rock s. scissors p. paper q. quit\n");
	while(temp_user = tolower(get_first()))
	{
		switch(temp_user)
		{
			case 'r': user = ROCK; break;
			case 's': user = SCISSORS; break;
			case 'p': user = PAPER; break;
			case 'q': exit(EXIT_SUCCESS);
			default : printf("Enter correct value!\n");
					  user = ERROR; break;
		}
		if(user != ERROR)
			break;
	}
}

void get_comp(void)
{
	extern int computer;
	
	srand((unsigned) time(NULL) + (unsigned) getpid());
	computer = rand() % 3 + 3;
}