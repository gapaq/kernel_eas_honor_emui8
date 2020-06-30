/* Copyright (c) 2013-2014, Hisilicon Tech. Co., Ltd. All rights reserved.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 and
* only version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
* GNU General Public License for more details.
*
*/

#ifndef __DPTX_REG_H__
#define __DPTX_REG_H__

/* Controller Version Registers */
#define DPTX_VER_NUMBER			0x00
#define DPTX_VER_100a			0x31303061

#define DPTX_VER_TYPE			0x04

#define DPTX_ID				0x08
#define DPTX_ID_DEVICE_ID               0x9001
#define DPTX_ID_VENDOR_ID		0x16c3

/* DPTXConfigurationParameter Register */
#define DPTX_CONFIG_REG1		0x100

/* CoreControl Register */
#define DPTX_CCTL			0x200
#define DPTX_SRST_CTRL			0x204

/* Video Registers */
#define DPTX_VSAMPLE_CTRL		0x300
#define DPTX_VSAMPLE_STUFF_CTRL1	0x304
#define DPTX_VSAMPLE_STUFF_CTRL2	0x308
#define DPTX_VSAMPLE_POLARITY_CTRL	0x30C
#define DPTX_VIDEO_CONFIG1		0x310
#define DPTX_VIDEO_CONFIG2		0x314
#define DPTX_VIDEO_CONFIG3		0x318
#define DPTX_VIDEO_CONFIG4		0x31c
#define DPTX_VIDEO_CONFIG5		0x320
#define DPTX_VIDEO_MSA1			0x324
#define DPTX_VIDEO_MSA2			0x328
#define DPTX_VIDEO_MSA3			0x32C
#define DPTX_VG_CONFIG1			0x3804
#define DPTX_VG_CONFIG2			0x3808
#define DPTX_VG_CONFIG3			0x380C
#define DPTX_VG_CONFIG4			0x3810
#define DPTX_VG_CONFIG5			0x3814
#define DPTX_VG_SWRST			0x3800
/* Audio Registers */
#define DPTX_AUD_CONFIG1		0x400
#define DPTX_AG_CONFIG1			0x3904
#define DPTX_AG_CONFIG2			0x3908
#define DPTX_AG_CONFIG3			0x390C
#define DPTX_AG_CONFIG4			0x3910
#define DPTX_AG_CONFIG5			0x3914
#define DPTX_AG_CONFIG6			0x3918

/* SecondaryDataPacket Registers */
#define DPTX_SDP_VERTICAL_CTRL		0x500
#define DPTX_SDP_HORIZONTAL_CTRL        0x504
#define DPTX_SDP_STATUS			0x508
#define DPTX_SDP_BANK			0x600

/* PHY Layer Control Registers */
#define DPTX_PHYIF_CTRL			0xA00
#define DPTX_PHY_TX_EQ			0xA04
#define DPTX_CUSTOMPAT0			0xA08
#define DPTX_CUSTOMPAT1			0xA0C
#define DPTX_CUSTOMPAT2			0xA10
#define DPTX_PHYREG_CMDADDR		0xC00
#define DPTX_PHYREG_DATA		0xC04
#define DPTX_TYPE_C_CTRL		0xC08

/* AUX Channel Interface Registers */
#define DPTX_AUX_CMD			0xB00
#define DPTX_AUX_STS			0xB04
#define DPTX_AUX_DATA0			0xB08
#define DPTX_AUX_DATA1			0xB0C
#define DPTX_AUX_DATA2			0xB10
#define DPTX_AUX_DATA3			0xB14

/* Interrupt Registers */
#define DPTX_ISTS			0xD00
#define DPTX_IEN			0xD04
#define DPTX_HPDSTS			0xD08
#define DPTX_HPD_IEN			0xD0C

/* HDCP Registers */
#define DPTX_HDCP_CONFIG		0xE00
#define DPTX_HDCP_API_INT_MSK		0xE10

/* RAM Registers */

#define DPTX_VG_RAM_ADDR		0x381C
#define DPTX_VG_WRT_RAM_CTR		0x3820
#define DPTX_VG_WRT_RAM_DATA		0x3824

/* WRAP Registers */
#define DPTX_WRAP_REG_OFFSET		0x12000

