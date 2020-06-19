/*!
	\file 
		fibonacci.cpp
	\brief 
		Author: Pedro Murilo da Silva Pereira
        Description: This file implement a function to calculate the n'th term of Fibonacci sequence using the Binet's Formula
*/

// ** All documentation in this code was written using the Doxygen standard annotation **

#include <cmath>
#include "fibonacci.hpp"

using namespace std;

/***********************************************//**
    Description
    ===========

    The function **fibonacci_binet_formula** returns the n'th term of the fibonacci sequence

    @param n_term
        - ** Integer (int) ** - term of fibonacci sequence that will be calculated
    @return 
        - ** double (double) ** - n'th term of the fibonacci sequence
***************************************************/

double fibonacci_binet_formula(unsigned int n_term){

    // To calculate the n'th term of the fibonacci sequencie was use the Binet's Formula
    double n_term_value = (pow(((1 + sqrt(5))/2),n_term) - pow(((1 - sqrt(5))/2), n_term))/sqrt(5);
    return n_term_value;
}