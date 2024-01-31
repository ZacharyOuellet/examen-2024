//This was the state of the file before (I already had started but who cares) I turned it into a tree

#include <iostream>

const 
char* G =
"\x1B[32m";const
char* R ="\033[0m";
const char* DECO_SYM[]
= { "O", "o" };const int decoSym = 2;

const char* COLORS[] = { "\x1B[31m", "\x1B[33m", "\x1B[34m", "\x1B[35m", "\x1B[36m", "\x1B[37m" };
const int n_COLORS = 6;
const char* TREE_SYM[] = { "*", "*", "*", "*", "+", ".", "x" };
const int nTREE_SYM = 7;
const float PROB_DECO = 0.3;

void printLine(int length, int center){
    int nSpaces = center - length / 2;
    for (int i = 0; i < nSpaces; ++i) {
		std::cout << " ";
	}
    for (int i = 0; i < length; ++i) {
        if (rand() < RAND_MAX * PROB_DECO) {
			std::cout << COLORS[rand() % n_COLORS] << DECO_SYM[rand() %decoSym];
		}
        else {
			std::cout << G<< TREE_SYM[rand() % nTREE_SYM];
		}
	}
	std::cout << std::endl;
}

void printTrunk(int height, int width, int center){
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < center - width/2; ++j) {
			std::cout << " ";
		}
        for (int j = 0; j < width; ++j) {
			std::cout << "#";
		}
        std::cout << std::endl;
	}
}

int main()
{
    int nLevels = 4;
    int delta = 1;
    int trunkHeight=3;
    int trunkWidth = 4;

    int levelHeight = 3;
    int lineWidth = 1;
    for (int i = 0; i < nLevels; ++i) {
        for (int j = 0; j < levelHeight; ++j) {
			printLine(lineWidth, 12);
            lineWidth += 2;
		}
        lineWidth -= delta * 2 + 2;
        levelHeight += delta;
    }
    std::cout<<COLORS[1];
    printTrunk(trunkHeight, trunkWidth, 12);
    std::cout << R;
}