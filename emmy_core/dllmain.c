/*
* Copyright (c) 2019. tangzx(love.tangzx@qq.com)
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#if WIN32
#include <Windows.h>

HINSTANCE g_hInstance = NULL;

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD reason, LPVOID reserved) {
	g_hInstance = hInstance;

	if (reason == DLL_PROCESS_ATTACH) {
		// MessageBox(NULL, "Waiting to attach the debugger", NULL, MB_OK);
	}
	else if (reason == DLL_PROCESS_DETACH) {
		// Destroy();
	}

	return TRUE;
}
#endif
