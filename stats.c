/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief This file sorts an array of unsigned characters and find four array
 * statistics. The file prints the sorted array and the array statistics to 
 * the screen.
 *
 * The statistics include the mean, median, minimum, and maximum 
 * of the array. 
 *
 * @author Amanda West
 * @date 07/11/2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)



void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
    print_statistics(test,SIZE);
    print_array(test,SIZE);

}




unsigned char sort_array(unsigned char arr[], unsigned int length){
    int flag;
    do {
        flag =0;
        for( int i = 0; i < length-1; i++){
            unsigned char a = *(arr+i);
            unsigned char b = *(arr+i+1);
            if (a<b){
                flag = 1;
                *(arr+i) = b;
                *(arr+i+1) = a;
            }
        }
    }while(flag==1);
    
}

//Print Array
unsigned char print_array(unsigned char arr[], unsigned int length){
    printf("The sorted array is [%d", *arr);
    for( int i = 0; i < length-1; i++){
    printf(",%d",*(arr+i+1));
    }
    printf("].\n");
    return 0;
} 

//Find Maximum
unsigned char find_maximum(unsigned char arr[], unsigned int length){
    int min = *arr;
    return min;
}

//Find Minimum
unsigned char find_minimum(unsigned char arr[], unsigned int length){
    int max = *(arr+length-1);
    return max;
}

//Mean function
unsigned char find_mean(unsigned char arr[], unsigned int length){
    unsigned int sum;
    sum =0;
    for( int i = 0; i < length; i++){
    sum += *(arr+i);
    }
    unsigned int mean = sum/length;
    return mean;
}

//Median function
unsigned char find_median(unsigned char arr[], unsigned int length){
    int center = length%2;
    int median;
    if (center == 0){
         median = arr[length/2];
    }else{
         median = arr[(((length/2)+1)+((length/2)))/2];
    }
    return median;
}

//print_statistics function
unsigned char print_statistics(unsigned char arr[], unsigned int length){
    sort_array(arr, length);
    unsigned char stats[4];
    int minimum = find_minimum(arr, length);
    printf("minimum= %d\n", minimum);
    int maximum = find_maximum(arr, length);
    printf("maximum= %d\n", maximum);
    int median = find_median(arr, length);
    printf("median= %d\n", median);
    int mean = find_mean(arr, length);
    printf("mean= %d\n", mean);
    return 0;
}
