// Bridge.h - C++ header file

#pragma once
#include <string>

class Bridge{    
	typedef void (*callback_function)(void); // typedef for conciseness of callback fcn
	
    public:
        //static void openURL( const std::string &url); // needed 'static' to invoke Obj-C fcns
    
        // set the callbax function
        void setCallbackFunction( callback_function pFunc );    
 
    private:
        callback_function _theCallbackFcn; // a variable to store the callback function
        // call the callback function
        void invokeCallbackFunction();

};