

#ifndef __OAL_LINUX_CFG80211_H__
#define __OAL_LINUX_CFG80211_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include <net/genetlink.h>
#include <net/cfg80211.h>
#include <linux/nl80211.h>

/*****************************************************************************
  2 宏定义
*****************************************************************************/
/* hostapd和supplicant事件上报需要用到宏 */
#define OAL_NLMSG_GOODSIZE      NLMSG_GOODSIZE
#define OAL_ETH_ALEN_SIZE            ETH_ALEN
#define OAL_NLMSG_DEFAULT_SIZE  NLMSG_DEFAULT_SIZE
#define OAL_IEEE80211_MIN_ACTION_SIZE IEEE80211_MIN_ACTION_SIZE

#define OAL_NLA_PUT_U32(skb, attrtype, value)      NLA_PUT_U32(skb, attrtype, value)
#define OAL_NLA_PUT(skb, attrtype, attrlen, data)  NLA_PUT(skb, attrtype, attrlen, data)
#define OAL_NLA_PUT_U16(skb, attrtype, value)      NLA_PUT_U16(skb, attrtype, value)
#define OAL_NLA_PUT_U8(skb, attrtype, value)       NLA_PUT_U8(skb, attrtype, value)
#define OAL_NLA_PUT_FLAG(skb, attrtype)            NLA_PUT_FLAG(skb, attrtype)

typedef enum  rate_info_flags  oal_rate_info_flags;

/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
extern void cfg80211_drv_mss_result(struct net_device *dev, gfp_t gfp, const u8 *buf, size_t len);
#ifdef _PRE_WLAN_FEATURE_TAS_ANT_SWITCH
extern void cfg80211_drv_tas_result(struct net_device *dev, gfp_t gfp, const u8 *buf, size_t len);
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of oal_cfg80211.h */
