#include <iostream> 
using namespace std; 

template<class tipo> tipo abs(tipo x){ return(x< 0) ? -x : x ;} 

int main(){ 
	int i = -3; 
	float a = -6.1; 
	
	cout<< " Chamada com tipo generico int: " << abs(i) << endl; 
	cout<< " Chamada com tipo generico float: " << abs(a) << endl;
	
	return 0;	
}