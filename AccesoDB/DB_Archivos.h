#pragma once
#include <string>
#include <iostream>
#include <filesystem>
#include <algorithm>
//#include <stdio.h>
//#include <Windows.h>
#include <tchar.h>
#include <dirent.h>
//#include <sys/types.h>

using namespace std;

class DB_Acceso
{

public:
	//Funciones publicas de la clase
	static string* DB_GetModelos(string DataSource) {
		std::transform(DataSource.begin(), DataSource.end(), DataSource.begin(), ::toupper);
		string* arrModelos;
		if (DataSource == "DB") {
			arrModelos = PDB_GetModelosDB();
		}
		else if (DataSource == "LOCAL") {
			arrModelos = PDB_GetModelosLocal();
		}
		else {
			//return "ERROR_DirNA";
		}
		return arrModelos;
	}
private:
	//Variables privadas de la clase DB
	

	//Funciones privadas de la clase
	static string* PDB_GetModelosLocal() {
		static string strDireccionFilesModelos = "C:/SYVA/Recortes";

		string* stdPrivateModelos;
		
		struct dirent* entry;
		DIR* dir = opendir(strDireccionFilesModelos.c_str());
		if (dir != NULL) {
			//return "ERROR_FilesNA";
			int cont = 0;
			while ((entry = readdir(dir)) != NULL) {
				//printf("%s\n", entry->d_name);
				stdPrivateModelos[cont] = entry->d_name;
				cont += 1;
			}
		}
		closedir(dir);
		return stdPrivateModelos;
	}
	
	static string* PDB_GetModelosDB() {
		std::string* Nada;
		Nada[0] = "";
		return Nada;
	}

};

