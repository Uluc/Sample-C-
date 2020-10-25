//
//  main.cpp
//  If Statement
//
//  Created by Uluc Ozdenvar on 10/29/18.
//  Copyright © 2018 Uluc Ozdenvar. All rights reserved.
//

#include <iostream>
#include <string>

#define MAX 256
int main(int argc, const char * argv[]) {
    using namespace std;
    
    char dayOfWeek2[MAX];
    char responseNum[MAX];
    string dayOfWeek;
    
    cout << "What day of the week is it? ";
    cin.getline(dayOfWeek2,256);
    
    if(strlen(dayOfWeek2) == 0){
        cout << "Give me an input";
        cin.getline(dayOfWeek2,256);
    }

    dayOfWeek = dayOfWeek2;


    if(dayOfWeek == "Sunday")
        cout << "Its sunday ma dudes";
    else if(dayOfWeek == "Monday")
        cout << "Its monday ma dudes";
    else if(dayOfWeek == "Tuesday")
        cout << "Its Tuesday ma dudes";
    else if(dayOfWeek == "Wednesday")
        cout << "Its Wednesday ma dudes";
    else if(dayOfWeek == "Thursday")
        cout << "Its Thursday ma dudes";
    else if(dayOfWeek == "Friday")
        cout << "Its Friday ma dudes";
    else
        cout << "Its Saturday my dudes";

    
    cout << "Enter a your age";
    cin.getline(responseNum,MAX);
    
    if(atoi(responseNum) < 18)
        cout << "My dude you are young";
    else if(atoi(responseNum) > 65)
        cout << "You are getting old";
    else
        cout << "OK";
    
    
    
    
    return 0;
}
