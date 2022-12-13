#include "cstring"
#include "lib.h"


using namespace std;
int funzione (char nomi[10][20], char ricerca[20]) {

    for (int i = 0; i < 10; i++) {
        if( strcmp (nomi[i], ricerca)==0){
            return i;
        }
    }
}
