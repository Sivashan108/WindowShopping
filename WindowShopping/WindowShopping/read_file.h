#pragma once
#include <iostream> // header in standard library
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
namespace R

{
	class read_file
	{
	public:
		/*
		Reads the input file

		string Headings are the headings avaiable for the specific entry
		string data_in is an array of the input data
		int Col_count is the total amount of columns avaiable for the specific entry
		int row_counter are the total amount of entries available
		char row_input is the entry requested
		*/
		void Read_file(string Headings[100], string data_in[100][100],  int Col_count[1],  int row_counter[1]);
	};

}