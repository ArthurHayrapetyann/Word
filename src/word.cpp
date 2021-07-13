
//This is a recursive function. It counts all possible outputs and places them in the array.
#include "word.hpp"


int word(string h, string arr[], int x, int a){
	for(int i = 0; i <= h.length()-2; i++){
		for(int j = h.length()-1; j > 1; j-- ){
			swap(h[j],h[j-1]);
			arr[a] = h;	
			a++;	
		}		
	}
	x++;
	if(x > h.length()-1){
		check(arr,h);
		return 0;
	}else{
		swap(h[0],h[x]);
		return word(h,arr,x,a);
	}
	return 1;
}

