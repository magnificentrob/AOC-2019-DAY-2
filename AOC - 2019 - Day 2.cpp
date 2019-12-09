#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	//**********Part 1**********

	/*
	ifstream inputfile;
	inputfile.open("input.txt");
	string numbers;
	vector<int> storage;
	while (getline(inputfile, numbers, ','))
		storage.push_back(stoi(numbers));
	inputfile.close();

	for (int i = 3; i < storage.size(); i += 4) {
		int opcode = storage[i - 3];
		if (opcode == 99) break;
		int positionA = storage[i - 2];
		int positionB = storage[i - 1];
		int finalPosition = storage[i];
		if (opcode == 1)storage[finalPosition] = storage[positionA] + storage[positionB];
		if (opcode == 2)storage[finalPosition] = storage[positionA] * storage[positionB];
	}
	cout << storage[0];
	*/
	
	for (int i = 0; i < 99; i++) {
		for (int c = 0; c < 99; c++) {
			int array[] = { 1, 12, 2, 3, 1, 1, 2, 3, 1, 3, 4, 3, 1, 5, 0, 3, 2, 10, 1, 19, 1, 19, 9, 23, 1, 23, 6, 27, 2, 27, 13, 31, 1, 10, 31, 35, 1, 10, 35, 39, 2, 39, 6, 43, 1, 43, 5, 47, 2, 10, 47, 51, 1, 5, 51, 55, 1, 55, 13, 59, 1, 59, 9, 63, 2, 9, 63, 67, 1, 6, 67, 71, 1, 71, 13, 75, 1, 75, 10, 79, 1, 5, 79, 83, 1, 10, 83, 87, 1, 5, 87, 91, 1, 91, 9, 95, 2, 13, 95, 99, 1, 5, 99, 103, 2, 103, 9, 107, 1, 5, 107, 111, 2, 111, 9, 115, 1, 115, 6, 119, 2, 13, 119, 123, 1, 123, 5, 127, 1, 127, 9, 131, 1, 131, 10, 135, 1, 13, 135, 139, 2, 9, 139, 143, 1, 5, 143, 147, 1, 13, 147, 151, 1, 151, 2, 155, 1, 10, 155, 0, 99, 2, 14, 0, 0 };
			int constant = 3;
			array[1] = i;
			array[2] = c;

			int opcode = array[constant - 3];
			while (opcode != 99 || constant < 160) {
				cout << constant << endl;
				int positionA = array[constant - 2];
				int positionB = array[constant - 1];
				int finalPosition = array[constant];
				if (opcode == 1)array[finalPosition] = array[positionA] + array[positionB];
				if (opcode == 2)array[finalPosition] = array[positionA] * array[positionB];
				constant += 4;
			}
			if (array[0] == 19690720) {
				cout << 100 * i + c;
				break;
			}
		}
	}
	
}



