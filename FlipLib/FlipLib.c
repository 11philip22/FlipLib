#include "FlipLib.h"

PVOID _CopyMemory(PVOID pvDestination, CONST PVOID pvSource, SIZE_T ccLength) {
	PBYTE D = (PBYTE)pvDestination;
	PBYTE S = (PBYTE)pvSource;

	while (ccLength--)
		*D++ = *S++;

	return pvDestination;
}

SIZE_T _StringLengthA(LPCSTR lpszString) {
	LPCSTR lpszString2;

	for (lpszString2 = lpszString; *lpszString2; ++lpszString2);

	return (lpszString2 - lpszString);
}

SIZE_T _StringLengthW(LPCWSTR lpszString) {
	LPCWSTR lpszString2;

	for (lpszString2 = lpszString; *lpszString2; ++lpszString2);

	return (lpszString2 - lpszString);
}

PWCHAR _StringCopyA(PCHAR pcString1, PCHAR pcString2) {
	PCHAR p = pcString1;

	while ((*p++ = *pcString2++) != 0);

	return pcString1;
}

PWCHAR _StringCopyW(PWCHAR pcString1, PWCHAR pcString2) {
	PWCHAR p = pcString1;

	while ((*p++ = *pcString2++) != 0);

	return pcString1;
}

PWCHAR _StringConcatW(PWCHAR pcString, PWCHAR pcString2) {
	StringCopyW(&pcString[StringLength(pcString)], pcString2);

	return pcString;
}

PWCHAR _StringConcatA(PCHAR pcString, PCHAR pcString2) {
	StringCopyA(&pcString[StringLengthA(pcString)], pcString2);

	return pcString;
}
