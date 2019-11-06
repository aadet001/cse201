/*

CSE201-F19 Tuesday Lab 

file L4_Ex2.cpp

author Akinyemi Adetunji

date 10 22, 2019

DESCRIPTION: use loop to print out pattern

ALGORITHM: use loop and nested loop. outter loop for iteration and nested loop for each asterisk. 

*/


#include <iostream>

using namespace std; 

int main()
{
	int n = 6; 

	for(int i=0; i < 5; i++){
		for(int j=0; j < n; j++){
			cout << "*"; 
		}
		cout << endl << endl; 
		n--;  
	}
	for(int i=0; i < 6; i++){
		for(int j=0; j < n; j++){
			cout << "*"; 
		}
		cout << endl << endl; 
		n++; 
	}

	return 0;
}
