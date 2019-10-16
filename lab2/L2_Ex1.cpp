/* 

CSE201-F19 Tuesday or Thursday Lab (depending on your lab day) 

@file L2_Ex1.cpp 
@author Akinyemi Adetunji 
@date October 8, 2019 
DESCRIPTION: This program extracts characters from the
input string = "Four score and seven years ago our fathers" 
to make and print the output string = "carefree and no tears" 
ALGORITHM:
Get the input string 
Form the output string 
Extract and concatenate the appropriate characters 
Print the output string

 */ 


#include <iostream> 
#include <string>

using namespace std; 

int main(){
	string input_string = "Four score and seven years ago our fathers"; 
	//string output_string2 = "carefree and no tears";
	string output_string =""; 
	int pos[] = {6,11,3,9,35,3,9,9,4,11,12,13,4,12,1,4,37,9,36,40,41};

	for (int i=0; i<21; i++){
		output_string += input_string[pos[i]];	
	}
	
	//6,11,3,9-0,3,9,9 + 4 + 11,12,13 + 12,1 + 37,9,36,40,41
	cout << output_string << endl; 

	return 0; 
}
