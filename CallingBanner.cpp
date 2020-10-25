#include "Banner.cpp"
int main() {
        Banner x("Java");
        Banner y;
        x.favoriteProgram = "C++";
        x.Display();
        x.HowMany();
        y.favoriteProgram = "JAVA";
        y.Display();
        y.HowMany();
        return 0;
}
