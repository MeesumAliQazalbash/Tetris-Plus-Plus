// #include "matrix.h"
#include <iostream>
using namespace std;

class Block
{
private:
    int blk[4][4] = {{0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0}};

public:
    void I();
    void J();
    void L();
    void O();
    void S();
    void T();
    void Z();

    void rotate();
    void operator$();

    void show();
    Block();
};