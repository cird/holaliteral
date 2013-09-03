/*
main.o:     file format pe-i386

Disassembly of section .text:

00000000 <_printf>:
   0:	55                   	push   %ebp
   1:	89 e5                	mov    %esp,%ebp
   3:	53                   	push   %ebx
   4:	83 ec 24             	sub    $0x24,%esp
   7:	8d 45 0c             	lea    0xc(%ebp),%eax
   a:	89 45 f4             	mov    %eax,-0xc(%ebp)
   d:	8b 45 f4             	mov    -0xc(%ebp),%eax
  10:	89 44 24 04          	mov    %eax,0x4(%esp)
  14:	8b 45 08             	mov    0x8(%ebp),%eax
  17:	89 04 24             	mov    %eax,(%esp)
  1a:	e8 00 00 00 00       	call   1f <_printf+0x1f>
  1f:	89 c3                	mov    %eax,%ebx
  21:	89 d8                	mov    %ebx,%eax
  23:	83 c4 24             	add    $0x24,%esp
  26:	5b                   	pop    %ebx
  27:	5d                   	pop    %ebp
  28:	c3                   	ret    

00000029 <_main>:
  29:	55                   	push   %ebp
  2a:	89 e5                	mov    %esp,%ebp
  2c:	83 e4 f0             	and    $0xfffffff0,%esp
  2f:	83 ec 20             	sub    $0x20,%esp
  32:	e8 00 00 00 00       	call   37 <_main+0xe>
  37:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
  3e:	00 
  3f:	ff 44 24 1c          	incl   0x1c(%esp)
  43:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
  4a:	e8 b1 ff ff ff       	call   0 <_printf>
  4f:	83 7c 24 1c 04       	cmpl   $0x4,0x1c(%esp)
  54:	7e e9                	jle    3f <_main+0x16>
  56:	c9                   	leave  
  57:	c3                   	ret    
*/


//void main ( ){ int i=0; do{ h: i++; printf( "HOLA " );}while(i< 5 ); ; ; }


#include<stdio.h>
#define Computadora void
#define por main(
#define favor ){ int i=0; do{
#define escriba h: i++; printf(
#define unas );}while(i<
#define veces );
#define cinco 5
#define diez 10
#define en ;
#define la ;
#define pantalla }

Computadora por favor escriba " HOLA " unas cinco veces en la pantalla 



