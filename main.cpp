/*!
	\file 
		main.cpp
	\brief 
		Author: Pedro Murilo da Silva Pereira
        Description: main source code
*/

// ** All documentation in this code was written using the Doxygen standard annotation **

#include <stdexcept>
#include "fibonacci.hpp"
#include "main.hpp"

using namespace std;

/***********************************************//**
    Description
    ===========

    Main code responsible to calculate the nth term of fibonacci sequence and show the result on the screen
    To execute this program, follow the example bellow:

    $ ./fibonnaci <term_number>
    where:
        term_number - The term required of fibonacci sequence   
***************************************************/
int main(int argc, char *argv[]){

    if (argc == 1){
        cout << "To execute this program, follow the example bellow:" << endl;
        cout << "$ ./fibonnaci <term_number>" << endl;
        cout << "where: \n term_number - The term required of fibonacci sequence" << endl;
        return 1;
    }
    else if (argc > 1 && argc != 2){ // The number of arguments must be 2
        cout << "fibonacci program require 1 integer argument, but more than 1 arguments were passed" << endl;
        return 1;
    }else{

        int n_term;

        try{
            n_term = stoi(argv[1]);
        }
        catch (invalid_argument &e){ // If the argument isn't integer, a exception will be raised
            cout << "fibonacci program require 1 integer argument, but the arguments isn't integer" << endl;
            return 1;
        }

        if (n_term < 0){ // The argument must be greater than 0
            cout << "The argument must be greater than 0" << endl;
            return 1;
        }

        double n_term_value = fibonacci_binet_formula(n_term);
        cout << "The " << n_term << ordinal_number_suffix(n_term) << " term of the fibonacci sequencie is " << n_term_value << endl;
        return 0;
    }
}


/***********************************************//**
    Description
    ===========

    The function **ordinal_number_suffix** returns the suffix for any cardinal value

    @param value
        - ** unsigned int ** - cardinal number

    @return 
        - ** string ** - suffix to complement the ordinal number
***************************************************/
string ordinal_number_suffix(unsigned int value){
    string ordinalNumberSuffix;

    switch (value){
        case 0:
            ordinalNumberSuffix = "";
            break;
        case 1:
            ordinalNumberSuffix = "st";
            break;
        case 2:
            ordinalNumberSuffix = "nd";
            break;
        case 3:
            ordinalNumberSuffix = "rd";
            break; 
        default:
            ordinalNumberSuffix = "th";
            break; 
    }
    return ordinalNumberSuffix;
}
