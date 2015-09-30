#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void strReplace(char *str, int len);

int main(int argc, char **argv){
	strReplace(argv[1], strlen(argv[1]));
	cout << argv[1] << endl;

	return 0;
}

void strReplace(char *str, int len){
	char *new_str = new char[len];
    int y = 0;
    for(int i = 0; i<len; i++){
    	if(y >= len){
    	  break;
    	}
    	if(str[i] == ' '){
          new_str[y++] = '%';
          new_str[y++] = '2';
          new_str[y++] = '0';
    	} else {
    	  new_str[y++] = str[i];
    	}
    }

   // Copy new string into old string location
   for(int i = 0; i < len; i++){
   	  str[i] = new_str[i];
   }

	delete [] new_str;
	new_str = NULL;
}