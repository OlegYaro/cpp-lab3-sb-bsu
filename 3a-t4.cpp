#include<iostream> 
#include <limits> 
#include <ios> 
using namespace std; 

int main()
{
int k, i = 1, sum_k = 0, number;

while (1)
{
  cout << " Enter the amount of integers to sum = "; cin >> k;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  if(cin.fail())
    {
       cout << "Error format ou amount, please, try again "; 
       cin.clear();
       cin.ignore(numeric_limits<streamsize>::max(), '\n');
       cout << endl;
       continue;
     }
  else
  {
     do {
         cout << "Enter integer nr. " << i << ": "; 
         cin >> number;
         sum_k += number; i++;
        } while (i <= k);
        cout << " The total sum of " << k << " integers is: "  << sum_k;
  }
}
    return 0;
}
