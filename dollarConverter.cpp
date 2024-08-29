#include <iostream>

//to use std elements without writing std::
using namespace std;

int main() {
  //declaring doubles for each variable
  double pesos, reais, soles;

  //asking the user for the amount of pesos to set to the pesos variable
  cout<< "Enter number of Columbian Pesos: "<<endl;
  cin>>pesos;

  //asking the user for the amount of soles to set to the soles variable
  cout<< "Enter number of Brazilian Reais: "<<endl;
  cin>>reais;

  //asking the user for the amount of soles to set to the soles variable
  cout<< "Enter number of Peruvian Soles: "<<endl;
  cin>>soles;

  //calculate the US dollars and then print the solution
  double dollars = (pesos* 0.051) +(reais * 0.18) + (soles * 0.27);
  cout<<"US Dollars = $"<<dollars<<endl;

  return 0;
  
}