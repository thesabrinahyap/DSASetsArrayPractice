#include <stdio.h>
#include <stdlib.h>
#include "MyHeader.h"


Set newSet(){
	Set S;
	int ctr;
	
	for(ctr=0; ctr<MAX; ctr++){
		S.elems[ctr] = false;
	}	
	S.count = 0;
	
	return S;
	
}

bool addElement(Set *s, int item){
	bool b = false;
	if(s->count < MAX-1){
		s->elems[++s->count] = item;
		b = true;
	}
	return b;
	
}
//bool removeElement(Set *s, int item);
void displaySet(Set s){
	int ctr;
	for(ctr = 0; ctr<s.count && s.elems[ctr] = true; ctr++){
		printf("%d\n",s.elems[ctr]);
	}
}
Set unionSet(Set a, Set b){
	Set retVal = newSet();
	
	int ctr;
	
	for(ctr=0; ctr< MAX; ctr++){
		if( a.elems[ctr] | b.elems[ctr]){
			addElement(&retVal, ctr);
		}
	}
	return retVal;
}
Set intersectionSet(Set a, Set b){
		Set retVal = newSet();
	
	int ctr;
	
	for(ctr=0; ctr< MAX; ctr++){
		if( a.elems[ctr] & b.elems[ctr]){
			addElement(&retVal, ctr);
		}
	}
	return retVal;
}
Set differenceSet(Set a, Set b){
		Set retVal = newSet();
	
	int ctr;
	
	for(ctr=0; ctr< MAX; ctr++){
		if( a.elems[ctr] - b.elems[ctr]){
			addElement(&retVal, ctr);
		}
	}
	return retVal;
}
//Set symmetricDiffSet(Set a, Set b);
//int cardinality(Set s);
#endif
