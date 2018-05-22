/*
 ****************************************************************************************
 *
 *               SaveKeyTaHash.h
 *
 * Filename      : SaveKeyTaHash.h
 * Author        : Shuai Fengyun
 * Mail          : shuaifengyun@126.com
 * Create Time   : Wed 04 Jan 2017 03:16:09 PM CST
 ****************************************************************************************
 */

#ifndef MOUDLE_OPTEE_SAVE_KEY_HASH_H_
#define MOUDLE_OPTEE_SAVE_KEY_HASH_H_




/*
 *******************************************************************************
 *                                INCLUDE FILES
 *******************************************************************************
*/
#include "SaveKeyTaType.h"
#include "SaveKeyTaDebug.h"




/*
 *******************************************************************************
 *                  MACRO DEFINITION USED ONLY BY THIS MODULE
 *******************************************************************************
*/





/*
 *******************************************************************************
 *                STRUCTRUE DEFINITION USED ONLY BY THIS MODULE
 *******************************************************************************
*/


#ifndef MOUDLE_OPTEE_SAVE_KEY_HASH_C_


/*
 *******************************************************************************
 *                      VARIABLES SUPPLIED BY THIS MODULE
 *******************************************************************************
*/





/*
 *******************************************************************************
 *                      FUNCTIONS SUPPLIED BY THIS MODULE
 *******************************************************************************
*/
extern int g_SaveKeyTaHash_sha(CHAR* input, UINT32 inLen, CHAR* output, UINT32* pOutLen);




















#endif

#endif  /* MOUDLE_NAME_H*/
