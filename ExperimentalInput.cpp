//
//  main.cpp
//  Experimental Input
//
//  Created by Uluc Ozdenvar on 10/29/18.
//  Copyright © 2018 Uluc Ozdenvar. All rights reserved.
//

#include <iostream>
#include <string>
#define MAX 256
int main(int argc, const char * argv[]) {
    using namespace std;
    
    string response;
    char responseName[MAX];

    cout << "what's your favorite food? ";
    cin >> response;
    cout << response << " really, me too!" <<endl;
    cin.ignore();

    cout <<"What's your name? : ";
    cin.getline(responseName, MAX);

    cout << "its nice to meet you "<< responseName << endl;
    return 0;
}
