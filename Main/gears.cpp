#include "gears.h"
using namespace std;

gears::gears() {
	name = new char;
	code = new char;
	count = 0;
};
gears::gears(char* name, char* code, int count) {
	this->name = new char[strlen(name)];		
	strcpy(this->name, name);

	this->code = new char[strlen(code)];
	strcpy(this->code, code);

	this->count = count;
}
gears::gears(const gears& gear) {
	this->name = new char[strlen(gear.name)];
	strcpy(this->name, gear.name);

	this->code = new char[strlen(gear.code)];
	strcpy(this->code, gear.code);

	this->count = gear.count;
}
gears::~gears() {
	name = NULL;
	code = NULL;
	count = NULL;
}

char* gears::getName() {
	return this->name;
}
char* gears::getCode() {
	return this->code;
}
int gears::getCount() const{
	return this->count;
}

void gears::setName(char* name) {
	this->name = name;
}
void gears::setCode(char* code) {
	this->code = code;
}
void gears::setCount(int count) {
	this->count = count;
}

void gears::set(char* name, char* code, int count) {
	this->name = name;
	this->code = code;
	this->count = count;
}
void gears::show() {
	cout << "Информация об издели:\nНаименование - " << name << "\nШифр - "
		<< code << "\nКоличество - " << count << endl << endl;
}