#include <iostream>
class Car : public Vehiculo {
   string stile;

public:
   Car(const string &myLicense, const int myYear, cont string &myStyle):
      Vehicle(myLycense, myYear), style(myStyle)  {}
   const string getDesc()
   {
      return stringify(year) + " + style + ": " + license;
   }
   const string &getStyle() 
   {
      return style;
   }
      
