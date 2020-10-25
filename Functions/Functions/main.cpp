//
//  main.cpp
//  Functions
//
//  Created by Uluc Ozdenvar on 10/30/18.
//  Copyright © 2018 Uluc Ozdenvar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void createMessage(string userValue);
int addingNumbers(int first, int second);
//put alll the functions that are going to be used at the top of the code

int main(int argc, const char * argv[]) {
    
    string response;
    int first;
    int second;
    
    cout << "What is your favorite language? ";
    cin >> response;
    
    cout << "Enter first input values: ";
    cin >> first;
    
    cout << "Enter second input value: ";
    cin >> second;
    
    createMessage(response);
    cout << addingNumbers(first, second) << endl;
    
    return 0;
}

void createMessage(string userValue){
    
    cout << "My favorite language is " << userValue << " too "<< endl;
}

int addingNumbers(int first, int second){
    
    int total = first + second;
    
    return total;
}
