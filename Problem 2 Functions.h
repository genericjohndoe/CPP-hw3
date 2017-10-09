//
//  Problem 2 Functions.h
//  hw3
//
//  Created by Joel Johnson on 5/7/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#ifndef __hw3__Problem_2_Functions__
#define __hw3__Problem_2_Functions__

#include <stdio.h>
int MaxRow(int a[], int n);
//Precondition: parameters are a 1D array and number of integers within array
//Postcondition: returns the higest integer
int getLength(int a[][6], int n);
/*Precondition:inputs are a 2D array where 6 is the length of the 2nd dimension and n is the length of the first*/
//Postcondition: returns the highest possible number of integers that could be in the array
int SumTotal(int a[], int n);
//Precondtion: 1D array with n elements
//Postcondition: returns the sum total of all the elements within the array

#endif /* defined(__hw3__Problem_2_Functions__) */
