#include <iostream>
#include <set>

using namespace std;

int main(){
	
	set<char> s;

	for(int i = 0; i < 8; ++i){
		char c = char(i + 48);
		s.insert(c);
	}	

	string line;
	cin >> line;

	bool ok = true;

	if(line[0] == '0'){
		ok= false;
	}
	else{
		for(int i = 0; i < line.length(); ++i){
			char c = line[i];
			if(s.find(c) == s.end()){
				ok = false;
				break;
			}
		}
	}

	if(ok == true){
		cout << "YES";
	}else{
		cout << "NO";
	}


	return 0;
}