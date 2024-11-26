#include <stdio.h>

int main() {
    int votes[3] = {0, 0, 0};
    int choice, totalVotes = 0;

    printf("Voting System:\n");
    printf("1. Candidate 1\n2. Candidate 2\n3. Candidate 3\n0. Exit\n");

    do {
        printf("Enter your vote (1-3) or 0 to stop: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            votes[choice - 1]++;
            totalVotes++;
        } else if (choice != 0) {
            printf("Invalid choice!\n");
        }
    } while (choice != 0);

    printf("\n--- Results ---\n");
    for (int i = 0; i < 3; i++)
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);

    printf("Total Votes: %d\n", totalVotes);

    return 0;
}
