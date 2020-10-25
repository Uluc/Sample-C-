//
//  main.cpp
//  Student Grade Calculation
//
//  Created by Uluc Ozdenvar on 10/31/18.
//  Copyright © 2018 Uluc Ozdenvar. All rights reserved.
//

#include <iostream>
#include <string>
#define MAX 256
using namespace std;

int WhatKindOfStudent();
void CalculateEnglishGrade();
void CalculateMathGrade();
void CalculateScienceGrade();

void DisplayGrade(int midterm, int finalExamGrade, int research, int presentation, float finalNumericGrade, char finalLetterGrade);
void DisplayGrade(int midterm, int finalExamGrade, float finalNumericGrade, char finalLetterGrade);
void DisplayGrade(int midterm, int finalExamGrade, int research, float finalNumericGrade, char finalLetterGrade);

const float ENGLISH_MIDTERM_PERCENTAGE = .25, ENGLISH_FINALEXAM_PERCENTAGE = .25, ENGLISH_RESEARCH_PERCENTAGE = .30, ENGLISH_PRESENTATION_PERCENTAGE = .20, MATH_MIDTERM_PERCENTAGE = .50, MATH_FINALEXAM_PERCENTAGE = .50, SCIENCE_MIDTERM_PERCENTAGE = .40, SCIENCE_FINALEXAM_PERCENTAGE = .40, SCIENCE_RESEARCH_PERCENTAGE = .20;
int midterm = 0, finalExamGrade = 0, research = 0, presentation = 0;
float finalNumericGrade = 0;
char finalLetterGrade;
char response[MAX];
string moreGradesToCalculate;

int main(int argc, const char * argv[]) {
    
    int lresponse;
    cout << "Do you want to calculate a grade? ";
    cin >> moreGradesToCalculate;
    cin.ignore();
    for (int i = 0; i < moreGradesToCalculate.length(); i++) {
        moreGradesToCalculate[i] = toupper(moreGradesToCalculate[i]);
    }
    
    while(moreGradesToCalculate == "YES"){
        lresponse = WhatKindOfStudent();
        
        switch(lresponse)
        {
            case 1:
                CalculateEnglishGrade();
                DisplayGrade (midterm, finalExamGrade, research, presentation, finalNumericGrade, finalLetterGrade);
                break;
            case 2:
                CalculateMathGrade();
                DisplayGrade (midterm, finalExamGrade, finalNumericGrade, finalLetterGrade);
                break;
            case 3:
                CalculateScienceGrade();
                DisplayGrade (midterm, finalExamGrade, research, finalNumericGrade, finalLetterGrade);
                break;
        }
        cout << endl<< endl<<  "Do you have another grade to calculate? ";
        cin >> moreGradesToCalculate;
        cin.ignore();
        
        for (int i = 0;  i < moreGradesToCalculate.length(); i++) {
            moreGradesToCalculate[i] = toupper(moreGradesToCalculate[i]);
        }
    }
    cout << "Thanks for using the Grades Calculation program!";
    return 0;
}

int WhatKindOfStudent()
{
    cout << "Enter student type " << "(1=English, 2=Math, 3=Science): ";
    cin.getline(response,256);
    if (strlen(response) == 0) {
        cout << "You must select a Student Type";
        exit(1);
    }
    if ((atoi(response) < 1) | (atoi(response) > 3)) {
        cout << response <<  " - is not a valid student type";
        exit(2);
    }
    return atoi(response);
}

