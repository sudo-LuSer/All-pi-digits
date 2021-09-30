#include <iostream>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;
void workForPI(){
	int d=10;
	double c=(float)d*M_PI;
	float pi=0;
	//return 0;
	while (c>0){
		c=(double)(c)/d;
		cout<<setprecision(10000000000000000)<<c<<endl;
	}
}
int main (){
	workForPI();
}