#include <iostream>
#include <string>
#include "EnglishStudent.cpp"
#include "MathStudent.cpp"
#include "ScienceStudent.cpp"
#include "DisplayGrade.cpp"

int main(){

        EnglishStudent eStudent;
        eStudent.Calculate();
        DisplayGrade x(eStudent.midterm,
                       eStudent.finalExamGrade,
                       eStudent.research,
                       eStudent.presentation,
                       eStudent.finalNumericGrade,
                       eStudent.finalLetterGrade);

        MathStudent mStudent;
        mStudent.Calculate();
        DisplayGrade y(mStudent.midterm,
                       mStudent.finalExamGrade,
                       mStudent.finalNumericGrade,
                       mStudent.finalLetterGrade);

        ScienceStudent sStudent;
        sStudent.Calculate();
        DisplayGrade z(sStudent.midterm,
                       sStudent.finalExamGrade,
                       sStudent.research,
                       sStudent.finalNumericGrade,
                       sStudent.finalLetterGrade);
}
