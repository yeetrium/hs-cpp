//Luis Nunez, C++ 14/15, Assignment#12

#include <iostream.h>
#include <stdlib.h>
#include <string>
#include <time.h>

using namespace std;

void SetTwoDecimalPlaces();
void Welcome();
void TakeOrder();
void CurrentOrder(int nNumSandwiches, int nNumChips, int nNumPickles, int nNumBrownies, int nNumSodas);
void Conclusion(int nNumSandwiches, int nNumChips, int nNumPickles, int nNumBrownies, int nNumSodas);

const double dSANDWICHES_PRICE = 4.99;
const double dCHIPS_PRICE = .99;
const double dPICKLES_PRICE = 1.25;
const double dBROWNIES_PRICE = .50;
const double dSODAS_PRICE = 1.20;
const double dTAX = .0825;

int main()
{
      srand(time(NULL));
      SetTwoDecimalPlaces();
      Welcome();
      TakeOrder();
      system("PAUSE");
      return 0;
}

void SetTwoDecimalPlaces()
{
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision (2);
}

void Welcome()
{
    cout<<"Welcome to Snack Express!"<<endl;
    cout<<"Choose from 5 delicious snacks:"<<endl;
    cout<<"Sandwiches are     $"<<dSANDWICHES_PRICE<<endl;
    cout<<"Bags of Chips are  $"<<dCHIPS_PRICE     <<endl;
    cout<<"Pickles are        $"<<dPICKLES_PRICE   <<endl;
    cout<<"Brownies are       $"<<dBROWNIES_PRICE  <<endl;
    cout<<"Sodas are          $"<<dSODAS_PRICE     <<endl<<endl;
    cout<<"Enter your orders exactly as they show up on the menu."<<endl<<endl;
    system("PAUSE");
    system("CLS");
}

void TakeOrder()
{

    int nSandwiches=0, nChips=0, nPickles=0, nBrownies=0, nSodas=0;
    CurrentOrder(nSandwiches, nChips, nPickles, nBrownies, nSodas);
      string sInput;
      do
      {
         cout<<"What would you like to order? "
             <<endl
             <<"(Enter \"thanks\" to checkout or enter \"cancel\" to reset number of items to zero.)";
         cin>>sInput;
         if(sInput == "sandwiches" || sInput == "sandwich")
         {
            cout<<"How many sandwiches would you like? ";
            cin>>nSandwiches;
         }
         else if(sInput == "chips")
         {
            cout<<"How many bags of chips would you like? ";
            cin>>nChips;
         }
         else if(sInput == "pickles" || sInput == "pickle")
         {
            cout<<"How many pickles would you like? ";
            cin>>nPickles;
         }
         else if(sInput == "brownies" || sInput == "brownie")
         {
            cout<<"How many brownies would you like? ";
            cin>>nBrownies;
         }
         else if(sInput == "sodas" || sInput == "soda")
         {
            cout<<"How many sodas would you like? ";
            cin>>nSodas;
         }
         else if(sInput == "cancel")
         {
            system("CLS");
            TakeOrder();
         }
         else if(sInput != "thanks")
         {
            cout<<endl<<"Sorry, please enter your order again."<<endl<<endl;
            system("PAUSE");
         }
         system("CLS");
         CurrentOrder(nSandwiches, nChips, nPickles, nBrownies, nSodas);
      }while(sInput != "thanks");
      Conclusion(nSandwiches, nChips, nPickles, nBrownies, nSodas);
}

