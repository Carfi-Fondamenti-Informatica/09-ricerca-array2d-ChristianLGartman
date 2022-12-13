#include "lib.h"
#include <iostream>
using namespace std;
int main() {
    char nomi[10][20];
    char ricerca[20];
    for(int i =0; i<10; i++){
        cin >> nomi[i];
        }
    cin >> ricerca;
    int s = funzione (nomi, ricerca);
    if (s<=10){
        cout<<s;
    }
    else{
        cout<<"non presente";
    }
}
