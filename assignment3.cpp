//Luis Nunez C++ 14/15 Assignment3
#include <iostream.h>
#include <stdlib.h>

int main()
{
      int nNum1;
      int nNum2;

      cout<<"This program will perform 5 C++ arithmetic operations on 2 integers"<<endl;
      cout<<"Please enter the first integer: "; cin>>nNum1; endl;
      cout<<"You entered "<<nNum1<<" for the first integer."<<endl;
      cout<<"Please enter the second integer: " ; cin>>nNum2; endl;
      cout<<"You entered "<<nNum2<<" for the second integer."<<endl;

      cout<<nNum1<<" + "<<nNum2<<" = "<<nNum1 + nNum2<<endl;
      cout<<nNum1<<" - "<<nNum2<<" = "<<nNum1 - nNum2<<endl;
      cout<<nNum1<<" * "<<nNum2<<" = "<<nNum1 * nNum2<<endl;
      cout<<nNum1<<" / "<<nNum2<<" = "<<nNum1 / nNum2<<" With a remainder of "<<nNum1 % nNum2<<endl;

      system("PAUSE");
      return 0;
}
/* Sample Output
This program will perform 5 C++ arithmetic operations on 2 integers
Please enter the first integer: 85
You entered 85 for the first integer.
Please enter the second integer: 29
You entered 29 for the second integer.
85 + 29 = 114
85 - 29 = 56
85 * 29 = 2465
85 / 29 = 2 With a remainder of 27
Press any key to continue . . .
*/
