#include "ran.h"
#include <iostream>
using namespace std;
int main(){
	Ran myran(24);
	for(int i = 0; i < 5; i++){
		cout << myran.doub() << endl;	
	}
	cout << "Success" << endl;
	return 0;
	
}