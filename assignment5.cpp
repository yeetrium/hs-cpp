//Luis Nunez, C++ 14/15, Assignment #5
#include <iostream.h>
#include <stdlib.h>

const double dMILE_PER_KILOMETER = 0.621371192;
double dNumberOfKilometers , dNumberOfMiles;
void GetInput();
void Echo();
void Calculation();
int main()
{
      GetInput();
      Echo();
      Calculation();

      system("PAUSE");
      return 0;
}
void GetInput()
{
      cout<<"This program will convert kilometers into miles."<<endl;
      cout<<"Please enter the number of kilometers you would like to convert: ";
      cin>>dNumberOfKilometers;
      cout<<endl;
}
void Echo()
{
      cout<<"You entered "
          <<dNumberOfKilometers
          <<" kilometers."
          <<endl<<endl;
}
void Calculation()
{
      dNumberOfMiles = dMILE_PER_KILOMETER * dNumberOfKilometers;

      cout<<"In "
          <<dNumberOfKilometers
          <<" kilometers, there are"
          <<endl;
      cout<<dNumberOfMiles
          <<" miles."
          <<endl<<endl;
}
/*
This program will convert kilometers into miles.
Please enter the number of kilometers you would like to convert: 85

You entered 85 kilometers.

In 85 kilometers, there are
52.8166 miles.

Press any key to continue . . .
*/
