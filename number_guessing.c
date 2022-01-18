#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int play(void) {
	time_t t;
	srand((unsigned)time(&t));
	int user_input = 0;
	int target = rand() % 100;
	printf("start:\nThe target number is in the range of 0 to 100.\ntype a number:");
	for (;;) {
		scanf_s("%d", &user_input);
		if (user_input == target) {
			printf("You got the number.\n");
			break;
		}
		else if (user_input > target)
			printf("Too big. Try again:");
		else if (user_input < target)
			printf("Too small. Try again:");
	}
	return 0;
}

int main(void) {
	
	printf("-*-*-*-A simple number guessing game-*-*-*-\n");
	printf("-*-*-*- Type 1 to play and 0 to exit-*-*-*-\n");
	int play_or_exit;
	printf("Please enter:");
	scanf_s("%d", &play_or_exit);
	if (play_or_exit == 1)
		for (;;) {
			play();
			printf("Want to play again?\nType 1 to start a new round or type 0 to exit:");
			scanf_s("%d", &play_or_exit);
			if (play_or_exit == 1)
				continue;
			else if (play_or_exit == 0)
			{
				printf("Game exit.\nPress any key to continue...");
				getchar();
				getchar();
				break;
			}
			else {
				printf("Invalid input.\nGame exited.\nPress any key to continue...");
				getchar();
				getchar();
				break;
			}
		}
	else if (play_or_exit == 0)
	{
		printf("Game exited.\nPress any key to continue...");
		getchar();
		getchar();
	}
	else {
		printf("Invalid input.\nGame exited.\nPress any key to continue...");
		getchar();
		getchar();
	}
	return 0;
}