#ifdef CONFIG_HISI_FB_V501
#define DPTX_WRAP_REG_DPC_AUX_CTRL  0x122B8
#else
#define DPTX_WRAP_REG_DPC_AUX_CTRL  0x12298
#endif

#define DPTX_WRAP_REG_DPC_INTS	0x1210c
#define DPTX_WRAP_REG_DPC_INT_MASK	0x12110

#define DPTX_DPC_AUX_CTRL_BLOCK		BIT(0)
#define DPTX_TYPEC_AUX_VOD_TUNE_SHIFT	12
#define DPTX_TYPEC_AUX_VOD_TUNE_MASK	GENMASK(13, 12)

#define DPTX_TYPEC_INTERRUPT_STATUS		BIT(2)
#define DPTX_TYPEC_DISABLE_STATUS		BIT(1)
#define DPTX_TYPEC_DISABLE_ACK		BIT(0)

#define DPTX_VG_RAM_ADDR_START_SHIFT	12
#define DPTX_VG_RAM_ADDR_START_MASK	GENMASK(0, 12)
#define DPTX_VG_RAM_CTR_START_SHIFT	0
#define DPTX_VG_RAM_CTR_START_MASK	BIT(0)
#define DPTX_VG_WRT_RAM_DATA_SHIFT	0
#define DPTX_VG_WRT_RAM_DATA_MASK	GENMASK(0, 7)

/* Register Bitfields */
#define DPTX_ID_DEVICE_ID_SHIFT		16
#define DPTX_ID_DEVICE_ID_MASK		GENMASK(31, 16)
#define DPTX_ID_VENDOR_ID_SHIFT		0
#define DPTX_ID_VENDOR_ID_MASK		GENMASK(15, 0)

#define DPTX_CCTL_ENH_FRAME_EN		BIT(1)
#define DPTX_CCTL_FORCE_HPD			BIT(4)

#define DPTX_SRST_CTRL_CONTROLLER	BIT(0)
#define DPTX_SRST_CTRL_PHY		BIT(1)
#define DPTX_SRST_CTRL_HDCP		BIT(2)
#define DPTX_SRST_CTRL_AUDIO_SAMPLER	BIT(3)
#define DPTX_SRST_CTRL_AUX		BIT(4)
#define DPTX_SRST_VIDEO_RESET		BIT(5)
#define DPTX_SRST_CTRL_ALL (DPTX_SRST_CTRL_CONTROLLER |		\
			    DPTX_SRST_CTRL_PHY |		\
			    DPTX_SRST_CTRL_HDCP |		\
			    DPTX_SRST_CTRL_AUDIO_SAMPLER |	\
			    DPTX_SRST_CTRL_AUX)

#define DPTX_PHYIF_CTRL_TPS_SEL_SHIFT	0
#define DPTX_PHYIF_CTRL_TPS_SEL_MASK	GENMASK(3, 0)
#define DPTX_PHYIF_CTRL_TPS_NONE	0
#define DPTX_PHYIF_CTRL_TPS_1		1
#define DPTX_PHYIF_CTRL_TPS_2		2
#define DPTX_PHYIF_CTRL_TPS_3		3
#define DPTX_PHYIF_CTRL_TPS_4		4
#define DPTX_PHYIF_CTRL_TPS_SYM_ERM	5
#define DPTX_PHYIF_CTRL_TPS_PRBS7	6
#define DPTX_PHYIF_CTRL_TPS_CUSTOM80	7
#define DPTX_PHYIF_CTRL_TPS_CP2520_1	8
#define DPTX_PHYIF_CTRL_TPS_CP2520_2	9
#define DPTX_PHYIF_CTRL_RATE_SHIFT	4
#define DPTX_PHYIF_CTRL_RATE_MASK	GENMASK(5, 4)
#define DPTX_PHYIF_CTRL_LANES_SHIFT	6
#define DPTX_PHYIF_CTRL_LANES_MASK	GENMASK(7, 6)
#define DPTX_PHYIF_CTRL_RATE_RBR	0x0
#define DPTX_PHYIF_CTRL_RATE_HBR	0x1
#define DPTX_PHYIF_CTRL_RATE_HBR2	0x2
#define DPTX_PHYIF_CTRL_RATE_HBR3	0x3
#define DPTX_PHYIF_CTRL_XMIT_EN_SHIFT	8
#define DPTX_PHYIF_CTRL_XMIT_EN_MASK	GENMASK(11, 8)
#define DPTX_PHYIF_CTRL_XMIT_EN(lane)	BIT(8 + lane)
#define DPTX_PHYIF_CTRL_BUSY(lane)	BIT(12 + lane)
#define DPTX_PHYIF_CTRL_SSC_DIS		BIT(16)

