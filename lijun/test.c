#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cgiMain() {
  cgiHeaderContentType("text/html");
  printf( "<HTML><HEAD>\n");
  printf( "<TITLE>My First CGI</TITLE></HEAD>\n");
  printf( "<BODY><H1>Hello CGIC</H1></BODY>\n");
  printf( "</HTML>\n");
  return 0;
 }
