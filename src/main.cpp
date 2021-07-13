//This function takes the word and calls the function for that word.

#include "word.hpp"

int main(){
	string l;
	cout << "Ներմուծեք բառ" << endl;
	cin >> l;
	string arr[Factorial(l.length())];
	cout << "-------" << endl;	
	word(l,arr,0,0);

}
