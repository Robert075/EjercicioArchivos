/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file funciones.cc
  * @author Roberto Giménez Fuentes alu0101540894@ull.edu.es 
  * @date Dic 08 2022
  * @brief The program reads the words from a file and copy every word into a separated file named with the letter it starts
  */

#include<iostream>
#include<fstream>
#include<string>

#include "funciones.h"

void PropositoDelPrograma() {
  std::cout << "The program will read every word from the imput file and generate a separated file named 'LETTER.txt' that contains every word that starts with said letter\n" << std::endl;
  std::cout << "Introduce the name of the text file (including the extension eg. '.txt'). The output will be a file named 'output.txt'\n";
} 

/**
 * Tests if the amount of parameters given is correct 
 *
 * @param Receives a vector with all the parameters introduced and the number of parameters introduced (+1, counting the name of the file)
 * @return Returns true if the amount of parameters is correct. False otherwise.
 */

bool ParametrosCorrectos(int argc, char* argv[]) {
  if (argc == 2) {
    return true;
  }
  std::cout << "You have to introduce only 1 parameter, that has to be the name of the text file.\n";
  std::cout << "Nevertheless, you introduced " << argc - 1 << " parameters.\nShutting down the process...\n";
  return false;
} 

/**
 * The function reads the input file and iterates over every word
 * 
 * @param Receives the input file name to be able to work with it
*/

void ReadWords(const std::string& file_input) {
  std::string file_directory{"./input/"};
  std::ifstream words_file(file_directory + file_input);
  if (!words_file) {
    std::cout << "There was an error while trying to open the input file. Check the file name.\nShutting down the process...\n";
    return;
  }
  std::string word;
  char first_letter;
  while(words_file) {
    words_file >> word;
    first_letter = word[0];
    first_letter = toupper(first_letter);
    AppendWords(first_letter, word);
  }
  words_file.close();
}

/**
 * The function creates a file (if it doesnt exist yet) named with a letter of the abecedary and writes in it a word that starts with the said letter.
 * The words comes from the 'ReadWords' function.
 * 
 * @param Receives a letter in mayus and a word to append to the file.
*/

void AppendWords(const char& letter, const std::string& word) {
  std::string file_name{"./output/"};
  std::cout << "LETRA: " << letter << "\n";
  file_name += letter;
  file_name += ".txt";
  std::ofstream file(file_name, std::ios::app);
  std::cout << file_name << std::endl;
  file << word;
  file << "\n";
  file.close();
}
