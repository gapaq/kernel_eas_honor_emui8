#ifndef _EMCOM_NETLINK_H
#define _EMCOM_NETLINK_H


#include <net/sock.h>
#include <linux/netlink.h>


#define EMCOM_SOCKET_BASE_EVENT 6
#define EMCOM_SOCKET_INFO_EVENT 7

#define EMCOM_NETLINK_INIT 1
#define EMCOM_NETLINK_EXIT 0

#define EMCOM_SUB_MOD_COMMON        (0)
#define EMCOM_SUB_MOD_XENIGE        (1)
#define EMCOM_SUB_MOD_SMARTCARE     (2)
#define EMCOM_SUB_MOD_NWEVAL       (4)
#define EMCOM_SUB_MOD_MAX           (5)

#define EMCOM_SUB_MOD_MASK          (0xFF00)
#define EMCOM_SUB_EVT_MASK          (0x00FF)

#define EMCOM_SUB_MOD_COMMON_BASE        EMCOM_SUB_MOD_COMMON<<8
#define EMCOM_SUB_MOD_XENIGE_BASE        EMCOM_SUB_MOD_XENIGE<<8
#define EMCOM_SUB_MOD_SMARTCARE_BASE     EMCOM_SUB_MOD_SMARTCARE<<8
#define EMCOM_SUB_MOD_NWEVAL_BASE       EMCOM_SUB_MOD_NWEVAL<<8

typedef enum Monk_KnlMsgType {
    NETLINK_EMCOM_DK_BASE = EMCOM_SUB_MOD_COMMON_BASE | NLMSG_MIN_TYPE,
    NETLINK_EMCOM_DK_REG,    /* send from apk to register the PID for netlink kernel socket */
    NETLINK_EMCOM_DK_UNREG,      /* when apk exit send this type message to unregister */
    NETLINK_EMCOM_DK_XENIGE_BASE = EMCOM_SUB_MOD_XENIGE_BASE,
    NETLINK_EMCOM_DK_START_ACC,
    NETLINK_EMCOM_DK_STOP_ACC,
    NETLINK_EMCOM_DK_CLEAR,
    NETLINK_EMCOM_DK_RRC_KEEP,
    NETLINK_EMCOM_DK_KEY_PSINFO,
    NETLINK_EMCOM_DK_SPEED_CTRL,
    NETLINK_EMCOM_DK_START_UDP_RETRAN,
    NETLINK_EMCOM_DK_STOP_UDP_RETRAN,
    NETLINK_EMCOM_DK_CONFIG_MPIP,    /* send from xengine to register the UIDs binding MPIP for netlink kernel socket  */
    NETLINK_EMCOM_DK_START_MPIP,    /* send from xengine to start the binding MPIP when apks start to be used  */
    NETLINK_EMCOM_DK_STOP_MPIP,    /* send from xengine to stop the binding MPIP  */
    NETLINK_EMCOM_DK_CLEAR_MPIP,
    NETLINK_EMCOM_DK_START_FAST_SYN,
    NETLINK_EMCOM_DK_STOP_FAST_SYN,
    NETLINK_EMCOM_DK_START_SMARTMP,
    NETLINK_EMCOM_DK_STOP_SMARTMP,
    NETLINK_EMCOM_DK_SMARTCARE_BASE = EMCOM_SUB_MOD_SMARTCARE_BASE,
    NETLINK_EMCOM_DK_NWEVAL_BASE = EMCOM_SUB_MOD_NWEVAL_BASE,
    NETLINK_EMCOM_DK_NWEVAL_START_RTT_REPORT,    /* to start the rtt report process for evaluation */
    NETLINK_EMCOM_DK_NWEVAL_STOP_RTT_REPORT,    /* to stop the rtt report process for evaluation */
    NETLINK_EMCOM_DK_NWEVAL_TRIGGER_EVALUATION,    /* to trigger the rtt evaluation once */
} EMCOM_MSG_TYPE_EN;


typedef enum Monk_UNSOL_KnlMsgType {
    NETLINK_EMCOM_KD_COMM_BASE = EMCOM_SUB_MOD_COMMON_BASE | NLMSG_MIN_TYPE,
    NETLINK_EMCOM_KD_XENIGE_BASE = EMCOM_SUB_MOD_XENIGE_BASE,
    NETLINK_EMCOM_KD_XENIGE_DEV_FAIL,    /* send from kernel to xengine to report the network device of MPIP failed  */
    NETLINK_EMCOM_KD_SMARTCARE_BASE = EMCOM_SUB_MOD_SMARTCARE_BASE,
    NETLINK_EMCOM_KD_SMARTCARE_NM,
    NETLINK_EMCOM_KD_NWEVAL_BASE = EMCOM_SUB_MOD_NWEVAL_BASE,
    NETLINK_EMCOM_KD_NWEVAL_RTT_REPORT,
    NETLINK_EMCOM_KD_NWEVAL_RTT_READY,
} EMCOM_UNSOL_MSG_TYPE_EN;


void emcom_send_msg2daemon(int cmd, const void*data, int len);


#endif /*_EMCOM_NETLINK_H*/
