#include "level_two.h"

/*this file is my external library that contains the source code 
for all my level_two.h functions. It is meant to be compiled together
alongside the driver.cpp*/

cat::cat(){ //good old default constructor
	is_alive = true;
	legs = 4;
	tail = 1; 
	memes = NULL; //set to NULL before allocating memory to ensure it works
	memes = new string;
}
cat::cat(int l, int t){ //non default constructor for disabled kitties
 	legs = l; 
 	tail = t;
	memes = NULL; 
	memes = new string;
}
cat::cat(const cat &other){ //copy constructor --> used on same line you initialize the instance
	memes = NULL;
	num_memes = other.num_memes;
	memes = new string[num_memes];
	
	for(int i = 0; i < num_memes; i++){
		memes[i] = other.memes[i];
	}
}
cat& cat::operator=(const cat &other){ //assignment overload --> overwrites (if need be) a particular instance to match anothers
	
	if(memes != NULL){
		delete memes; 
	}
	memes = NULL;
	num_memes = other.num_memes;
	memes = new string[num_memes];
	
	for(int i = 0; i < num_memes; i++){
		memes[i] = other.memes[i];
	}
	return *this;
}
void cat::set_is_alive(bool a){
	is_alive = a;
}
bool cat::get_is_alive(){
	return is_alive;
}
void cat::print_memes(){
	for(int i = 0; i < num_memes; i++){
		cout << memes[i] << endl;
	}
}
string cat::get_breed(){
	return breed;
}
int cat::get_legs(){
	return legs;
}
int cat::get_tail(){
	return tail;
}
int cat::get_num_memes(){
	return num_memes;
}
void cat::clear_resize(int len){
	if(memes != NULL){
		delete memes;
	}
	memes = NULL;
	memes = new string[len];
}

 //persian ------------------------------------------------------
 persian::persian(){
	 
 }
 persian::~persian(){
	 delete memes;
 }
 persian::persian(const persian &other){ 
	memes = NULL;
	num_memes = other.num_memes;
	memes = new string[num_memes]; 
	
	for(int i = 0; i < num_memes; i++){
		memes[i] = other.memes[i];
	}
}
 persian& persian::operator=(const persian &other){
	
	if(memes != NULL){
		delete memes; 
	}
	memes = NULL;
	num_memes = other.num_memes;
	memes = new string[num_memes];
	
	for(int i = 0; i < num_memes; i++){
		memes[i] = other.memes[i];
	}
	return *this;
}
void persian::set_memes(){ //different for other child classes
	num_memes = 3;
	clear_resize(num_memes);
	for(int i = 0; i < num_memes; i++){
		switch(i){
			case 0:
				memes[i] = "Persian Cat Room Guardian";
				break;
			case 1: 
				memes[i] = "Angry Persian Cat";
				break;
			case 2: 
				memes[i] = "Spicy Cat";
				break;
		}
	}
}
void persian::set_breed(){
	breed = "Persian";
}
 //siamese -------------------------------------------------
siamese::siamese(){
	
}
siamese::~siamese(){
	delete memes;
}
siamese::siamese(const siamese &other){
	memes = NULL;
	num_memes = other.num_memes;
	memes = new string[num_memes];
	
	for(int i = 0; i < num_memes; i++){
		memes[i] = other.memes[i];
	}
}
siamese& siamese::operator=(const siamese &other){
	
	if(memes != NULL){
		delete memes; 
	}
	memes = NULL;
	num_memes = other.num_memes;
	memes = new string[num_memes];
	
	for(int i = 0; i < num_memes; i++){
		memes[i] = other.memes[i];
	}
	return *this;
}
void siamese::set_memes(){
	num_memes = 2;
	clear_resize(num_memes);
	for(int i = 0; i < num_memes; i++){
		switch(i){
			case 0:
				memes[i] = "Grumpy Cat";
				break;
			case 1: 
				memes[i] = "Cats Together Forever";
				break;
		}
	}
}
void siamese::set_breed(){
	breed = "Siamese";
}
 //shorthair ---------------------------------------------------
shorthair::shorthair(){
	
}
shorthair::~shorthair(){
	delete memes;
}
shorthair::shorthair(const shorthair &other){
	memes = NULL;
	num_memes = other.num_memes;
	memes = new string[num_memes];
	
	for(int i = 0; i < num_memes; i++){
		memes[i] = other.memes[i];
	}
}
shorthair& shorthair::operator=(const shorthair &other){
	if(memes != NULL){
		delete memes; 
	}
	memes = NULL;
	num_memes = other.num_memes;
	memes = new string[num_memes];
	
	for(int i = 0; i < num_memes; i++){
		memes[i] = other.memes[i];
	}
	return *this;
}
void shorthair::set_memes(){
	num_memes = 5;
	clear_resize(num_memes);
	for(int i = 0; i < num_memes; i++){
		switch(i){
			case 0:
				memes[i] = "I can has cheezburger";
				break;
			case 1: 
				memes[i] = "meow";
				break;
			case 2: 
				memes[i] = "Majestic cat";
				break;
			case 3: 
				memes[i] = "meow meow meow";
				break;
			case 4: 
				memes[i] = "Baby cat aka kitty cat";
				break;
		}
	}
}
void shorthair::set_breed(){
	breed = "Shorthair";
}