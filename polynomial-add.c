#include <stdio.h>

struct Poly {
    int coeff;
    int power;
};

int main() {
    struct Poly p1[10], p2[10], p3[20];
    int n1=0, n2=0, i = 0, j = 0, k = 0;
    int hp1, hp2;

    // First polynomial
    printf("Enter highest power in first polynomial: ");
    scanf("%d", &hp1);
    for (i = hp1; i>=0; i--) {
        printf("Enter coefficient and for x^%d: ", i);
        p1[i].power = i;
        scanf("%d", &p1[i].coeff);
        n1++;
    }

    // Second polynomial
    printf("Enter highest power in second polynomial: ");
    scanf("%d", &hp2);
    for (i = hp2; i>=0; i--) {
        printf("Enter coefficient and for x^%d: ", i);
        p2[i].power = i;
        scanf("%d", &p2[i].coeff);
        n2++;
    }

    i = j = 0;

    // Add polynomials
    while (i < n1 && j < n2) {
        if (p1[i].power == p2[j].power) {
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            p3[k].power = p1[i].power;
            i++; j++; k++;
        }
        else if (p1[i].power > p2[j].power) {
            p3[k] = p1[i];
            i++; k++;
        }
        else {
            p3[k] = p2[j];
            j++; k++;
        }
    }

    // Remaining terms
    while (i < n1) {
        p3[k++] = p1[i++];
    }
    while (j < n2) {
        p3[k++] = p2[j++];
    }

    // Display result
    printf("\nResultant Polynomial: ");
    for (i = 0; i < k; i++) {
        printf("%dx^%d", p3[i].coeff, p3[i].power);
        if (i != k - 1)
            printf(" + ");
    }

    return 0;
}

