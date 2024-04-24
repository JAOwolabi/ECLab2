#include <stdio.h>

int main() {
    int score;

    while (1) {
        printf("Enter the NFL score or enter 0 or 1 to STOP: ");
        scanf("%d", &score);

        if (score <= 1) {
            break;
        }

        printf("Possible combinations of scoring plays for %d:\n", score);

        // Initialize counters for each type of scoring play
        for (int td = 0; td * 6 <= score; td++) {
            for (int fg = 0; fg * 3 + td * 6 <= score; fg++) {
                for (int safety = 0; safety * 2 + fg * 3 + td * 6 <= score; safety++) {
                    for (int conversion = 0; conversion * 8 + safety * 2 + fg * 3 + td * 6 <= score; conversion++) {
                        for (int extra_point = 0; extra_point * 7 + conversion * 8 + safety * 2 + fg * 3 + td * 6 <= score; extra_point++) {
                            if (extra_point * 7 + conversion * 8 + safety * 2 + fg * 3 + td * 6 == score) {
                                if (td > 0) printf("%d TD ", td);
                                if (fg > 0) printf("%d FG ", fg);
                                if (safety > 0) printf("%d Safety ", safety);
                                if (conversion > 0) printf("%d 2pt ", conversion);
                                if (extra_point > 0) printf("%d 1pt ", extra_point);
                                printf("\n");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
