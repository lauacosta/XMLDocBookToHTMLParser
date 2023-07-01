#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grammar.tab.h"
extern FILE* yyin;
extern FILE *salida;
extern int yylineno;

const char* getExtension(const char* filename);
int errorControl (int argc, char **argv);
void printWelcome();
void yyerror(const char *str);


int main(int argc, char **argv) {
    if (errorControl(argc, argv))
        return 1;

    salida = fopen("salida.html", "w");
    if (salida == NULL) {
        fprintf(stderr, "salida.html no ha podido ser abierto");
        return 1;
    }

    printWelcome();
    printf("\n");
    
    yydebug = 1;

    if (!yyparse()){printf("\n Analisis Sintactico 'CORRECTO' \n");}   
    /* fclose(yyin); */
    fclose(salida);
    return 0;
}

const char* getExtension(const char* filename) {
    const char* extension = strrchr(filename, '.');
    if (extension && extension != filename) return extension + 1;;
    return "";
}

int errorControl (int argc, char **argv) {
    if(argc > 1) {
        if(!(yyin = fopen(argv[1], "r"))) {
            fprintf(stderr, "El archivo %s no ha sido encontrado o no existe.", argv[1]);
            return 1;
        }

        char *path = argv[1];

        if(strcmp(getExtension(path), "xml") != 0){
            printf("La extensión del archivo no es .xml, pruebe con la extensión correcta.");
            return 1;
        }
    }
    return 0;
}

void printWelcome(){
    printf("\n\t ANALIZADOR SINTACTICO  -  Grupo N°19\n");
    printf("\n\t Ultima modificación 27-06-23\n");
    printf("\n\t Ivan Niveyro, Lautaro Acosta Quintana, Martín Galeano, Francisco Morel\n");
    printf("\n\t Github repo: https://github.com/LautaroAcosta/LexerParser\n");
    printf("\t");    
}

void yyerror(const char *str) {
    printf("Analisis Sintactico 'INTERRUMPIDO' -  Error: '%s' en la linea '%d'.",  str, yylineno);
    exit(1);
}
