#include <iostream> 
#include <string> 

using namespace std; 

class cat{ //abstract base class b/c of pure virtual function set_meme()
	private:  //inaccessible to the child classes
		int legs;
		int tail;  
	protected:  //accessible to the child classes
		bool is_alive;
		string *memes; //b/c this class has dynamic memory, I utilized the big three
		string breed;
		int num_memes;
	public: 
		cat(); //default constructor
		cat(int, int); //non default constructor
		//virtual ~cat() = 0; you dont want a destructor in abstract base, have it in the child class
		cat(const cat &); //copy constructor
		virtual cat& operator=(const cat &); //assignment overload
		void set_is_alive(bool); 
		virtual void set_memes() = 0; //pure virtual functions have = 0, indicate that they are 
		virtual void set_breed() = 0; //overloaded/inherited into each specific child class
		bool get_is_alive();
		void print_memes();
		string get_breed();
		void clear_resize(int); //resizing function for use later
		int get_legs(); //various getters
		int get_tail();
		int get_num_memes();
};

//each child class has overloaded functions that perform different things
//based on which child class it is

class persian: public cat{
	public: 
		persian();
		~persian();
		persian(const persian &);
		persian& operator=(const persian &);
		void set_memes();
		void set_breed();
};

class siamese: public cat{
	public: 
		siamese();
		~siamese();
		siamese(const siamese &);
		siamese& operator=(const siamese &);
		void set_memes();
		void set_breed();
};

class shorthair: public cat{
	public: 
		shorthair();
		~shorthair();
		shorthair(const shorthair &);
		shorthair& operator=(const shorthair &);
		void set_memes();
		void set_breed();
};



