#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the computer's choice
char getComputerChoice() {
    int random = rand() % 3; // Generate a random number between 0 and 2
    if (random == 0)
        return 'r'; // Rock
    else if (random == 1)
        return 'p'; // Paper
    else
        return 's'; // Scissors
}

// Function to determine the winner
void determineWinner(char user, char computer) {
    printf("You chose: %c\n", user);
    printf("Computer chose: %c\n", computer);

    if (user == computer) {
        printf("It's a tie!\n");
    } else if ((user == 'r' && computer == 's') ||
               (user == 'p' && computer == 'r') ||
               (user == 's' && computer == 'p')) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}

int main() {
    char userChoice, computerChoice;

    // Initialize random number generator
    srand(time(NULL));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice (r for Rock, p for Paper, s for Scissors): ");
    scanf(" %c", &userChoice);

    // Validate user input
    if (userChoice != 'r' && userChoice != 'p' && userChoice != 's') {
        printf("Invalid choice! Please enter 'r', 'p', or 's'.\n");
        return 1;
    }

    computerChoice = getComputerChoice();
    determineWinner(userChoice, computerChoice);

    return 0;
}
