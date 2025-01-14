#ifndef HASH_HPP_INCLUDED
#define HASH_HPP_INCLUDED

#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>

using namespace std;

struct Item
{
    char key[10];
    int Feature_ID;
    int Census_Code;
    char Census_Class_Code[10];
    int State_numeric;
    char State_Alpha[10];
    int Country_numeric;
    double primary_latt;
    double primary_long;
    Item *next;

friend ostream& operator<<(ostream& out, const Item A);

};

class field
{
private:
    Item *root;
    int num_items;

public:
    field();
    ~field();

void InsertItem(Item *newItem);
void SearchKey(char key[]);
void printList();
};

class HashTable
{
private:
    field *Table;
    int num_elements;
    int size;

long int hashFx(char *k, int num);

public:
    HashTable(int m);
    ~HashTable();

void InsertField(Item *newItem);
void SearchItem(char *key);
void printTable();
};


void NewItem(ifstream& input, Item *newItem,string str);

#endif // HASH_HPP_INCLUDED
