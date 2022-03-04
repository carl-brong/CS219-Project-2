#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

std::string input[100];
std::string filename;
ifstream fin;

int doADD(std::string[], int); //add the hex declaration
int doAND(std::string[], int); //and operation
int doASR(std::string[], int); //1-bit arithmetic shift
int doLSR(std::string[], int); //do 1-bit logical shift right
int doLSL(std::string[], int); //do 1-bit logical shift left
int doNOT(std::string[], int); //do bitwise NOT
int doORR(std::string[], int); //OR operation
int doSUB(std::string[], int); //Subtract operation
int doXOR(std::string[], int); //EXCLUSIVE OR operation

int main(){
	//opens the file
	fin.open("cmdOperations.txt");
	int count = 0;
	while(fin){
		fin >> input[count];
	count++;
	}

	fin.close();
	for(int i = 0; i < count+1; i++){
		std::cout << input[i] << std::endl;
	}
	
	int i = 0;
	while(i<= count){
		if(input[i] == "ADD"){
			i = doADD(input, i);
		}
		if(input[i] == "AND"){
			i = doAND(input, i);
		}
		if(input[i] == "ASR"){
			i = doASR(input, i);
		}
		if(input[i] == "LSR"){
			i = doLSR(input, i);
		}
		if(input[i] == "LSL"){
			i = doLSL(input, i);
		}
		if(input[i] == "NOT"){
			i = doNOT(input, i);
		}
		if(input[i] == "ORR"){
			i = doORR(input, i);
		}
		if(input[i] == "SUB"){
			i = doSUB(input, i);
		}
		if(input[i] == "XOR"){
			i = doXOR(input, i);
		}
	i++;
	}
	return 0;
}

int doADD(std::string array[], int index){//designed with help from Larson Rivera
	uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result += operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}

int doAND(std::string array[], int index){
uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result &= operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}

int doASR(std::string array[], int index){
uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result << operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}

int doLSR(std::string array[], int index){
uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result << operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}

int doLSL(std::string array[], int index){
uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result >>= operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}

int doNOT(std::string array[], int index){
uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result != operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}

int doORR(std::string array[], int index){
uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result || operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}

int doSUB(std::string array[], int index){
uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result -= operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}

int doXOR(std::string array[], int index){
uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result ^= operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}
	