#define DPTX_PHYIF_CTRL_PWRDOWN_MASK GENMASK(20, 17)              /*GA*/

#define DPTX_PHYIF_CTRL_LANE_PWRDOWN_SHIFT(lane) (17 + lane * 2)                         /*EA03*/
#define DPTX_PHYIF_CTRL_LANE_PWRDOWN_MASK(lane) GENMASK(17 + lane * 2 + 1, \
							17 + lane * 2)

#define DPTX_PHYIF_CTRL_WIDTH		BIT(25)

#define DPTX_PHY_TX_EQ_PREEMP_SHIFT(lane)	(6 * lane)
#define DPTX_PHY_TX_EQ_PREEMP_MASK(lane)	GENMASK(6 * lane + 1, 6 * lane)
#define DPTX_PHY_TX_EQ_VSWING_SHIFT(lane)	(6 * lane + 2)
#define DPTX_PHY_TX_EQ_VSWING_MASK(lane)	GENMASK(6 * lane + 3, \
							6 * lane + 2)

#define DPTX_AUX_CMD_REQ_LEN_SHIFT	0
#define DPTX_AUX_CMD_REQ_LEN_MASK	GENMASK(3, 0)
#define DPTX_AUX_CMD_I2C_ADDR_ONLY	BIT(4)
#define DPTX_AUX_CMD_ADDR_SHIFT		8
#define DPTX_AUX_CMD_ADDR_MASK		GENMASK(27, 8)
#define DPTX_AUX_CMD_TYPE_SHIFT		28
#define DPTX_AUX_CMD_TYPE_MASK		GENMASK(31, 28)
#define DPTX_AUX_CMD_TYPE_WRITE		0x0
#define DPTX_AUX_CMD_TYPE_READ		0x1
#define DPTX_AUX_CMD_TYPE_WSU		0x2
#define DPTX_AUX_CMD_TYPE_MOT		0x4
#define DPTX_AUX_CMD_TYPE_NATIVE	0x8

#define DPTX_AUX_STS_STATUS_SHIFT	4
#define DPTX_AUX_STS_STATUS_MASK	GENMASK(7, 4)
#define DPTX_AUX_STS_STATUS_ACK		0x0
#define DPTX_AUX_STS_STATUS_NACK	0x1
#define DPTX_AUX_STS_STATUS_DEFER	0x2
#define DPTX_AUX_STS_STATUS_I2C_NACK	0x4
#define DPTX_AUX_STS_STATUS_I2C_DEFER	0x8
#define DPTX_AUX_STS_AUXM_SHIFT		8
#define DPTX_AUX_STS_AUXM_MASK		GENMASK(15, 8)
#define DPTX_AUX_STS_REPLY_RECEIVED	BIT(16)
#define DPTX_AUX_STS_TIMEOUT		BIT(17)
#define DPTX_AUX_STS_REPLY_ERR		BIT(18)
#define DPTX_AUX_STS_BYTES_READ_SHIFT	19
#define DPTX_AUX_STS_BYTES_READ_MASK	GENMASK(23, 19)
#define DPTX_AUX_STS_SINK_DWA		BIT(24)

