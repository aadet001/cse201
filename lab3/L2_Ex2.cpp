/* 

CSE201-F19 Tuesday or Thursday Lab (depending on your lab day) 
@file L2_Ex2.cpp 
@author Akinyemi Adetunji 
@date October 8, 2019 
DESCRIPTION: This program prompts the user for 3 double precision floating point values num1, num2, num3 and computes and displays the following values. 
the sum of num1, num2, num3 
the average of num1, num2 and num3 
the log2 of num1 
ALGORITHM: 
Get three double precision floating point numbers 
Prompt 
Get the three numbers 
Compute and print 
Sum of the three numbers 
Average of the three numbers 
log2 of the first number 

*/ 

#include <iostream>
#include <cmath>

using namespace std; 

double sum(double x, double y, double z){ 

	return x+y+z; 
}

double avg(double x, double y, double z){
	return sum(x,y,z)/3;
}

int main()
{
	double input1, input2, input3; 	
	cout << "input1: "; 
	cin >> input1; 
	cout << "input2: "; 
	cin >> input2; 
	cout << "input3: "; 
	cin >> input3; 

	cout << "the sum of input1, input2, input3: " << sum(input1, input2, input3) << endl; 

	cout << "the average of input1, input2, input3: " << avg(input1, input2, input3) << endl; 

	cout << "the log2 of input1: " << log2(input1) << endl; 
	
	return 0;
}