void CurrentOrder(int nNumSandwiches, int nNumChips, int nNumPickles, int nNumBrownies, int nNumSodas)
{

    cout<<"You have ordered:"<<endl;
    cout<<nNumSandwiches <<" sandwich(es)\tat $"<<dSANDWICHES_PRICE <<" each =\t$"<<(nNumSandwiches * dSANDWICHES_PRICE) <<endl;
    cout<<nNumChips      <<" chip(s)\tat $"     <<dCHIPS_PRICE      <<" each =\t$"<<(nNumChips * dCHIPS_PRICE)           <<endl;
    cout<<nNumPickles    <<" pickle(s)\tat $"   <<dPICKLES_PRICE    <<" each =\t$"<<(nNumPickles * dPICKLES_PRICE)       <<endl;
    cout<<nNumBrownies   <<" brownie(s)\tat $"  <<dBROWNIES_PRICE   <<" each =\t$"<<(nNumBrownies * dBROWNIES_PRICE)     <<endl;
    cout<<nNumSodas      <<" soda(s)\tat $"     <<dSODAS_PRICE      <<" each =\t$"<<(nNumSodas * dSODAS_PRICE)           <<endl;
    cout<<"Total Tax                     = $"
        <<  ((nNumSandwiches * dSANDWICHES_PRICE)
          + (nNumChips * dCHIPS_PRICE)
          + (nNumPickles * dPICKLES_PRICE)
          + (nNumBrownies * dBROWNIES_PRICE)
          + (nNumSodas * dSODAS_PRICE))
          * (dTAX)
        <<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Subtotal:\t\t\t$"
        <<   (nNumSandwiches * dSANDWICHES_PRICE)
           + (nNumChips * dCHIPS_PRICE)
           + (nNumPickles * dPICKLES_PRICE)
           + (nNumBrownies * dBROWNIES_PRICE)
           + (nNumSodas * dSODAS_PRICE)
        <<endl
        <<"Grand Total:\t\t\t$"
        <<   ((nNumSandwiches * dSANDWICHES_PRICE)
           + (nNumChips * dCHIPS_PRICE)
           + (nNumPickles * dPICKLES_PRICE)
           + (nNumBrownies * dBROWNIES_PRICE)
           + (nNumSodas * dSODAS_PRICE))
           + ((nNumSandwiches * dSANDWICHES_PRICE)
           + (nNumChips * dCHIPS_PRICE)
           + (nNumPickles * dPICKLES_PRICE)
           + (nNumBrownies * dBROWNIES_PRICE)
           + (nNumSodas * dSODAS_PRICE))
           * (dTAX)
        <<endl
        <<endl;
}

void Conclusion(int nNumSandwiches, int nNumChips, int nNumPickles, int nNumBrownies, int nNumSodas)
{
   cout<<"Your Order number is: "<<rand() % 1001<<endl;
   cout<<"THANK YOU for shopping at Snack Express!"<<endl;
}

/*Sample Ouput

Welcome to Snack Express!
Choose from 5 delicious snacks:
Sandwiches are     $4.99
Bags of Chips are  $0.99
Pickles are        $1.25
Brownies are       $0.50
Sodas are          $1.20

Enter your orders exactly as they show up on the menu.

Press any key to continue . . .

You have ordered:
0 sandwich(es)  at $4.99 each = $0.00
0 chip(s)       at $0.99 each = $0.00
0 pickle(s)     at $1.25 each = $0.00
0 brownie(s)    at $0.50 each = $0.00
0 soda(s)       at $1.20 each = $0.00
Total Tax                     = $0.00
-----------------------------------------------------------------------------
Subtotal:                       $0.00
Grand Total:                    $0.00

What would you like to order?
(Enter "thanks" to checkout or enter "cancel" to reset number of items to zero.)
sodas
How many sodas would you like? 14

You have ordered:
0 sandwich(es)  at $4.99 each = $0.00
0 chip(s)       at $0.99 each = $0.00
0 pickle(s)     at $1.25 each = $0.00
0 brownie(s)    at $0.50 each = $0.00
14 soda(s)      at $1.20 each = $16.80
Total Tax                     = $1.39
-----------------------------------------------------------------------------
Subtotal:                       $16.80
Grand Total:                    $18.19

What would you like to order?
(Enter "thanks" to checkout or enter "cancel" to reset number of items to zero.)

You have ordered:
0 sandwich(es)  at $4.99 each = $0.00
0 chip(s)       at $0.99 each = $0.00
0 pickle(s)     at $1.25 each = $0.00
0 brownie(s)    at $0.50 each = $0.00
14 soda(s)      at $1.20 each = $16.80
Total Tax                     = $1.39
-----------------------------------------------------------------------------
Subtotal:                       $16.80
Grand Total:                    $18.19

What would you like to order?
(Enter "thanks" to checkout or enter "cancel" to reset number of items to zero.)
pizza

Sorry, please enter your order again.

Press any key to continue . . .

You have ordered:
0 sandwich(es)  at $4.99 each = $0.00
0 chip(s)       at $0.99 each = $0.00
0 pickle(s)     at $1.25 each = $0.00
25 brownie(s)   at $0.50 each = $12.50
14 soda(s)      at $1.20 each = $16.80
Total Tax                     = $2.42
-----------------------------------------------------------------------------
Subtotal:                       $29.30
Grand Total:                    $31.72

What would you like to order?
(Enter "thanks" to checkout or enter "cancel" to reset number of items to zero.)
thanks

You have ordered:
0 sandwich(es)  at $4.99 each = $0.00
0 chip(s)       at $0.99 each = $0.00
0 pickle(s)     at $1.25 each = $0.00
25 brownie(s)   at $0.50 each = $12.50
14 soda(s)      at $1.20 each = $16.80
Total Tax                     = $2.42
-----------------------------------------------------------------------------
Subtotal:                       $29.30
Grand Total:                    $31.72

Your Order number is: 748
THANK YOU for shopping at Snack Express!
Press any key to continue . . .

*/
