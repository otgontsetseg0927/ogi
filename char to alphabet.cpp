#include<iostream>
using namespace std;
int main(){
	
	// a character is alphabet or not
	char a;
	cout <<" enter the any number or alphabet ";
	cin>>a;
		if ((a >= 'a') && (a <= 'z')){
		cout <<a<< " is an alphabet ";
		}else {
		cout <<a<< " is a number";	
		}
	
	return 0;
	
}
