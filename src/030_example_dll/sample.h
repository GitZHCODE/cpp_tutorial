#pragma once

#include <vector>
#include <algorithm>

#ifdef _SAMPLE_EXPORT_

#define SAMPLE_API __declspec(dllexport)

#else //_SAMPLE_EXPORT_ not defined

#define SAMPLE_API __declspec(dllimport)

#endif

 SAMPLE_API void sort_vector(std::vector<int>& vec);
