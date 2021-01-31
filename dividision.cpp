#include <iostream>
using namespace std;
int main (){
	// a number is divisible by 5 and 11 or not.
	/*
     * If  num modulo division 5 is 0 
     * and num modulo division 11 is 0 then
     * the number is divisible by 5 and 11 both
     */
	
	int num; 
	cout <<"enter the number";
	cin>> num; 
	
	if((num % 5== 0)&&(num%11 == 0)){
		cout <<num<< " number is divisible by 5 and 11 ";
	} else {
		cout <<num<< " number is divisible by 5 and 11 or not"; 
	}
	
	return 0;
	
}
