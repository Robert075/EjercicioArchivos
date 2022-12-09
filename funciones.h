/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file funciones.h
  * @author Roberto Giménez Fuentes alu0101540894@ull.edu.es 
  * @date Dic 08 2022
  * @brief The program reads the words from a file and copy every word into a separated file named with the letter it starts
  */

#include<iostream>
#include<string>

void PropositoDelPrograma();
bool ParametrosCorrectos(int argc, char* argv[]);

void AppendWords(const char& letter, const std::string& word); 
void ReadWords(const std::string& file_input);