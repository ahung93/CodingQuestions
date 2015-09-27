#include <stdio.h>
#include <iostream>
#include <string.h>
#include <climits>
#include <math.h>

using namespace std;

bool isUniq(string word);

int main(int argc, char **argv){
  cout << isUniq(argv[1]) << endl;
}
/*
**  THEORY:
**    Every character is represented by a single byte.
**  That means every character has a unique byte representation
**  and we can convert that unique byte value into a location in
**  an array.
**
**  Memory Usage: O(1)
**  Speed:        O(n)
*/
bool isUniq(string word){
	/*
	** Create an array that is able to hash any character
	**  to a location in an array.
	** Default value is false
	*/
	bool *charHash = new bool[(int) pow(2, 8)]();


	/*
	** Casts each char as an int and checks whether the index
	**  location is true or false.
	**
	** If the location is false, it means the location has not been
	**  touched. We will change the value to true to indicate we have
	**  accessed it.
	**
	** If the location is true, it means the location has been accessed
	**  before by another same symbol char
	*/
	for(int i = 0; i < word.size(); i++){
		if( charHash[(int) word[i]] != true){
			charHash[(int) word[i]] = true;
		}
		else{
			return false;
		}
	}

	return true;
}