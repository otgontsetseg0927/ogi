#include <iostream>
using namespace std;
int main (){
	//maximum between three numbers 
	int num1, num2, num3; 
	cout <<"enter first number; "<<endl;
	cin>>num1;
	cout << "enter second number; "<<endl;
	cin>> num2;
	cout << "enter third number;"<<endl;
	cin>> num3;
		
	if (num1>num2&&num1>num3){
		cout <<"First number is the largest;"<<endl<<"which is ="<<num1;
	} else if(num2>num1&&num2>num3){ 
		cout <<"Second number is the largest;"<<endl<<"which is ="<<num2;
	} else {
		cout << "Third number is the largest;"<<endl<<"which is ="<<num3;
	}
	return 0;
	
}
