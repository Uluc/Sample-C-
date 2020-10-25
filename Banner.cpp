#include <iostream>
#include <string>
using namespace std;
class Banner
{
  public:
      string favoriteProgram;
      static int numberOfBannerObjects;

  public: Banner(){
      cout << "This is Banner's Constructor" << endl;
      numberOfBannerObjects++;
      favoriteProgram = "C++";
  }

  public: Banner(string parameter1){
      cout << "This is Banner's Overloaded Constructor" << endl;
      numberOfBannerObjects++;
      favoriteProgram = parameter1;
  }


  ~Banner() { //Destructor
      cout << "Banner's Destructor" << endl;
  }

  public: void Display()
  {
     cout << "I love " << favoriteProgram << endl;
  }

  public: void HowMany(){
      cout << "The number of Banner objects is " << numberOfBannerObjects << endl;
  }
};
