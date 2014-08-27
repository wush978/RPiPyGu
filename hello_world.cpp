#include <Rcpp.h>
#include <Python.h>

using namespace Rcpp;

//[[Rcpp::export]]
void initialize_python() {
    Py_SetProgramName("");  /* optional but recommended */
    Py_Initialize();
}

//[[Rcpp::export]]
void finalize_python() {
    Py_Finalize();
}

//[[Rcpp::export]]
void hello_python() {
    PyRun_SimpleString("from time import time,ctime\n"
                       "print 'Today is',ctime(time())\n");
}