#ifndef NULL_H_62B23520_7C8E_11DE_8A39_0800200C9A66
#define NULL_H_62B23520_7C8E_11DE_8A39_0800200C9A66

#if defined(_MSC_VER) ||                                            \
    (defined(__GNUC__) && (__GNUC__ == 3 && __GNUC_MINOR__ >= 4) || \
     (__GNUC__ >= 4))  // GCC supports "pragma once" correctly since 3.4
#pragma once
#endif

#include "yaml-cpp-0.6/dll.h"
#include <string>

namespace YAML_0_6 {
class Node;

struct YAML_0_6_CPP_API _Null {};
inline bool operator==(const _Null&, const _Null&) { return true; }
inline bool operator!=(const _Null&, const _Null&) { return false; }

YAML_0_6_CPP_API bool IsNull(const Node& node);  // old API only
YAML_0_6_CPP_API bool IsNullString(const std::string& str);

extern YAML_0_6_CPP_API _Null Null;
}

#endif  // NULL_H_62B23520_7C8E_11DE_8A39_0800200C9A66