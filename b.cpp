#include <iostream>
#include <set>

using namespace std;

	int b[10];

int main(){

	string s;
	cin >> s;
	int x;
	

	set<int> settik;

	for( int i = 0; i < s.length(); i++){
		if( 0 <= s[i] - '0' <= 9){
		settik.insert(s[i] -'0');
		}
	}




	if( settik.size()==0 ){
	cout <<"NO";
	}
	else{
		for( int i = 0; i < settik.size(); i++){
		cout << settik[i];
		}
		}
return 0;
}
