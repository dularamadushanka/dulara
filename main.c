#include <stdio.h>

int main() {
    int fever, headache, cough, red_skin;

    printf("Do you have long fever? (1-Yes, 0-No): ");
    scanf("%d", &fever);

    printf("Do you have headache? (1-Yes, 0-No): ");
    scanf("%d", &headache);

    printf("Do you have cough? (1-Yes, 0-No): ");
    scanf("%d", &cough);

    printf("Do you have red skin? (1-Yes, 0-No): ");
    scanf("%d", &red_skin);

    // Rule 1: High Probable Case
    if (fever == 1 && red_skin == 1 && headache == 0 && cough == 0) {
        printf("\nDiagnosis: High Probable Case\n");
    }
    // Rule 2: Low Probable Case
    else if (fever == 1 && cough == 1 && headache == 0 && red_skin == 0) {
        printf("\nDiagnosis: Low Probable Case\n");
    }
    // Rule 3: Mid Probable Case
    else if (fever == 1 && cough == 1 && headache == 1 && red_skin == 0) {
        printf("\nDiagnosis: Mid Probable Case\n");
    }
    // Rule 4: Zero Probable Case
    else if (fever == 0 && cough == 1 && red_skin == 1) {
        printf("\nDiagnosis: Zero Probable Case\n");
    }
    // Rule 5: All other cases
    else {
        printf("\nDiagnosis: Undefined\n");
    }

    return 0;
}
