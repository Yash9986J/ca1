#include <stdio.h>

int main() {
    int choice;

    printf("Select a course by entering the corresponding number:\n");
    printf("1. btech(cse)\n");
    printf("2. btech(aiml)\n");
    printf("3. btech(ece)\n");
    printf("4. btech(mech)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected btech(cse).\n");
            break;
