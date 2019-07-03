

#ifndef PSTRING_H_INCLUDED
#define PSTRING_H_INCLUDED



typedef struct {
    char *chars;
    int (*length)();
    void (*setChars)();

}PString ;

#include "PStringMethods.h"

PString *initPString(int n) {
    PString *str = malloc(sizeof(PString));

    str->chars = malloc(sizeof(char) * n);
    str->length = PString_length;
    str->setChars = PString_setChars;


    return str;
}



#endif // PSTRING_H_INCLUDED


