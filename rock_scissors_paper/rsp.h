#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>

#define ROCK 	 3
#define SCISSORS 4
#define PAPER	 5
#define TIE		 0
#define LOSE	 1
#define WIN		 2
#define ERROR	 -1

int user, computer, result;
int results[3] = {0, 0, 0};
const char select_word[3][10] = {"rock", "scissors", "paper"};
const char result_word[3][10] = {"tie!", "lose...", "win!!"};

void game(int user, int computer);
void tot_result(int game_result);
void get_user(void);
void get_comp(void);