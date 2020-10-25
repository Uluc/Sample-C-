//
//  main.cpp
//  Switch Statement
//
//  Created by Uluc Ozdenvar on 10/29/18.
//  Copyright © 2018 Uluc Ozdenvar. All rights reserved.
//

#include <iostream>

#define MAX 256

int main(int argc, const char * argv[]) {
    using namespace std;
    
    char response[MAX];
    
    cout << "Enter a number for your major: " << endl;
    cin.getline(response,MAX);
    
    switch (atoi(response)) {  //Atoi turns char into int
        case 1:
            cout << "You are a math student" << endl;
            break;
        case 2:
            cout << "You are a science student" << endl;
            break;
        case 3:
            cout << "You are a english student" << endl;
            break;
        default:
            cout << "You are unknown" << endl;
            break;
    }
    
    
    
    return 0;
}
