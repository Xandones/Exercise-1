#include <iostream>
// This line the preprocessor. It adds the headers file iostream to the code. 

int main() // Main function. The other ones will be called from this one. Most C++ programs have this function.

{ // Begining of a block of code
	
	std::cout << "I'll learn to code in C++ language" << std::endl;
	/*
		std -> allows us to use the standard functions of C++.
		cout -> data output command. It prints on the standard output (screen) the message specified within quotation marks because it's a string.
		endl -> inserts a line breaker in the string.
	*/
	
	system("PAUSE");
	/* 
		system -> allows us to use the System Functions, related to the O.S.
		PAUSE -> Pauses the Command Prompt window and asks for a random key to unpause it (most keys of the keyboard will do).
	*/
	
	return 0; // return 0 -> Returns to the Windows shell if the code runned without errors.

} // End of a block of code

// Part of Marcos Pacheco's C++ course in Udemy.

