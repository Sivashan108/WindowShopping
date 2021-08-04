#pragma once
#include <iostream> // header in standard library
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
namespace C

{ 
	class compute_input
	{
	public:
		/*
		Prints the input entry based on keyboard input
		
		string Headings are the headings avaiable for the specific entry
		string data_in is an array of the input data
		int Col_count is the total amount of columns avaiable for the specific entry
		int row_counter are the total amount of entries available
		char row_input is the entry requested
		*/
		int Print_input(string Headings[100], string data_in[100][100], int Col_count[1], int row_counter[1], char row_input[1]);

	};
}