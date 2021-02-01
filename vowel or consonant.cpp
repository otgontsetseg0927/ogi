#include<iostream>
using namespace std;
int main(){
	
	//  it is vowel or consonant
	char vowel ;
	cout <<" enter the any vowel or consonant";
	cin>>vowel; 
	
	if((vowel == 'a')||(vowel == 'e')||(vowel =='i')||(vowel =='u')||(vowel =='o')||(vowel == 'A')|| (vowel =='E')||(vowel == 'I')|| (vowel == 'U')|| (vowel == 'O'))
	 { cout <<vowel<< " is vowel";
	 } else {
	 	cout <<vowel<< " is consonant" ; 
	 }
	
	
	
	return 0;
	
}
