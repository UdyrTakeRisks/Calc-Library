
#include <cstdarg>
#include "CalcLib.h"

/// Author: Ahmed Ali
// Inspired by Concepts Course, Dr.Amin Allam
// A calculation library using variable parameters

int addInt(int ni, ...){
    int sum = 0;
    va_list v; //Used to iterate over the variable parameters
    va_start(v,ni); //Start the variable parameters after ni
    for(int i=0;i<ni;i++) sum += va_arg(v,int);
    va_end(v); //Finish traversal
    return sum;
}
double addDouble(int nd, ...){
    double sum = 0.0;
    va_list v; //Used to iterate over the variable parameters
    va_start(v,nd); //Start the variable parameters after nd
    for(int i=0;i<nd;i++) sum += va_arg(v,double);
    va_end(v); //Finish traversal
    return sum;
}

int subtractInt(int ni, ...){
    va_list v; //Used to iterate over the variable parameters
    va_start(v,ni); //Start the variable parameters after ni
    int result = va_arg(v,int); //Initialized as the first argument
    for(int i=1;i<ni;i++) result -= va_arg(v,int); //Begin from the second argument
    va_end(v); //Finish traversal
    return result;
}
double subtractDouble(int nd, ...){
    va_list v; //Used to iterate over the variable parameters
    va_start(v,nd); //Start the variable parameters after nd
    double result = va_arg(v,double); //Initialized as the first argument
    for(int i=1;i<nd;i++) result -= va_arg(v,double); //Begin from the second argument
    va_end(v); //Finish traversal
    return result;
}

int multiplyInt(int ni, ...){
    int result = 1;
    va_list v; //Used to iterate over the variable parameters
    va_start(v,ni); //Start the variable parameters after ni
    for(int i=0;i<ni;i++) result *= va_arg(v,int);
    va_end(v); //Finish traversal
    return result;
}
double multiplyDouble(int nd, ...){
    double result = 1.0;
    va_list v; //Used to iterate over the variable parameters
    va_start(v,nd); //Start the variable parameters after nd
    for(int i=0;i<nd;i++) result *= va_arg(v,double);
    va_end(v); //Finish traversal
    return result;
}

int divideInt(int ni, ...){
    va_list v; //Used to iterate over the variable parameters
    va_start(v,ni); //Start the variable parameters after ni
    int result = va_arg(v,int); //Initialized as the first argument
    for(int i=1;i<ni;i++) result /= va_arg(v,int); //Begin from the second argument
    va_end(v); //Finish traversal
    return result;
}
double divideDouble(int nd, ...){
    va_list v; //Used to iterate over the variable parameters
    va_start(v,nd); //Start the variable parameters after nd
    double result = va_arg(v,double); //Initialized as the first argument
    for(int i=1;i<nd;i++) result /= va_arg(v,double); //Begin from the second argument
    va_end(v); //Finish traversal
    return result;
}


