%{   
    #include <string.h>
%}

%token EOL TEXTO RUTA URL XLINK VIDEODATA IMAGEDATA DOCTYPE C_REF
%token A_ARTICLE        C_ARTICLE
%token A_INFO           C_INFO
%token A_TITLE          C_TITLE
%token A_ABSTRACT       C_ABSTRACT 
%token A_PARA           C_PARA
%token A_AUTHOR         C_AUTHOR
%token A_PERSONNAME     C_PERSONNAME
%token A_FIRSTNAME      C_FIRSTNAME
%token A_SURNAME        C_SURNAME
%token A_DATE           C_DATE
%token A_SECTION        C_SECTION
%token A_SIMSECTION     C_SIMSECTION
%token A_COPYRIGHT      C_COPYRIGHT
%token A_ADDRESS        C_ADDRESS
%token A_CITY           C_CITY
%token A_STATE          C_STATE
%token A_POSTCODE       C_POSTCODE
%token A_STREET         C_STREET
%token A_EMAIL          C_EMAIL
%token A_PHONE          C_PHONE
%token A_ITEMIZEDLIST   C_ITEMIZEDLIST
%token A_LISTITEM       C_LISTITEM
%token A_EMPHASIS       C_EMPHASIS
%token A_HOLDER         C_HOLDER
%token A_SIMPARA        C_SIMPARA
%token A_YEAR           C_YEAR
%token A_COMMENT        C_COMMENT
%token A_IMPORTANT      C_IMPORTANT
%token A_LINK           C_LINK
%token A_MEDIAOBJECT    C_MEDIAOBJECT
%token A_VIDEOOBJECT    C_VIDEOOBJECT
%token A_IMAGEOBJECT    C_IMAGEOBJECT
%token A_INFORMALTABLE  C_INFORMALTABLE
%token A_TGROUP         C_TGROUP
%token A_ROW            C_ROW
%token A_TABLE          C_TABLE
%token A_THEAD          C_THEAD
%token A_TFOOT          C_TFOOT
%token A_TBODY          C_TBODY  
%token A_ENTRYTBL       C_ENTRYTBL
%token A_ENTRY          C_ENTRY

%%

input:
     DOCTYPE article
;

article: 
    A_ARTICLE Info      Title       Content     Section     C_ARTICLE 
|   A_ARTICLE Info      Title       Content     SimSection  C_ARTICLE 
|   A_ARTICLE Info      Title       Content                 C_ARTICLE 
|   A_ARTICLE Info      Content     Section                 C_ARTICLE 
|   A_ARTICLE Info      Content     SimSection              C_ARTICLE 
|   A_ARTICLE Info      Content                             C_ARTICLE 
|   A_ARTICLE Title     Content     Section                 C_ARTICLE 
|   A_ARTICLE Title     Content     SimSection              C_ARTICLE 
|   A_ARTICLE Title     Content                             C_ARTICLE 
|   A_ARTICLE Content   Section                             C_ARTICLE 
|   A_ARTICLE Content   SimSection                          C_ARTICLE 
|   A_ARTICLE Content                                       C_ARTICLE 
;

Content:
    ItemizedList    Content | ItemizedList
|   Important       Content | Important
|   Para            Content | Para
|   SimPara         Content | SimPara
|   Address         Content | Address
|   MediaObject     Content | MediaObject
|   InformalTable   Content | InformalTable
|   Comment         Content | Comment
|   Abstract        Content | Abstract
;

Section: 
    A_SECTION Info      Title       Content     Section     C_SECTION
|   A_SECTION Info      Title       Content     SimSection  C_SECTION
|   A_SECTION Info      Content     Section                 C_SECTION
|   A_SECTION Info      Content     SimSection              C_SECTION
|   A_SECTION Title     Content     Section                 C_SECTION
|   A_SECTION Title     Content     SimSection              C_SECTION
|   A_SECTION Content   Section                             C_SECTION
|   A_SECTION Content   SimSection                          C_SECTION
|   A_SECTION Content                                       C_SECTION
;

SimSection:
    A_SIMSECTION Info   Title   Content     C_SIMSECTION
|   A_SIMSECTION Info   Content             C_SIMSECTION
|   A_SIMSECTION Title  Content             C_SIMSECTION
|   A_SIMSECTION Content                    C_SIMSECTION
;


InfoContent:
    Title       InfoContent | Title
|   MediaObject InfoContent | MediaObject
|   Abstract    InfoContent | Abstract
|   Address     InfoContent | Address
|   Author      InfoContent | Author
|   Date        InfoContent | Date
|   Copyright   InfoContent | Copyright
;

Info: 
    A_INFO InfoContent C_INFO
;


AbstractContent:
    Para AbstractContent    | Para
|   SimPara AbstractContent | SimPara
;

Abstract:
    A_ABSTRACT Title AbstractContent    C_ABSTRACT
|   A_ABSTRACT AbstractContent          C_ABSTRACT
;

AddressContent:
    TEXTO AddressContent    | TEXTO
|   Street AddressContent   | Street
|   City AddressContent     | City
|   State AddressContent    | State
|   Phone AddressContent    | Phone
|   Email AddressContent    | Email
;

Address: 
    A_ADDRESS AddressContent C_ADDRESS
;

AuthorContent:
    Firstname AuthorContent
|   Surname AuthorContent
|   Surname
;

Author:
    A_AUTHOR AuthorContent C_AUTHOR
;

CopyrightYearContent:
    Year CopyrightYearContent
|   Year CopyrightHolderContent
|   Year
;

CopyrightHolderContent:
    Holder CopyrightHolderContent | Holder
;

Copyright:
    A_COPYRIGHT CopyrightYearContent C_COPYRIGHT

