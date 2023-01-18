//=================================================
//== Written by..: Kevin Hinojo
//== Date Written: Jan 16, 2023
//== Purpose.....: Sales Transaction Program
//=================================================
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10000
#define PAUSE myPause()

// Prototype Functions Here
int recieveEsize();
void inputValues(int a[], int eSize);
void displayValues(int a[], int eSize);
void displayResults(int a[], int l, float l);
void retrieveAndOutputStats(int values[], int eSize);
void myPause();

//=================================================
int main(){
	int values[SIZE] = {0};
	int eSize = 0;
	srand((unsigned) time(NULL));
	eSize = recieveEsize();
	inputValues(values, eSize);
	displayValues(values, eSize);
	retrieveAndOutputStats(values, eSize);
} // end main

// ===== This is the dividing line between main and the function =====
void retrieveAndOutputStats(int a[], int eSize){
	int largest = a[0];
	int smallest = largest;
	int total = 0;
	float average = 0.0;
	for(int i = 0; i < eSize; i++){
		if(a[i] > largest)
			largest = a[i];
		if(a[i] < smallest)
			smallest = a[i];
		total += a[i];
	} // end for
	average = (float)total / eSize;
	displayResults(largest, smallest, average);
	}

int recieveEsize(){
	int result = 0;
	int const lowEnd = 500;
	int const highEnd = 1000;
	result = lowEnd + rand() % (highEnd - lowEnd +1);
	return result;
}
