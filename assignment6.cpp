//Luis Nunez, C++ 14/15, Assignment 6
#include <iostream.h>
#include <stdlib.h>

double dNumDegreesFahrenheit, dTotalCelcius;
void GetInput();

void Calculation();
int main()
{
      GetInput();
      Calculation();

      GetInput();
      Calculation();

      GetInput();
      Calculation();

      system("PAUSE");
      return 0;
}
void GetInput()
{
      cout<<"This program will convert 3 temperatures"<<endl
          <<"of degrees fahrenheit to degrees celcius."<<endl;
      cin>>dNumDegreesFahrenheit;
      cout<<endl;
}
void Calculation()
{
      dTotalCelcius = (dNumDegreesFahrenheit - 32)*(5.0/9.0);

      cout<<"In "
          <<dNumDegreesFahrenheit
          <<" degrees Fahrenheit, there are ";
      cout<<dTotalCelcius
          <<" degrees Celcius."
          <<endl<<endl;
}

/*Sample Output
Z:\>assignment6.exe<data.txt
This program will convert 3 temperatures
of degrees fahrenheit to degrees celcius.

In 212 degrees Fahrenheit, there are 100 degrees Celcius.

This program will convert 3 temperatures
of degrees fahrenheit to degrees celcius.

In 32 degrees Fahrenheit, there are 0 degrees Celcius.

This program will convert 3 temperatures
of degrees fahrenheit to degrees celcius.

In -40 degrees Fahrenheit, there are -40 degrees Celcius.

Press any key to continue . . .

*/
