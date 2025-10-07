#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
#include "../AccesoDB/DB_Archivos.h"

class D_Archivos
{
public:
	static string* Get_Modelos() {

		string*  strModelos = DB_Acceso::DB_GetModelos("LOCAL");
		
		string* arrModelos;
		std::string Modelos;
		//std::istream iss(strModelos);
		
		int cont = 0;
		while (getline(cin,Modelos,'a'))
		{
			arrModelos[cont] = Modelos;
			cont += 1;
		}

		if (arrModelos[0] != "ERROR_FilesNA") {
			return arrModelos;
		}
		else {
			//return;
		}
		
	}
	
	
};

