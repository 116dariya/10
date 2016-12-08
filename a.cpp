#include <iostream>
#include <string>
using namespace std;
int main(){
 	
	string s;
	getline( cin, s);
	int counter = 0;

	for( int i = 0; i < s.length(); i++){
	if( s[i] == '.' || s[i] == ',' || s[i] == ';' || s[i] == ':' || s[i] == '!' || s[i] == '?' ){
	counter++;
	}
	}


	cout << counter;
	}	