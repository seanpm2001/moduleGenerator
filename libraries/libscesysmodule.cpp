// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

// Generated By moduleGenerator
#include "libscesysmodule.h"
#include "common/log.h"
#include "error_codes.h"

namespace Libraries::Sysmodule{

int PS4_SYSV_ABI sceSysmoduleGetModuleHandleInternal()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleGetModuleInfoForUnwind()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleIsCalledFromSysModule()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleIsCameraPreloaded()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleIsLoaded()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleIsLoadedInternal()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleLoadModule()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleLoadModuleByNameInternal()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleLoadModuleInternal()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleLoadModuleInternalWithArg()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleMapLibcForLibkernel()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmodulePreloadModuleForLibkernel()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleUnloadModule()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleUnloadModuleByNameInternal()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleUnloadModuleInternal()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

int PS4_SYSV_ABI sceSysmoduleUnloadModuleInternalWithArg()
{
	PRINT_UNIMPLEMENTED_FUNCTION_NAME();
	return ORBIS_OK;
}

void RegisterlibSceSysmodule(Core::Loader::SymbolsResolver * sym) {
 LIB_FUNCTION("D8cuU4d72xM", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleGetModuleHandleInternal );
 LIB_FUNCTION("4fU5yvOkVG4", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleGetModuleInfoForUnwind );
 LIB_FUNCTION("ctfO7dQ7geg", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleIsCalledFromSysModule );
 LIB_FUNCTION("no6T3EfiS3E", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleIsCameraPreloaded );
 LIB_FUNCTION("fMP5NHUOaMk", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleIsLoaded );
 LIB_FUNCTION("ynFKQ5bfGks", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleIsLoadedInternal );
 LIB_FUNCTION("g8cM39EUZ6o", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleLoadModule );
 LIB_FUNCTION("CU8m+Qs+HN4", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleLoadModuleByNameInternal );
 LIB_FUNCTION("39iV5E1HoCk", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleLoadModuleInternal );
 LIB_FUNCTION("hHrGoGoNf+s", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleLoadModuleInternalWithArg );
 LIB_FUNCTION("lZ6RvVl0vo0", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleMapLibcForLibkernel );
 LIB_FUNCTION("DOO+zuW1lrE", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmodulePreloadModuleForLibkernel );
 LIB_FUNCTION("eR2bZFAAU0Q", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleUnloadModule );
 LIB_FUNCTION("vpTHmA6Knvg", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleUnloadModuleByNameInternal );
 LIB_FUNCTION("vXZhrtJxkGc", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleUnloadModuleInternal );
 LIB_FUNCTION("aKa6YfBKZs4", "libSceSysmodule" , 1 , "libSceSysmodule", 1, 1 , sceSysmoduleUnloadModuleInternalWithArg );
};

}