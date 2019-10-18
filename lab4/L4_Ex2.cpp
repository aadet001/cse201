/*

CSE201-F19 Tuesday Lab (depending on your lab day)

file L4_Ex2.cpp

author Akinyemi Adetunji

date month day, 2019

DESCRIPTION: <provide here a brief and concise description of what this program does>

ALGORITHM: <provide an algorithm that you use to solve this problem>

*/

// int argc, char const *argv[]

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