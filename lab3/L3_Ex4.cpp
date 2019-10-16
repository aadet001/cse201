/*

CSE201-F19 Tuesday or Thursday Lab (depending on your lab day)

@file L3_Ex3.cpp

@author Akinyemi Adetunji

@date October 15, 2019

DESCRIPTION: print product of all odd numbers from 0 to 100


ALGORITHM: use for loop, iterating by 2. get the product of current number by current iteration. 

*/ 
#include <iostream> 

using namespace std; 

int main(){
	double n = 1;

	for(int i =1; i < 100; i+=2){
		n*=i;
		//cout << n  << endl; 
	}
	
	cout << n << endl; 


	return 0; 
}
