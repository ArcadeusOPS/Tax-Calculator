#include <cstdio>
#include <iostream>
using namespace std;

int main ()
{

int tree;
cout << "Estimate Tree's monthly income : " ; // 7400 HKD
cin >> tree ;

int nat;
cout << "Estimate Nat's monthly income : "; //106538
cin >> nat ;

cout << " \n Tree Monthly Income  :  " << tree; 
cout << " \n Nat Monthly Income :  " << nat ;

int monthly = tree + nat;
cout << "\n Joint Monthly Income is : " << monthly ;

long double rate = 0.1715;
int annual = monthly * 12;

cout << "\n Annual Joint Income is : "  << annual ;
int tax = annual * rate;

cout << ("\n Your Joint Tax Bill this year is HKD : " ) << tax ;
cout << ("\n ....................................... ") ;
}
