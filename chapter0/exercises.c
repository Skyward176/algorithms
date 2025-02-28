#include <stdio.h>
#include <stdlib.h>

// Exercise 1a, write a song that runs in O(N) time
int song_a(int n){
    printf("Exercise 1A\n -------- \n");
    while (n>0) {
        printf("%d bottles of Hatsune Miku branded soda on the wall, %d bottles of Miku!\n", n,n);
        n--;
    }
    return 0;
}

// Exercise 1b, write a song that runs in O(nlogn) time
// This one is n log n because it prints n times for the i don't know line. And logn times for the neither do I one.
int song_b(int n) {
    printf("Exercise 1B\n -------- \n");
    int x = n;
    while (n>0) {
        printf("I don't know what lyrics to repeat!\n");
        if(x>0){
            for(int a = x; a>0; a--){
                printf("Neither do I!\n");
            }
            x = x/2;
        }
        n--;
    }
    return 0;
}

int song_c(int n) {
    printf("Exercise 1C\n -------- \n");
    //this runs in quadratic time because why not
    for(int a = n; a>0; a--){
        for(int b = n; b>0; b--){
            printf("nya nya nyanya nyanyanya nya nya nyanyanyanyanyanya!\n");
        }
    }
    return 0;
}

int prob_2 () {

    return 0;
}
int main () {
    // Exercise 0
    // Input the position into a chess engine
    // I could go find an library for this and actually code it but I dont think I will
    // I can't decide if I find this question funny or annoying so I'll choose to enjoy myself and call it funny.

    // The rest of these exercises aren't really algorithms to implement and instead problems of big O notation and proving stuff, which i wont do here

    song_a(10);
    song_b(10);
    song_c(10);
    return EXIT_SUCCESS;
}
