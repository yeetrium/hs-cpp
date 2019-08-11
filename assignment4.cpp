//Luis Nunez, C++ 14/15, Assignment #4
#include <iostream.h>
#include <stdlib.h>

void GetInput();
void Echo();
void Calculation();
int nNumberOfPods, nPeasPerPod, nTotalPeas;
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
      cout<<"Press return after entering a number."<<endl;
      cout<<"Please enter the number of pea pods: ";
      cin>>nNumberOfPods;
      cout<<"Enter the number of peas in a pod: ";
      cin>>nPeasPerPod;
      cout<<endl;
}
void Echo()
{
      cout<<"You entered "
          <<nNumberOfPods
          <<" pods and "
          <<nPeasPerPod
          <<" peas in a pod "
          <<endl<<endl;
}
void Calculation()
{
      nTotalPeas = nNumberOfPods * nPeasPerPod;

      cout<<"If you have "
          <<nNumberOfPods
          <<" pea pods "
          <<endl;
      cout<<"and "
          <<nPeasPerPod
          <<" peas in each pod, then"
          <<endl;
      cout<<"you have "
          <<nTotalPeas
          <<" peas in all the pods."
          <<endl<<endl;
}
/*Sample Output
Press return after entering a number.
Please enter the number of pea pods: 85
Enter the number of peas in a pod: 36

You entered 85 pods and 36 peas in a pod

If you have 85 pea pods
and 36 peas in each pod, then
you have 3060 peas in all the pods.

Press any key to continue . . .
*/