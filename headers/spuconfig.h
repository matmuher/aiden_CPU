#ifndef SPUCONFIG_H
#define SPUCONFIG_H

#include "stackfuncs.h"
#include "textfuncs.h"

typedef char byte;

const int nREGS = 4;

enum Instruction
{

    PUSH = 1,
    POP  = 2,
    IN   = 3,
    ADD  = 4,
    SUB  = 5,
    MUL  = 6,
    DIV  = 7,
    SQRT = 8,
    SIN  = 9,
    COS  = 10,
    OUT  = 11,
    HLT  = 12
};

struct CPU
{
    Stack* stack;

    elem_t regs[nREGS];
    
    byte* code;
};

void followInstructions(Stack* stack, Text* text);

void Proccess(void);

#endif