#pragma once

#include "WinDef.h"

PVOID _CopyMemory(PVOID pvDestination, CONST PVOID pvSource, SIZE_T ccLength);

SIZE_T _StringLengthA(LPCSTR lpszString);
SIZE_T _StringLengthW(LPCWSTR lpszString);

PWCHAR _StringCopyA(PCHAR pcString1, PCHAR pcString2);
PWCHAR _StringCopyW(PWCHAR pcString1, PWCHAR pcString2);

PWCHAR _StringConcatW(PWCHAR pcString, PWCHAR pcString2);
PWCHAR _StringConcatA(PCHAR pcString, PCHAR pcString2);
