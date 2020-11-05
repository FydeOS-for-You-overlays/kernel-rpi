/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2018 MediaTek Inc.
 * Author: Yong Wu <yong.wu@mediatek.com>
 */
#ifndef __DTS_IOMMU_PORT_MT8183_H
#define __DTS_IOMMU_PORT_MT8183_H

#define MTK_M4U_ID(larb, port)		(((larb) << 5) | (port))

#define M4U_LARB0_ID			0
#define M4U_LARB1_ID			1
#define M4U_LARB2_ID			2
#define M4U_LARB3_ID			3
#define M4U_LARB4_ID			4
#define M4U_LARB5_ID			5
#define M4U_LARB6_ID			6
#define M4U_LARB7_ID			7

/* larb0 */
#define	M4U_PORT_DISP_OVL0		MTK_M4U_ID(M4U_LARB0_ID, 0)
#define	M4U_PORT_DISP_2L_OVL0_LARB0     MTK_M4U_ID(M4U_LARB0_ID, 1)
#define	M4U_PORT_DISP_2L_OVL1_LARB0     MTK_M4U_ID(M4U_LARB0_ID, 2)
#define	M4U_PORT_DISP_RDMA0		MTK_M4U_ID(M4U_LARB0_ID, 3)
#define	M4U_PORT_DISP_RDMA1		MTK_M4U_ID(M4U_LARB0_ID, 4)
#define	M4U_PORT_DISP_WDMA0		MTK_M4U_ID(M4U_LARB0_ID, 5)
#define	M4U_PORT_MDP_RDMA0		MTK_M4U_ID(M4U_LARB0_ID, 6)
#define	M4U_PORT_MDP_WROT0		MTK_M4U_ID(M4U_LARB0_ID, 7)
#define	M4U_PORT_MDP_WDMA0		MTK_M4U_ID(M4U_LARB0_ID, 8)
#define	M4U_PORT_DISP_FAKE0		MTK_M4U_ID(M4U_LARB0_ID, 9)

/* larb1 */
#define	M4U_PORT_HW_VDEC_MC_EXT		MTK_M4U_ID(M4U_LARB1_ID, 0)
#define	M4U_PORT_HW_VDEC_PP_EXT         MTK_M4U_ID(M4U_LARB1_ID, 1)
#define	M4U_PORT_HW_VDEC_VLD_EXT	MTK_M4U_ID(M4U_LARB1_ID, 2)
#define	M4U_PORT_HW_VDEC_AVC_MV_EXT     MTK_M4U_ID(M4U_LARB1_ID, 3)
#define	M4U_PORT_HW_VDEC_PRED_RD_EXT	MTK_M4U_ID(M4U_LARB1_ID, 4)
#define	M4U_PORT_HW_VDEC_PRED_WR_EXT	MTK_M4U_ID(M4U_LARB1_ID, 5)
#define	M4U_PORT_HW_VDEC_PPWRAP_EXT	MTK_M4U_ID(M4U_LARB1_ID, 6)

/* larb2 VPU0 */
#define	M4U_PORT_IMG_IPUO		MTK_M4U_ID(M4U_LARB2_ID, 0)
#define	M4U_PORT_IMG_IPU3O		MTK_M4U_ID(M4U_LARB2_ID, 1)
#define	M4U_PORT_IMG_IPUI		MTK_M4U_ID(M4U_LARB2_ID, 2)

/* larb3 VPU1 */
#define	M4U_PORT_CAM_IPUO		MTK_M4U_ID(M4U_LARB3_ID, 0)
#define	M4U_PORT_CAM_IPU2O		MTK_M4U_ID(M4U_LARB3_ID, 1)
#define	M4U_PORT_CAM_IPU3O		MTK_M4U_ID(M4U_LARB3_ID, 2)
#define	M4U_PORT_CAM_IPUI		MTK_M4U_ID(M4U_LARB3_ID, 3)
#define	M4U_PORT_CAM_IPU2I		MTK_M4U_ID(M4U_LARB3_ID, 4)

