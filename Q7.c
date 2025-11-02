#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        int nou;
        if ((i + 1) % 2 == 0) {
            nou = 1;
        } else {
            nou = 0;
        }
        // Print left vala part
        for (int j = 1; j <= i; j++) {
            printf("%d ", nou);
            nou = 1 - nou;
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        // Print right vala part
        for (int j = 1; j <= i; j++) {
            printf("%d ", nou);
            nou = 1 - nou;
        }
        printf("\n");
    }

    return 0;
}