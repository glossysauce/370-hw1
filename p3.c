#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//.fill index 2
int index = 2;
//.fill array [7, -2, 16, 3] at mem[6]
int array[] = {7, -2, 16, 3};

int main(){
    // reg2 = mem[r1 + array] = mem[8] = 16
    int value = array[index];
    //doubling it results in 32
    value *= 2;
    //store 32 back into array[2]
    array[index] = value;
    //final array is [7, -2, 32, 3]
    return 0;
}
