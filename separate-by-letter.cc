/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file rotate.cc
  * @author Roberto Giménez Fuentes alu0101540894@ull.edu.es 
  * @date Dic 08 2022
  * @brief The program reads the words from a file and copy every word into a separated file named with the letter it starts
  */

#include<iostream>
#include<sstream>
#include<string>

#include "funciones.h"

int main(int argc, char* argv[]) {
  if (!(ParametrosCorrectos(argc, argv))) {
    return 1;
  }
  PropositoDelPrograma();
  std::stringstream temp_file_name(argv[1]);
  std::string file_name;
  temp_file_name >> file_name;
  
  ReadWords(file_name); 
  return 0; 
}
