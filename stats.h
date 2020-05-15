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
 * @brief week 1 assignment - You are to write a couple of functions that can 
 * analyze an array of unsigned char data items and report analytics on the maximum, 
 * minimum, mean, and median of the data set. In addition, you will need to reorder 
 * this data set from large to small. All statistics should be rounded down to the nearest integer. 
 * After analysis and sorting is done, you will need to print that data to the screen in nicely 
 * formatted presentation. You will need to submit a version controlled repository of these 3 files.
 *
 * @author <Nishan Chettri>
 * @date <13/05/20>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief void Function to print array 
 * @param unsigned char *p pointing to an array of integers
 * @param unsigned int size carrying the size of an array
 *
 */
void print_array(unsigned char *p,unsigned int size);


/**
 * @brief function to sort given array
 * @param unsigned char *p pointing to address of first element of given array.
 * @param unsigned int size carrying the size of an array
 * @return address of the sorted array
 */
unsigned char* sort_array(unsigned char *p,unsigned int size);

/**
 * @brief function to calculate median of the array, median is the middle element of a sorted array
 * @param unsigned char *p pointing to address of first element of sorted array returned by sort_array
 * @param unsigned int size carrying the size of an array
 * @return sorted array 
 */
int find_median(unsigned char *p,unsigned int size);

/**
 * @brief function to find mean of the array, mean = sum of elements/number of elements 
 * @param unsigned char *p pointing address of first element of the given array
 * @param unsigned int size carrying the size of an array
 * @return mean
 */
int find_mean(unsigned char *p,unsigned int size);


/**
 * @brief function to find largest element of the array
 * @param unsigned char *p pointing address of first element of the given array
 * @param unsigned int size carrying the size of an array
 * @return largest element
 */
int find_maximum(unsigned char *p,unsigned int size);

/**
 * @brief function to find smallest element of the array
 * @param unsigned char *p pointing address of first element of the given array
 * @param unsigned int size carrying the size of an array
 * @return smallest element
 */
int find_minimum(unsigned char *p,unsigned int size);


/**
 * @brief void Function to print statistics obtained above
 * @param unsigned char *p pointing to an array of integers to be passedto the functions above
 * @param unsigned int size carrying the size of an array
 *
 */
void print_statistics(unsigned char *p,unsigned int size);

#endif /* __STATS_H__ */
