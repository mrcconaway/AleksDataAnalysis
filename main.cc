#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <climits>
using namespace std;

struct userInput{
	bool f = false;
	string s;
};
struct studentData{
	string name;
	int count = 0;
};

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
	userInput csv, roster, output;

	for(int i = 1; i < argc; ++i){
		if(i == 1) {csv.f = true; csv.s = argv[i];}
		if(i == 2) {roster.f = true; roster.s = argv[i];}
		if(i == 3) {output.s = true; output.s = argv[i];}
	}

	vector<studentData> students;
	ifstream data;
    students = readData(data, csv.s);
    for(int i = 0 ; i < students.size(); ++i){
        cout << students[i].name << " " << students[i].count << endl;
    }

	return 0;
}

vector<studentData> readData(ifstream& inp, string file)
{

	vector<studentData> results;
	inp.open(file);
	if(inp.good() ){

	    string stmp;
	    int itmp;
	    getline(inp, stmp);
	    stmp = stmp.substr(1); // remove that pesky front " in csv file
	    results.push_back({stmp, -1});
	    while(!inp.eof())
	    {
	      getline(inp, stmp);
	    }

	    }
	else{
		cout << "CSV File Not Found: Aborting" << endl;
		abort();
	}


	return results;
}

