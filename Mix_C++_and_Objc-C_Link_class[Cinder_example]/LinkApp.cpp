// LinkApp.cpp - Cinder C++ app

#pragma once
#include "cinder/app/AppBasic.h" // necessary for the 'Cinder' C++ framework
#include "Link.h" // we include the C++ (!) header from our '3-files-class' ( 2 x '*.h' [ in C++ | Obj-C ] , 1 x '*.mm' [ mixing both ] )

class LinkApp : ci::app::AppBasic {
	
 public:
	void setup();
	
};

void LinkApp::setup(){
	Link::openURL( "http://www.stephaneadamgarnier.com" ); // use our 'C++-wrapped' Obj-C fcn ( wich actually opens up a url in mobile safari )
}

CINDER_APP_BASIC ( LinkApp, RendererGl )