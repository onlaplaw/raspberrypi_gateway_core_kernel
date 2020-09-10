// SPDX-License-Identifier: (GPL-2.0 OR MIT)
/*
 * Copyright (c) 2018 Synopsys, Inc. and/or its affiliates.
 * stmmac XGMAC definitions.
 */

#ifndef __STMMAC_DWXGMAC2_H__
#define __STMMAC_DWXGMAC2_H__

#include "common.h"

/* Misc */
#define XGMAC_JUMBO_LEN			16368

/* MAC Registers */
#define XGMAC_TX_CONFIG			0x00000000
#define XGMAC_CONFIG_SS_OFF		29
#define XGMAC_CONFIG_SS_MASK		GENMASK(30, 29)
#define XGMAC_CONFIG_SS_10000		(0x0 << XGMAC_CONFIG_SS_OFF)
#define XGMAC_CONFIG_SS_2500		(0x2 << XGMAC_CONFIG_SS_OFF)
#define XGMAC_CONFIG_SS_1000		(0x3 << XGMAC_CONFIG_SS_OFF)
#define XGMAC_CONFIG_SARC		GENMASK(22, 20)
#define XGMAC_CONFIG_SARC_SHIFT		20
#define XGMAC_CONFIG_JD			BIT(16)
#define XGMAC_CONFIG_TE			BIT(0)
#define XGMAC_CORE_INIT_TX		(XGMAC_CONFIG_JD)
#define XGMAC_RX_CONFIG			0x00000004
#define XGMAC_CONFIG_ARPEN		BIT(31)
#define XGMAC_CONFIG_GPSL		GENMASK(29, 16)
#define XGMAC_CONFIG_GPSL_SHIFT		16
#define XGMAC_CONFIG_S2KP		BIT(11)
#define XGMAC_CONFIG_IPC		BIT(9)
#define XGMAC_CONFIG_JE			BIT(8)
#define XGMAC_CONFIG_WD			BIT(7)
#define XGMAC_CONFIG_GPSLCE		BIT(6)
#define XGMAC_CONFIG_CST		BIT(2)
#define XGMAC_CONFIG_ACS		BIT(1)
#define XGMAC_CONFIG_RE			BIT(0)
#define XGMAC_CORE_INIT_RX		0
#define XGMAC_PACKET_FILTER		0x00000008
#define XGMAC_FILTER_RA			BIT(31)
#define XGMAC_FILTER_PM			BIT(4)
#define XGMAC_FILTER_HMC		BIT(2)
#define XGMAC_FILTER_PR			BIT(0)
#define XGMAC_HASH_TABLE(x)		(0x00000010 + (x) * 4)
#define XGMAC_RXQ_CTRL0			0x000000a0
#define XGMAC_RXQEN(x)			GENMASK((x) * 2 + 1, (x) * 2)
#define XGMAC_RXQEN_SHIFT(x)		((x) * 2)
#define XGMAC_RXQ_CTRL2			0x000000a8
#define XGMAC_RXQ_CTRL3			0x000000ac
#define XGMAC_PSRQ(x)			GENMASK((x) * 8 + 7, (x) * 8)
#define XGMAC_PSRQ_SHIFT(x)		((x) * 8)
#define XGMAC_INT_STATUS		0x000000b0
#define XGMAC_PMTIS			BIT(4)
#define XGMAC_INT_EN			0x000000b4
#define XGMAC_TSIE			BIT(12)
#define XGMAC_LPIIE			BIT(5)
#define XGMAC_PMTIE			BIT(4)
#define XGMAC_INT_DEFAULT_EN		(XGMAC_LPIIE | XGMAC_PMTIE | XGMAC_TSIE)
#define XGMAC_Qx_TX_FLOW_CTRL(x)	(0x00000070 + (x) * 4)
#define XGMAC_PT			GENMASK(31, 16)
#define XGMAC_PT_SHIFT			16
#define XGMAC_TFE			BIT(1)
#define XGMAC_RX_FLOW_CTRL		0x00000090
#define XGMAC_RFE			BIT(0)
#define XGMAC_PMT			0x000000c0
#define XGMAC_GLBLUCAST			BIT(9)
#define XGMAC_RWKPKTEN			BIT(2)
#define XGMAC_MGKPKTEN			BIT(1)
#define XGMAC_PWRDWN			BIT(0)
#define XGMAC_HW_FEATURE0		0x0000011c
#define XGMAC_HWFEAT_SAVLANINS		BIT(27)
#define XGMAC_HWFEAT_RXCOESEL		BIT(16)
#define XGMAC_HWFEAT_TXCOESEL		BIT(14)
#define XGMAC_HWFEAT_TSSEL		BIT(12)
#define XGMAC_HWFEAT_AVSEL		BIT(11)
#define XGMAC_HWFEAT_RAVSEL		BIT(10)
#define XGMAC_HWFEAT_ARPOFFSEL		BIT(9)
#define XGMAC_HWFEAT_MGKSEL		BIT(7)
#define XGMAC_HWFEAT_RWKSEL		BIT(6)
#define XGMAC_HWFEAT_GMIISEL		BIT(1)
#define XGMAC_HW_FEATURE1		0x00000120
#define XGMAC_HWFEAT_TSOEN		BIT(18)
#define XGMAC_HWFEAT_TXFIFOSIZE		GENMASK(10, 6)
#define XGMAC_HWFEAT_RXFIFOSIZE		GENMASK(4, 0)
#define XGMAC_HW_FEATURE2		0x00000124
#define XGMAC_HWFEAT_PPSOUTNUM		GENMASK(26, 24)
#define XGMAC_HWFEAT_TXCHCNT		GENMASK(21, 18)
#define XGMAC_HWFEAT_RXCHCNT		GENMASK(15, 12)
#define XGMAC_HWFEAT_TXQCNT		GENMASK(9, 6)
#define XGMAC_HWFEAT_RXQCNT		GENMASK(3, 0)
#define XGMAC_MDIO_ADDR			0x00000200
#define XGMAC_MDIO_DATA			0x00000204
#define XGMAC_MDIO_C22P			0x00000220
#define XGMAC_ADDR0_HIGH		0x00000300
#define XGMAC_AE			BIT(31)
#define XGMAC_DCS			GENMASK(19, 16)
#define XGMAC_DCS_SHIFT			16
#define XGMAC_ADDR0_LOW			0x00000304
#define XGMAC_ARP_ADDR			0x00000c10
#define XGMAC_TIMESTAMP_STATUS		0x00000d20
#define XGMAC_TXTSC			BIT(15)
#define XGMAC_TXTIMESTAMP_NSEC		0x00000d30
#define XGMAC_TXTSSTSLO			GENMASK(30, 0)
#define XGMAC_TXTIMESTAMP_SEC		0x00000d34

