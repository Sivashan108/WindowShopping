// Input_text.cpp
#include "read_file.h" // header in local directory
#include <iostream> // header in standard library
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>
using namespace R;
using namespace std;
ifstream inFile;
string row;
string data_text;
int colcounter;
int rowcounter;
int data_count = 0;
const int spacing = 20;
const char separator = ' ';
const int length = 3;

void read_file::Read_file(string Headings[100], string data_in[100][100], int Col_count[1],  int row_counter[1])

{
	// open CSV 
	// CSV was chosen based on the ability to add entries 
	inFile.open("list.csv");
	if (inFile.is_open()) {
	//	cout << "File has been opened" << endl;
	}
	else {
		cout << "No input file detected" << endl;
	}
	//stores main headings from CSV
		getline(inFile, row);
		row.erase(remove(row.begin(), row.end(), '\"'),row.end());
		stringstream ss(row);
		while (getline(ss, data_text, ','))
		{
			Headings[colcounter] = data_text;
			//cout << left << setw(spacing) << setfill(separator) << Headings[colcounter];
			colcounter++;
			
		}
		Col_count[0] = colcounter;
		
		//cout << Col_count[0] << endl;
			while (getline(inFile, row))
			{
				//stores data
				row.erase(remove(row.begin(), row.end(), '\"'), row.end());
				stringstream ss(row);
				while (getline(ss, data_text, ','))
				{
					data_in[rowcounter][data_count] = data_text;
			//		cout << left << setw(spacing) << setfill(separator) << data_in[rowcounter][data_count];
					data_count++;
				}
			//	cout << endl;
				data_count = 0;
				rowcounter++;
			}
			row_counter[0] =rowcounter ;

		//	cout << row_counter[0];

			
	inFile.close();
}