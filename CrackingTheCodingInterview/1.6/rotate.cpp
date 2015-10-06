#include <stdio.h>
#include <iostream>

using namespace std;

// 4 Bytes is an 'int'

// Rotating in place means constant memory
void rotate(int **array, int size){
	int halves = size / 2;
	for(int x=0; x < size; x++){
		for(int y = x; y < size-x; y++){
			int yTotal = size - x;
			int xTotal = size - x;
			int temp = array[x][y];
			array[x][y] = array[xTotal-x][y];
			array[xTotal-x][y] = [xTotal-x][yTotal-y];
			array[xTotal-x][yTotal-y] = [x][yTotal-y];
			array[x][yTotal-y] = temp;
		}
	}
}