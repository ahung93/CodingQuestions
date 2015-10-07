#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

// 4 Bytes is an 'int'

// Rotating in place means constant memory
void rotate(int **array, int size){
	int halves = size / 2;
	for(int x=0; x < halves; x++){
		for(int y = x; y < size-x-1; y++){
			int yTotal = size - 1 - x;
			int xTotal = size - 1 - x;
			int temp = array[x][y];
			array[x][y] = array[xTotal-y+x][x];
			array[xTotal-y+x][x] = array[xTotal][yTotal-y+x];
			array[xTotal][yTotal-y+x] = array[y][yTotal];
			array[y][yTotal] = temp;
		}
	}
}

int main(void){
	cout << "Declaring arrays" << endl;
	int **oddArray = new int * [5];
	for(int i=0; i<5;i++){
		oddArray[i] = new int[5];
	}

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			oddArray[i][j] = i*10+j;
		}
	}

	int **smallOdd = new int * [3];
	for(int i=0; i<3;i++){
		smallOdd[i] = new int[3];
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			smallOdd[i][j] = i*10+j;
		}
	}

	int **evenArray = new int * [6];
	for(int i=0; i<6;i++){
		evenArray[i] = new int[6];
	}

	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			evenArray[i][j] = i*10+j;
		}
	}

	int **smallEven = new int * [2];
	for(int i=0; i<2;i++){
		smallEven[i] = new int[2];
	}

	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			smallEven[i][j] = i*10+j;
		}
	}

	cout << "Arrays declared" << endl;
	cout << "Printing oddArray" << endl;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cout << oddArray[i][j];
		}
		cout << endl;
	}

	cout << "Printing smallOdd" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << smallOdd[i][j];
		}
		cout << endl;
	}

	cout << "Printing evenArray" << endl;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cout << evenArray[i][j];
		}
		cout << endl;
	}

	cout << "Printing smallEven" << endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << smallEven[i][j];
		}
		cout << endl;
	}

	rotate(oddArray, 5);
	rotate(smallOdd, 3);
	rotate(evenArray, 6);
	rotate(smallEven, 2);

	cout << "Arrays Rotated" << endl;

	cout << "Printing oddArray" << endl;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cout << oddArray[i][j];
		}
		cout << endl;
	}

	cout << "Printing smallOdd" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << smallOdd[i][j];
		}
		cout << endl;
	}

	cout << "Printing evenArray" << endl;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cout << evenArray[i][j];
		}
		cout << endl;
	}

	cout << "Printing smallEven" << endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << smallEven[i][j];
		}
		cout << endl;
	}

	for(int i=0; i<5;i++){
		delete [] oddArray[i];
	}
	delete [] oddArray;

	for(int i=0; i<6;i++){
		delete [] evenArray[i];
	}
	delete [] evenArray;

	for(int i=0; i<2;i++){
		delete [] smallEven[i];
	}
	delete [] smallEven;

	return 0;
}