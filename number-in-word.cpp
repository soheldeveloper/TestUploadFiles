#include <iostream>
#include <string>

int main(){
	std::string arr[] = {"Greater then nine", "one","two","three","four", "five", "six", "seven", "eight", "nine"};
	int n;
	
	std::cin >> n;
	
	if(n>9){
		std::cout << arr[0];
	}else{
		std::cout << arr[n];
	}
	
	
	return 0;
}
