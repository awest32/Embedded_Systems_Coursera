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
 * @file stats.h
 * @brief This file takes an unsigned char array and and unsigned int length.
 * It prints the sorted array and a number of array statistics to the screen.
 *
 * The array statistics include: median, mean, minimum, and maximum. Each 
 * statistic has its own function. There is also a print array and sort array 
 * function.
 *
 * @author Amanda West
 * @date 07/11/2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



/**
 * @brief Given an array of data and a length, sorts the array from largest to 
 * smallest. The zeroth Element is the largest value, and the last element (n-1) is 
 * the smallest value.
 *
 *
 * @param arr unsigned char array to be sorted
 * @param length unsigned int indicating the size of the array
 *
 * @return no return. The array sorts within memory.
 */
unsigned char sort_array(unsigned char arr[], unsigned int length);


/**
 * @brief Given a sorted array of data and a length, finds the minimum value
 * within the array.
 *
 *
 * @param arr unsigned char array sorted largest to smallest
 * @param length unsigned int indicating the size of the array
 *
 * @return minimum. Returns the char minimum of the array.
 */
unsigned char find_minimum(unsigned char arr[], unsigned int length);

/**
 * @brief Given a sorted array of data and a length, finds the maximum value
 * within the array.
 *
 *
 * @param arr unsigned char array sorted largest to smallest
 * @param length unsigned int indicating the size of the array
 *
 * @return mean. Returns the char maximum of the array.
 */
unsigned char find_maximum(unsigned char arr[], unsigned int length);

/**
 * @brief Given a sorted array of data and a length, finds the mean value
 * within the array.
 *
 *
 * @param arr unsigned char array sorted largest to smallest
 * @param length unsigned int indicating the size of the array
 *
 * @return mean. Returns the char mean of the array.
 */
unsigned char find_mean(unsigned char arr[], unsigned int length);

/**
 * @brief Given a sorted array of data and a length, finds the median value
 * within the array.
 *
 *
 * @param arr unsigned char array sorted largest to smallest
 * @param length unsigned int indicating the size of the array
 *
 * @return median. Returns the char median of the array.
 */
unsigned char find_median(unsigned char arr[], unsigned int length);

/**
 * @brief Given a sorted array of data and a length, prints the array to
 * the screen.
 *
 *
 * @param arr unsigned char array sorted largest to smallest
 * @param length unsigned int indicating the size of the array
 *
 * @return no return. Prints the array to the screen.
 */
unsigned char print_array(unsigned char arr[], unsigned int length);

/**
 * @brief Given a sorted array of data and a length, prints the parameters of 
 * the array to the screen.
 *
 *
 * @param arr unsigned char array sorted largest to smallest
 * @param length unsigned int indicating the size of the array
 *
 * @return no return. Prints the miniumum, maximum, mean, and median to the screen.
 */
unsigned char print_statistics(unsigned char arr[], unsigned int length);

#endif /* __STATS_H__ */
