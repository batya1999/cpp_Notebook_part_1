#include <string>
#include "Direction.hpp"

namespace ariel{
    class Notebook{
        public:
            Notebook();//empty constructor
            void write(int page, int row, int column, Direction d, std::string text);
            void erase(int page, int row, int col, Direction d, int length);
            void show(int page);
            std::string read(int page, int row, int col, Direction d, int length);

    };
}