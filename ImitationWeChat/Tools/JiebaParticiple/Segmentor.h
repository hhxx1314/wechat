//
//  Segmentor.h
//  iosjieba
//
//  Created by yanyiwu on 14/12/24.
//  Copyright (c) 2014年 yanyiwu. All rights reserved.
//

#ifndef __iosjieba__Segmentor__
#define __iosjieba__Segmentor__

#include <stdio.h>

#include "CppJieba/MixSegment.hpp"
#include <string>
#include <vector>

extern CppJieba::MixSegment * globalSegmentor;

void JiebaInit(const std::string& dictPath, const std::string& hmmPath, const std::string& userDictPath);

void JiebaCut(const std::string& sentence, std::vector<std::string>& words);


#endif /* defined(__iosjieba__Segmentor__) */


////使用示例
//const char* sentence = [textView.text UTF8String];
//std::vector<std::string> words;
//JiebaCut(sentence, words);
//std::string result;
//result << words;
//
//NSString *newtext =  [NSString stringWithUTF8String:result.c_str()] ;