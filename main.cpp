#include "lib.h"
#include <iostream>
using namespace std;
int main() {
    char nomi[10][20];
    char ricerca[20];
    for(int i =0; i<10; i++){
        cout<<"Dimmi un nome:"<<endl;
        cin >> nomi[i];
        }
    cout<<"Dimmi il nome che cerchi:"<<endl;
    cin >> ricerca;
    int s = funzione (nomi, ricerca);
    if (s<=10){
        cout<<s;
    }
    else{
        cout<<"non presente";
    }
}
