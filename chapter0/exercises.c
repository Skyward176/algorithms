#include <stdio.h>
#include <stdlib.h>

int song_a(int n){
    printf("Exercise 1A\n -------- \n");
    while (n>0) {
        printf("%d bottles of Hatsune Miku branded soda on the wall, %d bottles of Miku!\n", n,n);
        n--;
    }
    return 0;
}
int main () {
    // Exercise 0
    // Input the position into a chess engine
    // I could go find an library for this and actually code it but I dont think I will
    // I can't decide if I find this question funny or annoying so I'll choose to enjoy myself and call it funny.

    // Exercise 1a, write a song that runs in O(N) time

    song_a(10);
    return EXIT_SUCCESS;
}
