#include <stdio.h>

enum menu {
    start = 1,
    scores,
    help,
    exit
};

typedef struct {
    char name[20];
    float score;
} player;

void startquiz();
void writescore(player p);
void displayscore();
void showhelp();

int main() {
    printf("\nWELCOME TO C PROGRAMMING QUIZ\n");
    printf("----------------------------\n");
    printf("1. Start\n");
    printf("2. Scoreboard\n");
    printf("3. Help\n");
    printf("4. Exit\n");
    printf("----------------------------\n\n");

    enum menu choice;
    scanf("%d", &choice);

    switch (choice) {
        case start:
            startquiz();
            break;
        case scores:
            //displayscore();
            break;
        case help:
            showhelp();
            break;
        case exit:
            break;
        default:
            printf("Invalid input\n\n");
            main();
            break;
    }

    return 0;
}

void showhelp() {
    printf("\nThis is a simple Quiz program using C programming language.\n");
    printf("You can choose the correct answer from the given options.\n");
    printf("Input the alphabet of the correct answer. Eg: a\n");
    printf("At the end of the Quiz, you will get the score.\n");
    printf("Your score will be calculated and displayed at the scoreboard menu.\n\n");
    printf("Input any key to go back to main menu\n");

    getchar();
    switch (getchar()) {
        default:
            main();
            break;
    }
}

void startquiz() {
    player p;
    
    printf("\n");

    printf("Enter your name: ");
    
    gets(p.name);
    while (getchar() != '\n');

    printf("\n");

    printf("Welcome %s! let's start the quiz.\n", p.name);
    printf("----------------------------\n\n");
	
    for (int i = 0; i < 5; i++) {
        int n;
        n = rand() % 10;
        
        char answer;

        switch (n) {
            case 1:
                printf("When was the C programming language developed?\n");
                printf("a. 1970\n");
                printf("b. 1972\n");
                printf("c. 1974\n");
                printf("d. 1976\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'b') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;

            case 2:
                printf("Who developed the C programming language?\n");
                printf("a. Ken Thompson\n");
                printf("b. Dennis Ritchie\n");
                printf("c. Bill Gates\n");
                printf("d. Steve Jobs\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'b') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;

            case 3:
                printf("Which one is not a reserve keyword in C?\n");
                printf("a. auto\n");
                printf("b. main\n");
                printf("c. case\n");
                printf("d. default\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'b') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;

            case 4:
                printf("Which one is not a data type in C?\n");
                printf("a. int\n");
                printf("b. float\n");
                printf("c. char\n");
                printf("d. string\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'd') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;
            
            case 5:
                printf("Which one is not a valid variable name in C?\n");
                printf("a. int\n");
                printf("b. float\n");
                printf("c. char\n");
                printf("d. 1name\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'd') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;
            
            case 6:
                printf("Which one is not a valid function name in C?\n");
                printf("a. main\n");
                printf("b. printf\n");
                printf("c. 1name\n");
                printf("d. scanf\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'c') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;
            
            case 7:
                printf("Which one is not a valid header file in C?\n");
                printf("a. stdio.h\n");
                printf("b. stdlib.h\n");
                printf("c. string.h\n");
                printf("d. math.h\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'c') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;

            case 8:
                printf("Which one is not a valid operator in C?\n");
                printf("a. +\n");
                printf("b. ++\n");
                printf("c. +=\n");
                printf("d. &\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'd') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;
            
            case 9:
                printf("Which one is not a valid comment in C?\n");
                printf("a. // comment\n");
                printf("b. /* comment */\n");
                printf("c. /* comment\n");
                printf("d. comment */\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'c') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;
            
            default:
                printf("Which one is not a valid loop in C?\n");
                printf("a. for\n");
                printf("b. while\n");
                printf("c. do while\n");
                printf("d. loop\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf("%c", &answer);
                while (getchar() != '\n');

                if (answer == 'd') {
                    printf("Correct!\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;
        }
    }

    printf("----------------------------\n");
    printf("Your score is %.2f\n", ((p.score/5)*100));
    printf("----------------------------\n\n");

    printf("Press any key to go back to main menu\n");

    getchar();
    switch (getchar()) {
        default:
            main();
            break;
    }

    writescore(p);
}

void writescore(player p) {

}

void displayscore() {

}