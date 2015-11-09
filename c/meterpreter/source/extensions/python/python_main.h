/*!
 * @file python_main.h
 * @brief Entry point and intialisation declarations for the python extension.
 */
#ifndef _METERPRETER_SOURCE_EXTENSION_PYTHON_PYTHON_MAIN_H
#define _METERPRETER_SOURCE_EXTENSION_PYTHON_PYTHON_MAIN_H

#include "../../common/common.h"


extern Remote* gRemote;

#define TLV_TYPE_EXTENSION_PYTHON	0

#define TLV_TYPE_EXTENSION_PYTHON_STDOUT              MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_PYTHON, TLV_EXTENSIONS + 1)
#define TLV_TYPE_EXTENSION_PYTHON_STDERR              MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_PYTHON, TLV_EXTENSIONS + 2)
#define TLV_TYPE_EXTENSION_PYTHON_CODE                MAKE_CUSTOM_TLV(TLV_META_TYPE_RAW,       TLV_TYPE_EXTENSION_PYTHON, TLV_EXTENSIONS + 3)
#define TLV_TYPE_EXTENSION_PYTHON_CODE_LEN            MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_PYTHON, TLV_EXTENSIONS + 4)
#define TLV_TYPE_EXTENSION_PYTHON_CODE_TYPE           MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_PYTHON, TLV_EXTENSIONS + 5)
#define TLV_TYPE_EXTENSION_PYTHON_NAME                MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_PYTHON, TLV_EXTENSIONS + 6)
#define TLV_TYPE_EXTENSION_PYTHON_RESULT_VAR          MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_PYTHON, TLV_EXTENSIONS + 7)
#define TLV_TYPE_EXTENSION_PYTHON_RESULT              MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_PYTHON, TLV_EXTENSIONS + 8)

#endif