#include <iostream>
#include <string>

#define SCIENCE_FINALEXAM_PERCENTAGE .40
#define SCIENCE_MIDTERM_PERCENTAGE .40
#define SCIENCE_RESEARCH_PERCENTAGE .20
#define MAX  256

using namespace std;

class ScienceStudent{

    public:
        int midterm;
        int finalExamGrade;
        int research;
        float finalNumericGrade;
        char finalLetterGrade;

    public: ScienceStudent(){
        cout << "This is a constructor" << endl;
        research = 0;
        midterm = 0;
        finalExamGrade = 0;
        finalNumericGrade = 0;
    }

    public: void Calculate(){

        char response[MAX];
        string moreGradesToCalculate;

        cout << "Midterm: " << endl;
        cin.getline(response,MAX);
        midterm = (atoi(response));
        cout << "Final: " << endl;
        cin.getline(response,MAX);
        finalExamGrade = (atoi(response));
        cout << "Research: "<< endl;
        cin.getline(response,MAX);
        research = (atoi(response));
        finalNumericGrade =  (midterm * SCIENCE_MIDTERM_PERCENTAGE) +
                             (finalExamGrade * SCIENCE_FINALEXAM_PERCENTAGE) +
                             (research * SCIENCE_RESEARCH_PERCENTAGE);

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
};
