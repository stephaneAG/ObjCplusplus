#include "cinder/app/AppCocoaTouch.h"
#include "cinder/app/Renderer.h"
#include "cinder/Surface.h"
#include "cinder/gl/Texture.h"
#include "cinder/Camera.h"

// include the custom class 'Link' (wich wraps up an Ojb-C fcn into a C++ one, allowing it to be able to be called from C++ )
#include "Link.h"

using namespace ci;
using namespace ci::app;

class MixedCinderTouchProjectApp : public AppCocoaTouch {
  public:
	virtual void	setup();
	virtual void	update();
	virtual void	draw();
    
};

void MixedCinderTouchProjectApp::setup()
{
        Link::openURL( "http://www.stephaneadamgarnier.com" ); // use our 'C++-wrapped' Obj-C fcn ( wich actually opens up a url in mobile safari )
}

void MixedCinderTouchProjectApp::update()
{

}

void MixedCinderTouchProjectApp::draw()
{
	gl::clear( Color( 0.2f, 0.2f, 0.3f ) );
	
}

CINDER_APP_COCOA_TOUCH( MixedCinderTouchProjectApp, RendererGl )
