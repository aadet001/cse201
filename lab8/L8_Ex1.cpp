#include <iostream> 
#include <string>

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

void myString::setValue(char c[]){

}

int myString::length() const{
	return slen; 
}

void myString::copy(char c[]){

}

void myString::swap(char *c[]){

}

char * myString::substr(char c[], int a, int b){

}

int myString::compare(char c[]){

}

int main(){
	char k[] = {'h','e','l','l','o'}; 
	myString s(k); 
	string greeting = "Hello World!! This is a great day." ;

	s.prints(); 




	return 0; 
}