void CalculateEnglishGrade()
{
    cout << "Enter the Midterm Grade: " ;
    cin.getline(response,256);
    midterm = atoi(response);
    
    cout << "Enter the Final Examination Grade: " ;
    cin.getline(response,256);
    finalExamGrade = atoi(response);
    
    cout << "Enter the Research Grade: " ;
    cin.getline(response,256);
    research = atoi(response);
    
    cout << "Enter the Presentation Grade: " ;
    cin.getline(response,256);
    presentation = atoi(response);
    
    finalNumericGrade = (midterm * ENGLISH_MIDTERM_PERCENTAGE) +  (finalExamGrade * ENGLISH_FINALEXAM_PERCENTAGE) +  (research * ENGLISH_RESEARCH_PERCENTAGE) + (presentation * ENGLISH_PRESENTATION_PERCENTAGE);
    
    if (finalNumericGrade >= 93)
        finalLetterGrade = 'A';
    else if ((finalNumericGrade >= 85) & (finalNumericGrade < 93))
        finalLetterGrade = 'B';
    else if ((finalNumericGrade >= 78) & (finalNumericGrade < 85))
        finalLetterGrade = 'C';
    else if ((finalNumericGrade >= 70) & (finalNumericGrade < 78))
        finalLetterGrade = 'D';
    else if (finalNumericGrade < 70)
        finalLetterGrade = 'F';
}
void CalculateMathGrade()
{
    cout << "Enter the Midterm Grade: " ;
    cin.getline(response,256);
    midterm = atoi(response);
    
    cout << "Enter the Final Examination Grade: " ;
    cin.getline(response,256);
    finalExamGrade = atoi(response);
    
    finalNumericGrade = (midterm * MATH_MIDTERM_PERCENTAGE) +  (finalExamGrade * MATH_FINALEXAM_PERCENTAGE);
    
    if (finalNumericGrade >= 90)
        finalLetterGrade = 'A';
    else if ((finalNumericGrade >= 83) & (finalNumericGrade < 90))
        finalLetterGrade = 'B';
    else if ((finalNumericGrade >= 76) & (finalNumericGrade < 83))
        finalLetterGrade = 'C';
    else if ((finalNumericGrade >= 65) & (finalNumericGrade < 76))
        finalLetterGrade = 'D';
    else if (finalNumericGrade < 65)
        finalLetterGrade = 'F';
}
void CalculateScienceGrade()
{
    cout << "Enter the Midterm Grade: " ;
    cin.getline(response,256);
    midterm = atoi(response);
    
    cout << "Enter the Final Examination Grade: " ;
    cin.getline(response,256);
    finalExamGrade = atoi(response);
    
    cout << "Enter the Research Grade: " ;
    cin.getline(response,256);
    research = atoi(response);
    
    finalNumericGrade = (midterm * SCIENCE_MIDTERM_PERCENTAGE) +(finalExamGrade * SCIENCE_FINALEXAM_PERCENTAGE) +(research * SCIENCE_RESEARCH_PERCENTAGE);
    
    if (finalNumericGrade >= 90)
        finalLetterGrade = 'A';
    else if ((finalNumericGrade >= 80) & (finalNumericGrade < 90))
        finalLetterGrade = 'B';
    else if ((finalNumericGrade >= 70) & (finalNumericGrade < 80))
        finalLetterGrade = 'C';
    else if ((finalNumericGrade >= 60) & (finalNumericGrade < 70))
        finalLetterGrade = 'D';
    else
        finalLetterGrade = 'F';
}
void DisplayGrade(int midterm, int finalExamGrade, int research, int presentation,float finalNumericGrade, char finalLetterGrade){
    
    cout << endl << "*** ENGLISH STUDENT ***" << endl << endl;
    cout << "Midterm grade is: " << midterm << endl;
    cout << "Final Exam is: " << finalExamGrade << endl;
    cout << "Research grade is: " << research << endl;
    cout << "Presentation grade is: " << presentation << endl << endl;
    cout << "Final Numeric Grade is: " <<  finalNumericGrade << endl;
    cout << "Final Letter Grade is: " << finalLetterGrade;
}

void DisplayGrade(int midterm, int finalExamGrade, float finalNumericGrade, char finalLetterGrade){
    
    cout << endl<<
    "*** MATH STUDENT ***" << endl << endl;
    cout << "Midterm grade is: " << midterm << endl;
    cout << "Final Exam is: " << finalExamGrade << endl;
    cout << "Final Numeric Grade is: " << finalNumericGrade << endl;
    cout << "Final Letter Grade is: " << finalLetterGrade << endl;
    
}

void DisplayGrade(int midterm, int finalExamGrade, int research, float finalNumericGrade, char finalLetterGrade){
    cout << endl << "*** SCIENCE STUDENT ***" << endl << endl;
    cout << "Midterm grade is: " << midterm << endl;
    cout << "Final Exam is: " << finalExamGrade << endl;
    cout << "Research grade is: " << research << endl;
    cout << "Final Numeric Grade is: " << finalNumericGrade << endl;
    cout << "Final Letter Grade is: " << finalLetterGrade;
}
