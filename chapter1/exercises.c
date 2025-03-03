#include <stdio.h>
#include <stdlib.h>
#include "../stack.h"

void initZeroes(int length, int* arr) { // init a malloced array to 0
    for(int i = 0; i< length; i++) {
        arr[i] = 0;
    }
}

int power(int base, int exponent) {
    int output = 1;
    for(int i=0; i<exponent; i++) {
        output*=base;
    }
    return(output);
}

int countDigits(int num) {
    int digits = 0;
    while(num/10>0) {
        num = (int)num/10;
        digits++;
    }
    return digits;
}

void printValWithSpacing(int SPACING_CONSTANT, int val) {
    printf("%d", val);
    for(int s = 0; s < SPACING_CONSTANT; s++){
        printf(" ");
    }
    if(SPACING_CONSTANT - countDigits(val>0)){
        for(int b = 0; b<(SPACING_CONSTANT - countDigits(val));b++){
            printf(" ");
        }
    }
}
void printHanoi (int SPACING_CONSTANT, int towerLength, int* tower1, int* tower2, int* tower3){// helper to display the towers so they look neat. 
    for(int i = towerLength - 1; i >= 0; i--) {
        printf("|");
        for(int s = 0; s < SPACING_CONSTANT; s++){
            printf(" ");
        }
        printValWithSpacing(SPACING_CONSTANT, tower1[i]);
        printf("|   |");
        for(int s = 0; s < SPACING_CONSTANT; s++){
            printf(" ");
        }
        printValWithSpacing(SPACING_CONSTANT, tower2[i]);
        printf("|   |");
        for(int s = 0; s < SPACING_CONSTANT; s++){
            printf(" ");
        }
        printValWithSpacing(SPACING_CONSTANT, tower3[i]);
        printf("|\n");
    }
}

void initTower(int height, int* tower) {
    for(int i = 0; i<height; i++) {
        tower[i] = 2 * (height-i);
    }
}

int recHanoi(int SPACING_CONSTANT, int height, int* src, int* dest, int* temp) {
    if(height>0) {
        recHanoi(SPACING_CONSTANT, height-1, src, temp, dest);
        recHanoi(SPACING_CONSTANT, height-1, temp, dest, src);
    }
    
    return 0;
}
int hanoi(int height) {// towers are gonna be int arrays. The "sizes" of the discs will just be the integer values, assigned in increasing order.
    int* tower1;
    int* tower2;
    int* tower3;
    tower1 = (int*) malloc(height*sizeof(int));
    tower2 = (int*) malloc(height*sizeof(int));
    tower3 = (int*) malloc(height*sizeof(int));

    initZeroes(height, tower1);
    initZeroes(height, tower2);
    initZeroes(height, tower3);
    
    initTower(height, tower1);
    

    int spacingBase = 2*height;
    int SPACING_CONSTANT = countDigits(spacingBase);
    printf("--- Initial State ---\n");
    printHanoi(SPACING_CONSTANT, height, tower1, tower2, tower3);

    recHanoi(SPACING_CONSTANT, height, tower1, tower2, tower3);

    printHanoi(SPACING_CONSTANT, height, tower1, tower2, tower3);
    // free towers since i'm done with them
    free(tower1);
    free(tower2);
    free(tower3);
    return 0;
}

int main() {
    printf("--- Hanoi Tower example! ---\n");
    hanoi(16);
    return EXIT_SUCCESS;
}
