#ifndef ASSEMBLER_H
#define ASSEMBLER_H

#include "spuconfig.h"

byte* Compile(Text* initialText, CPU* spu);

const int SHIFT = 8;

const int REG_ON = 5;

const int IMMED_ON = 4;

typedef int CommandCode;

CommandCode getCommandCode(char* command, const size_t commandLength);

void printbytecode(Text* text, CPU* spu);

#endif