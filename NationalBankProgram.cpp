//
//  main.cpp
//  National Bank Program
//
//  Created by Uluc Ozdenvar on 10/30/18.
//  Copyright © 2018 Uluc Ozdenvar. All rights reserved.
//

#include <iostream>
#include <string>

#define MAX 256

using namespace std;

int main(int argc, const char * argv[]) {

    float balance = 0,  newBalance = 0, adjustment = 0;
    char response[MAX];
    string moreBankingBusiness;

    cout << "Do you want to do some banking? ";
    cin >> moreBankingBusiness;
    cin.ignore();

    for (int i = 0 ; i < moreBankingBusiness.length(); i++) {
        moreBankingBusiness[i] = toupper(moreBankingBusiness[i]);
    }

    while(moreBankingBusiness == "YES"){

        cout << "Pick what u wanna do:" << endl << "1 = Deposit, 2 = Withdraw, 3 = Get Balance" << endl;
        cin.getline(response, MAX);

        if (strlen(response) == 0) {
            cout << "You must make a selection";
            return 1;
        }
        else if (atoi(response) < 1 | atoi(response) > 3) {
                cout << response << " - is not a valid banking function";
                return 1;
            }


        switch (atoi(response)) {
            case 1: //deposit
                cout << "Enter deposit amount:";
                cin >> adjustment;
                newBalance = balance + adjustment;
                cout << endl << endl << "*** SMILEY NATIONAL BANK ***" << endl << endl;
                cout << "Your old balance was: " << balance << endl;
                cout << "Your adjustment is: " << adjustment << endl;
                cout << "Your new balance is: " << newBalance << endl << endl;
                break;
            case 2:
                cout << "Enter withdrawl amount:";
                cin >> adjustment;
                newBalance = balance - adjustment;
                cout << endl << endl << "*** SMILEY NATIONAL BANK ***" << endl << endl;
                cout << "Your old balance was: " << balance << endl;
                cout << "Your adjustment is: " << adjustment << endl;
                cout << "Your new balance is: " << newBalance << endl << endl;
                break;
            default:
                cout << endl << endl << "*** SMILEY NATIONAL BANK ***" << endl << endl;
                cout << "Your current balance is: " << newBalance << endl;
                break;
        }

        balance = newBalance;
        cout << "Do you have more banking business? ";
        cin >> moreBankingBusiness;
        cin.ignore();

        for (int i = 0 ; i < moreBankingBusiness.length(); i++) {
            moreBankingBusiness[i] = toupper(moreBankingBusiness[i]);
        }

    }

    cout << endl << endl << "Thanks for banking with us!";

    return 0;
}
