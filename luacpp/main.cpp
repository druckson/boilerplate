#include "lua.hpp"

int main() {
    lua_State *L = luaL_newstate();

    luaopen_io(L);
    luaopen_base(L);
    luaopen_table(L);
    luaopen_string(L);

    if (luaL_loadfile(L, "test.lua") == 0)
        lua_pcall(L, 0, LUA_MULTRET, 0);
        
    lua_close(L);
    return 0;
}