/* MTL Registers */
#define XGMAC_MTL_OPMODE		0x00001000
#define XGMAC_ETSALG			GENMASK(6, 5)
#define XGMAC_WRR			(0x0 << 5)
#define XGMAC_WFQ			(0x1 << 5)
#define XGMAC_DWRR			(0x2 << 5)
#define XGMAC_RAA			BIT(2)
#define XGMAC_MTL_INT_STATUS		0x00001020
#define XGMAC_MTL_RXQ_DMA_MAP0		0x00001030
#define XGMAC_MTL_RXQ_DMA_MAP1		0x00001034
#define XGMAC_QxMDMACH(x)		GENMASK((x) * 8 + 3, (x) * 8)
#define XGMAC_QxMDMACH_SHIFT(x)		((x) * 8)
#define XGMAC_MTL_TXQ_OPMODE(x)		(0x00001100 + (0x80 * (x)))
#define XGMAC_TQS			GENMASK(25, 16)
#define XGMAC_TQS_SHIFT			16
#define XGMAC_TTC			GENMASK(6, 4)
#define XGMAC_TTC_SHIFT			4
#define XGMAC_TXQEN			GENMASK(3, 2)
#define XGMAC_TXQEN_SHIFT		2
#define XGMAC_TSF			BIT(1)
#define XGMAC_MTL_RXQ_OPMODE(x)		(0x00001140 + (0x80 * (x)))
#define XGMAC_RQS			GENMASK(25, 16)
#define XGMAC_RQS_SHIFT			16
#define XGMAC_EHFC			BIT(7)
#define XGMAC_RSF			BIT(5)
#define XGMAC_RTC			GENMASK(1, 0)
#define XGMAC_RTC_SHIFT			0
#define XGMAC_MTL_QINTEN(x)		(0x00001170 + (0x80 * (x)))
#define XGMAC_RXOIE			BIT(16)
#define XGMAC_MTL_QINT_STATUS(x)	(0x00001174 + (0x80 * (x)))
#define XGMAC_RXOVFIS			BIT(16)
#define XGMAC_ABPSIS			BIT(1)
#define XGMAC_TXUNFIS			BIT(0)

