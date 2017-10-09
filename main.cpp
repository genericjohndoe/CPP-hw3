//
//  main.cpp
//  hw3
//
//  Created by Joel Johnson on 5/6/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#include <iostream>
#include "Problem 1 Functions.h"
#include "Problem 2 Functions.h"
#include "Problem 3 Functions.h"

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "This is the start of Problem #1!" << endl << endl;
    // Problem 1
    int StudentScores[100];
    int student_number = 0;
    int u10 = 0, u20 = 0, u30 = 0, u40 = 0, u50 = 0, u60 = 0, u70 = 0, u80 = 0, u90 = 0, u100 = 0;
    string score;
    
    /*The following loop takes user input (scores) and addes them to the array provided they're in the
     corect range. The loop will break when the user types "exit". */
    while (score != "exit"){
        cout << "Please Enter the student's grade between 0 - 100: ";
        cin >> score;
        if (score == "exit")
            break;
        int i_score = stoi(score);
        while (i_score < 0 || i_score > 100){
            cout << "Error, please re-enter the student's grade between 0 - 100: ";
            cin >> score;
            i_score = stoi(score);
        }
        if (i_score <= 10)
            u10 += 1;
        if (i_score >= 11 && i_score <= 20)
            u20 += 1;
        if (i_score >= 21 && i_score <= 30)
            u30 += 1;
        if (i_score >= 31 && i_score <= 40)
            u40 += 1;
        if (i_score >= 41 && i_score <= 50)
            u50 += 1;
        if (i_score >= 51 && i_score <= 60)
            u60 += 1;
        if (i_score >= 61 && i_score <= 70)
            u70 += 1;
        if (i_score >= 71 && i_score <= 80)
            u80 += 1;
        if (i_score >= 81 && i_score <= 90)
            u90 += 1;
        if (i_score >= 91)
            u100 += 1;
        StudentScores[student_number] = i_score;
        student_number += 1;
    }
    
    //The following block of code prints the graph that shows the distribution of the scores
    cout << endl;
    cout << "91 - 100 |";
    PoundPrinter(u100);
    cout << "81 - 90  |";
    PoundPrinter(u90);
    cout << "71 - 80  |";
    PoundPrinter(u80);
    cout << "61 - 70  |";
    PoundPrinter(u70);
    cout << "51 - 60  |";
    PoundPrinter(u60);
    cout << "41 - 50  |";
    PoundPrinter(u50);
    cout << "31 - 40  |";
    PoundPrinter(u40);
    cout << "21 - 30  |";
    PoundPrinter(u30);
    cout << "11 - 20  |";
    PoundPrinter(u20);
    cout << "0 - 10   |";
    PoundPrinter(u10);
    cout << endl;
    
    //The following block gives some general statistics about the test scores
    cout << "Total scores: :" << student_number << endl;
    cout << "Highest score: " << HighScore(StudentScores, student_number)<< endl;
    cout << "Lowest score: " << LowScore(StudentScores, student_number) << endl;
    cout << "Average Score: " << AverageScore(StudentScores, student_number)<< endl << endl;
    
    //Problem 2
    cout << "This is the start of Problem #2!" << endl << endl;
    int Array[4][6], seed, sum = 0, SumArray[4];
    cout << "Please enter seed: ";//used to generate a new set of numbers each time the function is called
    cin >> seed;
    srand(seed);
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 6; j++){//fills array
            Array[i][j] = rand() % 26;
        }
        for (int j = 0; j < 6; j++){//prints row of integers
            cout << Array[i][j] << "\t";
        }
        sum = 0;
        for (int m = 0; m < 6; m++){//commutes sum of integers within row
            sum = sum + Array[i][m];
        }
        cout << "| sum: " << sum;
        SumArray[i] = sum;//saves sum of each row for further processing
        cout << endl;
    }
    cout << endl;
    cout << "Max Row = " << MaxRow(SumArray, 4) << endl; //prints highest sum
    cout << "Number of elements = " << getLength(Array, 4) << endl;//prints max number of elements in array
    cout << "Total Sum = " << SumTotal(SumArray, 4) << endl << endl;//prints sum of all elements of array
    
    //Problem 3
    cout << "This is the start of Problem #3!" << endl << endl;
    Hw3Stack NewStack1;
    stackItem a = {"Joel"}, b = {"Jordan"}, c = {"Nate"}, d = {"James"};
    
    //Testing isEmpty() on empty stack
    cout << "Before adding any stack items\n";
    if (NewStack1.isEmpty()) {
        cout << "The stack is empty"<<endl<<endl;
    } else {
        cout << "The stack isn't empty" << endl<<endl;
    }
    if (NewStack1.top()) {
        cout << "There is at least one stackItem. " <<endl<<endl;
    }else {
        cout << "There are no stackItems. " << endl<< endl;
    }
    
    
    //Testing push(), getCapacity(), top(), getPointer(), and getSize() for accuracy on a empty and non empty stack
    cout << "NewStack1 has a capacity of " << NewStack1.getCapacity() << " and size of " << NewStack1.getSize() << endl;
    cout << "The first item gets appended...." << endl << endl;
    NewStack1.push(a);
    cout << "The first item in the stack is located at address: " << NewStack1.getPointer() << endl;
    cout << "The last item added to the stack is located at address: " << NewStack1.top() <<endl;
    
    //Confirmation that top() works for non empty stacks
    if (NewStack1.getPointer() == NewStack1.top()) {
        cout << "The top() function works!!!" << endl<<endl;
    }else{
        cout << "The top function doesn't work X(" << endl<<endl;
    }
    
    cout << "After the addition of one item. ";
    cout << "NewStack1 has a capacity of " << NewStack1.getCapacity() << " and size of " << NewStack1.getSize()
         <<" at location" << NewStack1.top()<< endl<<endl;
    
    NewStack1.push(b);
    cout << "After the addition of two items. ";
    cout << "NewStack1 has a capacity of " << NewStack1.getCapacity() << " and size of " << NewStack1.getSize()
         <<" with top at location" << NewStack1.top() << endl <<endl;
    
    NewStack1.push(c);
    cout << "After the addition of three items. ";
    cout << "NewStack1 has a capacity of " << NewStack1.getCapacity() << " and size of " << NewStack1.getSize()
         <<" with top at location" << NewStack1.top() << endl<<endl;
    
    //Testing isEmpty() on non empty stack
    if (NewStack1.isEmpty()) {
        cout << "The stack is empty"<<endl;
    } else {
        cout << "The stack isn't empty now" << endl;
    }
    
    //Testing top() and pop() on non empty stack
    cout << "The first item in the stack is located at address: " << NewStack1.getPointer() << endl;
    NewStack1.pop();
    NewStack1.pop();
    cout << "After removing the first two items, the new top of the stack is located at " << NewStack1.top() <<endl;
    
    //Confirmation that pop() works
    if (NewStack1.getPointer() == NewStack1.top()) {
        cout << "The pop() function works!!" << endl << endl;
    }else {
        cout << "The pop() function doesn't work X(" << endl << endl;
    }
    Hw3Stack NewStack2;
    NewStack2.push(a);
    NewStack2.push(b);
    NewStack2.push(c);
    NewStack2.push(d);
    
    //testing print stack, should print names of the stack items from top to bottom
    NewStack2.printStack();
    cout <<endl;
    NewStack2.pop();
    NewStack2.pop();
    NewStack2.pop();
    NewStack2.pop();
    
    // Testing pop() on Empty stack
    if (NewStack2.pop()) {
        cout << "There is something wrong with pop()"<< endl;
    }else {
        cout << "pop() works!!!!!" << endl;
    }
    //Testing copy constructor
    Hw3Stack NewStack3 = NewStack1;
    cout << "All attributes of NewStack1 are equal to those of NewStack 3" << endl;
    if (NewStack3.getCapacity() == NewStack1.getCapacity()){
        cout << "The capacities are the same " << endl;
    } else {
        cout << "The capacities are not the same" << endl;
    }
    if (NewStack3.getSize() == NewStack1.getSize()) {
        cout << "The sizes are the same" << endl;
    }else {
        cout << "The sizes are not the same" << endl;
    }
    if (NewStack3.getPointer() == NewStack1.getPointer()) {
        cout << "Pointers are the same" << endl;
    } else {
        cout << "Pointers are not the same" << endl;
    }
    
    return 0;
}
