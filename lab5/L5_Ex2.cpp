/*

CSE201-F19 Tuesday Lab (depending on your lab day)

file L4_Ex3.cpp

author Akinyemi Adetunji

date October 29, 2019

DESCRIPTION: Write a logical (i.e. Boolean) valued function which takes a single integer parameter, 
and returns "True" if and only if the integer is an even number between 1 and 1000. 
Test your inputs if only if the number is in the range before you initiate the function call.

ALGORITHM: <provide an algorithm that you use to solve this problem>

*/

#include <iostream>

using namespace std;

bool val(int); 

int main(){
        int n;
        bool b; 

        cout << "$: ";

        cin >> n;
	while(n < 1 || n > 1000){
		cout << "$: "; 
		cin >> n; 
	}

        b = val(n); 

        if (b == 1){
                cout << "True" << endl; 
        } else {
                cout << "False\n";  
        }
        


        return 0;

}



bool val(int x){
        if(x%2==0 /*&& x > 1 && x < 1000*/){
                return true;
        }

        return false;
}