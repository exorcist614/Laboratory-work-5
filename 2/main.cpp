#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
using namespace std;


int main() 
{
	const int n = 10;
	
	float arr [n];
	int a,b;
	int i,j;

 	cout << "Input a:" << endl;
 	cin >> a;
 	cout << "b" << endl;
 	cin >> b;
 	if (b<a){
 		cout << "\nError input \n";
		return 0;
 	}
 	for(i=0; i<n; i++){
 		
		 arr[i] = (10.000*a+rand() % ((b-a)*10))/10;
 		printf("%5.1f  \t", arr[i]);
 	}
 	float maximum = 0;
 	
 	for(i=0; i<n; i++) maximum = max(sqrt(arr[i]*arr[i]),maximum);
	printf("\nThe maximum modulo element of the array:  %5.1f  \t", maximum);
	
	float sum;
	bool first=false;
	
	for(i=0; i<n; i++){
		if (!first) {
		first = (arr[i] > 0);}
		else {
			if (arr[i] <= 0) sum += arr[i]; else break;	
		}
	}
		printf("\nThe sum of the elements of the array located between the first and second positive elements:  %5.1f  \t", sum);

	return 0;
}
