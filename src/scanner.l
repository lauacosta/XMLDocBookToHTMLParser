%{
    int line_num = 1;
%}

%option noyywrap

texto   ([0-9]|\"?[a-zA-Z\s:;,!?()\.¡¿ÁÉÍÓÚÑñáéíóú\-\_\/\@]+\"?)*
url (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+(:[0-9]+)?((\/)|(\/[a-zA-Z0-9\_\-]+)+\.[a-zA-Z0-9]+)?

/*
protocolo (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?
dominio ([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+
puerto (:[0-9]+)?
ruta ((\/)|(\/[a-zA-z0-9\_\-]+)+\.[a-zA-z0-9]+)?
*/

%%
"<article>"             { printf("Article Apertura: %s - Linea: %d\n", yytext, line_num);          }
"</article>"            { printf("Article Cierre: %s - Linea: %d\n", yytext, line_num);            } 
"<info>"                { printf("Info Apertura: %s - Linea: %d\n", yytext, line_num);             } 
"</info>"               { printf("Info Cierre: %s - Linea: %d\n", yytext, line_num);               }
"<title>"               { printf("Title Apertura: %s - Linea: %d\n", yytext, line_num);            }
"</title>"              { printf("Title Cierre: %s - Linea: %d\n", yytext, line_num);              }
"<abstract>"            { printf("Abstract Apertura: %s - Linea: %d\n", yytext, line_num);         }
"</abstract>"           { printf("Abstract Cierre: %s - Linea: %d\n", yytext, line_num);           }  
"<para>"                { printf("Para Apertura: %s - Linea: %d\n", yytext, line_num);             } 
"</para>"               { printf("Para Cierre: %s - Linea: %d\n", yytext, line_num);               }
"<author>"              { printf("Author Apertura: %s - Linea: %d\n", yytext, line_num);           }
"</author>"             { printf("Author Cierre: %s - Linea: %d\n", yytext, line_num);             }
"<personname>"          { printf("PersonName Apertura: %s - Linea: %d\n", yytext, line_num);       } 
"</personname>"         { printf("PersonName Cierre: %s - Linea: %d\n", yytext, line_num);         } 
"<firstname>"           { printf("Firstname Apertura: %s - Linea: %d\n", yytext, line_num);        }
"</firstname>"          { printf("Firstname Cierre: %s - Linea: %d\n", yytext, line_num);          }
"<surname>"             { printf("Surname Apertura: %s - Linea: %d\n", yytext, line_num);          }
"</surname>"            { printf("Surname Cierre: %s - Linea: %d\n", yytext, line_num);            }
"<date>"                { printf("Date Apertura: %s - Linea: %d\n", yytext, line_num);             }
"</date>"               { printf("Date Cierre: %s - Linea: %d\n", yytext, line_num);               }
"<section>"             { printf("Section Apertura: %s - Linea: %d\n", yytext, line_num);          }
"</section>"            { printf("Section Cierre: %s - Linea: %d\n", yytext, line_num);            } 
"<simplesect>"          { printf("SimpleSect Apertura: %s - Linea: %d\n", yytext, line_num);       } 
"</simplesect>"         { printf("SimpleSect Cierre: %s - Linea: %d\n", yytext, line_num);         }
"<copyright>"           { printf("Copyright Apertura: %s - Linea: %d\n", yytext, line_num);        }
"</copyright>"          { printf("Copyright Cierre: %s - Linea: %d\n", yytext, line_num);          }
"<address>"             { printf("Address Apertura: %s - Linea: %d\n", yytext, line_num);          }
"</address>"            { printf("Address Cierre: %s - Linea: %d\n", yytext, line_num);            }
"<city>"                { printf("City Apertura: %s - Linea: %d\n", yytext, line_num);             }   
"</city>"               { printf("City Cierre: %s - Linea: %d\n", yytext, line_num);               }
"<state>"               { printf("State Apertura: %s - Linea: %d\n", yytext, line_num);            }
"</state>"              { printf("State Cierre: %s - Linea: %d\n", yytext, line_num);              }
"<postcode>"            { printf("Postcode Apertura: %s - Linea: %d\n", yytext, line_num);         }
"</postcode>"           { printf("Postcode Cierre: %s - Linea: %d\n", yytext, line_num);           } 
"<street>"              { printf("Street Apertura: %s - Linea: %d\n", yytext, line_num);           }
"</street>"             { printf("Street Cierre: %s - Linea: %d\n", yytext, line_num);             }
"<email>"               { printf("Email Apertura: %s - Linea: %d\n", yytext, line_num);            }
"</email>"              { printf("Email Cierre: %s - Linea: %d\n", yytext, line_num);              }
"<phone>"               { printf("Phone Apertura: %s - Linea: %d\n", yytext, line_num);            }
"</phone>"              { printf("PhoneCierre: %s - Linea: %d\n", yytext, line_num);               }
"<itemizedlist>"        { printf("ItemizedList Apertura: %s - Linea: %d\n", yytext, line_num);     }
"</itemizedlist>"       { printf("ItemizedList Cierre: %s - Linea: %d\n", yytext, line_num);       }
"<emphasis>"            { printf("Emphasis Apertura: %s - Linea: %d\n", yytext, line_num);         }
"</emphasis>"           { printf("Emphasis Cierre: %s - Linea: %d\n", yytext, line_num);           }
"<holder>"              { printf("Holder Apertura: %s - Linea: %d\n", yytext, line_num);           }
"</holder>"             { printf("Holder Cierre: %s - Linea: %d\n", yytext, line_num);             }
"<simpara>"             { printf("SimPara Apertura: %s - Linea: %d\n", yytext, line_num);          }
"</simpara>"            { printf("Simpara Cierre: %s - Linea: %d\n", yytext, line_num);            }
"<year>"                { printf("Year Apertura: %s - Linea: %d\n", yytext, line_num);             }
"</year>"               { printf("Year Cierre: %s - Linea: %d\n", yytext, line_num);               } 
"<comment>"             { printf("Comment Apertura: %s - Linea: %d\n", yytext, line_num);          }
"</comment>"            { printf("Comment Cierre: %s - Linea: %d\n", yytext, line_num);            }
"<important>"           { printf("Important Apertura: %s - Linea: %d\n", yytext, line_num);        }
"</important>"          { printf("Important Cierre: %s - Linea: %d\n", yytext, line_num);          }
"<link>"                { printf("Link Apertura: %s - Linea: %d\n", yytext, line_num);             }
"</link>"               { printf("Link Cierre: %s - Linea: %d\n", yytext, line_num);               }
"<videodata fileref= "  { printf("Videodata : %s - Linea: %d\n", yytext, line_num);                }
"<imagedata fileref= "  { printf("Imagedata: %s - Linea: %d\n", yytext, line_num);                 }
"<informaltable"        { printf("InformalTable Apertura: %s - Linea: %d\n", yytext, line_num);    }
"</informaltable>"      { printf("InformalTable Cierre: %s - Linea: %d\n", yytext, line_num);      }
"<tgroup>"              { printf("Tgroup Apertura: %s - Linea: %d\n", yytext, line_num);           }
"</tgroup>"             { printf("Tgroup Cierre: %s - Linea: %d\n", yytext, line_num);             }
"<row>"                 { printf("Row Apertura: %s - Linea: %d\n", yytext, line_num);              }
"</row>"                { printf("Row Cierre: %s - Linea: %d\n", yytext, line_num);                } 
"<table>"               { printf("Table Apertura: %s - Linea: %d\n", yytext, line_num);            } 
"</table>"              { printf("Table Cierre: %s - Linea: %d\n", yytext, line_num);              }  
"<thead>"               { printf("Thead Apertura: %s - Linea: %d\n", yytext, line_num);            } 
"</thead>"              { printf("Thead Cierre: %s - Linea: %d\n", yytext, line_num);              } 
"<tfoot>"               { printf("Tfoot Apertura: %s - Linea: %d\n", yytext, line_num);            }
"</tfoot>"              { printf("Tfoot Cierre: %s - Linea: %d\n", yytext, line_num);              }
"<tbody>"               { printf("Tbody Apertura: %s - Linea: %d\n", yytext, line_num);            }
"</tbody>"              { printf("Tbody Cierre: %s - Linea: %d\n", yytext, line_num);              }
"<entrytbl>"            { printf("EntryTBL Apertura: %s - Linea: %d\n", yytext, line_num);         }
"</entrytbl>"           { printf("EntryTBL Cierre: %s - Linea: %d\n", yytext, line_num);           }
"<link xlink:href: >"   { printf("Link: %s - Linea: %d\n", yytext, line_num);                      }
{url}                   { printf("URL: %s - Linea: %d\n", yytext, line_num);                       }
{texto}                 { printf("Texto: %s - Linea: %d\n", yytext, line_num);                     }
\n                      { line_num +=1 ;}
[ \t]+                  { /* Ignorar espacios y tabuladores */ }
.                       { printf("Error: caracter no reconocido - Linea: %d\n",line_num); exit(1); }
%%
/* \n                      {                                                   } */

int main(){
    printf(" ~ ~ ~ Analizador Lexico - Grupo nro. 19 ~ ~ ~ \n");
    printf("Listado de tokens detectados: \n");
    yylex();
}
