#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
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
	string digitCount;
    string newString(str.size(), 'b');
    newString[y++] = currentChar;

    for(int i = 1; i < str.size(); i++){
    	if(currentChar == str[i]){
    		charCount++;
    	} else {
    		digitCount = to_string(charCount);

            // Check if it exceeds regular string
    		if((y + digitCount.size()) >= str.size())
    			return str;

            // Place the string representation into compact
            for(int j = 0; j < digitCount.size(); j++){
                newString[y++] = digitCount[j];
            }

            // Reset counter and character
            charCount = 1;
            currentChar = str[i];
            newString[y++] = currentChar;
    	}
    }

    /* If we have left for loop, then we need
    **   to place charCount into new string array again
    */
    digitCount = to_string(charCount);

    // Check if it exceeds regular string
    if((y + digitCount.size()) >= str.size())
        return str;

    // Place the string representation into compact
    for(int j = 0; j < digitCount.size(); j++){
        newString[y++] = digitCount[j];
    }
    newString.resize(y);
    return newString;
}