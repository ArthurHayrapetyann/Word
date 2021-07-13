//This function calculates the length factor of a given word.
#include "word.hpp"
int Factorial(int n){

	if(n<=0){
		return 1;
	}
	int res = 1;
	for(int i = 1; i<=n; i++){
		res = res*i;
	}
	assert (res > 0);
	return res;

}
