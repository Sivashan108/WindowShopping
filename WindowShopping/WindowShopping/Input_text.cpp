// Input_text.cpp
#include "Input_text.h" // header in local directory
#include <iostream> // header in standard library
#include <conio.h>
using namespace N;
using namespace std;


void input_text::Read_text(char inputchar[1])

{
	char input;
	input = _getch();
	inputchar[0] = input;
	//cout << "Text Entered: " << input << endl;
}