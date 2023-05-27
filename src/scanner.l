%{
    #include <string.h>
    int line_num = 1;
%}

%option noyywrap nodefault

texto   ([0-9]|\"?[a-zA-Z\s:;,!?()\.¡¿ÁÉÍÓÚÑñáéíóú\-\_\/\@\\[\]\% ]+\"?)*
url (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+(:[0-9]+)?(\/|(\/[a-zA-Z0-9\_\-]+)+(\.[a-zA-Z0-9]+)?)?

/*
protocolo (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?
dominio ([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+
puerto (:[0-9]+)?
ruta (\/|(\/[a-zA-Z0-9\_\-]+)+(\.[a-zA-Z0-9]+)?)?
*/

%%

"<!DOCTYPE article>"    { printf("Encabezado: %s\n", yytext);                }
"<article>"             { printf("Article Apertura: %s\n", yytext);          }
"</article>"            { printf("Article Cierre: %s\n", yytext);            } 
"<info>"                { printf("Info Apertura: %s\n", yytext);             } 
"</info>"               { printf("Info Cierre: %s\n", yytext);               }
"<title>"               { printf("Title Apertura: %s\n", yytext);            }
"</title>"              { printf("Title Cierre: %s\n", yytext);              }
"<abstract>"            { printf("Abstract Apertura: %s\n", yytext);         }
"</abstract>"           { printf("Abstract Cierre: %s\n", yytext);           }  
"<para>"                { printf("Para Apertura: %s\n", yytext);             } 
"</para>"               { printf("Para Cierre: %s\n", yytext);               }
"<author>"              { printf("Author Apertura: %s\n", yytext);           }
"</author>"             { printf("Author Cierre: %s\n", yytext);             }
"<personname>"          { printf("PersonName Apertura: %s\n", yytext);       } 
"</personname>"         { printf("PersonName Cierre: %s\n", yytext);         } 
"<firstname>"           { printf("Firstname Apertura: %s\n", yytext);        }
"</firstname>"          { printf("Firstname Cierre: %s\n", yytext);          }
"<surname>"             { printf("Surname Apertura: %s\n", yytext);          }
"</surname>"            { printf("Surname Cierre: %s\n", yytext);            }
"<date>"                { printf("Date Apertura: %s\n", yytext);             }
"</date>"               { printf("Date Cierre: %s\n", yytext);               }
"<section>"             { printf("Section Apertura: %s\n", yytext);          }
"</section>"            { printf("Section Cierre: %s\n", yytext);            } 
"<simplesect>"          { printf("SimpleSect Apertura: %s\n", yytext);       } 
"</simplesect>"         { printf("SimpleSect Cierre: %s\n", yytext);         }
"<copyright>"           { printf("Copyright Apertura: %s\n", yytext);        }
"</copyright>"          { printf("Copyright Cierre: %s\n", yytext);          }
"<address>"             { printf("Address Apertura: %s\n", yytext);          }
"</address>"            { printf("Address Cierre: %s\n", yytext);            }
"<city>"                { printf("City Apertura: %s\n", yytext);             }   
"</city>"               { printf("City Cierre: %s\n", yytext);               }
"<state>"               { printf("State Apertura: %s\n", yytext);            }
"</state>"              { printf("State Cierre: %s\n", yytext);              }
"<postcode>"            { printf("Postcode Apertura: %s\n", yytext);         }
"</postcode>"           { printf("Postcode Cierre: %s\n", yytext);           } 
"<street>"              { printf("Street Apertura: %s\n", yytext);           }
"</street>"             { printf("Street Cierre: %s\n", yytext);             }
"<email>"               { printf("Email Apertura: %s\n", yytext);            }
"</email>"              { printf("Email Cierre: %s\n", yytext);              }
"<phone>"               { printf("Phone Apertura: %s\n", yytext);            }
"</phone>"              { printf("PhoneCierre: %s\n", yytext);               }
"<itemizedlist>"        { printf("ItemizedList Apertura: %s\n", yytext);     }
"</itemizedlist>"       { printf("ItemizedList Cierre: %s\n", yytext);       }
"<emphasis>"            { printf("Emphasis Apertura: %s\n", yytext);         }
"</emphasis>"           { printf("Emphasis Cierre: %s\n", yytext);           }
"<holder>"              { printf("Holder Apertura: %s\n", yytext);           }
"</holder>"             { printf("Holder Cierre: %s\n", yytext);             }
"<simpara>"             { printf("SimPara Apertura: %s\n", yytext);          }
"</simpara>"            { printf("Simpara Cierre: %s\n", yytext);            }
"<year>"                { printf("Year Apertura: %s\n", yytext);             }
"</year>"               { printf("Year Cierre: %s\n", yytext);               } 
"<comment>"             { printf("Comment Apertura: %s\n", yytext);          }
"</comment>"            { printf("Comment Cierre: %s\n", yytext);            }
"<important>"           { printf("Important Apertura: %s\n", yytext);        }
"</important>"          { printf("Important Cierre: %s\n", yytext);          }
"<link>"                { printf("Link Apertura: %s\n", yytext);             }
"</link>"               { printf("Link Cierre: %s\n", yytext);               }
"<videodata fileref= "  { printf("Videodata : %s\n", yytext);                }
"<imagedata fileref= "  { printf("Imagedata: %s\n", yytext);                 }
"<informaltable"        { printf("InformalTable Apertura: %s\n", yytext);    }
"</informaltable>"      { printf("InformalTable Cierre: %s\n", yytext);      }
"<tgroup>"              { printf("Tgroup Apertura: %s\n", yytext);           }
"</tgroup>"             { printf("Tgroup Cierre: %s\n", yytext);             }
"<row>"                 { printf("Row Apertura: %s\n", yytext);              }
"</row>"                { printf("Row Cierre: %s\n", yytext);                } 
"<table>"               { printf("Table Apertura: %s\n", yytext);            } 
"</table>"              { printf("Table Cierre: %s\n", yytext);              }  
"<thead>"               { printf("Thead Apertura: %s\n", yytext);            } 
"</thead>"              { printf("Thead Cierre: %s\n", yytext);              } 
"<tfoot>"               { printf("Tfoot Apertura: %s\n", yytext);            }
"</tfoot>"              { printf("Tfoot Cierre: %s\n", yytext);              }
"<tbody>"               { printf("Tbody Apertura: %s\n", yytext);            }
"</tbody>"              { printf("Tbody Cierre: %s\n", yytext);              }
"<entrytbl>"            { printf("EntryTBL Apertura: %s\n", yytext);         }
"</entrytbl>"           { printf("EntryTBL Cierre: %s\n", yytext);           }
"<link xlink:href: >"   { printf("Link: %s\n", yytext);                      }
{url}                   { printf("URL: %s\n", yytext);                       }
{texto}                 { printf("Texto: %s\n", yytext);                     }
\n                      { line_num +=1 ;}
[ \t]+                  { /* Ignorar espacios y tabuladores */ }
.                       { printf("Error: caracter '%s' no reconocido - Linea: %d\n",yytext,line_num); exit(1); }
%%

const char *getExtension(const char *filename) {
    /* strrchr devuelve la última ocurrencia de un caracter, 
    si no lo encuentra devuelve un NULL pointer. */
    const char *dot = strrchr(filename, '.');
    /* Controla si el archivo tiene extensión alguna o si dot no es un puntero a NULL. 
    Si lo cumple, devuelve el resto de caracteres luego del punto. */
    if (dot && dot != filename) return dot + 1;;
    return "";
}

int main(int argc, char **argv) {
    if(argc > 1) {
        /* Controla si el archivo no existe */
        if(!(yyin = fopen(argv[1], "r"))) {
            //perror(argv[1]);
            /* Así podríamos poner nuestro mensaje de error personalizado */
            fprintf(stderr, "El archivo no ha sido encontrado o no existe.");
            return 1;
        }

        char *path = argv[1];
        if(strcmp(getExtension(path), "xml") != 0){
            printf("La extensión del archivo no es .xml, pruebe con la extensión correcta.");
            return 1;
        }
    }
    printf("\n\t ANALIZADOR LÉXICO  -  Grupo N°19\n");
    printf("\n\t Version 1.5.0 ultima modificación 27-05-23\n");
    printf("\n\t Ivan Niveyro, Lautaro Acosta Quintana, Martín Galeano, Francisco Morel\n");
    printf("\n\t Github repo: https://github.com/LautaroAcosta/LexerParser\n");
    
    printf("\n »» Tokens detectados: \n");
    yylex();
}
