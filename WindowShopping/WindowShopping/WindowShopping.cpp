// WindowShopping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//includes
#include <iostream>

#include "Input_text.h"
#include "screen_layout.h"
#include "read_file.h"
#include "compute_input.h"
#include  <stdlib.h>

//namespaces
using namespace std;
using namespace N;
using namespace I;
using namespace R;
using namespace C;

//local variables
string  Headings_in[100];
string data_input[100][100];
int Col_counter[1] ;
int row_count[1] ;
char inputchars[1];
int state = 0;
//executable main function
int main()
{

	input_text it;
	screen_layout sl;
	read_file rf;
	compute_input ci;
	// Reads CSV file, done as modular as possible so potentially can be swapped with other formats (JSON,XML)
	// CSV was used for this example for the abilty to add entries without needing to open code
	rf.Read_file( Headings_in, data_input, Col_counter, row_count);
	// 
	sl.Print_screen( Headings_in, data_input, Col_counter, row_count);
	while (1)
	{
		it.Read_text(inputchars);	
		state = ci.Print_input(Headings_in, data_input, Col_counter, row_count, inputchars);

		// if more additions were required would have used case statement instead of if statements
		if (state == 0 || state == 1)
		{

			system("CLS");
			sl.Print_screen(Headings_in, data_input, Col_counter, row_count);
		}
		if (state == 3)
		{
			return 0;
		}
	}
	
}