/* larb4 */
#define	M4U_PORT_VENC_RCPU		MTK_M4U_ID(M4U_LARB4_ID, 0)
#define	M4U_PORT_VENC_REC		MTK_M4U_ID(M4U_LARB4_ID, 1)
#define	M4U_PORT_VENC_BSDMA		MTK_M4U_ID(M4U_LARB4_ID, 2)
#define	M4U_PORT_VENC_SV_COMV		MTK_M4U_ID(M4U_LARB4_ID, 3)
#define	M4U_PORT_VENC_RD_COMV		MTK_M4U_ID(M4U_LARB4_ID, 4)
#define	M4U_PORT_JPGENC_RDMA		MTK_M4U_ID(M4U_LARB4_ID, 5)
#define	M4U_PORT_JPGENC_BSDMA		MTK_M4U_ID(M4U_LARB4_ID, 6)
#define	M4U_PORT_VENC_CUR_LUMA		MTK_M4U_ID(M4U_LARB4_ID, 7)
#define	M4U_PORT_VENC_CUR_CHROMA	MTK_M4U_ID(M4U_LARB4_ID, 8)
#define	M4U_PORT_VENC_REF_LUMA		MTK_M4U_ID(M4U_LARB4_ID, 9)
#define	M4U_PORT_VENC_REF_CHROMA	MTK_M4U_ID(M4U_LARB4_ID, 10)

/* larb5 */
#define	M4U_PORT_CAM_IMGI		MTK_M4U_ID(M4U_LARB5_ID, 0)
#define	M4U_PORT_CAM_IMG2O		MTK_M4U_ID(M4U_LARB5_ID, 1)
#define	M4U_PORT_CAM_IMG3O		MTK_M4U_ID(M4U_LARB5_ID, 2)
#define	M4U_PORT_CAM_VIPI		MTK_M4U_ID(M4U_LARB5_ID, 3)
#define	M4U_PORT_CAM_LCEI		MTK_M4U_ID(M4U_LARB5_ID, 4)
#define	M4U_PORT_CAM_SMXI		MTK_M4U_ID(M4U_LARB5_ID, 5)
#define	M4U_PORT_CAM_SMXO		MTK_M4U_ID(M4U_LARB5_ID, 6)
#define	M4U_PORT_CAM_WPE0_RDMA1		MTK_M4U_ID(M4U_LARB5_ID, 7)
#define	M4U_PORT_CAM_WPE0_RDMA0		MTK_M4U_ID(M4U_LARB5_ID, 8)
#define	M4U_PORT_CAM_WPE0_WDMA		MTK_M4U_ID(M4U_LARB5_ID, 9)
#define	M4U_PORT_CAM_FDVT_RP		MTK_M4U_ID(M4U_LARB5_ID, 10)
#define	M4U_PORT_CAM_FDVT_WR		MTK_M4U_ID(M4U_LARB5_ID, 11)
#define	M4U_PORT_CAM_FDVT_RB		MTK_M4U_ID(M4U_LARB5_ID, 12)
#define	M4U_PORT_CAM_WPE1_RDMA0		MTK_M4U_ID(M4U_LARB5_ID, 13)
#define	M4U_PORT_CAM_WPE1_RDMA1		MTK_M4U_ID(M4U_LARB5_ID, 14)
#define	M4U_PORT_CAM_WPE1_WDMA		MTK_M4U_ID(M4U_LARB5_ID, 15)
#define	M4U_PORT_CAM_DPE_RDMA		MTK_M4U_ID(M4U_LARB5_ID, 16)
#define	M4U_PORT_CAM_DPE_WDMA		MTK_M4U_ID(M4U_LARB5_ID, 17)
#define	M4U_PORT_CAM_MFB_RDMA0		MTK_M4U_ID(M4U_LARB5_ID, 18)
#define	M4U_PORT_CAM_MFB_RDMA1		MTK_M4U_ID(M4U_LARB5_ID, 19)
#define	M4U_PORT_CAM_MFB_WDMA		MTK_M4U_ID(M4U_LARB5_ID, 20)
#define	M4U_PORT_CAM_RSC_RDMA0		MTK_M4U_ID(M4U_LARB5_ID, 21)
#define	M4U_PORT_CAM_RSC_WDMA		MTK_M4U_ID(M4U_LARB5_ID, 22)
#define	M4U_PORT_CAM_OWE_RDMA		MTK_M4U_ID(M4U_LARB5_ID, 23)
#define	M4U_PORT_CAM_OWE_WDMA		MTK_M4U_ID(M4U_LARB5_ID, 24)

