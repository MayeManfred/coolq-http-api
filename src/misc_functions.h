#pragma once

#include "stdafx.h"

#include <string>

size_t curl_write_stringstream_callback(char* buf, size_t size, size_t nmemb, std::stringstream& ss);

size_t curl_write_file_callback(char* buf, size_t size, size_t nmemb, FILE* fp);

bool isnumber(const std::string& s);

std::string itos(int64_t i);

void string_replace(std::string& str, const std::string& search, const std::string& replace);

std::string get_cq_root_path();