TitleContent: 
    Emphasis TitleContent   | Emphasis
|   Link TitleContent       | Link
|   Email TitleContent      | Email
|   TEXTO TitleContent      | TEXTO
;

Title:
    A_TITLE TitleContent C_TITLE
;

SimParaContent:
    Emphasis | TEXTO    |   Personame
|   Link     | Email
|   Author   | Comment
;

SimPara:
    A_SIMPARA SimPara SimParaContent C_SIMPARA
|   A_SIMPARA SimParaContent C_SIMPARA
;

Emphasis:
    A_EMPHASIS Emphasis SimParaContent C_EMPHASIS
|   A_EMPHASIS SimParaContent C_EMPHASIS
;

Comment:
    A_COMMENT Comment SimParaContent C_COMMENT
|   A_COMMENT SimParaContent C_COMMENT
;

Link:
    A_LINK Link SimParaContent C_LINK
|   A_LINK SimParaContent C_LINK
;

ParaContent:
    Emphasis    | Link          | Email     | Author
|   Comment     | ItemizedList  | Important | Address
|   MediaObject | InformalTable
;

Para:
    A_PARA Para ParaContent C_PARA
|   A_PARA ParaContent C_PARA
;

Important:
    A_IMPORTANT Title Content C_IMPORTANT
|   A_IMPORTANT Content C_IMPORTANT
;

SharedContent:
    Comment SharedContent       | Comment
|   Emphasis SharedContent      | Emphasis
|   Link SharedContent          | Link
|   TEXTO SharedContent         | TEXTO
;

Personame:
    A_PERSONNAME Firstname Surname C_PERSONNAME
;


Firstname:
    A_FIRSTNAME SharedContent C_FIRSTNAME
;

Surname:
    A_SURNAME SharedContent C_SURNAME
;

Street:
    A_STREET SharedContent C_STREET
;

City:
    A_CITY SharedContent C_CITY
;

Phone:
    A_PHONE SharedContent C_PHONE
;

Email:
    A_EMAIL SharedContent C_EMAIL
;

Date:
    A_DATE SharedContent C_DATE
;

Year:
    A_YEAR SharedContent C_YEAR
;

Holder:
    A_HOLDER SharedContent C_HOLDER
;

State:
    A_STATE SharedContent C_STATE
;

MediaObjectContent:
    VideoObject MediaObjectContent  |   VideoObject
|   ImageObject MediaObjectContent  |   ImageObject
;

MediaObject:
    A_MEDIAOBJECT Info          VideoObject         MediaObjectContent  C_MEDIAOBJECT
|   A_MEDIAOBJECT Info          ImageObject         MediaObjectContent  C_MEDIAOBJECT
|   A_MEDIAOBJECT VideoObject   MediaObjectContent                      C_MEDIAOBJECT
|   A_MEDIAOBJECT ImageObject   MediaObjectContent                      C_MEDIAOBJECT
|   A_MEDIAOBJECT VideoObject                                           C_MEDIAOBJECT
|   A_MEDIAOBJECT ImageObject                                           C_MEDIAOBJECT
;

ImageObject:
    A_IMAGEOBJECT Info      ImageData    C_IMAGEOBJECT
|   A_IMAGEOBJECT ImageData              C_IMAGEOBJECT
;

VideoObject:
    A_VIDEOOBJECT Info      VideoData   C_VIDEOOBJECT
|   A_VIDEOOBJECT VideoData             C_VIDEOOBJECT
;

VideoData:
    VIDEODATA RUTA 
;

ImageData:
    IMAGEDATA RUTA 
;

ItemizedList:
    A_ITEMIZEDLIST ListItem ItemizedList C_ITEMIZEDLIST
|   A_ITEMIZEDLIST ListItem C_ITEMIZEDLIST
;

ListItem:
    A_LISTITEM  Content ListItem C_LISTITEM
|   A_LISTITEM  Content C_LISTITEM
;

InformalTableContent:
    MediaObject InformalTableContent    | MediaObject
|   Tgroup  InformalTableContent        |   Tgroup
;

InformalTable:
    A_INFORMALTABLE InformalTableContent C_INFORMALTABLE
;

Tgroup:
    A_TGROUP Thead  Tbody   Tfoot   C_TGROUP
|   A_TGROUP Thead  Tfoot           C_TGROUP
|   A_TGROUP Tbody  Tfoot           C_TGROUP
|   A_TGROUP Tfoot                  C_TGROUP
;

TableContent:
    Row TableContent    |   Row
;

Thead:
     A_THEAD    TableContent    C_THEAD
;

Tbody:
     A_TBODY    TableContent    C_TBODY
;

Tfoot:
     A_TFOOT    TableContent    C_TFOOT
;

RowContent:
    Entry RowContent    |   Entry
|   EntryTbl RowContent |   EntryTbl
;

Row:
   A_ROW    RowContent  C_ROW
;

EntryContent:
    TEXTO           EntryContent | TEXTO
|   ItemizedList    EntryContent | ItemizedList
|   Important       EntryContent | Important
|   Para            EntryContent | Para
|   SimPara         EntryContent | SimPara
|   MediaObject     EntryContent | MediaObject
|   Comment         EntryContent | Comment
|   Abstract        EntryContent | Abstract
;

Entry:
    A_ENTRY EntryContent C_ENTRY
;

EntryTbl:
    A_ENTRYTBL  Thead Tbody C_ENTRYTBL
|   A_ENTRYTBL  Tbody C_ENTRYTBL
;

Xlink:
    XLINK URL
;

%%

int main(int argc, char **argv) {
    if (errorControl(argc, argv))
        return 1;

    printWelcome();
    yyparse();
    return 0;
}

yyerror(char *s){
    printf("No cumple :(\n");
    return 1;
}
