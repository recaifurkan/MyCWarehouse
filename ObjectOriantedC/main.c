#include <stdio.h>
#include <stdlib.h>

#include "PString.h"



int main() {
    PString *p = PString_init(30);
    p->setChars(p,"test");

    printf(p->chars);


    return 0;
}
