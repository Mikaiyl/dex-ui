#include "ofMain.h"
#include "ofApp.h"

int main( ){
  
	ofGLESWindowSettings settings;
	settings.Width = 1920;
	setting.Length = 1200;
	settings.setGLESVerion(3);
  ofCreateWindow(settings);
	ofRunApp(new ofApp());
}
