#include "Direction.hpp"
#include "doctest.h"
#include "Notebook.hpp"
#include <string>
using namespace std;
using namespace ariel;

ariel::Notebook notebook;

TEST_CASE("good results"){
    notebook.write(1, 20, 10, Direction::Horizontal, "sudo");
    CHECK(notebook.read(1, 20, 13, Direction::Vertical, 8) == "__d_____");
    CHECK(notebook.read(1, 20, 44, Direction::Vertical, 3) == "__o");
    CHECK(notebook.read(2, 20, 47, Direction::Vertical, 10) == "__________");
    CHECK(notebook.read(2, 20, 47, Direction::Vertical, 99) == "__________");
    CHECK(notebook.read(2, 20, 47, Direction::Horizontal, 97) == "__________");
    notebook.erase(1, 30, 10, Direction::Vertical, 9);
    CHECK(notebook.read(1,20,10, Direction::Horizontal, 4) == "~~do");
    notebook.write(0, 20, 29, Direction::Vertical, "arieluni");
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 8) == "arieluni");
    CHECK(notebook.read(0, 20, 20, Direction::Vertical, 3) == "ari");
    notebook.erase(0, 20, 29, Direction::Vertical, 3);
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 5) == "a~~~luni"); 
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 12) == "a~~~luni____");
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 9) == "a~~~luni_");
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 3) == "a~~");
    
}

TEST_CASE("bad results"){
 notebook.write(1, 20, 10, Direction::Horizontal, "sudo");
    CHECK(notebook.read(1, 20, 13, Direction::Vertical, 8) == "__d__$#@___");
    CHECK(notebook.read(1, 20, 44, Direction::Vertical, 3) == "__o___");
    CHECK(notebook.read(2, 20, 47, Direction::Vertical, 10) == "__________");
    CHECK(notebook.read(2, 20, 47, Direction::Vertical, 99) == "__________");
    CHECK(notebook.read(2, 20, 47, Direction::Horizontal, 97) == "____h______");
    notebook.erase(1, 30, 10, Direction::Vertical, 9);
    CHECK(notebook.read(1,20,10, Direction::Horizontal, 4) == "~~do");
    notebook.write(0, 20, 29, Direction::Vertical, "arieluni");
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 8) == "arieluni");
    CHECK(notebook.read(0, 20, 20, Direction::Vertical, 3) == "ari");
    notebook.erase(0, 20, 29, Direction::Vertical, 3);
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 5) == "a~~~luni"); 
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 12) == "a~~~luni____");
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 9) == "a~~~luni_");
    CHECK(notebook.read(0, 20, 29, Direction::Vertical, 3) == "a~~");
    
}