#define DPTX_ISTS_HPD			BIT(0)
#define DPTX_ISTS_AUX_REPLY		BIT(1)
#define DPTX_ISTS_HDCP			BIT(2)
#define DPTX_ISTS_AUX_CMD_INVALID	BIT(3)
#define DPTX_ISTS_SDP			BIT(4)
#define DPTX_ISTS_AUDIO_FIFO_OVERFLOW	BIT(5)
#define DPTX_ISTS_VIDEO_FIFO_OVERFLOW	BIT(6)
#define DPTX_ISTS_TYPE_C		BIT(7)
#define DPTX_ISTS_ALL_INTR	(DPTX_ISTS_HPD |			\
				 DPTX_ISTS_AUX_REPLY |			\
				 DPTX_ISTS_HDCP |			\
				 DPTX_ISTS_AUX_CMD_INVALID |		\
				 DPTX_ISTS_SDP |			\
				 DPTX_ISTS_AUDIO_FIFO_OVERFLOW |	\
				 DPTX_ISTS_VIDEO_FIFO_OVERFLOW |	\
				 DPTX_ISTS_TYPE_C)

#define DPTX_IEN_HPD			BIT(0)
#define DPTX_IEN_AUX_REPLY		BIT(1)
#define DPTX_IEN_HDCP			BIT(2)
#define DPTX_IEN_AUX_CMD_INVALID	BIT(3)
#define DPTX_IEN_SDP			BIT(4)
#define DPTX_IEN_AUDIO_FIFO_OVERFLOW	BIT(5)
#define DPTX_IEN_VIDEO_FIFO_OVERFLOW	BIT(6)
#define DPTX_IEN_TYPE_C			BIT(7)
#define DPTX_IEN_ALL_INTR	(DPTX_IEN_HPD |		\
				 DPTX_IEN_AUX_REPLY |		\
				 DPTX_IEN_HDCP |		\
				 DPTX_IEN_AUX_CMD_INVALID |	\
				 DPTX_IEN_SDP |			\
				 DPTX_IEN_TYPE_C)
				 /*
				 DPTX_IEN_AUDIO_FIFO_OVERFLOW |\
				 DPTX_IEN_VIDEO_FIFO_OVERFLOW | \
				 */

#define DPTX_HPDSTS_IRQ			BIT(0)
#define DPTX_HPDSTS_HOT_PLUG		BIT(1)
#define DPTX_HPDSTS_HOT_UNPLUG		BIT(2)

#define DPTX_HPDSTS_STATUS_GA			BIT(8)     //GA
#define DPTX_HPDSTS_STATUS_EA03		BIT(3)            //EA03

#define DPTX_HPDSTS_STATE_SHIFT		4
#define DPTX_HPDSTS_STATE_MASK		GENMASK(6, 4)
#define DPTX_HPDSTS_TIMER_SHIFT		16
#define DPTX_HPDSTS_TIMER_MASK		GENMASK(31, 16)

#define DPTX_HPD_IEN_IRQ_EN		DPTX_HPDSTS_IRQ
#define DPTX_HPD_IEN_HOT_PLUG_EN	DPTX_HPDSTS_HOT_PLUG
#define DPTX_HPD_IEN_HOT_UNPLUG_EN	DPTX_HPDSTS_HOT_UNPLUG

#define DPTX_VSAMPLE_CTRL_STREAM_EN	BIT(5)

#define DPTX_AG_CONFIG1_WORD_WIDTH_SHIFT		6
#define DPTX_AG_CONFIG1_WORD_WIDTH_MASK			GENMASK(9, 6)
#define DPTX_AG_CONFIG1_USE_LUT_SHIFT			14
#define DPTX_AG_CONFIG1_USE_LUT_MASK			BIT(14)
#define DPTX_AG_CONFIG3_CH_NUMCL0_SHIFT			24
#define DPTX_AG_CONFIG3_CH_NUMCL0_MASK			GENMASK(27, 24)
#define DPTX_AG_CONFIG3_CH_NUMCR0_SHIFT			28
#define DPTX_AG_CONFIG3_CH_NUMCR0_MASK			GENMASK(31, 28)
#define DPTX_AG_CONFIG4_SAMP_FREQ_SHIFT			0
#define DPTX_AG_CONFIG4_SAMP_FREQ_MASK			GENMASK(3, 0)
#define DPTX_AG_CONFIG4_WORD_LENGTH_SHIFT		8
#define DPTX_AG_CONFIG4_WORD_LENGTH_MASK		GENMASK(11, 8)
#define DPTX_AG_CONFIG4_ORIG_SAMP_FREQ_SHIFT		12
#define DPTX_AG_CONFIG4_ORIG_SAMP_FREQ_MASK		GENMASK(15, 12)
#define DPTX_AUD_CONFIG1_INF_TYPE_SHIFT			0
#define DPTX_AUD_CONFIG1_INF_TYPE_MASK			BIT(0)
#define DPTX_AUD_CONFIG1_NCH_SHIFT			12
#define DPTX_AUD_CONFIG1_NCH_MASK			GENMASK(14, 12)
#define DPTX_AUD_CONFIG1_DATA_WIDTH_SHIFT		5
#define DPTX_AUD_CONFIG1_DATA_WIDTH_MASK		GENMASK(9, 5)
#define DPTX_AUD_CONFIG1_DATA_EN_IN_SHIFT		1
#define DPTX_AUD_CONFIG1_DATA_EN_IN_MASK		GENMASK(4, 1)
#define DPTX_AUD_CONFIG1_ATS_VER_SHFIT			24
#define DPTX_AUD_CONFIG1_ATS_VER_MASK			GENMASK(29, 24)

