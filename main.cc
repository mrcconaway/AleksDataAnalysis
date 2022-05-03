#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <climits>
#include "program.h"

using namespace std;


// ProtoTypes
vector<studentData> readData(ifstream& inp, string file);

// Arguments in order:
// 0) name of the program
// 1) name of csv file
// 2) name of students
// 3) output file
// Only 1) is required -- defaults will be used instead for 2) and 3) if not given
int main(int argc, char* argv[])
{

	// for(int i = 1; i < argc; ++i){
	// 	cout << argc << endl;
	// 	if(i == 1) {csv.f = true; csv.s = argv[i];}
	// 	if(i == 2) {roster.f = true; roster.s = argv[i];}
	// 	if(i == 3) {output.s = true; output.s = argv[i];}
	// }
	for(int i = 0; i < argc; ++i){
		cout << "HELLOOOOO" ;
		cout << argv[i] << endl;
	}
	char tmp;
	cin >> tmp;
	// vector<studentData> students;
	// ifstream data;
    // students = readData(data, csv.s);
    // for(int i = 0 ; i < students.size(); ++i){
    //     cout << students[i].lname << ", " << students[i].fname << students[i].count << endl;
    // }

	return 0;
}

// vector<studentData> readData(ifstream& inp, string file)
// {

// 	vector<studentData> results;
// 	inp.open(file);
// 	if(inp.good() ){

// 	    string stmp;
// 	    int itmp;
// 	    getline(inp, stmp);
// 	    stmp = stmp.substr(1); // remove that pesky front " in csv file
// 	    results.push_back({stmp," ", -1});
// 		int i = 0;
// 	    while(!inp.eof())
// 	    {
// 	      if(i < 5) {
// 	      		getline(inp, stmp); // trash lines
// 				i++;
// 		  }
// 	      getline(inp, stmp); // trash lines
// 		  if(stmp[0] == '"'){
// 			  // parse first and last name
// 			  stmp = stmp.substr(1); // remove first "
// 			  int commaPos = stmp.find(",");
// 			  string lastname = stmp.substr(0,commaPos);
// 			  int quotePos = stmp.find('"');
// 			  string firstname = stmp.substr(commaPos+1, quotePos-commaPos-1);

// 			  // get ALEKS Completed
// 			  int commaCount = 0;
// 			  int aleksCount = 0;
// 			  while(commaCount < 9){
// 				  if(commaCount == 8){
// 					// aleksCount = 
// 				  }
// 			  }

// 			  cout << lastname << " " << firstname << endl;

// 		  }
		  
// 	    }

// 	}
// 	else if(inp.open("aleks.csv".c_str()) ){
// 		cout << "using default file name: aleks.csv" << endl;
// 	}
// 	else{
// 		cout << "CSV File Not Found: Aborting" << endl;
// 		abort();
// 	}


// 	return results;
// }

