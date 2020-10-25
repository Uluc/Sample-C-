#include <iostream>
#include <string>

using namespace std;

class DisplayGrade{

    public: DisplayGrade(int midterm, int finalExamGrade, int research, int presentation, float finalNumericGrade, char finalLetterGrade){

    cout << endl << "*** ENGLISH STUDENT ***" << endl << endl;
    cout << "Midterm grade is: " << midterm << endl;
    cout << "Final Exam is: " << finalExamGrade << endl;
    cout << "Research grade is: " << research << endl;
    cout << "Presentation grade is: " << presentation << endl << endl;
    cout << "Final Numeric Grade is: " << finalNumericGrade << endl;
    cout << "Final Letter Grade is: " << finalLetterGrade;

    }

    public: DisplayGrade(int midterm, int finalExamGrade, float finalNumericGrade, char finalLetterGrade){

    cout << endl << "*** MATH STUDENT ***" << endl << endl;
    cout << "Midterm grade is: " << midterm << endl;
    cout << "Final Exam is: " << finalExamGrade << endl;
    cout << "Final Numeric Grade is: " << finalNumericGrade << endl;
    cout << "Final Letter Grade is: " << finalLetterGrade;

    }

    public: DisplayGrade(int midterm, int finalExamGrade, int research, float finalNumericGrade, char finalLetterGrade){

    cout << endl << "*** SCIENCE STUDENT ***" << endl << endl;
    cout << "Midterm grade is: " << midterm << endl;
    cout << "Final Exam is: " << finalExamGrade << endl;
    cout << "Research grade is: " << research << endl;
    cout << "Final Numeric Grade is: " << finalNumericGrade << endl;
    cout << "Final Letter Grade is: " << finalLetterGrade;

    }



};