#define DPTX_VSAMPLE_CTRL_VMAP_BPC_SHIFT                16
#define DPTX_VSAMPLE_CTRL_VMAP_BPC_MASK                 GENMASK(20, 16)
#define DPTX_VIDEO_VMSA2_BPC_SHIFT                      29
#define DPTX_VIDEO_VMSA2_BPC_MASK                       GENMASK(31, 29)
#define DPTX_VIDEO_VMSA2_COL_SHIFT                      25
#define DPTX_VIDEO_VMSA2_COL_MASK                       GENMASK(28, 25)
#define DPTX_VIDEO_VMSA3_PIX_ENC_SHIFT                  31
#define DPTX_VIDEO_VMSA3_PIX_ENC_MASK                   GENMASK(31, 30)
#define DPTX_POL_CTRL_V_SYNC_POL_EN			BIT(0)
#define DPTX_POL_CTRL_H_SYNC_POL_EN			BIT(1)
#define DPTX_POL_CTRL_DE_IN_POL_EN			BIT(2)
#define DPTX_VIDEO_CONFIG1_IN_OSC_EN			BIT(0)
#define DPTX_VIDEO_CONFIG1_O_IP_EN			BIT(1)
#define DPTX_VIDEO_H_BLANK_SHIFT			2
#define DPTX_VIDEO_H_ACTIVE_SHIFT			16
#define DPTX_VIDEO_V_BLANK_SHIFT			16
#define DPTX_VIDEO_V_ACTIVE_SHIFT			0
#define DPTX_VIDEO_H_FRONT_PORCH			0
#define DPTX_VIDEO_H_SYNC_WIDTH				16
#define DPTX_VIDEO_V_FRONT_PORCH			0
#define DPTX_VIDEO_V_SYNC_WIDTH				16
#define DPTX_VIDEO_MSA1_H_START_SHIFT			0
#define DPTX_VIDEO_MSA1_V_START_SHIFT			16
#define DPTX_VIDEO_CONFIG5_TU_SHIFT			0
#define DPTX_VIDEO_CONFIG5_TU_MASK			GENMASK(5, 0)
#define DPTX_VIDEO_CONFIG5_TU_FRAC_SHIFT                16
#define DPTX_VIDEO_CONFIG5_TU_FRAC_MASK                 GENMASK(19, 16)
#define DPTX_VIDEO_CONFIG5_INIT_THRESHOLD_SHIFT		7
#define DPTX_VIDEO_CONFIG5_INIT_THRESHOLD_MASK		GENMASK(12, 7)

#define DPTX_VG_CONFIG1_BPC_SHIFT			12
#define DPTX_VG_CONFIG1_BPC_MASK			GENMASK(14, 12)
#define DPTX_VG_CONFIG1_PATTERN_SHIFT			17
#define DPTX_VG_CONFIG1_PATTERN_MASK			GENMASK(18, 17)
#define DPTX_VG_CONFIG1_ODE_POL_EN			BIT(0)
#define DPTX_VG_CONFIG1_OH_SYNC_POL_EN			BIT(1)
#define DPTX_VG_CONFIG1_OV_SYNC_POL_EN			BIT(2)
#define DPTX_VG_CONFIG1_OIP_EN				BIT(3)
#define DPTX_VG_CONFIG1_BLANK_IN_OSC_EN			BIT(5)
#define DPTX_VG_CONFIG1_YCC_422_EN			BIT(6)
#define DPTX_VG_CONFIG1_YCC_PATTERN_GEN_EN		BIT(7)
#define DPTX_VG_CONFIG1_YCC_420_EN			BIT(15)
#define DPTX_VG_CONFIG1_PIXEL_REP_SHIFT			12
#define DPTX_VG_CONFIG2_H_ACTIVE_SHIFT			0
#define DPTX_VG_CONFIG2_H_BLANK_SHIFT			16

