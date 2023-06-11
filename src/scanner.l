%{
    #include "grammar.tab.h"
    int line_num = 1;
%}

%option noyywrap nodefault

texto           ([0-9]|\"?[a-zA-Z\s:;,!?()\.¡¿ÁÉÍÓÚÑñáéíóúü\-\_\/\@\\[\]\%\+\#\=\&\$\'\”\“ ]+\"?)*
url             (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+(:[0-9]+)?(\/|(\/[a-zA-Z0-9\_\-]+)+(\.[a-zA-Z0-9]+)?)?
ruta            (\"(..|.|~)?(\/?[a-zA-Z0-9]+\/)*[a-zA-Z0-9]+\.[a-zA-Z]+\"\/\>)?

/*
- protocolo: (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?
- dominio: ([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+
- puerto: (:[0-9]+)?
- ruta: (\/|(\/[a-zA-Z0-9\_\-]+)+(\.[a-zA-Z0-9]+)?)?
*/

%%
"<!DOCTYPE article>"    { return DOCTYPE;            }
"<article>"             { return A_ARTICLE;          }
"</article>"            { return C_ARTICLE;          }
"<info>"                { return A_INFO;             }
"</info>"               { return C_INFO;             }
"<title>"               { return A_TITLE;            }
"</title>"              { return C_TITLE;            }
"<abstract>"            { return A_ABSTRACT;         }
"</abstract>"           { return C_ABSTRACT;         }  
"<para>"                { return A_PARA;             }
"</para>"               { return C_PARA;             }
"<author>"              { return A_AUTHOR;           }
"</author>"             { return C_AUTHOR;           }
"<personname>"          { return A_PERSONNAME;       }
"</personname>"         { return C_PERSONNAME;       }
"<firstname>"           { return A_FIRSTNAME;        }
"</firstname>"          { return C_FIRSTNAME;        } 
"<surname>"             { return A_SURNAME;          }
"</surname>"            { return C_SURNAME;          }
"<date>"                { return A_DATE;             }
"</date>"               { return C_DATE;             }
"<section>"             { return A_SECTION;          }
"</section>"            { return C_SECTION;          } 
"<simplesect>"          { return A_SIMSECTION;       } 
"</simplesect>"         { return C_SIMSECTION;       }
"<copyright>"           { return A_COPYRIGHT;        }
"</copyright>"          { return C_COPYRIGHT;        }
"<address>"             { return A_ADDRESS;          }
"</address>"            { return C_ADDRESS;          }
"<city>"                { return A_CITY;             }
"</city>"               { return C_CITY;             }
"<state>"               { return A_STATE;            } 
"</state>"              { return C_STATE;            }   
"<postcode>"            { return A_POSTCODE;         }   
"</postcode>"           { return C_POSTCODE;         }
"<street>"              { return A_STREET;           }
"</street>"             { return C_STREET;           }
"<email>"               { return A_EMAIL;            }
"</email>"              { return C_EMAIL;            }
"<phone>"               { return A_PHONE;            }
"</phone>"              { return C_PHONE;            }
"<itemizedlist>"        { return A_ITEMIZEDLIST;     }
"</itemizedlist>"       { return C_ITEMIZEDLIST;     }
"<listitem>"            { return A_LISTITEM;         }
"</listitem>"           { return C_LISTITEM;         }
"<emphasis>"            { return A_EMPHASIS;         }
"</emphasis>"           { return C_EMPHASIS;         }
"<holder>"              { return A_HOLDER;           }
"</holder>"             { return C_HOLDER;           }
"<simpara>"             { return A_SIMPARA;          }
"</simpara>"            { return C_SIMPARA;          }
"<year>"                { return A_YEAR;             }
"</year>"               { return C_YEAR;             }  
"<comment>"             { return A_COMMENT;          }
"</comment>"            { return C_COMMENT;          }
"<important>"           { return A_IMPORTANT;        }
"</important>"          { return C_IMPORTANT;        }
"<link>"                { return A_LINK;             }
"</link>"               { return C_LINK;             }
"<mediaobject>"         { return A_MEDIAOBJECT;      }
"</mediaobject>"        { return C_MEDIAOBJECT;      }
"<videoobject>"         { return A_VIDEOOBJECT;      }
"</videoobject>"        { return C_VIDEOOBJECT;      }
"<imageobject>"         { return A_IMAGEOBJECT;      }
"</imageobject>"        { return C_IMAGEOBJECT;      }
"<videodata fileref="   { return VIDEODATA;          }
"<imagedata fileref="   { return IMAGEDATA;          }
"<informaltable>"       { return A_INFORMALTABLE;    }
"</informaltable>"      { return C_INFORMALTABLE;    }
"<tgroup>"              { return A_TGROUP;           }
"</tgroup>"             { return C_TGROUP;           }
"<row>"                 { return A_ROW;              }
"</row>"                { return C_ROW;              }  
"<table>"               { return A_TABLE;            }
"</table>"              { return C_TABLE;            }
"<thead>"               { return A_THEAD;            }
"</thead>"              { return C_THEAD;            }
"<tfoot>"               { return A_TFOOT;            }
"</tfoot>"              { return C_TFOOT;            }
"<tbody>"               { return A_TBODY;            }
"</tbody>"              { return C_TBODY;            }
"<entrytbl>"            { return A_ENTRYTBL;         }
"</entrytbl>"           { return C_ENTRYTBL;         }
"<link xlink:href:"     { return XLINK;              }
"/>"                    { return C_REF               }
{url}                   { return URL;                }
{ruta}                  { return RUTA;               }
{texto}                 { return TEXTO;              }
\n                      { line_num +=1               }
[ \t]+                  { /* Ignorar espacios y tabuladores */                        }
.                       { printf("Error: caracter '%s' no reconocido - Linea: %d\n",yytext,line_num); exit(1); }
%%

const char* getExtension(const char* filename) {
    const char* extension = strrchr(filename, '.');
    if (extension && extension != filename) return extension + 1;;
    return "";
}

void printWelcome(){

    printf("\n\t ANALIZADOR LÉXICO  -  Grupo N°19\n");
    printf("\n\t Ultima modificación 03-06-23\n");
    printf("\n\t Ivan Niveyro, Lautaro Acosta Quintana, Martín Galeano, Francisco Morel\n");
    printf("\n\t Github repo: https://github.com/LautaroAcosta/LexerParser\n");
    
    printf("\n »» Tokens detectados: \n");
}

int errorControl (int argc, char **argv) {
    if(argc > 1) {
        if(!(yyin = fopen(argv[1], "r"))) {
            fprintf(stderr, "El archivo no ha sido encontrado o no existe.");
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
