#include <stdio.h>
#include <stdlib.h>
#include "MyHeader.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Set A = newSet();
	Set B = newSet();
	
	addElement(&A, 5);
	addElement(&A, 7);
	addElement(&A, 2);
	addElement(&A, 3);
	addElement(&A, 8);
	
	addElement(&A, 2);
	addElement(&A, 3);
	addElement(&A, 8);
	
	Set uSet = unionSet( A, B);
	Set iSet = intersectionSet(A, B);
	Set dSet = differenceSet(A, B);
	 
	return 0;
}
