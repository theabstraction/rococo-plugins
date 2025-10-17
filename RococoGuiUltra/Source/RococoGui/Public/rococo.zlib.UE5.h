#pragma once

#ifdef _WIN32
# define DLLEXPORT_API __declspec(dllexport)
# define DLLIMPORT_API __declspec(dllimport)
#else
# define DLLEXPORT_API DLLEXPORT
# define DLLIMPORT_API DLLIMPORT
#endif


#ifndef ROCOCO_UE5_EXPORT
# ifdef ROCOCO_BUILD_IS_MONOLITHIC
#  define ROCOCO_UE5_EXPORT
#  define ROCOCO_UE5_IMPORT
# else
#  define ROCOCO_UE5_EXPORT DLLEXPORT_API
#  define ROCOCO_UE5_IMPORT DLLIMPORT_API
# endif
#endif

#define _ROCOCO_WIDECHAR_ WIDECHAR

#ifdef PLATFORM_ANDROID
# define ROCOCO_WIDECHAR_IS_CHAR_16_T
#endif

#ifdef _WIN32
# define ROCOCO_WIDECHAR_IS_WCHAR_T
#endif
