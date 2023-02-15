#pragma once

#ifdef BI_EXPORTS
#define BI_API __declspec(dllexport)
#else
#define BI_API __declspec(dllimport)
#endif