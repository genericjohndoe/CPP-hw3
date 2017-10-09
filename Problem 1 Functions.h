//
//  Problem 1 Functions.h
//  hw3
//
//  Created by Joel Johnson on 5/6/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#ifndef __hw3__Problem_1_Functions__
#define __hw3__Problem_1_Functions__

#include <stdio.h>
void PoundPrinter(int n);
//Precondition: The number "n" is the desired number of #s to be printed
//Postcondition: Prints the appropriate number of #s
int HighScore(int a[], int n);
//Precondition: a[] is a array partially filled with integers and n is the length of the array
//Postcondtion: returns the higest integer in the array
int LowScore(int a[], int n);
//Precondition: a[] is a array partially filled with integers and n is the length of the array
//Postcondition: returns the lower integer in the array
double AverageScore(int a[], int n);
//Precondition: a[] is a array partially filled with integers and n is the length of the array
//Postcondition: returns the average of all integers in the array

#endif /* defined(__hw3__Problem_1_Functions__) */
