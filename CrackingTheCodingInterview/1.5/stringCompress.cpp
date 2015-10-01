#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

string strCompress(string str);

int main(int argc, char **argv){
	cout << strCompress(argv[1]) << endl;

	return 0;
}

string strCompress(string str){
	int charCount = 1;
	int y = 0;
	char currentChar = str[0];
	char *buffer = new char[5000];
    string digitCount;
    string newString(str.size()-1, ' ');
    for(int i = 1; i < str.size(); i++){
    	if(currentChar == str[i]){
    		charCount++;
    	} else {
    		digitCount = itoa(charCount, buffer, 10);
    		if((y + digitCount.size()) >= str.size())
    			return str;
    	}
    }
}