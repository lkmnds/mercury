/*
** $Id: lmercury.c,v 0.0
*/

#define lmerlib_c
#define LUA_LIB

#include <stdlib.h>
#include <stdio.h>

#include "lua.h"

#include "lauxlib.h"
#include "lualib.h"

#define MERCURY_VERSION "001"

int mer_hello(lua_State *L){
	lua_pushstring(L, "HELLO WORLD!!!!!!!!!");
	return 1;
}

static const luaL_Reg mercurylib[] = {
	{"hello", mer_hello},
	{"version", NULL},
	{NULL, NULL}
};

LUAMOD_API int luaopen_mercury (lua_State *L){
	luaL_newlib(L, mercurylib);
	lua_pushstring(L, MERCURY_VERSION);
	lua_setfield(L, -2, "version");
	return 1;
}
