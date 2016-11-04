/* PROGRAMA PARA DETERMINAR DIRECCION IP PUBLICA DESDE LA LINEA DE COMANDO DE UNA MAQUINA LINUX
	AUTOR=	Daniel Ortega
	VERSION=	1.1

  DETERMINATE YOUR PUBLIC IP ADDRESS FROM YOUR COMMAND LINE IN YOUR LINUX SYSTEM
*/

#include <stdio.h>

void main()
{
  FILE *fp;
  char str[30];		//save the data from de command line
   
  fp = popen("dig TXT +short o-o.myaddr.l.google.com @ns1.google.com", "r");	//this is the command we pass to the command line

  while ( fgets( str, sizeof str, fp))
  {
    printf("PUBLIC_IP = %s", str);
  }
  pclose(fp);
}
