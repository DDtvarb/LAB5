#pragma once
#ifndef INCLUDE_H //������ �������������
#define INCLUDE_H

#include <iostream>
#include <string>
#include <cstdlib> //��� �������
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