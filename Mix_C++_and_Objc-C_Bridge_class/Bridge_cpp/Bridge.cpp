// Bridge.cpp - C++ implementation file

#include "Bridge.h" // include the C++ header file

// "C++ part"       
void Bridge::setCallbackFunction( callback_function pFunc ){
    _theCallbackFcn = pFunc; // store the callback function ( > wich is probably in the 'main' (..) )
}

// call the callback function
void Bridge::invokeCallbackFunction(){
    _theCallbackFcn(); // call the stored callback function
}