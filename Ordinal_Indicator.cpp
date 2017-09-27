#include <iostream>
#include <cmath>
#include <string>



//Function Prototype
std::string ordinal_indicator(long long);

/*
//TESTING
int main(){
	
	//declare test input variable. Use long long to test large cases.
	long long theInput;
	
	for(int i = 0; i < 100; i++){
	
	//get test input variable
	std::cout << "Enter an integer: ";
	std::cin >> theInput;
	
	//run test and display results
	std::cout << theInput << ordinal_indicator(theInput) << "\n\n";
}
	
	/////////
	///END///
	/////////
	return 0;
}*/



//Function
std::string ordinal_indicator(long long n){
	
	//Sanitize input by forcing input to be a positive integer
	int abs_n = std::abs(n);
	
	//Special cases for integers ending in a -teen integer
	int teen_n = abs_n % 100;
	if(teen_n > 10 && teen_n < 20){
		return "th";
	}
	
	switch(abs_n%10) {
		
		case 1 : return "st";
		case 2 : return "nd";
		case 3 : return "rd";
		default: return "th";		
	}
	
	return "ERROR: ordinal_indicator() could not get your ordinal indicator";	
}
