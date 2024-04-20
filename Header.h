#pragma once
#ifndef INCLUDE_H //защита препроцессора
#define INCLUDE_H

#include <iostream>
#include <string>
#include <cstdlib> //для рандома
#include <windows.h>
#include <ctime>
#include <vector>
using namespace std;


struct Pabotnik
{
	string surname;
	int age;
	string spec;
	int okl;

};



void pabotnik_info(Pabotnik* pabotnik, int n);
void print_pabotnik(const Pabotnik* pabotnik, int n);

#endif