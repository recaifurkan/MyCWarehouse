#ifndef PSTRINGMETHODS_H_INCLUDED
#define PSTRINGMETHODS_H_INCLUDED
#include "PString.h"

int PString_length(PString *self, char* a) {
    printf(a);
    return strlen(self->chars);
}
void PString_setChars(PString *self,char* value){
    self->chars = value;

}



#endif // PSTRINGMETHODS_H_INCLUDED
