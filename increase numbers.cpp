#include<iostream>
using namespace std;

// 
int main (){
	int f1,f2,f3,f4;
	f1=1, f2=1, f3=1;
	while (f3<1000){
		f1=f2;
		f2=f3;
		cout<< f3 <<" ";
		f3=f1+f2;
	}
	return 0;
}