/* DMA Registers */
#define XGMAC_DMA_MODE			0x00003000
#define XGMAC_SWR			BIT(0)
#define XGMAC_DMA_SYSBUS_MODE		0x00003004
#define XGMAC_WR_OSR_LMT		GENMASK(29, 24)
#define XGMAC_WR_OSR_LMT_SHIFT		24
#define XGMAC_RD_OSR_LMT		GENMASK(21, 16)
#define XGMAC_RD_OSR_LMT_SHIFT		16
#define XGMAC_EN_LPI			BIT(15)
#define XGMAC_LPI_XIT_PKT		BIT(14)
#define XGMAC_AAL			BIT(12)
#define XGMAC_BLEN			GENMASK(7, 1)
#define XGMAC_BLEN256			BIT(7)
#define XGMAC_BLEN128			BIT(6)
#define XGMAC_BLEN64			BIT(5)
#define XGMAC_BLEN32			BIT(4)
#define XGMAC_BLEN16			BIT(3)
#define XGMAC_BLEN8			BIT(2)
#define XGMAC_BLEN4			BIT(1)
#define XGMAC_UNDEF			BIT(0)
#define XGMAC_DMA_CH_CONTROL(x)		(0x00003100 + (0x80 * (x)))
#define XGMAC_PBLx8			BIT(16)
#define XGMAC_DMA_CH_TX_CONTROL(x)	(0x00003104 + (0x80 * (x)))
#define XGMAC_TxPBL			GENMASK(21, 16)
#define XGMAC_TxPBL_SHIFT		16
#define XGMAC_TSE			BIT(12)
#define XGMAC_OSP			BIT(4)
#define XGMAC_TXST			BIT(0)
#define XGMAC_DMA_CH_RX_CONTROL(x)	(0x00003108 + (0x80 * (x)))
#define XGMAC_RxPBL			GENMASK(21, 16)
#define XGMAC_RxPBL_SHIFT		16
#define XGMAC_RXST			BIT(0)
#define XGMAC_DMA_CH_TxDESC_LADDR(x)	(0x00003114 + (0x80 * (x)))
#define XGMAC_DMA_CH_RxDESC_LADDR(x)	(0x0000311c + (0x80 * (x)))
#define XGMAC_DMA_CH_TxDESC_TAIL_LPTR(x)	(0x00003124 + (0x80 * (x)))
#define XGMAC_DMA_CH_RxDESC_TAIL_LPTR(x)	(0x0000312c + (0x80 * (x)))
#define XGMAC_DMA_CH_TxDESC_RING_LEN(x)		(0x00003130 + (0x80 * (x)))
#define XGMAC_DMA_CH_RxDESC_RING_LEN(x)		(0x00003134 + (0x80 * (x)))
#define XGMAC_DMA_CH_INT_EN(x)		(0x00003138 + (0x80 * (x)))
#define XGMAC_NIE			BIT(15)
#define XGMAC_AIE			BIT(14)
#define XGMAC_RBUE			BIT(7)
#define XGMAC_RIE			BIT(6)
#define XGMAC_TIE			BIT(0)
#define XGMAC_DMA_INT_DEFAULT_EN	(XGMAC_NIE | XGMAC_AIE | XGMAC_RBUE | \
					XGMAC_RIE | XGMAC_TIE)
#define XGMAC_DMA_CH_Rx_WATCHDOG(x)	(0x0000313c + (0x80 * (x)))
#define XGMAC_RWT			GENMASK(7, 0)
#define XGMAC_DMA_CH_STATUS(x)		(0x00003160 + (0x80 * (x)))
#define XGMAC_NIS			BIT(15)
#define XGMAC_AIS			BIT(14)
#define XGMAC_FBE			BIT(12)
#define XGMAC_RBU			BIT(7)
#define XGMAC_RI			BIT(6)
#define XGMAC_TPS			BIT(1)
#define XGMAC_TI			BIT(0)

/* Descriptors */
#define XGMAC_TDES2_IOC			BIT(31)
#define XGMAC_TDES2_TTSE		BIT(30)
#define XGMAC_TDES2_B2L			GENMASK(29, 16)
#define XGMAC_TDES2_B2L_SHIFT		16
#define XGMAC_TDES2_B1L			GENMASK(13, 0)
#define XGMAC_TDES3_OWN			BIT(31)
#define XGMAC_TDES3_CTXT		BIT(30)
#define XGMAC_TDES3_FD			BIT(29)
#define XGMAC_TDES3_LD			BIT(28)
#define XGMAC_TDES3_CPC			GENMASK(27, 26)
#define XGMAC_TDES3_CPC_SHIFT		26
#define XGMAC_TDES3_TCMSSV		BIT(26)
#define XGMAC_TDES3_THL			GENMASK(22, 19)
#define XGMAC_TDES3_THL_SHIFT		19
#define XGMAC_TDES3_TSE			BIT(18)
#define XGMAC_TDES3_CIC			GENMASK(17, 16)
#define XGMAC_TDES3_CIC_SHIFT		16
#define XGMAC_TDES3_TPL			GENMASK(17, 0)
#define XGMAC_TDES3_FL			GENMASK(14, 0)
#define XGMAC_RDES3_OWN			BIT(31)
#define XGMAC_RDES3_CTXT		BIT(30)
#define XGMAC_RDES3_IOC			BIT(30)
#define XGMAC_RDES3_LD			BIT(28)
#define XGMAC_RDES3_CDA			BIT(27)
#define XGMAC_RDES3_ES			BIT(15)
#define XGMAC_RDES3_PL			GENMASK(13, 0)
#define XGMAC_RDES3_TSD			BIT(6)
#define XGMAC_RDES3_TSA			BIT(4)

#endif /* __STMMAC_DWXGMAC2_H__ */
