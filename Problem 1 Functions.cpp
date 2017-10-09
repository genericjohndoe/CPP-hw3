//
//  Problem 1 Functions.cpp
//  hw3
//
//  Created by Joel Johnson on 5/6/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//
#include <iostream>
#include "Problem 1 Functions.h"

using namespace std;
int u10 ,u20, u30, u40, u50, u60, u70, u80, u90, u100;


void PoundPrinter(int n){//prints 'n' # signs
    for (int i = 0; i < n; i++){
        cout <<"#";
    }
    cout << endl;
}

int HighScore(int a[], int n){//returns highest integer value in array
    int high_score = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > high_score){
            high_score = a[i];
        }
    }
    return high_score;
}

int LowScore(int a[], int n){//return lowest integer value in array
    int low_score = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] < low_score){
            low_score = a[i];
        }
    }
    return low_score;
}

double AverageScore(int a[], int n){//returns average integer value in array
    double sum = 0.0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum/n;
}