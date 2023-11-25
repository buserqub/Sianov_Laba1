#pragma once
#include <iostream>
using namespace std;

class gears
{
    char* name;
    char* code;
    int count;

public:
    gears();
    gears(char*, char*, int);
    gears(const gears&);
    ~gears();

    char* getName();
    char* getCode();
    int getCount() const;

    void setName(char*);
    void setCode(char*);
    void setCount(int);

    void set(char*, char*, int);
    void show();
};

