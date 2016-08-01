//By Symon Ramos 
//7_31_2016

#include "level_two.h"

/*  Write one or more programs that contain the following features:
        -Use of libraries
        -Principles of Object Oriented Programming (OOP)
        -Encapsulation
        -Abstraction
        -Inheritance
        -Polymorphism
        -Function overloading
        Class descriptions containing
            Constructor
            Destructor
            overloaded constructor
            overloaded assignment operator 
*/

int main(){
	cat *ptr1, *ptr2, *ptr3, *ptr4; 
	
	ptr1 = new shorthair; //Polymorphism 
	ptr2 = new persian;   //Allocating child class memory for base class pointer
	ptr3 = new siamese;
	
	ptr1->set_breed(); //Set the breeds, example of function overloading
	ptr2->set_breed();
	ptr3->set_breed();
	
	cout << "cat 1 breed: " << ptr1->get_breed() << endl;
	cout << "cat 1 super memes: " << endl;
	ptr1->set_memes();
	ptr1->print_memes();
	cout << "cat 1 num of legs: " << ptr1->get_legs() << endl;
	cout << "cat 1 num of tails: " << ptr1->get_tail() << endl << "--------------------------------" << endl;
	
	
	cout << "cat 2 breed: " << ptr2->get_breed() << endl;
	cout << "cat 2 ultra memes: " << endl;
	ptr2->set_memes();
	ptr2->print_memes();
	cout << "--------------------------------" << endl;
	
	cout << "cat 3 breed: " << ptr3->get_breed() << endl;
	cout << "cat 3 fantastic memes: " << endl;
	ptr3->set_memes();
	ptr3->print_memes();
	cout << endl << "--------------------------------" << endl;
	
	
	ptr4 = ptr1; //use of assignment overload to a preexisting pointer
	
	
	cout << "cat 4 breed: " << ptr4->get_breed() << endl;
	cout << "cat 4 amazing memes: " << endl;
	ptr4->print_memes();
	cout << "cat 4 num of legs: " << ptr4->get_legs() << endl;
	cout << "cat 4 num of tails: " << ptr4->get_tail() << endl << "--------------------------------" << endl;
	
	cat *ptr5(ptr2); //create new pointer using copy constructor
	
	
	cout << "cat 5 breed: " << ptr5->get_breed() << endl;
	cout << "cat 5 mega memes: " << endl;
	ptr5->print_memes();
	
	cout << "--------------------------------" << endl;
	
	delete ptr1, ptr2, ptr3, ptr4, ptr5;
	
	return 0;
}