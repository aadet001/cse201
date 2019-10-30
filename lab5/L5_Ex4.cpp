/*

CSE201-F19 Tuesday Lab (depending on your lab day)

file L4_Ex3.cpp

author Akinyemi Adetunji

date October 29, 2019

DESCRIPTION: Write a program that asks the user for an integer number 
and find the sum of all-natural numbers up to that number.

ALGORITHM: <provide an algorithm that you use to solve this problem>

*/

#include <iostream> 

using namespace std; 

void getSum(int); 



int main(){
	int n; 	
	cout << "Enter an integer: " ;
	cin >> n; 
	getSum(n);


	return 0; 
}

void getSum(int x){
	int a = x; 
	double sum=0; 
	while(a > 0){
		sum += a;
		a--;  
	}
	cout << sum << endl; 

}