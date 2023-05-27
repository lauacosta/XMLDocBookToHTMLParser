%{
    #include <string.h>
    int line_num = 1;
%}

%option noyywrap nodefault

texto   ([0-9]|\"?[a-zA-Z\s:;,!?()\.¡¿ÁÉÍÓÚÑñáéíóúü\-\_\/\@\\[\]\%\+\#\=\&\$\'\”\“ ]+\"?)*
url (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+(:[0-9]+)?(\/|(\/[a-zA-Z0-9\_\-]+)+(\.[a-zA-Z0-9]+)?)?

/*
protocolo (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?
dominio ([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+
puerto (:[0-9]+)?
ruta (\/|(\/[a-zA-Z0-9\_\-]+)+(\.[a-zA-Z0-9]+)?)?
*/

%%

"<!DOCTYPE article>"    { printf("\n- Encabezado: \n\t %s\n", yytext);                }
"<article>"             { printf("\n- Article Apertura: \n\t %s\n", yytext);          }
"</article>"            { printf("\n- Article Cierre: \n\t %s\n", yytext);            }
"<info>"                { printf("\n- Info Apertura: \n\t %s\n", yytext);             }
"</info>"               { printf("\n- Info Cierre: \n\t %s\n", yytext);               }
"<title>"               { printf("\n- Title Apertura: \n\t %s\n", yytext);            }
"</title>"              { printf("\n- Title Cierre: \n\t%s\n", yytext);               }
"<abstract>"            { printf("\n- Abstract Apertura: \n\t%s\n", yytext);          }
"</abstract>"           { printf("\n- Abstract Cierre: \n\t%s\n", yytext);            } 
"<para>"                { printf("\n- Para Apertura: \n\t%s\n", yytext);              }
"</para>"               { printf("\n- Para Cierre: \n\t%s\n", yytext);                }
"<author>"              { printf("\n- Author Apertura: \n\t%s\n", yytext);            }
"</author>"             { printf("\n- Author Cierre: \n\t%s\n", yytext);              }
"<personname>"          { printf("\n- PersonName Apertura: \n\t %s\n", yytext);       }
"</personname>"         { printf("\n- PersonName Cierre: \n\t%s\n", yytext);          }
"<firstname>"           { printf("\n- Firstname Apertura: \n\t%s\n", yytext);         }
"</firstname>"          { printf("\n- Firstname Cierre: \n\t%s\n", yytext);           } 
"<surname>"             { printf("\n- Surname Apertura: \n\t%s\n", yytext);           }
"</surname>"            { printf("\n- Surname Cierre: \n\t%s\n", yytext);             }
"<date>"                { printf("\n- Date Apertura: \n\t%s\n", yytext);              }
"</date>"               { printf("\n- Date Cierre: \n\t%s\n", yytext);                }
"<section>"             { printf("\n- Section Apertura: \n\t%s\n", yytext);           }
"</section>"            { printf("\n- Section Cierre: \n\t%s\n", yytext);             } 
"<simplesect>"          { printf("\n- SimpleSect Apertura: \n\t%s\n", yytext);        } 
"</simplesect>"         { printf("\n- SimpleSect Cierre: \n\t%s\n", yytext);          }
"<copyright>"           { printf("\n- Copyright Apertura: \n\t%s\n", yytext);         }
"</copyright>"          { printf("\n- Copyright Cierre: \n\t%s\n", yytext);           }
"<address>"             { printf("\n- Address Apertura: \n\t%s\n", yytext);           }
"</address>"            { printf("\n- Address Cierre: \n\t%s\n", yytext);             }
"<city>"                { printf("\n- City Apertura: \n\t%s\n", yytext);              }  
"</city>"               { printf("\n- City Cierre: \n\t%s\n", yytext);                }
"<state>"               { printf("\n- State Apertura: \n\t%s\n", yytext);             } 
"</state>"              { printf("\n- State Cierre: \n\t%s\n", yytext);               }
"<postcode>"            { printf("\n- Postcode Apertura: \n\t%s\n", yytext);          }
"</postcode>"           { printf("\n- Postcode Cierre: \n\t%s\n", yytext);            }
"<street>"              { printf("\n- Street Apertura: \n\t%s\n", yytext);            }
"</street>"             { printf("\n- Street Cierre: \n\t%s\n", yytext);              }
"<email>"               { printf("\n- Email Apertura: \n\t%s\n", yytext);             }
"</email>"              { printf("\n- Email Cierre: \n\t%s\n", yytext);               }
"<phone>"               { printf("\n- Phone Apertura: \n\t%s\n", yytext);             }
"</phone>"              { printf("\n- PhoneCierre: \n\t%s\n", yytext);                }
"<itemizedlist>"        { printf("\n- ItemizedList Apertura: \n\t%s\n", yytext);      }
"</itemizedlist>"       { printf("\n- ItemizedList Cierre: \n\t%s\n", yytext);        }
"<listitem>"            { printf("\n- Listitem Apertura: \n\t%s\n", yytext);          }
"</listitem>"           { printf("\n- Listitem Cierre: \n\t%s\n", yytext);            }
"<emphasis>"            { printf("\n- Emphasis Apertura: \n\t%s\n", yytext);          }
"</emphasis>"           { printf("\n- Emphasis Cierre: \n\t%s\n", yytext);            }
"<holder>"              { printf("\n- Holder Apertura: \n\t%s\n", yytext);            }
"</holder>"             { printf("\n- Holder Cierre: \n\t%s\n", yytext);              }
"<simpara>"             { printf("\n- SimPara Apertura: \n\t%s\n", yytext);           }
"</simpara>"            { printf("\n- Simpara Cierre: \n\t%s\n", yytext);             }
"<year>"                { printf("\n- Year Apertura: \n\t%s\n", yytext);              }
"</year>"               { printf("\n- Year Cierre: \n\t%s\n", yytext);                } 
"<comment>"             { printf("\n- Comment Apertura: \n\t%s\n", yytext);           }
"</comment>"            { printf("\n- Comment Cierre: \n\t%s\n", yytext);             }
"<important>"           { printf("\n- Important Apertura: \n\t%s\n", yytext);         }
"</important>"          { printf("\n- Important Cierre: \n\t%s\n", yytext);           }
"<link>"                { printf("\n- Link Apertura: \n\t%s\n", yytext);              }
"</link>"               { printf("\n- Link Cierre: \n\t%s\n", yytext);                }
"<videodata fileref= "  { printf("\n- Videodata : \n\t%s\n", yytext);                 }
"<imagedata fileref= "  { printf("\n- Imagedata: \n\t%s\n", yytext);                  }
"<informaltable"        { printf("\n- InformalTable Apertura: \n\t%s\n", yytext);     }
"</informaltable>"      { printf("\n- InformalTable Cierre: \n\t%s\n", yytext);       }
"<tgroup>"              { printf("\n- Tgroup Apertura: \n\t%s\n", yytext);            }
"</tgroup>"             { printf("\n- Tgroup Cierre: \n\t%s\n", yytext);              }
"<row>"                 { printf("\n- Row Apertura: \n\t%s\n", yytext);               }
"</row>"                { printf("\n- Row Cierre: \n\t%s\n", yytext);                 }
"<table>"               { printf("\n- Table Apertura: \n\t%s\n", yytext);             }
"</table>"              { printf("\n- Table Cierre: \n\t%s\n", yytext);               }
"<thead>"               { printf("\n- Thead Apertura: \n\t%s\n", yytext);             }
"</thead>"              { printf("\n- Thead Cierre: \n\t%s\n", yytext);               }
"<tfoot>"               { printf("\n- Tfoot Apertura: \n\t%s\n", yytext);             }
"</tfoot>"              { printf("\n- Tfoot Cierre: \n\t%s\n", yytext);               }
"<tbody>"               { printf("\n- Tbody Apertura: \n\t%s\n", yytext);             }
"</tbody>"              { printf("\n- Tbody Cierre: \n\t%s\n", yytext);               }
"<entrytbl>"            { printf("\n- EntryTBL Apertura: \n\t%s\n", yytext);          }
"</entrytbl>"           { printf("\n- EntryTBL Cierre: \n\t%s\n", yytext);            }
"<link xlink:href: >"   { printf("\n- Link: \n\t%s\n", yytext);                       }
{url}                   { printf("\n- URL: \n\t%s\n", yytext);                        }
{texto}                 { printf("\n- Texto: \n\t%s\n", yytext);                      }
\n                      { line_num +=1 ;}
[ \t]+                  { /* Ignorar espacios y tabuladores */                        }
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
