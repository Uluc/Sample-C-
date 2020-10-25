#include <iostream>
#include <string>

#define MATH_FINALEXAM_PERCENTAGE .50
#define MATH_MIDTERM_PERCENTAGE .50
#define MAX 256

using namespace std;

class MathStudent {

    public:
        int midterm;
        int finalExamGrade;
        float finalNumericGrade;
        char finalLetterGrade;

    public: MathStudent(){
        cout << "This is a constructor" << endl;
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
            finalNumericGrade = (midterm * MATH_MIDTERM_PERCENTAGE) +
                                (finalExamGrade * MATH_FINALEXAM_PERCENTAGE);

            if (finalNumericGrade >= 90)
                    finalLetterGrade = 'A';
            else if ((finalNumericGrade >= 83) & (finalNumericGrade < 90))
                    finalLetterGrade = 'B';
            else if ((finalNumericGrade >= 76) & (finalNumericGrade < 83))
                    finalLetterGrade = 'C';
            else if ((finalNumericGrade >= 65) & (finalNumericGrade < 76))
                    finalLetterGrade = 'D';
            else
                    finalLetterGrade = 'F';
    }
};
