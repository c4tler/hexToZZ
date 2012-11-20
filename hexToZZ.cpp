/**
* hexToZZ.cpp
* Stores the decimal representation of a hexadecimal value in a variable of ZZ datatype 
* Uses the NTL library
* By Catherine Murdoch 2012
*/

ZZ hexToZZ(string hexVal){
	ZZ val;
	val = to_ZZ(0);	//initialise the value to zero
	double base = 16;
	int j = 0;
	//convert the hex string to decimal string
	for (int i = ((hexVal.length())-1); i > -1; i--){
		val += toDec(hexVal[i])*(to_ZZ((pow(base, j))));
		j++;
	}
	//cout << endl << "The value in decimal is " << val << endl; 
	return val;
}

ZZ toDec(char val){
	if (val=='A' || val=='a') return to_ZZ(10);
	else if(val=='B' || val=='b') return to_ZZ(11);
	else if(val=='C' || val=='c') return to_ZZ(12);
	else if(val=='D' || val=='d') return to_ZZ(13);
	else if(val=='E' || val=='e') return to_ZZ(14);
	else if(val=='F' || val=='f') return to_ZZ(15);
	else return to_ZZ(val-'0');
}
