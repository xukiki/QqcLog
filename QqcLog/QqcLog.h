//
//  QqcLog.h
//  QqcFramework
//
//  Created by mahailin on 15/8/9.
//  Copyright (c) 2015年 admin. All rights reserved.
//

#ifndef QqcFramework_QqcLog_h
#define QqcFramework_QqcLog_h

#ifdef DEBUG

#define QqcDebugLog(log, ...)   NSLog((@"%s [Line %d]" log), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#define QqcWarnLog(log, ...)  NSLog((@"⚠️ %s [Line %d]" log), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#define QqcErrorLog(log, ...)  NSLog((@"❌ %s [Line %d] " log), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#else

#define QqcDebugLog(log, ...)  ((void)0)
#define QqcWarnLog(log, ...)  ((void)0)
#define QqcErrorLog(log, ...)  ((void)0)

#endif

/**
 *  处理arc环境下调用performSelector:的警告
 *
 */
#define SUPPRESS_PERFORM_SELECTOR_LEAK_WARNING(code)                        \
_Pragma("clang diagnostic push")                                            \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"")         \
code;                                                                       \
_Pragma("clang diagnostic pop")                                             \
((void)0)

#endif

