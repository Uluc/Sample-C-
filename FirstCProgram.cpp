//
//  main.cpp
//  1st C Program
//
//  Created by Uluc Ozdenvar on 10/25/18.
//  Copyright © 2018 Uluc Ozdenvar. All rights reserved.
//

#include <iostream>

void addNumbers(); // calling a function
int main(int argc, const char * argv[]) {

    using namespace std; // allows for us not to write std before cout so no need for std::cout

    int number1;
    int number2;
    const int NUMBER3 = 25;
    number1 = 12;
    number2 = 13;

    addNumbers();
    cout << number1+number2+NUMBER3;
    return 0;
}

void addNumbers(){
    using namespace std;
    cout << "Function add numbers has executed ";
}
