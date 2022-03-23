#include <string>
#include "Direction.hpp"
#include "Notebook.hpp"
#include <iostream>

namespace ariel{
        Notebook::Notebook()
        {
            
        }
        void Notebook::write(int page, int row, int column, Direction d, std::string text){

        }
        void Notebook::erase(int page, int row, int col, Direction d, int length){

        }
        void Notebook::show(int page){

        }
        std::string Notebook::read(int page, int row, int col, Direction d, int length){
            return "";
        }
}