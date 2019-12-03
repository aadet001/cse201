#include <iostream> 
#include <string>
#include <algorithm>

using namespace std; 


class myString{
  public:
	myString() ;
	myString(char *c) ;
	void setValue(char c[]) ;
	int length() const ;
	void copy (char c[]) ;
	void swap(char *c[]) ;
	char * substr(char c[] , int a, int b) ;
	int compare(char c[]) ;
	void clearstring(); 

	void prints(){
		cout << s << endl; 
	}

  private:
  	char s[40]; 
  	int slen; 
} ;

myString::myString(){
	slen = 0; 
}

myString::myString( char *c){
	int k = (sizeof(c)/sizeof(*c));
	cout << k  << endl; 
	for(int i = 0; i < k; i++ ){
		s[i] = c[i]; 
	}  
	slen = k; 
}

void myString::clearstring(){
	int k = (sizeof(s)/sizeof(*s));
	for (int i = 0; i < k; ++i)
	{
		s[i] = 0; 
	}

	slen = 0; 
}

void myString::setValue(char c[]){
	clearstring(); 
	int k = (sizeof(c)/sizeof(*c));
	cout << k  << endl; 
	for(int i = 0; i < k; i++ ){
		s[i] = c[i]; 
	}  
	slen = k; 
}

int myString::length() const{
	return slen; 
}

void myString::copy(char c[]){
	clearstring(); 
	int k = (sizeof(c)/sizeof(*c));
	cout << k  << endl; 
	for(int i = 0; i < k; i++ ){
		s[i] = c[i]; 
	}  
	slen = k; 
}

//work
void myString::swap(char *c[]){
	int k = (sizeof(c)/sizeof(*c));
	char temp[40]; 
	
}

char * myString::substr(char c[], int a, int b){
	int k = (sizeof(c)/sizeof(*c));
	cout << k  << endl; 
	for(int i = 0; i < k; i++ ){
		if()
	}  
}

int myString::compare(char c[]){
	int k = (sizeof(c)/sizeof(*c));

	return (slen-k); 
}



int main(){
	char k[] = {'h','e','l','l','o'}; 
	myString s(k); 
	string greeting = "Hello World!! This is a great day." ;

	s.prints(); 




	return 0; 
}