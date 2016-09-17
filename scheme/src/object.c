
/**
 * @file object.c
 * @author François Cayre <cayre@yiking.(null)>
 * @date Fri Jun 15 18:02:57 2012
 * @brief Object definitions for SFS.
 *
 * Object definitions for SFS.
 */

#include "object.h"
#include "mem.h"


object make_object( uint type ) {

    object t = sfs_malloc( sizeof( *t ) );

    t->type = type;

    return t;
}

object make_nil( void ) {

    object t = make_object( SFS_NIL );

    t->this.special = t;

    return t;
}

object make_character(char caractere){
	object t=make_object(SFS_CHARACTER);
	t->this.character=caractere;
	return t;
}

object stringlength( char * str   ) {
}


object make_string(char * str ){
	/*char chaine2[256];
	chaine2 = str;
	strcpy(chaine2, str);
	*/
	object t=make_object(SFS_STRING);
	/*t->this.string=str;*/
	strcpy(t->this.string, str);
	return t;
}

main(){
	char t[256];
	sscanf(t...=
	
	stringlenfth(t);
	make_string(t);
}

object make_bool(void) {
	object t=make_object(SFS_BOOLEAN);
	t->this.special = t;
	return t;
}

object make_integer(int number) {
	object t=make_object(SFS_INTEGER);
	t->this.number=number;
	return t;
}	