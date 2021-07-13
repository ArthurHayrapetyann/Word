
//This function finds a array of repeating words of a given array, prints their number and prints non-repeating ones.

#include "word.hpp"
int check(string arr[], string h){
	int krknvox = 0;
	for(int i = 0; i < Factorial(h.length()); i++){
		for(int j = i+1; j < Factorial(h.length()); j++){
			if(arr[i] == arr[j]){
				arr[i] = "00";
				krknvox = krknvox + 1;
			}	
		} 
	}
	cout << "Կա հնարավոր  " << Factorial(h.length()) << " բառ որից կրկնվում են " << krknvox << " բառ։" << endl;
	cout << "Եվ կա  չկրնվող " << Factorial(h.length())-krknvox << " բառ։" << endl;
	cout << "Որոնք են՝" << endl;
	for(int f = 0; f < Factorial(h.length()); f++){
		if(arr[f]!="00"){
			cout << arr[f] << endl;
		}
	}
	return 0;
}
