#ifndef CONFIG_H
#define CONFIG_H

#define DOUBLE_T
#define logfilename "log.txt"

typedef int ErrorCode;

const int NULLPTR = 0;

enum ERRORS
{
    OK                  = 0,
    NO_MEMORY           = 3,
    STACK_DELETED       = 5,
    UNABLE_TO_OPEN_FILE = 7,
    UNKNOWN_ASM_COMMAND = 9,
    INVALID_PTR         = 11,
    INCORRECT_SYNTAX    = 13,
    REPEATING_LABEL     = 15,
    SYNTAX_ERROR        = 17,
    NON_EXIST_REGISTER  = '0'
};

const char ARG_FORMAT_IMMED = (1 << 5);

const char ARG_FORMAT_REG = (1 << 6);

const unsigned char ARG_FORMAT_RAM = (1 << 7);

#endif
