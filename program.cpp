#include "program.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
program::program(int argc, char* argv[] )
{
    // if(argc < 2){
    //     program();
    // }
    // else{
        std::cout << endl;
	    for(int i = 0; i < argc; ++i){
            std::cout << i << " " <<  argv[i] << endl;
		    if(i == 1) {csv.f = true; csv.s = argv[i];}
		    if(i == 2) {roster.f = true; roster.s = argv[i];}
		    if(i == 3) {output.s = true; output.s = argv[i];}
	    }
    // }
        std::cout << endl;
        std::string tmp;
        std::getline(std::cin, tmp);

}

program::program()
{
    try{
        ifstream finp; 
        finp.open("test.csv");
        if(finp.good()){

        }
        else{
            throw(false);
        }
        cout << "try" << endl;
    }
    catch( bool flag ) {
        cout << "No Default found" << endl;
    }
}
