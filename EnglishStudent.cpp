//EnglishStudent.cpp
#include <iostream>
#include <string>

#define ENGLISH_FINALEXAM_PERCENTAGE .25
#define ENGLISH_RESEARCH_PERCENTAGE .30
#define ENGLISH_PRESENTATION_PERCENTAGE .20
#define ENGLISH_MIDTERM_PERCENTAGE .25
#define MAX 256

using namespace std;

class EnglishStudent{
    public:
    int midterm;
    int finalExamGrade;
    int research;
    int presentation;
    float finalNumericGrade;
    char finalLetterGrade;

    public: EnglishStudent(){
        cout << "This is a constructor" << endl;
        midterm = 0;
        finalExamGrade = 0;
        research = 0;
        presentation = 0;
        finalNumericGrade = 0;
    }

    public: void Calculate(){
        char response[MAX];
        string moreGradesToCalculate;

        cout << "Midterm Grade: ";
        cin.getline(response,MAX);
        midterm = atoi(response);
        cout << "Final Exam Grade: ";
        cin.getline(response,MAX);
        finalExamGrade = atoi(response);
        cout << "Research Grade: " ;
        cin.getline(response,MAX);
        research = atoi(response);
        cout << "Presentation Grade: " ;
        cin.getline(response,MAX);
        presentation = atoi(response);

        finalNumericGrade = (midterm *ENGLISH_MIDTERM_PERCENTAGE) +
                            (finalExamGrade * ENGLISH_FINALEXAM_PERCENTAGE) +
                            (research * ENGLISH_RESEARCH_PERCENTAGE) +
                            (presentation * ENGLISH_PRESENTATION_PERCENTAGE);


        if (finalNumericGrade >= 93)
            finalLetterGrade = 'A';
        else if ((finalNumericGrade >= 85) & (finalNumericGrade < 93))
           finalLetterGrade = 'B';
        else if ((finalNumericGrade >= 78) & (finalNumericGrade < 85))
           finalLetterGrade = 'C';
        else if ((finalNumericGrade >= 70) & (finalNumericGrade < 78))
           finalLetterGrade = 'D';
        else
           finalLetterGrade = 'F';

    }
};
