#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int* arr;
    int len;
} digit_array;

void printInt(int* a) {
    printf("%d\n", *a);
}
void printIntArr(int* a, int len) {
    for (int i = 0; i<len-1; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d\n", a[len-1]);
}
int countDigits(int a) {
    if (a == 0) {
        return 1;
    }
    int count = 0;
    int i = a;
    while(i != 0){
        i /= 10;
        count++;
    }
    //printInt(&count);
    return count;
}
int* rev_arr (int* arr, int len) {
    int *last = &arr[len-1];
    int *output = malloc(len*sizeof(int));
    for (int i = 0; i<len; i++) {
        output[i] = last[(-1*i)];
    } 
    return output;
}

digit_array int_to_dig_arr (int b) {
    int len = countDigits(b);
    int *temp = malloc(len*sizeof(int));
    for (int i = 0; i<len; i++) {
        temp[i] = b%10;
        b = b/10;
    }
    //reverse the array
    digit_array output = {temp, len};
    return output;// return a pointer to an int array 
}

int latMult (int x, int y) { 
    digit_array x_arr = int_to_dig_arr(x);
    digit_array y_arr = int_to_dig_arr(y);
    printIntArr(x_arr.arr, x_arr.len);
    printIntArr(y_arr.arr, y_arr.len);
    int product = 0;
    int partial;
    for(int i = 0; i < x_arr.len; i++){
        for(int j = 0; j<y_arr.len; j++){
            partial = (x_arr.arr[i]*y_arr.arr[j]) * pow(10, (i+j));
            product += partial;
            //printf("Increment Product\n");
            //printInt(&partial);
        }
    }
    return product;
}
int main (int argc, char** argv){
    int product = latMult(238, 47);
    printInt(&product);
    return EXIT_SUCCESS;
}
