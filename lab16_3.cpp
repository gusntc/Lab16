#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 
	
	int *pa = std::max_element(a,a+5);
		std::cout << "Address of the highest value in array A is " << pa << "\n";
		std::cout << "The highest value in array A is "<< *pa << "\n";
	double *pb = std::max_element(b,b+9); 
		std::cout << "Address of the highest value in array B is " << pb << "\n";
		std::cout << "The highest value in array B is "<< *pb << "\n";
	return 0;
}

