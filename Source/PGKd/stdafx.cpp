#include "stdafx.h"

// Fix "unresolved external symbols _vsnprintf "
#pragma comment(lib, "legacy_stdio_definitions.lib")

#ifdef _AMD64_
#pragma comment(lib, "Debuggers/lib/x64/dbgeng.lib")
#else
#pragma comment(lib, "Debuggers/lib/x86/dbgeng.lib")
#endif
