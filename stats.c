/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 * /
/**
 * @file stats.c 
 * @brief week 1 assignment - You are to write a couple of functions that can 
 * analyze an array of unsigned char data items and report analytics on the maximum, 
 * minimum, mean, and median of the data set. In addition, you will need to reorder 
 * this data set from large to small. All statistics should be rounded down to the nearest integer. 
 * After analysis and sorting is done, you will need to print that data to the screen in nicely 
 * formatted presentation. You will need to submit a version controlled repository of these 3 files.
 *
 * @author Nishan Chettri
 * @date 13/05/20
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
   printf("Given array:\n\n");
   print_array(test,SIZE);
   printf("\n\n");
   printf("Printing statistics:\n\n");
   print_statistics(test,SIZE);
   printf("\n\nFinished Printing Statistics!");

}

void print_array(unsigned char *p,unsigned int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d",*p);
		printf(" ");
		p++;
	}
}
unsigned char* sort_array(unsigned char *p,unsigned int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(p[j]>p[i])
			{
				int temp=p[j];
				p[j]=p[i];
				p[i]=temp;
			}
		}
	}
	return p;
}
unsigned int find_median(unsigned char *p,unsigned int size)
{
	int middle;
	if((size/2)==0)
	{
		int m1= size/2;
		int m2= (size/2)-1;
		middle= (p[m1]+p[m2])/2;
		return middle;
	}
	else
	{
		middle=size/2;
		return p[middle];
	}
	
}
unsigned int find_mean(unsigned char *p,unsigned int size)
{
	int sum=0,count;
	for(int i=0;i<size;i++)
	{
		sum=sum + *p ;
		p++;count++;
	}
	return (sum/count) ;
}
unsigned int find_maximum(unsigned char *p,unsigned int size)
{
	int big=p[0];
	for(int i=0;i<size;i++)
	{
		if(*p>big)
		{
		  big=*p ;
		}
		p++;
	}
 return big;
}
unsigned int find_minimum(unsigned char *p,unsigned int size)
{
	int small=p[0];
	for(int i=0;i<size;i++)
	{
		if(*p<small)
		{
		  small=*p;
		}
		p++;
	}
 return small;
}
void print_statistics(unsigned char *p,unsigned int size)
{
	unsigned int median= find_median(sort_array(p,size),size);
	printf("Median= %d \n\n",median);
	unsigned int mean= find_mean(p,size);
	printf("Mean= %d \n\n",mean);
	unsigned int maximum= find_maximum(p,size);
	printf("Maximum= %d \n\n",maximum);
	unsigned int minimum= find_minimum(p,size);
	printf("Minimum= %d \n\n",minimum);
        
	printf("Sorted Array(Descending): \n\n");
	unsigned char* sortedArray = sort_array(p,size);
	print_array(sortedArray,size);
	
}


