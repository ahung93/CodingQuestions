#include <stdio.h>

struct charNode {
	char c;
	charNode *next;
};

void reverse(char* str);


/* Implement a linked list of characters.
**  When the list reaches a nul terminated value,
**  stop there and traverse backwards to verse string.
**
**  Memory: O(n)
**  Time:   O(n)
*/
void reverse(char* str){
  int length = 0;
  charNode *top;
  int i = 0;
  while(str[i] != '\0'){
    *top = new charNode;
    top->c = str[i];
    top->next = 
  	length++;
  }
}