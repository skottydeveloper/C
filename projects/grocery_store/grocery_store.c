#include <stdio.h>

int main() {
    int appleQuantity = 23;
    float applePrice = 1.49;
    double appleReview = 82.5;
    int appleReviewDisplay;
    const char APPLELOCATION = 'F';

    appleReviewDisplay = (double) appleReview;

    printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, APPLELOCATION, appleReviewDisplay);
}