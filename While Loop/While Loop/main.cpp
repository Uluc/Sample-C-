//
//  main.cpp
//  While Loop
//
//  Created by Uluc Ozdenvar on 10/30/18.
//  Copyright © 2018 Uluc Ozdenvar. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int counter = 1;
    
    string response;
    cout << "Should I start counting? ";
    cin >> response;
    
    for (int i = 0; i < response.length(); i++) {
        response[i] = toupper(response[i]); //touper makes item equivalent to all caps
    }
    
    while (response == "YES") {
        
        cout << "counter is " << counter << endl;
        counter++;
        cout << "Should I continue? ";
        cin >> response;
        
        for (int i = 0; i < response.length(); i++) {
            response[i] = toupper(response[i]);
        }
        
    }
    
    cout << "Thanks for counting with me!" << endl;
    
    counter = 0;
    
    cout << "Should I start counting Again";
    cin >> response;
    
    for (int i = 0; i < response.length(); i++) {
        response[i] = toupper(response[i]);
    }
    do{
        cout << "counter is " << counter << endl;
        counter++;
        cout << "Should I continue? ";
        cin >> response;
        
        for (int i = 0; i < response.length(); i++) {
            response[i] = toupper (response[i]);
        }
    } while (response == "YES");
    
    cout << "Thanks for counting with me!";
    
    return 0; }

