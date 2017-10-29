/*
This is a template to create Headerfiles for a own function Library. 
change the header parts to your filename and add your parameters. 
The .h and .ino files must share the same folder. 
both files and their folder must have the same name, or the Arduino IDE won't see the Library! 
*/

#ifndef Header_h
#define Header_h // defines the file as an instance, if undefined. 

#include <Arduino.h> // include all your Libraries, as in the .ino file. 
#include <Header.ino> // include the corresponding .ino file, its just nice to open at visual studio by rightclick/open 

class Header { // declear the class of the library, that makes it possible to create instances of the class. 
private: // are hidden from the user
	bool variables;
public:
	Function() { }; // user can get and set public parts. Call the function and all other parameters. 
}; // do not forget the Semicolon!

#endif
