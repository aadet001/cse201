// <<006185656>> LAB 1B - Exercise 4
#include <iostream> 
#include <string> 

using namespace std;

void border(string s){
	cout << "+---";
        for(int i=0; i < s.length()-1; i++){
                cout << "-";
        }
        cout << "---+" << endl;

}

int main(){
	string n = "Akinyemi Adetunji"; 
	
	border(n); 
	cout << "|  " << n << "   |" << endl; 
	

	border(n); 
	return 0; 
}
