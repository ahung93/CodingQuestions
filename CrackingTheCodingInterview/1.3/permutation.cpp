#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

bool isPermutation(string str_1, string str_2);

int main(int argc, char **argv){
	cout << isPermutation(argv[1], argv[2]) << endl;

	return 0;
}

/*
**  Similar to Question 1.1
**  Create 2 arrays that will hash bit value of char to index
**  Increment index for each character found for both strings
**  seperately. 
**  Both arrays should match exactly.
**
**  Memory = O(1)
**  Time   = O(n)
**
*/
bool isPermutation(string str_1, string str_2){
	int str1_array[256] = {0};
	int str2_array[256] = {0};

	size_t str1_length = str_1.size();
	size_t str2_length = str_2.size();

	if( str1_length != str2_length){
		return false;
	}

	for(int i = 0; i < str1_length; i++){
		str1_array[(int) str_1[i]]++;
	}

	for(int i = 0; i < str2_length; i++){
		str2_array[(int) str_2[i]]++;
	}

	for(int i = 0; i < 256; i++){
		if(str1_array[i] != str2_array[i]){
			return false;
		}
	}

	return true;
}