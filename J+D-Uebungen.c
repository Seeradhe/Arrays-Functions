#include <stdio.h>

//Deklaration der Funktionen
void printArray(int feld[ ] );

void printSizeOf();

//Deklaration + Definition der DHBW Funktionen
void dhbw_print_integer(const char* description, int l) {
    printf("%s: %i\n", description, l);
}
void dhbw_print_line(const char* text) {
    printf("%s\n", text);
}
int dhbw_read_int(const char *prompt) {
    int ret = 0;
    dhbw_print_line(prompt);
    scanf("%d", &ret);
    return ret; 
}

//Deklaration und Definition globaler Variablen
int myArray[10] = {6,4,1,23,54,12,43,43,1,100};


int main(){
    //Programm-Code

    printSizeOf();

    searchArrayFor();

    printArray(myArray);
    return 0;
}


/*Task 1:
Implementiere eine einfache Funktion, welche die Größe verschiedener Datentypen:
Int / Char / Float / Double
auf der Konsole ausgibt, dazu dient die sizeof() Funktion --> Internet
*/ 
void printSizeOf(){
    //Programmcode
}

/*Task 2:
Erstelle eine einfache Schleife die von 0 nach 10 läuft und dabei in dem gegebenen Feld "myArray"
nach einem int sucht, welcher per Konsole angegeben werden kann
*/
void searchArrayFor(){
    //Programmcode
}

//Task 3: 
//Implementiere eine Funktion die ein mitgegebenes Array ausgibt
void printArray(int feld[ ] ){
    //Programm-Code

}