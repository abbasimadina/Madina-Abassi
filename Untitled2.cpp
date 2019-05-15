#include<iostream>
using namespace std;
int main(){
	//C++ program to perform celsios to farenheit convertion 
	
	float farenheit, celsius;
	
	cout <<"Enter the temperature in Celsius";
	cin>> celsius;
	farenheit=(celsius*9.0) /5.0+32;
	cout<< "The temperature in Celsius : " << celsius <<endl;
	cout<< "The temperature in Farenheit : " <<farenheit <<endl;
	
	return 0;
}