/* larb6 */
#define	M4U_PORT_CAM_IMGO		MTK_M4U_ID(M4U_LARB6_ID, 0)
#define	M4U_PORT_CAM_RRZO		MTK_M4U_ID(M4U_LARB6_ID, 1)
#define	M4U_PORT_CAM_AAO		MTK_M4U_ID(M4U_LARB6_ID, 2)
#define	M4U_PORT_CAM_AFO		MTK_M4U_ID(M4U_LARB6_ID, 3)
#define	M4U_PORT_CAM_LSCI0		MTK_M4U_ID(M4U_LARB6_ID, 4)
#define	M4U_PORT_CAM_LSCI1		MTK_M4U_ID(M4U_LARB6_ID, 5)
#define	M4U_PORT_CAM_PDO		MTK_M4U_ID(M4U_LARB6_ID, 6)
#define	M4U_PORT_CAM_BPCI		MTK_M4U_ID(M4U_LARB6_ID, 7)
#define	M4U_PORT_CAM_LCSO		MTK_M4U_ID(M4U_LARB6_ID, 8)
#define	M4U_PORT_CAM_CAM_RSSO_A		MTK_M4U_ID(M4U_LARB6_ID, 9)
#define	M4U_PORT_CAM_UFEO		MTK_M4U_ID(M4U_LARB6_ID, 10)
#define	M4U_PORT_CAM_SOCO		MTK_M4U_ID(M4U_LARB6_ID, 11)
#define	M4U_PORT_CAM_SOC1		MTK_M4U_ID(M4U_LARB6_ID, 12)
#define	M4U_PORT_CAM_SOC2		MTK_M4U_ID(M4U_LARB6_ID, 13)
#define	M4U_PORT_CAM_CCUI		MTK_M4U_ID(M4U_LARB6_ID, 14)
#define	M4U_PORT_CAM_CCUO		MTK_M4U_ID(M4U_LARB6_ID, 15)
#define	M4U_PORT_CAM_RAWI_A		MTK_M4U_ID(M4U_LARB6_ID, 16)
#define	M4U_PORT_CAM_CCUG		MTK_M4U_ID(M4U_LARB6_ID, 17)
#define	M4U_PORT_CAM_PSO		MTK_M4U_ID(M4U_LARB6_ID, 18)
#define	M4U_PORT_CAM_AFO_1		MTK_M4U_ID(M4U_LARB6_ID, 19)
#define	M4U_PORT_CAM_LSCI_2		MTK_M4U_ID(M4U_LARB6_ID, 20)
#define	M4U_PORT_CAM_PDI		MTK_M4U_ID(M4U_LARB6_ID, 21)
#define	M4U_PORT_CAM_FLKO		MTK_M4U_ID(M4U_LARB6_ID, 22)
#define	M4U_PORT_CAM_LMVO		MTK_M4U_ID(M4U_LARB6_ID, 23)
#define	M4U_PORT_CAM_UFGO		MTK_M4U_ID(M4U_LARB6_ID, 24)
#define	M4U_PORT_CAM_SPARE		MTK_M4U_ID(M4U_LARB6_ID, 25)
#define	M4U_PORT_CAM_SPARE_2		MTK_M4U_ID(M4U_LARB6_ID, 26)
#define	M4U_PORT_CAM_SPARE_3		MTK_M4U_ID(M4U_LARB6_ID, 27)
#define	M4U_PORT_CAM_SPARE_4		MTK_M4U_ID(M4U_LARB6_ID, 28)
#define	M4U_PORT_CAM_SPARE_5		MTK_M4U_ID(M4U_LARB6_ID, 29)
#define	M4U_PORT_CAM_SPARE_6		MTK_M4U_ID(M4U_LARB6_ID, 30)

/* CCU */
#define	M4U_PORT_CCU0			MTK_M4U_ID(M4U_LARB7_ID, 0)
#define	M4U_PORT_CCU1			MTK_M4U_ID(M4U_LARB7_ID, 1)

#endif
