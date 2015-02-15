#ifndef __IOF_EXPORT_H__
#define __IOF_EXPORT_H__
/************************************************************
 *IOF EXPORT FUNCS FOR LIB
 * 挂接钩子的初始化函数
 ************************************************************
 ***********************************************************/

/* product 相关的宏定义 */
#define WIFI_HARD_VERSION "00x86-os"
#define WIFI_HARDVER    "00x86-os"
#define WIFI_SOFTVAR    "04000001"

//product key len is 32 byte
//#define GAGENT_PRODUCT_KEY  "6f3074fe43894547a4f1314bd7e3ae0b"
#ifndef GAGENT_PRODUCT_KEY
#error "product key hasn't be defined!please define product key!!!"
#endif

extern void IOF_Config_hook_init(void);
extern void IOF_General_Hook_Init(void);

#endif  /* __IOF_EXPORT_H__ */
