#include <stdio.h>
#include <iostream>

using namespace std;

struct charNode {
	char c;
	charNode *next;
};

void reverse(char* str);

int main(int argc, char **argv){
  reverse(argv[1]);
  cout << argv[1] << endl;

  return 0;
}

/* 
**  Figure out the length of the array.
**  Go through it one more time and switching the places around
**
**  Memory: O(1)
**  Time:   O(n)
*/
void reverse(char* str){
  size_t length = 0;
  size_t switchLength = 0;
  charNode *top;
  size_t i = 0;
  char charTemp;
  while(str[i] != '\0'){
  	length++;
    i++;
  }

  if((length & 1) == 1){
    switchLength = (length - 1) / 2;
  } else {
    switchLength = length / 2;
  }

  for(i = 0; i < switchLength; i++){
    charTemp = str[i];
    str[i] = str[length-1-i];
    str[length-1-i] = charTemp;
  }
}