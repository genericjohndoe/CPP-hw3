//
//  Problem 2 Functions.cpp
//  hw3
//
//  Created by Joel Johnson on 5/7/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#include "Problem 2 Functions.h"

int MaxRow(int a[], int n){//returns largest integer value in array
    int Max = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > Max)
            Max = a[i];
    }
    return Max;
}

int getLength(int a[][6], int n){// returns the highest possible number of integers that could be in the array
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 6; j++){
            sum +=1;
        }
    }
    return sum;
}

int SumTotal(int a[], int n){//returns the sum total of all the elements within the array
    int sum = 0;
    for (int i =  0;i < n; i++){
        sum += a[i];
    }
    return sum;
}