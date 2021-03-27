#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <vector>
using namespace std;
 
void sort( int aa[], int add, int len )
{
	//add=0 ascending add=1 descending
int i, j, pass;
float temp;
	
for(i = 0; i<len; i++) {
for(j = i+1; j<len; j++)
{
	if (add == 0){

		if(aa[j] < aa[i]) {
			temp = aa[i];
			aa[i] = aa[j];
			aa[j] = temp;}
	}
	else {
	if(aa[j] > aa[i]) {
		temp = aa[i];
		aa[i] = aa[j];
		aa[j] = temp;}
    }
}
pass++;
}
cout <<"\nSorted Element List ...\n";
for(i = 0; i<len; i++) {
cout <<aa[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;

} 

void sort2( float aa[], int add, int len )
{
	//add=0 ascending add=1 descending
int i, j, pass;
float temp;
	
for(i = 0; i<len; i++) {
for(j = i+1; j<len; j++)
{
	if (add == 0){

		if(aa[j] < aa[i]) {
			temp = aa[i];
			aa[i] = aa[j];
			aa[j] = temp;}
	}
	else {
	if(aa[j] > aa[i]) {
		temp = aa[i];
		aa[i] = aa[j];
		aa[j] = temp;}
    }
}
pass++;
}
cout <<"\nSorted Element List ...\n";
for(i = 0; i<len; i++) {
cout <<aa[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;

} 


 int main ()
 {
 	int m, n, k, l, tmp;
 	
 	cout << "Input m:" << endl;
 	cin >> m;
 	cout << "n" << endl;
 	cin >> n;
 	cout << "k" << endl;
 	cin >> k;
 	
 	int b[m];
 	
	float a[n];
 	
 	cout << "initial array B \n";
 	for( int i = 0; i<m; i++){
 		b[i] = rand() % 366 - 33;
 		cout << b[i] << "\t";
 	}
 	cout << "\ninitial array A \n";
 	for( int i=0; i<n; i++){
 		
		 a[i] = (1000.000+rand() % 1000)/1000;
 		printf("%5.3f  \t", a[i]);
 	}

 	int temp[k];
    int j, i;
    i=0; j=0;
 	l=m/k;
 	for (i = 0; i < 1+l; i++){
 		cout << "\nArray temp " << i << "\n";
		for(j = 0; j < k and i*k+j < m; j++){
			temp[j] = b[i*k+j];
			printf ("%d \t", temp[j]);
		} 
		sort(temp, (i % 2), j);
	 }	 
	 
	float temp2[k]; 
    i=0; j=0;
 	l=n/k;
 	for (i = 0; i < 1+l; i++){
 		cout << "\nArray temp " << i << "\n";
		for(j = 0; j < k and i*k+j < n; j++){
			temp2[j] = a[i*k+j];
			printf ("%5.3f \t", temp2[j]);
		} 
		sort2(temp2, (i % 2), j);
	 }	 
 	
 	
 	return 0;
 }
 
