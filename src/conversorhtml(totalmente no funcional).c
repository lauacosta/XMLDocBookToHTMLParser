%option noyywrap nodefault 

%{
    #include "grammar.tab.h"
    #include <string.h>
    #include <stdio.h>
    #define MAX_CONTENT_LENGTH 100000
    //#include "interfaces.h"
    int line_num = 1;
%}

texto           ([0-9]|\"?[a-zA-Z\s:;,!?()\.¡¿ÁÉÍÓÚÑñáéíóúü\-\_\/\@\\[\]\%\+\#\=\&\$\'\”\“ ]+\"?)*
url             (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+(:[0-9]+)?(\/|(\/[a-zA-Z0-9\_\-]+)+(\.[a-zA-Z0-9]+)?)?
ruta            (\"(..|.|~)?(\/?[a-zA-Z0-9]+\/)*[a-zA-Z0-9]+\.[a-zA-Z]+\"\/\>)?

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
"/>"                    { return C_REF;              }
{url}                   { return URL;                }
{ruta}                  { return RUTA;               }
{texto}                 { return TEXTO;              }
\n                      { line_num +=1;              }
[ \t]+                  { /* Ignorar espacios y tabuladores */}
.                       { yyerror(yytext); }
%%

const char* getExtension(const char* filename) {
    const char* extension = strrchr(filename, '.');
    if (extension && extension != filename) return extension + 1;;
    return "";
}

void printWelcome(){

    printf("\n\t ANALIZADOR SINTACTICO  -  Grupo N°19\n");
    printf("\n\t Ultima modificación 12-06-23\n");
    printf("\n\t Ivan Niveyro, Lautaro Acosta Quintana, Martín Galeano, Francisco Morel\n");
    printf("\n\t Github repo: https://github.com/LautaroAcosta/LexerParser\n");
    printf("\t");    
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

int yyerror(char *s){
    printf("Analisis Sintactico 'INTERRUMPIDO' - Error en linea: %d \n",line_num);
    return 1;
}
int titulo1,titulo2;                                                            //variables
int main(int argc, char **argv) {
    if (errorControl(argc, argv))
        return 1;

    printWelcome();
    if (!yyparse()){printf("\nAnalisis Sintactico 'CORRECTO' \n\n");}

    FILE* salida = fopen("resultado.html", "w");

    // Verifica si ocurrió un error al abrir los archivos
    if (salida == NULL) {
        printf("Error al abrir los archivos.\n");
        return 1;
    }
    //-----------------------------------------------------------------------------------------------------
    //                                                HTML CONVERSION
    //-----------------------------------------------------------------------------------------------------
    char transformed_content[MAX_CONTENT_LENGTH];
    yytoken_kind_t token;
    
    // Analiza el archivo de entrada y realiza la transformación
    while ((token = yylex()) != 0) {
        switch (token) {
            case DOCTYPE:
                strcat(transformed_content, "<!DOCTYPE html>");
                break;
            case A_ARTICLE:
                strcat(transformed_content, "<article>");
                break;
            case C_ARTICLE:
                strcat(transformed_content, "</article>");
                break;
            case A_INFO:
                strcat(transformed_content, "<info>");
                strcat(transformed_content, "<p style=\"background-color: green; color: white; font-size: 8pt;\">");
                break;
            case C_INFO:
                strcat(transformed_content, "</p>");
                strcat(transformed_content, "</info>");
                break;
            case A_TITLE:                                   //revisar:todo esto sirve para comparar entre titulos los principales se les asigna h1 y a los secundarios h2. Si no existe un h1 y te viene un titulo principal se asigna a la variable titulo1 un 1 asi el proximo titulo que venga se le asigna h2
                if (titulo1=1) {
                    strcat(transformed_content, "<h2>");
                    titulo2++;   
                }else{
                    strcat(transformed_content, "<h1>");
                    titulo1++;  
                }    
                break;
            case C_TITLE:
                if (titulo2>0) {                            
                    strcat(transformed_content, "</h2>");
                    titulo2:=titulo2-1;   
                }else{
                    strcat(transformed_content, "</h1>");
                    if(titulo1=1){
                      titulo1:=titulo1-1;  
                    }  
                }    
                break;                                      //revisar
            case A_ABSTRACT:
                strcat(transformed_content, "<abstract>");
                break;
            case C_ABSTRACT:
                strcat(transformed_content, "</abstract>");
                break;
            case A_PARA:
                strcat(transformed_content, "<p>");
                break;
            case C_PARA:
                strcat(transformed_content, "</p>");
                break;
            case A_AUTHOR:
                strcat(transformed_content, "<author>");
                break;
            case C_AUTHOR:
                strcat(transformed_content, "</author>");
                break;
            case A_PERSONNAME:
                strcat(transformed_content, "<personname>");
                break;
            case C_PERSONNAME:
                strcat(transformed_content, "</personname>");
                break;
            case A_FIRSTNAME:
                strcat(transformed_content, "<firstname>");
                break;
            case C_FIRSTNAME:
                strcat(transformed_content, "</firstname>");
                break;
            case A_SURNAME:
                strcat(transformed_content, "<surname>");
                break;
            case C_SURNAME:
                strcat(transformed_content, "</surname>");
                break;
            case A_DATE:
                strcat(transformed_content, "<date>");
                break;
            case C_DATE:
                strcat(transformed_content, "</date>");
                break;
            case A_SECTION:
                strcat(transformed_content, "<section>");
                break;
            case C_SECTION:
                strcat(transformed_content, "</section>");
                break;
            case A_SIMSECTION:
                strcat(transformed_content, "<simplesect>");
                break;
            case C_SIMSECTION:
                strcat(transformed_content, "</simplesect>");
                break;
            case A_COPYRIGHT:
                strcat(transformed_content, "<copyright>");
                break;
            case C_COPYRIGHT:
                strcat(transformed_content, "</copyright>");
                break;
            case A_ADDRESS:
                strcat(transformed_content, "<address>");
                break;
            case C_ADDRESS:
                strcat(transformed_content, "</address>");
                break;
            case A_CITY:
                strcat(transformed_content, "<city>");
                break;
            case C_CITY:
                strcat(transformed_content, "</city>");
                break;
            case A_STATE:
                strcat(transformed_content, "<state>");
                break;
            case C_STATE:
                strcat(transformed_content, "</state>");
                break;
            case A_POSTCODE:
                strcat(transformed_content, "<postcode>");
                break;
            case C_POSTCODE:
                strcat(transformed_content, "</postcode>");
                break;
            case A_STREET:
                strcat(transformed_content, "<street>");
                break;
            case C_STREET:
                strcat(transformed_content, "</street>");
                break;
            case A_EMAIL:
                strcat(transformed_content, "<email>");
                break;
            case C_EMAIL:
                strcat(transformed_content, "</email>");
                break;
            case A_PHONE:
                strcat(transformed_content, "<phone>");
                break;
            case C_PHONE:
                strcat(transformed_content, "</phone>");
                break;
            case A_ITEMIZEDLIST:
                strcat(transformed_content, "<ul>");
                break;
            case C_ITEMIZEDLIST:
                strcat(transformed_content, "</ul>");
                break;
            case A_LISTITEM:
                strcat(transformed_content, "<li>");
                break;
            case C_LISTITEM:
                strcat(transformed_content, "</li>");
                break;
            case A_EMPHASIS:
                strcat(transformed_content, "<em>");
                break;
            case C_EMPHASIS:
                strcat(transformed_content, "</em>");
                break;
            case A_HOLDER:
                strcat(transformed_content, "<holder>");
                break;
            case C_HOLDER:
                strcat(transformed_content, "</holder>");
                break;
            case A_SIMPARA:
                strcat(transformed_content, "<p>");
                break;
            case C_SIMPARA:
                strcat(transformed_content, "</p>");
                break;
            case A_YEAR:
                strcat(transformed_content, "<year>");
                break;
            case C_YEAR:
                strcat(transformed_content, "</year>");
                break;
            case A_COMMENT:
                strcat(transformed_content, "<comment>");
                break;
            case C_COMMENT:
                strcat(transformed_content, "</comment>");
                break;
            case A_IMPORTANT:
                strcat(transformed_content, "<div style=\"background-color: red; color: white;\">");
                break;
            case C_IMPORTANT:
                strcat(transformed_content, "</div>");
                break;
            case A_LINK:
                strcat(transformed_content, "<a>");
                break;
            case C_LINK:
                strcat(transformed_content, "</a>");
                break;
            case A_MEDIAOBJECT:
                strcat(transformed_content, "<mediaobject>");
                break;
            case C_MEDIAOBJECT:
                strcat(transformed_content, "</mediaobject>");
                break;
            case A_VIDEOOBJECT:
                strcat(transformed_content, "<videoobject>");
                break;
            case C_VIDEOOBJECT:
                strcat(transformed_content, "</videoobject>");
                break;
            case A_IMAGEOBJECT:
                strcat(transformed_content, "<imageobject>");
                break;
            case C_IMAGEOBJECT:
                strcat(transformed_content, "</imageobject>");
                break;
            case VIDEODATA:
                strcat(transformed_content, "<videodata>");
                break;
            case IMAGEDATA:
                strcat(transformed_content, "<imagedata>");
                break;
            case A_INFORMALTABLE:
                strcat(transformed_content, "<table>");
                break;
            case C_INFORMALTABLE:
                strcat(transformed_content, "</table>");
                break;
            case A_TGROUP:
                strcat(transformed_content, "<colgroup>");
                break;
            case C_TGROUP:
                strcat(transformed_content, "</colgroup>");
                break;
            case A_ROW:
                strcat(transformed_content, "<tr>");
                break;
            case C_ROW:
                strcat(transformed_content, "</tr>");
                break;
            case A_TABLE:
                strcat(transformed_content, "<table>");
                break;
            case C_TABLE:
                strcat(transformed_content, "</table>");
                break;
            case A_THEAD:
                strcat(transformed_content, "<thead>");
                break;
            case C_THEAD:
                strcat(transformed_content, "</thead>");
                break;
            case A_TFOOT:
                strcat(transformed_content, "<tfoot>");
                break;
            case C_TFOOT:
                strcat(transformed_content, "</tfoot>");
                break;
            case A_TBODY:
                strcat(transformed_content, "<tbody>");
                break;
            case C_TBODY:
                strcat(transformed_content, "</tbody>");
                break;
            case A_ENTRYTBL:
                strcat(transformed_content, "<td>");
                break;
            case C_ENTRYTBL:
                strcat(transformed_content, "</td>");
                break;
            case XLINK:
                strcat(transformed_content, "<a href=\"");
                break;
            case C_REF:
                strcat(transformed_content, "</a>");
                break;
            case URL:
                strcat(transformed_content, "<a href=\"");
                strcat(transformed_content, yytext);
                strcat(transformed_content, "\">");
                break;
            case RUTA:
                strcat(transformed_content, "<a href=\"");
                strcat(transformed_content, yytext);
                strcat(transformed_content, "\">");
                break;
            case TEXTO:
                strcat(transformed_content, yytext);
                break;
            default:
                break;
        }
    }


    // Escribe el contenido transformado en el archivo de salida
    fprintf("%s", transformed_content);

    // Cierra los archivos
    fclose(salida);
    printf("Transformación completada con éxito.\n");
    return 0;

}
