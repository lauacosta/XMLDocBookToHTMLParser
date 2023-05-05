%{
    #include "grammar.tab.h"
    int num = 1;
%}

%option noyywrap

texto   ([0-9]|\"?[a-zA-Z\s:;,!?()\.¡¿ÁÉÍÓÚÑñáéíóú\-\_\/\@]+\"?)*
url (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+(:[0-9]+)?((\/)|((\/)([a-zA-z0-9\_\-])+)\.([a-zA-z0-9])+)?

/*
protocolo (http:\/\/|https:\/\/|ftp:\/\/|ftps:\/\/)?
dominio ([a-zA-Z0-9]+\.)+[a-zA-Z0-9]+
puerto (:[0-9]+)?
ruta ((\/)|((\/)([a-zA-z0-9\_\-])+)\.([a-zA-z0-9])+)?
*/

%%
"<article>"             { printf("Article Apertura: %s - Linea: %d\n", yytext, num);         }
"</article>"            { printf("Article Cierre: %s - Linea: %d\n", yytext, num);           }
"<info>"                { printf("Info Apertura: %s - Linea: %d\n", yytext, num);            }
"</info>"               { printf("Info Cierre: %s - Linea: %d\n", yytext, num);              }
"<title>"               { printf("Title Apertura: %s - Linea: %d\n", yytext, num);           }
"</title>"              { printf("Title Cierre: %s - Linea: %d\n", yytext, num);             }
"<abstract>"            { printf("Abstract Apertura: %s - Linea: %d\n", yytext, num);        }
"</abstract>"           { printf("Abstract Cierre: %s - Linea: %d\n", yytext, num);          }
"<para>"                { printf("Para Apertura: %s - Linea: %d\n", yytext, num);            }
"</para>"               { printf("Para Cierre: %s - Linea: %d\n", yytext, num);              }
"<author>"              { printf("Author Apertura: %s - Linea: %d\n", yytext, num);          }
"</author>"             { printf("Author Cierre: %s - Linea: %d\n", yytext, num);            }
"<personname>"          { printf("PersonName Apertura: %s - Linea: %d\n", yytext, num);      }
"</personname>"         { printf("PersonName Cierre: %s - Linea: %d\n", yytext, num);        }
"<firstname>"           { printf("Firstname Apertura: %s - Linea: %d\n", yytext, num);       }
"</firstname>"          { printf("Firstname Cierre: %s - Linea: %d\n", yytext, num);         }
"<surname>"             { printf("Surname Apertura: %s - Linea: %d\n", yytext, num);         }
"</surname>"            { printf("Surname Cierre: %s - Linea: %d\n", yytext, num);           }
"<date>"                { printf("Date Apertura: %s - Linea: %d\n", yytext, num);            }
"</date>"               { printf("Date Cierre: %s - Linea: %d\n", yytext, num);              }
"<section>"             { printf("Section Apertura: %s - Linea: %d\n", yytext, num);         }
"</section>"            { printf("Section Cierre: %s - Linea: %d\n", yytext, num);           }
"<simplesect>"          { printf("SimpleSect Apertura: %s - Linea: %d\n", yytext, num);      }
"</simplesect>"         { printf("SimpleSect Cierre: %s - Linea: %d\n", yytext, num);        }
"<copyright>"           { printf("Copyright Apertura: %s - Linea: %d\n", yytext, num);       }
"</copyright>"          { printf("Copyright Cierre: %s - Linea: %d\n", yytext, num);         }
"<address>"              { printf("Address Apertura: %s - Linea: %d\n", yytext, num);         }
"</address>"            { printf("Address Cierre: %s - Linea: %d\n", yytext, num);           }
"<city>"                { printf("City Apertura: %s - Linea: %d\n", yytext, num);            }   
"</city>"               { printf("City Cierre: %s - Linea: %d\n", yytext, num);              }
"<state>"               { printf("State Apertura: %s - Linea: %d\n", yytext, num);           }
"</state>"              { printf("State Cierre: %s - Linea: %d\n", yytext, num);             }
"<postcode>"            { printf("Postcode Apertura: %s - Linea: %d\n", yytext, num);        }
"</postcode>"           { printf("Postcode Cierre: %s - Linea: %d\n", yytext, num);          } 
"<street>"              { printf("Street Apertura: %s - Linea: %d\n", yytext, num);          }
"</street>"             { printf("Street Cierre: %s - Linea: %d\n", yytext, num);            }
"<email>"               { printf("Email Apertura: %s - Linea: %d\n", yytext, num);           }
"</email>"              { printf("Email Cierre: %s - Linea: %d\n", yytext, num);             }
"<phone>"               { printf("Phone Apertura: %s - Linea: %d\n", yytext, num);           }
"</phone>"              { printf("PhoneCierre: %s - Linea: %d\n", yytext, num);              }
"<itemizedlist>"        { printf("ItemizedList Apertura: %s - Linea: %d\n", yytext, num);    }
"</itemizedlist>"       { printf("ItemizedList Cierre: %s - Linea: %d\n", yytext, num);      }
"<emphasis>"            { printf("Emphasis Apertura: %s - Linea: %d\n", yytext, num);        }
"</emphasis>"           { printf("Emphasis Cierre: %s - Linea: %d\n", yytext, num);          }
"<holder>"              { printf("Holder Apertura: %s - Linea: %d\n", yytext, num);          }
"</holder>"             { printf("Holder Cierre: %s - Linea: %d\n", yytext, num);            }
"<simpara>"             { printf("SimPara Apertura: %s - Linea: %d\n", yytext, num);         }
"</simpara>"            { printf("Simpara Cierre: %s - Linea: %d\n", yytext, num);           }
"<year>"                { printf("Year Apertura: %s - Linea: %d\n", yytext, num);            }
"</year>"               { printf("Year Cierre: %s - Linea: %d\n", yytext, num);              } 
"<comment>"             { printf("Comment Apertura: %s - Linea: %d\n", yytext, num);         }
"</comment>"            { printf("Comment Cierre: %s - Linea: %d\n", yytext, num);           }
"<important>"           { printf("Important Apertura: %s - Linea: %d\n", yytext, num);       }
"</important>"          { printf("Important Cierre: %s - Linea: %d\n", yytext, num);         }
"<link>"                { printf("Link Apertura: %s - Linea: %d\n", yytext, num);            }
"</link>"               { printf("Link Cierre: %s - Linea: %d\n", yytext, num);              }
"<videodata fileref= "  { printf("Videodata : %s - Linea: %d\n", yytext, num);               }
"<imagedata fileref= "  { printf("Imagedata: %s - Linea: %d\n", yytext, num);                }
"<informaltable"        { printf("InformalTable Apertura: %s - Linea: %d\n", yytext, num);   }
"</informaltable>"      { printf("InformalTable Cierre: %s - Linea: %d\n", yytext, num);     }
"<tgroup>"              { printf("Tgroup Apertura: %s - Linea: %d\n", yytext, num);          }
"</tgroup>"             { printf("Tgroup Cierre: %s - Linea: %d\n", yytext, num);            }
"<row>"                 { printf("Row Apertura: %s - Linea: %d\n", yytext, num);             }
"</row>"                { printf("Row Cierre: %s - Linea: %d\n", yytext, num);               }
"<table>"               { printf("Table Apertura: %s - Linea: %d\n", yytext, num);           }
"</table>"              { printf("Table Cierre: %s - Linea: %d\n", yytext, num);             }
"<thead>"               { printf("Thead Apertura: %s - Linea: %d\n", yytext, num);           }
"</thead>"              { printf("Thead Cierre: %s - Linea: %d\n", yytext, num);             }
"<tfoot>"               { printf("Tfoot Apertura: %s - Linea: %d\n", yytext, num);           }
"</tfoot>"              { printf("Tfoot Cierre: %s - Linea: %d\n", yytext, num);             }
"<tbody>"               { printf("Tbody Apertura: %s - Linea: %d\n", yytext, num);           }
"</tbody>"              { printf("Tbody Cierre: %s - Linea: %d\n", yytext, num);             }
"<entrytbl>"            { printf("EntryTBL Apertura: %s - Linea: %d\n", yytext, num);        }
"</entrytbl>"           { printf("EntryTBL Cierre: %s - Linea: %d\n", yytext, num);          }
"<link xlink:href: >"   { printf("Link: %s - Linea: %d\n", yytext, num);                     }
{url}                   { printf("Es una URL: %s - Linea: %d\n", yytext, num);                }
{texto}                   { printf("Texto: %s - Linea: %d\n", yytext, num);                  }
\n         { num=num+1;}
[ \t]+     { /* Ignorar espacios y tabuladores */ }
.          { printf("Error: caracter no reconocido - Linea: %d\n",num); exit(1); }
%%
/* \n                      {                                                   } */

int main(){
    yylex();
}