#define DPTX_EN_AUDIO_TIMESTAMP_SDP			BIT(0)
#define DPTX_EN_AUDIO_STREAM_SDP			BIT(1)
#define DPTX_EN_AUDIO_INFOFRAME_SDP			BIT(2)
#define DPTX_EN_AUDIO_CH_1				1
#define DPTX_EN_AUDIO_CH_2				1
#define DPTX_EN_AUDIO_CH_3                              3
#define DPTX_EN_AUDIO_CH_4				9
#define DPTX_EN_AUDIO_CH_5				7
#define DPTX_EN_AUDIO_CH_6				7
#define DPTX_EN_AUDIO_CH_7				0xF
#define DPTX_EN_AUDIO_CH_8				0xF
#define DPTX_AUDIO_MUTE					BIT(15)

#define DPTX_HDCP_REG_RMLCTL				0x3614
#define DPTX_HDCP_CFG                                   0xE00
#define DPTX_HDCP_REG_RMLSTS                            0x3618
#define DPTX_HDCP_REG_DPK_CRC				0x3630
#define DPTX_HDCP_REG_DPK0				0x3620
#define DPTX_HDCP_REG_DPK1				0x3624
#define DPTX_HDCP_REG_SEED				0x361C
#define DPTX_HDCP_INT_STS				0xE0C
#define DPTX_HDCP_INT_CLR				0xE08
#define DPTX_HDCP_OBS					0xE04

#define DPTX_HDCP_CFG_DPCD_PLUS_SHIFT			7
#define DPTX_HDCP_CFG_DPCD_PLUS_MASK			BIT(7)
#define DPTX_HDCP_KSV_ACCESS_INT			BIT(0)
#define DPTX_HDCP_AUX_RESP_TIMEOUT			BIT(3)
#define DPTX_HDCP_KSV_SHA1				BIT(5)
#define DPTX_HDCP_FAILED				BIT(6)
#define DPTX_HDCP_ENGAGED				BIT(7)
#define DPTX_HDCP22_GPIOINT				BIT(8)
#define DPTX_REVOC_LIST_MASK				GENMASK(31, 24)
#define DPTX_REVOC_SIZE_SHIFT				23
#define DPTX_REVOC_SIZE_MASK				GENMASK(23, 8)
#define DPTX_ODPK_DECRYPT_ENABLE_SHIFT			0
#define DPTX_ODPK_DECRYPT_ENABLE_MASK			BIT(0)
#define DPTX_IDPK_DATA_INDEX_SHIFT			0
#define DPTX_IDPK_DATA_INDEX_MASK			GENMASK(5, 0)
#define DPTX_IDPK_WR_OK_STS_SHIFT			6
#define DPTX_IDPK_WR_OK_STS_MASK			BIT(6)
#define DPTX_CFG_EN_HDCP13				BIT(2)
#define DPTX_CFG_CP_IRQ					BIT(6)
#define DPTX_CFG_EN_HDCP				BIT(1)

#define DPTX_HDCP22_BOOTED				BIT(23)
#define DPTX_HDCP22_STATE				(BIT(24)|BIT(25)|BIT(26))
#define DPTX_HDCP22_CAP_CHECK_COMPLETE	BIT(27)
#define DPTX_HDCP22_CAPABLE_SINK		BIT(28)
#define DPTX_HDCP22_AUTH_SUCCESS		BIT(29)
#define DPTX_HDCP22_AUTH_FAILED			BIT(30)
#define DPTX_HDCP22_RE_AUTH_REQ			BIT(31)

#endif
