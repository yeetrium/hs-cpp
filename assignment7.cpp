//Luis Nunez, C++ 14/15, Assignment #7
#include <iostream.h>
#include <stdlib.h>

void GetInput();
void Echo();
void Calculation();

int nNumPeople, nNumBuses, nNumTaxis, nTaxiPeople;
int main()
{
      GetInput();
      Echo();
      Calculation();

      system("PAUSE");
      cout<<'\a';
      return 0;
}
void GetInput()
{
      cout<<"This program will calculate how many people can fit in a bus "<<endl
          <<"that can hold 50 people and a taxi that can hold 5 people."<<endl;
      cout<<"Please enter the number of people: "<<endl;
      cin>>nNumPeople;
      cout<<'\a';
}
void Echo()
{
      cout<<"You Entered "<<nNumPeople<<" people."<<endl;
}
void Calculation()
{
      nNumBuses = nNumPeople/50;
      nTaxiPeople = nNumPeople%50;
      nNumTaxis = (nTaxiPeople + 4)/5;

      cout<<"For "<<nNumPeople<<" people there are "<<nNumBuses<<" bus(es) and "<<nNumTaxis<<" taxi(s)."<<endl;
}

