//*****************************************************************************
//
// hw_emac.h - Macros used when accessing the EMAC hardware.
//
// Copyright (c) 2012-2014 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
//   Redistribution and use in source and binary forms, with or without
//   modification, are permitted provided that the following conditions
//   are met:
// 
//   Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the  
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// This is part of revision 2.1.0.12573 of the Tiva Firmware Development Package.
//
//*****************************************************************************

#ifndef __HW_EMAC_H__
#define __HW_EMAC_H__

//*****************************************************************************
//
// The following are defines for the EMAC register offsets.
//
//*****************************************************************************
enum EMAC_HW {
EMAC_O_CFG =                    0x00000000, // Ethernet MAC Configuration
EMAC_O_FRAMEFLTR =              0x00000004, // Ethernet MAC Frame Filter
EMAC_O_HASHTBLH =               0x00000008, // Ethernet MAC Hash Table High
EMAC_O_HASHTBLL =               0x0000000C, // Ethernet MAC Hash Table Low
EMAC_O_MIIADDR =                0x00000010, // Ethernet MAC MII Address
EMAC_O_MIIDATA =                0x00000014, // Ethernet MAC MII Data Register
EMAC_O_FLOWCTL =                0x00000018, // Ethernet MAC Flow Control
EMAC_O_VLANTG =                 0x0000001C, // Ethernet MAC VLAN Tag
EMAC_O_STATUS =                 0x00000024, // Ethernet MAC Status
EMAC_O_RWUFF =                  0x00000028, // Ethernet MAC Remote Wake-Up
                                            // Frame Filter
EMAC_O_PMTCTLSTAT =             0x0000002C, // Ethernet MAC PMT Control and
                                            // Status Register
EMAC_O_RIS =                    0x00000038, // Ethernet MAC Raw Interrupt
                                            // Status
EMAC_O_IM =                     0x0000003C, // Ethernet MAC Interrupt Mask
EMAC_O_ADDR0H =                 0x00000040, // Ethernet MAC Address 0 High
EMAC_O_ADDR0L =                 0x00000044, // Ethernet MAC Address 0 Low
                                            // Register
EMAC_O_ADDR1H =                 0x00000048, // Ethernet MAC Address 1 High
EMAC_O_ADDR1L =                 0x0000004C, // Ethernet MAC Address 1 Low
EMAC_O_ADDR2H =                 0x00000050, // Ethernet MAC Address 2 High
EMAC_O_ADDR2L =                 0x00000054, // Ethernet MAC Address 2 Low
EMAC_O_ADDR3H =                 0x00000058, // Ethernet MAC Address 3 High
EMAC_O_ADDR3L =                 0x0000005C, // Ethernet MAC Address 3 Low
EMAC_O_WDOGTO =                 0x000000DC, // Ethernet MAC Watchdog Timeout
EMAC_O_MMCCTRL =                0x00000100, // Ethernet MAC MMC Control
EMAC_O_MMCRXRIS =               0x00000104, // Ethernet MAC MMC Receive Raw
                                            // Interrupt Status
EMAC_O_MMCTXRIS =               0x00000108, // Ethernet MAC MMC Transmit Raw
                                            // Interrupt Status
EMAC_O_MMCRXIM =                0x0000010C, // Ethernet MAC MMC Receive
                                            // Interrupt Mask
EMAC_O_MMCTXIM =                0x00000110, // Ethernet MAC MMC Transmit
                                            // Interrupt Mask
EMAC_O_TXCNTGB =                0x00000118, // Ethernet MAC Transmit Frame
                                            // Count for Good and Bad Frames
EMAC_O_TXCNTSCOL =              0x0000014C, // Ethernet MAC Transmit Frame
                                            // Count for Frames Transmitted
                                            // after Single Collision
EMAC_O_TXCNTMCOL =              0x00000150, // Ethernet MAC Transmit Frame
                                            // Count for Frames Transmitted
                                            // after Multiple Collisions
EMAC_O_TXOCTCNTG =              0x00000164, // Ethernet MAC Transmit Octet
                                            // Count Good
EMAC_O_RXCNTGB =                0x00000180, // Ethernet MAC Receive Frame Count
                                            // for Good and Bad Frames
EMAC_O_RXCNTCRCERR =            0x00000194, // Ethernet MAC Receive Frame Count
                                            // for CRC Error Frames
EMAC_O_RXCNTALGNERR =           0x00000198, // Ethernet MAC Receive Frame Count
                                            // for Alignment Error Frames
EMAC_O_RXCNTGUNI =              0x000001C4, // Ethernet MAC Receive Frame Count
                                            // for Good Unicast Frames
EMAC_O_VLNINCREP =              0x00000584, // Ethernet MAC VLAN Tag Inclusion
                                            // or Replacement
EMAC_O_VLANHASH =               0x00000588, // Ethernet MAC VLAN Hash Table
EMAC_O_TIMSTCTRL =              0x00000700, // Ethernet MAC Timestamp Control
EMAC_O_SUBSECINC =              0x00000704, // Ethernet MAC Sub-Second
                                            // Increment
EMAC_O_TIMSEC =                 0x00000708, // Ethernet MAC System Time -
                                            // Seconds
EMAC_O_TIMNANO =                0x0000070C, // Ethernet MAC System Time -
                                            // Nanoseconds
EMAC_O_TIMSECU =                0x00000710, // Ethernet MAC System Time -
                                            // Seconds Update
EMAC_O_TIMNANOU =               0x00000714, // Ethernet MAC System Time -
                                            // Nanoseconds Update
EMAC_O_TIMADD =                 0x00000718, // Ethernet MAC Timestamp Addend
EMAC_O_TARGSEC =                0x0000071C, // Ethernet MAC Target Time Seconds
EMAC_O_TARGNANO =               0x00000720, // Ethernet MAC Target Time
                                            // Nanoseconds
EMAC_O_HWORDSEC =               0x00000724, // Ethernet MAC System Time-Higher
                                            // Word Seconds
EMAC_O_TIMSTAT =                0x00000728, // Ethernet MAC Timestamp Status
EMAC_O_PPSCTRL =                0x0000072C, // Ethernet MAC PPS Control
EMAC_O_PPS0INTVL =              0x00000760, // Ethernet MAC PPS0 Interval
EMAC_O_PPS0WIDTH =              0x00000764, // Ethernet MAC PPS0 Width
EMAC_O_DMABUSMOD =              0x00000C00, // Ethernet MAC DMA Bus Mode
EMAC_O_TXPOLLD =                0x00000C04, // Ethernet MAC Transmit Poll
                                            // Demand
EMAC_O_RXPOLLD =                0x00000C08, // Ethernet MAC Receive Poll Demand
EMAC_O_RXDLADDR =               0x00000C0C, // Ethernet MAC Receive Descriptor
                                            // List Address
EMAC_O_TXDLADDR =               0x00000C10, // Ethernet MAC Transmit Descriptor
                                            // List Address
EMAC_O_DMARIS =                 0x00000C14, // Ethernet MAC DMA Interrupt
                                            // Status
EMAC_O_DMAOPMODE =              0x00000C18, // Ethernet MAC DMA Operation Mode
EMAC_O_DMAIM =                  0x00000C1C, // Ethernet MAC DMA Interrupt Mask
                                            // Register
EMAC_O_MFBOC =                  0x00000C20, // Ethernet MAC Missed Frame and
                                            // Buffer Overflow Counter
EMAC_O_RXINTWDT =               0x00000C24, // Ethernet MAC Receive Interrupt
                                            // Watchdog Timer
EMAC_O_HOSTXDESC =              0x00000C48, // Ethernet MAC Current Host
                                            // Transmit Descriptor
EMAC_O_HOSRXDESC =              0x00000C4C, // Ethernet MAC Current Host
                                            // Receive Descriptor
EMAC_O_HOSTXBA =                0x00000C50, // Ethernet MAC Current Host
                                            // Transmit Buffer Address
EMAC_O_HOSRXBA =                0x00000C54, // Ethernet MAC Current Host
                                            // Receive Buffer Address
EMAC_O_PP =                     0x00000FC0, // Ethernet MAC Peripheral Property
                                            // Register
EMAC_O_PC =                     0x00000FC4, // Ethernet MAC Peripheral
                                            // Configuration Register
EMAC_O_CC =                     0x00000FC8, // Ethernet MAC Clock Configuration
                                            // Register
EMAC_O_EPHYRIS =                0x00000FD0, // Ethernet PHY Raw Interrupt
                                            // Status
EMAC_O_EPHYIM =                 0x00000FD4, // Ethernet PHY Interrupt Mask
EMAC_O_EPHYMISC =               0x00000FD8, // Ethernet PHY Masked Interrupt
                                            // Status and Clear

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_CFG register.
//
//*****************************************************************************
EMAC_CFG_TWOKPEN =              0x08000000, // IEEE 802
EMAC_CFG_CST =                  0x02000000, // CRC Stripping for Type Frames
EMAC_CFG_WDDIS =                0x00800000, // Watchdog Disable
EMAC_CFG_JD =                   0x00400000, // Jabber Disable
EMAC_CFG_JFEN =                 0x00100000, // Jumbo Frame Enable
EMAC_CFG_IFG_M =                0x000E0000, // Inter-Frame Gap (IFG)
EMAC_CFG_IFG_96 =               0x00000000, // 96 bit times
EMAC_CFG_IFG_88 =               0x00020000, // 88 bit times
EMAC_CFG_IFG_80 =               0x00040000, // 80 bit times
EMAC_CFG_IFG_72 =               0x00060000, // 72 bit times
EMAC_CFG_IFG_64 =               0x00080000, // 64 bit times
EMAC_CFG_IFG_56 =               0x000A0000, // 56 bit times
EMAC_CFG_IFG_48 =               0x000C0000, // 48 bit times
EMAC_CFG_IFG_40 =               0x000E0000, // 40 bit times
EMAC_CFG_DISCRS =               0x00010000, // Disable Carrier Sense During
                                            // Transmission
EMAC_CFG_PS =                   0x00008000, // Port Select
EMAC_CFG_FES =                  0x00004000, // Speed
EMAC_CFG_DRO =                  0x00002000, // Disable Receive Own
EMAC_CFG_LOOPBM =               0x00001000, // Loopback Mode
EMAC_CFG_DUPM =                 0x00000800, // Duplex Mode
EMAC_CFG_IPC =                  0x00000400, // Checksum Offload
EMAC_CFG_DR =                   0x00000200, // Disable Retry
EMAC_CFG_ACS =                  0x00000080, // Automatic Pad or CRC Stripping
EMAC_CFG_BL_M =                 0x00000060, // Back-Off Limit
EMAC_CFG_BL_1024 =              0x00000000, // k =       min (n,10)
EMAC_CFG_BL_256 =               0x00000020, // k =       min (n,8)
EMAC_CFG_BL_8 =                 0x00000040, // k =       min (n,4)
EMAC_CFG_BL_2 =                 0x00000060, // k =       min (n,1)
EMAC_CFG_DC =                   0x00000010, // Deferral Check
EMAC_CFG_TE =                   0x00000008, // Transmitter Enable
EMAC_CFG_RE =                   0x00000004, // Receiver Enable
EMAC_CFG_PRELEN_M =             0x00000003, // Preamble Length for Transmit
                                            // Frames
EMAC_CFG_PRELEN_7 =             0x00000000, // 7 bytes of preamble
EMAC_CFG_PRELEN_5 =             0x00000001, // 5 bytes of preamble
EMAC_CFG_PRELEN_3 =             0x00000002, // 3 bytes of preamble

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_FRAMEFLTR
// register.
//
//*****************************************************************************
EMAC_FRAMEFLTR_RA =             0x80000000, // Receive All
EMAC_FRAMEFLTR_VTFE =           0x00010000, // VLAN Tag Filter Enable
EMAC_FRAMEFLTR_HPF =            0x00000400, // Hash or Perfect Filter
EMAC_FRAMEFLTR_SAF =            0x00000200, // Source Address Filter Enable
EMAC_FRAMEFLTR_SAIF =           0x00000100, // Source Address (SA) Inverse
                                            // Filtering
EMAC_FRAMEFLTR_PCF_M =          0x000000C0, // Pass Control Frames
EMAC_FRAMEFLTR_PCF_ALL =        0x00000000, // The MAC filters all control
                                            // frames from reaching application
EMAC_FRAMEFLTR_PCF_PAUSE =                                                    \
                                0x00000040, // MAC forwards all control frames
                                            // except PAUSE control frames to
                                            // application even if they fail
                                            // the address filter
EMAC_FRAMEFLTR_PCF_NONE =       0x00000080, // MAC forwards all control frames
                                            // to application even if they fail
                                            // the address Filter
EMAC_FRAMEFLTR_PCF_ADDR =       0x000000C0, // MAC forwards control frames that
                                            // pass the address Filter
EMAC_FRAMEFLTR_DBF =            0x00000020, // Disable Broadcast Frames
EMAC_FRAMEFLTR_PM =             0x00000010, // Pass All Multicast
EMAC_FRAMEFLTR_DAIF =           0x00000008, // Destination Address (DA) Inverse
                                            // Filtering
EMAC_FRAMEFLTR_HMC =            0x00000004, // Hash Multicast
EMAC_FRAMEFLTR_HUC =            0x00000002, // Hash Unicast
EMAC_FRAMEFLTR_PR =             0x00000001, // Promiscuous Mode

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_HASHTBLH
// register.
//
//*****************************************************************************
EMAC_HASHTBLH_HTH_M =           0xFFFFFFFF, // Hash Table High
EMAC_HASHTBLH_HTH_S =           0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_HASHTBLL
// register.
//
//*****************************************************************************
EMAC_HASHTBLL_HTL_M =           0xFFFFFFFF, // Hash Table Low
EMAC_HASHTBLL_HTL_S =           0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_MIIADDR register.
//
//*****************************************************************************
EMAC_MIIADDR_PLA_M =            0x0000F800, // Physical Layer Address
EMAC_MIIADDR_MII_M =            0x000007C0, // MII Register
EMAC_MIIADDR_CR_M =             0x0000003C, // Clock Reference Frequency
                                            // Selection
EMAC_MIIADDR_CR_60_100 =        0x00000000, // The frequency of the System
                                            // Clock is 60 to 100 MHz providing
                                            // a MDIO clock of SYSCLK/42
EMAC_MIIADDR_CR_100_150 =       0x00000004, // The frequency of the System
                                            // Clock is 100 to 150 MHz
                                            // providing a MDIO clock of
                                            // SYSCLK/62
EMAC_MIIADDR_CR_20_35 =         0x00000008, // The frequency of the System
                                            // Clock is 20-35 MHz providing a
                                            // MDIO clock of System Clock/16
EMAC_MIIADDR_CR_35_60 =         0x0000000C, // The frequency of the System
                                            // Clock is 35 to 60 MHz providing
                                            // a MDIO clock of System Clock/26
EMAC_MIIADDR_MIIW =             0x00000002, // MII Write
EMAC_MIIADDR_MIIB =             0x00000001, // MII Busy
EMAC_MIIADDR_PLA_S =            11,
EMAC_MIIADDR_MII_S =            6,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_MIIDATA register.
//
//*****************************************************************************
EMAC_MIIDATA_DATA_M =           0x0000FFFF, // MII Data
EMAC_MIIDATA_DATA_S =           0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_FLOWCTL register.
//
//*****************************************************************************
EMAC_FLOWCTL_PT_M =             0xFFFF0000, // Pause Time
EMAC_FLOWCTL_DZQP =             0x00000080, // Disable Zero-Quanta Pause
EMAC_FLOWCTL_PLT_M =            0x00000030, // Pause Low Threshold
EMAC_FLOWCTL_PLT_4 =            0x00000000, // The threshold is Pause time
                                            // minus 4 slot times (PT - 4 slot
                                            // times)
EMAC_FLOWCTL_PLT_28 =           0x00000010, // The threshold is Pause time
                                            // minus 28 slot times (PT - 28
                                            // slot times)
EMAC_FLOWCTL_PLT_144 =          0x00000020, // The threshold is Pause time
                                            // minus 144 slot times (PT - 144
                                            // slot times)
EMAC_FLOWCTL_PLT_156 =          0x00000030, // The threshold is Pause time
                                            // minus 256 slot times (PT - 256
                                            // slot times)
EMAC_FLOWCTL_UP =               0x00000008, // Unicast Pause Frame Detect
EMAC_FLOWCTL_RFE =              0x00000004, // Receive Flow Control Enable
EMAC_FLOWCTL_TFE =              0x00000002, // Transmit Flow Control Enable
EMAC_FLOWCTL_FCBBPA =           0x00000001, // Flow Control Busy or
                                            // Back-pressure Activate
EMAC_FLOWCTL_PT_S =             16,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_VLANTG register.
//
//*****************************************************************************
EMAC_VLANTG_VTHM =              0x00080000, // VLAN Tag Hash Table Match Enable
EMAC_VLANTG_ESVL =              0x00040000, // Enable S-VLAN
EMAC_VLANTG_VTIM =              0x00020000, // VLAN Tag Inverse Match Enable
EMAC_VLANTG_ETV =               0x00010000, // Enable 12-Bit VLAN Tag
                                            // Comparison
EMAC_VLANTG_VL_M =              0x0000FFFF, // VLAN Tag Identifier for Receive
                                            // Frames
EMAC_VLANTG_VL_S =              0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_STATUS register.
//
//*****************************************************************************
EMAC_STATUS_TXFF =              0x02000000, // TX/RX Controller TX FIFO Full
                                            // Status
EMAC_STATUS_TXFE =              0x01000000, // TX/RX Controller TX FIFO Not
                                            // Empty Status
EMAC_STATUS_TWC =               0x00400000, // TX/RX Controller TX FIFO Write
                                            // Controller Active Status
EMAC_STATUS_TRC_M =             0x00300000, // TX/RX Controller's TX FIFO Read
                                            // Controller Status
EMAC_STATUS_TRC_IDLE =          0x00000000, // IDLE state
EMAC_STATUS_TRC_READ =          0x00100000, // READ state (transferring data to
                                            // MAC transmitter)
EMAC_STATUS_TRC_WAIT =          0x00200000, // Waiting for TX Status from MAC
                                            // transmitter
EMAC_STATUS_TRC_WRFLUSH =       0x00300000, // Writing the received TX Status
                                            // or flushing the TX FIFO
EMAC_STATUS_TXPAUSED =          0x00080000, // MAC Transmitter PAUSE
EMAC_STATUS_TFC_M =             0x00060000, // MAC Transmit Frame Controller
                                            // Status
EMAC_STATUS_TFC_IDLE =          0x00000000, // IDLE state
EMAC_STATUS_TFC_STATUS =        0x00020000, // Waiting for status of previous
                                            // frame or IFG or backoff period
                                            // to be over
EMAC_STATUS_TFC_PAUSE =         0x00040000, // Generating and transmitting a
                                            // PAUSE control frame (in the
                                            // full-duplex mode)
EMAC_STATUS_TFC_INPUT =         0x00060000, // Transferring input frame for
                                            // transmission
EMAC_STATUS_TPE =               0x00010000, // MAC MII Transmit Protocol Engine
                                            // Status
EMAC_STATUS_RXF_M =             0x00000300, // TX/RX Controller RX FIFO
                                            // Fill-level Status
EMAC_STATUS_RXF_EMPTY =         0x00000000, // RX FIFO Empty
EMAC_STATUS_RXF_BELOW =         0x00000100, // RX FIFO fill level is below the
                                            // flow-control deactivate
                                            // threshold
EMAC_STATUS_RXF_ABOVE =         0x00000200, // RX FIFO fill level is above the
                                            // flow-control activate threshold
EMAC_STATUS_RXF_FULL =          0x00000300, // RX FIFO Full
EMAC_STATUS_RRC_M =             0x00000060, // TX/RX Controller Read Controller
                                            // State
EMAC_STATUS_RRC_IDLE =          0x00000000, // IDLE state
EMAC_STATUS_RRC_STATUS =        0x00000020, // Reading frame data
EMAC_STATUS_RRC_DATA =          0x00000040, // Reading frame status (or
                                            // timestamp)
EMAC_STATUS_RRC_FLUSH =         0x00000060, // Flushing the frame data and
                                            // status
EMAC_STATUS_RWC =               0x00000010, // TX/RX Controller RX FIFO Write
                                            // Controller Active Status
EMAC_STATUS_RFCFC_M =           0x00000006, // MAC Receive Frame Controller
                                            // FIFO Status
EMAC_STATUS_RPE =               0x00000001, // MAC MII Receive Protocol Engine
                                            // Status
EMAC_STATUS_RFCFC_S =           1,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_RWUFF register.
//
//*****************************************************************************
EMAC_RWUFF_WAKEUPFIL_M =        0xFFFFFFFF, // Remote Wake-Up Frame Filter
EMAC_RWUFF_WAKEUPFIL_S =        0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_PMTCTLSTAT
// register.
//
//*****************************************************************************
EMAC_PMTCTLSTAT_WUPFRRST =                                                    \
                                0x80000000, // Wake-Up Frame Filter Register
                                            // Pointer Reset
EMAC_PMTCTLSTAT_RWKPTR_M =                                                    \
                                0x07000000, // Remote Wake-Up FIFO Pointer
EMAC_PMTCTLSTAT_GLBLUCAST =                                                   \
                                0x00000200, // Global Unicast
EMAC_PMTCTLSTAT_WUPRX =         0x00000040, // Wake-Up Frame Received
EMAC_PMTCTLSTAT_MGKPRX =        0x00000020, // Magic Packet Received
EMAC_PMTCTLSTAT_WUPFREN =       0x00000004, // Wake-Up Frame Enable
EMAC_PMTCTLSTAT_MGKPKTEN =                                                    \
                                0x00000002, // Magic Packet Enable
EMAC_PMTCTLSTAT_PWRDWN =        0x00000001, // Power Down
EMAC_PMTCTLSTAT_RWKPTR_S =                                                    \
                                24,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_RIS register.
//
//*****************************************************************************
EMAC_RIS_TS =                   0x00000200, // Timestamp Interrupt Status
EMAC_RIS_MMCTX =                0x00000040, // MMC Transmit Interrupt Status
EMAC_RIS_MMCRX =                0x00000020, // MMC Receive Interrupt Status
EMAC_RIS_MMC =                  0x00000010, // MMC Interrupt Status
EMAC_RIS_PMT =                  0x00000008, // PMT Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_IM register.
//
//*****************************************************************************
EMAC_IM_TSI =                   0x00000200, // Timestamp Interrupt Mask
EMAC_IM_PMT =                   0x00000008, // PMT Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_ADDR0H register.
//
//*****************************************************************************
EMAC_ADDR0H_AE =                0x80000000, // Address Enable
EMAC_ADDR0H_ADDRHI_M =          0x0000FFFF, // MAC Address0 [47:32]
EMAC_ADDR0H_ADDRHI_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_ADDR0L register.
//
//*****************************************************************************
EMAC_ADDR0L_ADDRLO_M =          0xFFFFFFFF, // MAC Address0 [31:0]
EMAC_ADDR0L_ADDRLO_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_ADDR1H register.
//
//*****************************************************************************
EMAC_ADDR1H_AE =                0x80000000, // Address Enable
EMAC_ADDR1H_SA =                0x40000000, // Source Address
EMAC_ADDR1H_MBC_M =             0x3F000000, // Mask Byte Control
EMAC_ADDR1H_ADDRHI_M =          0x0000FFFF, // MAC Address1 [47:32]
EMAC_ADDR1H_MBC_S =             24,
EMAC_ADDR1H_ADDRHI_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_ADDR1L register.
//
//*****************************************************************************
EMAC_ADDR1L_ADDRLO_M =          0xFFFFFFFF, // MAC Address1 [31:0]
EMAC_ADDR1L_ADDRLO_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_ADDR2H register.
//
//*****************************************************************************
EMAC_ADDR2H_AE =                0x80000000, // Address Enable
EMAC_ADDR2H_SA =                0x40000000, // Source Address
EMAC_ADDR2H_MBC_M =             0x3F000000, // Mask Byte Control
EMAC_ADDR2H_ADDRHI_M =          0x0000FFFF, // MAC Address2 [47:32]
EMAC_ADDR2H_MBC_S =             24,
EMAC_ADDR2H_ADDRHI_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_ADDR2L register.
//
//*****************************************************************************
EMAC_ADDR2L_ADDRLO_M =          0xFFFFFFFF, // MAC Address2 [31:0]
EMAC_ADDR2L_ADDRLO_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_ADDR3H register.
//
//*****************************************************************************
EMAC_ADDR3H_AE =                0x80000000, // Address Enable
EMAC_ADDR3H_SA =                0x40000000, // Source Address
EMAC_ADDR3H_MBC_M =             0x3F000000, // Mask Byte Control
EMAC_ADDR3H_ADDRHI_M =          0x0000FFFF, // MAC Address3 [47:32]
EMAC_ADDR3H_MBC_S =             24,
EMAC_ADDR3H_ADDRHI_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_ADDR3L register.
//
//*****************************************************************************
EMAC_ADDR3L_ADDRLO_M =          0xFFFFFFFF, // MAC Address3 [31:0]
EMAC_ADDR3L_ADDRLO_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_WDOGTO register.
//
//*****************************************************************************
EMAC_WDOGTO_PWE =               0x00010000, // Programmable Watchdog Enable
EMAC_WDOGTO_WTO_M =             0x00003FFF, // Watchdog Timeout
EMAC_WDOGTO_WTO_S =             0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_MMCCTRL register.
//
//*****************************************************************************
EMAC_MMCCTRL_UCDBC =            0x00000100, // Update MMC Counters for Dropped
                                            // Broadcast Frames
EMAC_MMCCTRL_CNTPRSTLVL =       0x00000020, // Full/Half Preset Level Value
EMAC_MMCCTRL_CNTPRST =          0x00000010, // Counters Preset
EMAC_MMCCTRL_CNTFREEZ =         0x00000008, // MMC Counter Freeze
EMAC_MMCCTRL_RSTONRD =          0x00000004, // Reset on Read
EMAC_MMCCTRL_CNTSTPRO =         0x00000002, // Counters Stop Rollover
EMAC_MMCCTRL_CNTRST =           0x00000001, // Counters Reset

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_MMCRXRIS
// register.
//
//*****************************************************************************
EMAC_MMCRXRIS_UCGF =            0x00020000, // MMC Receive Unicast Good Frame
                                            // Counter Interrupt Status
EMAC_MMCRXRIS_ALGNERR =         0x00000040, // MMC Receive Alignment Error
                                            // Frame Counter Interrupt Status
EMAC_MMCRXRIS_CRCERR =          0x00000020, // MMC Receive CRC Error Frame
                                            // Counter Interrupt Status
EMAC_MMCRXRIS_GBF =             0x00000001, // MMC Receive Good Bad Frame
                                            // Counter Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_MMCTXRIS
// register.
//
//*****************************************************************************
EMAC_MMCTXRIS_OCTCNT =          0x00100000, // Octet Counter Interrupt Status
EMAC_MMCTXRIS_MCOLLGF =         0x00008000, // MMC Transmit Multiple Collision
                                            // Good Frame Counter Interrupt
                                            // Status
EMAC_MMCTXRIS_SCOLLGF =         0x00004000, // MMC Transmit Single Collision
                                            // Good Frame Counter Interrupt
                                            // Status
EMAC_MMCTXRIS_GBF =             0x00000002, // MMC Transmit Good Bad Frame
                                            // Counter Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_MMCRXIM register.
//
//*****************************************************************************
EMAC_MMCRXIM_UCGF =             0x00020000, // MMC Receive Unicast Good Frame
                                            // Counter Interrupt Mask
EMAC_MMCRXIM_ALGNERR =          0x00000040, // MMC Receive Alignment Error
                                            // Frame Counter Interrupt Mask
EMAC_MMCRXIM_CRCERR =           0x00000020, // MMC Receive CRC Error Frame
                                            // Counter Interrupt Mask
EMAC_MMCRXIM_GBF =              0x00000001, // MMC Receive Good Bad Frame
                                            // Counter Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_MMCTXIM register.
//
//*****************************************************************************
EMAC_MMCTXIM_OCTCNT =           0x00100000, // MMC Transmit Good Octet Counter
                                            // Interrupt Mask
EMAC_MMCTXIM_MCOLLGF =          0x00008000, // MMC Transmit Multiple Collision
                                            // Good Frame Counter Interrupt
                                            // Mask
EMAC_MMCTXIM_SCOLLGF =          0x00004000, // MMC Transmit Single Collision
                                            // Good Frame Counter Interrupt
                                            // Mask
EMAC_MMCTXIM_GBF =              0x00000002, // MMC Transmit Good Bad Frame
                                            // Counter Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TXCNTGB register.
//
//*****************************************************************************
EMAC_TXCNTGB_TXFRMGB_M =        0xFFFFFFFF, // This field indicates the number
                                            // of good and bad frames
                                            // transmitted, exclusive of
                                            // retried frames
EMAC_TXCNTGB_TXFRMGB_S =        0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TXCNTSCOL
// register.
//
//*****************************************************************************
EMAC_TXCNTSCOL_TXSNGLCOLG_M =                                                 \
                                0xFFFFFFFF, // This field indicates the number
                                            // of successfully transmitted
                                            // frames after a single collision
                                            // in the half-duplex mode
EMAC_TXCNTSCOL_TXSNGLCOLG_S =                                                 \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TXCNTMCOL
// register.
//
//*****************************************************************************
EMAC_TXCNTMCOL_TXMULTCOLG_M =                                                 \
                                0xFFFFFFFF, // This field indicates the number
                                            // of successfully transmitted
                                            // frames after multiple collisions
                                            // in the half-duplex mode
EMAC_TXCNTMCOL_TXMULTCOLG_S =                                                 \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TXOCTCNTG
// register.
//
//*****************************************************************************
EMAC_TXOCTCNTG_TXOCTG_M =       0xFFFFFFFF, // This field indicates the number
                                            // of bytes transmitted, exclusive
                                            // of preamble, in good frames
EMAC_TXOCTCNTG_TXOCTG_S =       0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_RXCNTGB register.
//
//*****************************************************************************
EMAC_RXCNTGB_RXFRMGB_M =        0xFFFFFFFF, // This field indicates the number
                                            // of received good and bad frames
EMAC_RXCNTGB_RXFRMGB_S =        0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_RXCNTCRCERR
// register.
//
//*****************************************************************************
EMAC_RXCNTCRCERR_RXCRCERR_M =                                                 \
                                0xFFFFFFFF, // This field indicates the number
                                            // of frames received with CRC
                                            // error
EMAC_RXCNTCRCERR_RXCRCERR_S =                                                 \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_RXCNTALGNERR
// register.
//
//*****************************************************************************
EMAC_RXCNTALGNERR_RXALGNERR_M =                                               \
                                0xFFFFFFFF, // This field indicates the number
                                            // of frames received with
                                            // alignment (dribble) error
EMAC_RXCNTALGNERR_RXALGNERR_S =                                               \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_RXCNTGUNI
// register.
//
//*****************************************************************************
EMAC_RXCNTGUNI_RXUCASTG_M =                                                   \
                                0xFFFFFFFF, // This field indicates the number
                                            // of received good unicast frames
EMAC_RXCNTGUNI_RXUCASTG_S =                                                   \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_VLNINCREP
// register.
//
//*****************************************************************************
EMAC_VLNINCREP_CSVL =           0x00080000, // C-VLAN or S-VLAN
EMAC_VLNINCREP_VLP =            0x00040000, // VLAN Priority Control
EMAC_VLNINCREP_VLC_M =          0x00030000, // VLAN Tag Control in Transmit
                                            // Frames
EMAC_VLNINCREP_VLC_NONE =       0x00000000, // No VLAN tag deletion, insertion,
                                            // or replacement
EMAC_VLNINCREP_VLC_TAGDEL =                                                   \
                                0x00010000, // VLAN tag deletion
EMAC_VLNINCREP_VLC_TAGINS =                                                   \
                                0x00020000, // VLAN tag insertion
EMAC_VLNINCREP_VLC_TAGREP =                                                   \
                                0x00030000, // VLAN tag replacement
EMAC_VLNINCREP_VLT_M =          0x0000FFFF, // VLAN Tag for Transmit Frames
EMAC_VLNINCREP_VLT_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_VLANHASH
// register.
//
//*****************************************************************************
EMAC_VLANHASH_VLHT_M =          0x0000FFFF, // VLAN Hash Table
EMAC_VLANHASH_VLHT_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TIMSTCTRL
// register.
//
//*****************************************************************************
EMAC_TIMSTCTRL_PTPFLTR =        0x00040000, // Enable MAC address for PTP Frame
                                            // Filtering
EMAC_TIMSTCTRL_SELPTP_M =       0x00030000, // Select PTP packets for Taking
                                            // Snapshots
EMAC_TIMSTCTRL_TSMAST =         0x00008000, // Enable Snapshot for Messages
                                            // Relevant to Master
EMAC_TIMSTCTRL_TSEVNT =         0x00004000, // Enable Timestamp Snapshot for
                                            // Event Messages
EMAC_TIMSTCTRL_PTPIPV4 =        0x00002000, // Enable Processing of PTP Frames
                                            // Sent over IPv4-UDP
EMAC_TIMSTCTRL_PTPIPV6 =        0x00001000, // Enable Processing of PTP Frames
                                            // Sent Over IPv6-UDP
EMAC_TIMSTCTRL_PTPETH =         0x00000800, // Enable Processing of PTP Over
                                            // Ethernet Frames
EMAC_TIMSTCTRL_PTPVER2 =        0x00000400, // Enable PTP Packet Processing For
                                            // Version 2 Format
EMAC_TIMSTCTRL_DGTLBIN =        0x00000200, // Timestamp Digital or Binary
                                            // Rollover Control
EMAC_TIMSTCTRL_ALLF =           0x00000100, // Enable Timestamp For All Frames
EMAC_TIMSTCTRL_ADDREGUP =       0x00000020, // Addend Register Update
EMAC_TIMSTCTRL_INTTRIG =        0x00000010, // Timestamp Interrupt Trigger
                                            // Enable
EMAC_TIMSTCTRL_TSUPDT =         0x00000008, // Timestamp Update
EMAC_TIMSTCTRL_TSINIT =         0x00000004, // Timestamp Initialize
EMAC_TIMSTCTRL_TSFCUPDT =       0x00000002, // Timestamp Fine or Coarse Update
EMAC_TIMSTCTRL_TSEN =           0x00000001, // Timestamp Enable
EMAC_TIMSTCTRL_SELPTP_S =       16,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_SUBSECINC
// register.
//
//*****************************************************************************
EMAC_SUBSECINC_SSINC_M =        0x000000FF, // Sub-second Increment Value
EMAC_SUBSECINC_SSINC_S =        0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TIMSEC register.
//
//*****************************************************************************
EMAC_TIMSEC_TSS_M =             0xFFFFFFFF, // Timestamp Second
EMAC_TIMSEC_TSS_S =             0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TIMNANO register.
//
//*****************************************************************************
EMAC_TIMNANO_TSSS_M =           0x7FFFFFFF, // Timestamp Sub-Seconds
EMAC_TIMNANO_TSSS_S =           0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TIMSECU register.
//
//*****************************************************************************
EMAC_TIMSECU_TSS_M =            0xFFFFFFFF, // Timestamp Second
EMAC_TIMSECU_TSS_S =            0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TIMNANOU
// register.
//
//*****************************************************************************
EMAC_TIMNANOU_ADDSUB =          0x80000000, // Add or subtract time
EMAC_TIMNANOU_TSSS_M =          0x7FFFFFFF, // Timestamp Sub-Second
EMAC_TIMNANOU_TSSS_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TIMADD register.
//
//*****************************************************************************
EMAC_TIMADD_TSAR_M =            0xFFFFFFFF, // Timestamp Addend Register
EMAC_TIMADD_TSAR_S =            0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TARGSEC register.
//
//*****************************************************************************
EMAC_TARGSEC_TSTR_M =           0xFFFFFFFF, // Target Time Seconds Register
EMAC_TARGSEC_TSTR_S =           0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TARGNANO
// register.
//
//*****************************************************************************
EMAC_TARGNANO_TRGTBUSY =        0x80000000, // Target Time Register Busy
EMAC_TARGNANO_TTSLO_M =         0x7FFFFFFF, // Target Timestamp Low Register
EMAC_TARGNANO_TTSLO_S =         0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_HWORDSEC
// register.
//
//*****************************************************************************
EMAC_HWORDSEC_TSHWR_M =         0x0000FFFF, // Target Timestamp Higher Word
                                            // Register
EMAC_HWORDSEC_TSHWR_S =         0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TIMSTAT register.
//
//*****************************************************************************
EMAC_TIMSTAT_TSTARGT =          0x00000002, // Timestamp Target Time Reached
EMAC_TIMSTAT_TSSOVF =           0x00000001, // Timestamp Seconds Overflow

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_PPSCTRL register.
//
//*****************************************************************************
EMAC_PPSCTRL_TRGMODS0_M =       0x00000060, // Target Time Register Mode for
                                            // PPS0 Output
EMAC_PPSCTRL_TRGMODS0_INTONLY =                                               \
                                0x00000000, // Indicates that the Target Time
                                            // registers are programmed only
                                            // for generating the interrupt
                                            // event
EMAC_PPSCTRL_TRGMODS0_INTPPS0 =                                               \
                                0x00000040, // Indicates that the Target Time
                                            // registers are programmed for
                                            // generating the interrupt event
                                            // and starting or stopping the
                                            // generation of the EN0PPS output
                                            // signal
EMAC_PPSCTRL_TRGMODS0_PPS0ONLY =                                              \
                                0x00000060, // Indicates that the Target Time
                                            // registers are programmed only
                                            // for starting or stopping the
                                            // generation of the EN0PPS output
                                            // signal. No interrupt is asserted
EMAC_PPSCTRL_PPSEN0 =           0x00000010, // Flexible PPS Output Mode Enable
EMAC_PPSCTRL_PPSCTRL_M =        0x0000000F, // EN0PPS Output Frequency Control
                                            // (PPSCTRL) or Command Control
                                            // (PPSCMD)
EMAC_PPSCTRL_PPSCTRL_1HZ =                                                    \
                                0x00000000, // When the PPSEN0 bit =       0x0, the
                                            // EN0PPS signal is 1 pulse of the
                                            // PTP reference clock.(of width
                                            // clk_ptp_i) every second
EMAC_PPSCTRL_PPSCTRL_2HZ =                                                    \
                                0x00000001, // When the PPSEN0 bit =       0x0, the
                                            // binary rollover is 2 Hz, and the
                                            // digital rollover is 1 Hz
EMAC_PPSCTRL_PPSCTRL_4HZ =                                                    \
                                0x00000002, // When the PPSEN0 bit =       0x0, the
                                            // binary rollover is 4 Hz, and the
                                            // digital rollover is 2 Hz
EMAC_PPSCTRL_PPSCTRL_8HZ =                                                    \
                                0x00000003, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 8 Hz, and the
                                            // digital rollover is 4 Hz,
EMAC_PPSCTRL_PPSCTRL_16HZ =                                                   \
                                0x00000004, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 16 Hz, and
                                            // the digital rollover is 8 Hz
EMAC_PPSCTRL_PPSCTRL_32HZ =                                                   \
                                0x00000005, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 32 Hz, and
                                            // the digital rollover is 16 Hz
EMAC_PPSCTRL_PPSCTRL_64HZ =                                                   \
                                0x00000006, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 64 Hz, and
                                            // the digital rollover is 32 Hz
EMAC_PPSCTRL_PPSCTRL_128HZ =                                                  \
                                0x00000007, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 128 Hz, and
                                            // the digital rollover is 64 Hz
EMAC_PPSCTRL_PPSCTRL_256HZ =                                                  \
                                0x00000008, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 256 Hz, and
                                            // the digital rollover is 128 Hz
EMAC_PPSCTRL_PPSCTRL_512HZ =                                                  \
                                0x00000009, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 512 Hz, and
                                            // the digital rollover is 256 Hz
EMAC_PPSCTRL_PPSCTRL_1024HZ =                                                 \
                                0x0000000A, // When the PPSEN0 bit =       0x0, the
                                            // binary rollover is 1.024 kHz,
                                            // and the digital rollover is 512
                                            // Hz
EMAC_PPSCTRL_PPSCTRL_2048HZ =                                                 \
                                0x0000000B, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 2.048 kHz,
                                            // and the digital rollover is
                                            // 1.024 kHz
EMAC_PPSCTRL_PPSCTRL_4096HZ =                                                 \
                                0x0000000C, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 4.096 kHz,
                                            // and the digital rollover is
                                            // 2.048 kHz
EMAC_PPSCTRL_PPSCTRL_8192HZ =                                                 \
                                0x0000000D, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 8.192 kHz,
                                            // and the digital rollover is
                                            // 4.096 kHz
EMAC_PPSCTRL_PPSCTRL_16384HZ =                                                \
                                0x0000000E, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 16.384 kHz,
                                            // and the digital rollover is
                                            // 8.092 kHz
EMAC_PPSCTRL_PPSCTRL_32768HZ =                                                \
                                0x0000000F, // When thePPSEN0 bit =       0x0, the
                                            // binary rollover is 32.768 KHz,
                                            // and the digital rollover is
                                            // 16.384 KHz

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_PPS0INTVL
// register.
//
//*****************************************************************************
EMAC_PPS0INTVL_PPS0INT_M =                                                    \
                                0xFFFFFFFF, // PPS0 Output Signal Interval
EMAC_PPS0INTVL_PPS0INT_S =                                                    \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_PPS0WIDTH
// register.
//
//*****************************************************************************
EMAC_PPS0WIDTH_M =              0xFFFFFFFF, // EN0PPS Output Signal Width
EMAC_PPS0WIDTH_S =              0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_DMABUSMOD
// register.
//
//*****************************************************************************
EMAC_DMABUSMOD_RIB =            0x80000000, // Rebuild Burst
EMAC_DMABUSMOD_TXPR =           0x08000000, // Transmit Priority
EMAC_DMABUSMOD_MB =             0x04000000, // Mixed Burst
EMAC_DMABUSMOD_AAL =            0x02000000, // Address Aligned Beats
EMAC_DMABUSMOD_8XPBL =          0x01000000, // 8 x Programmable Burst Length
                                            // (PBL) Mode
EMAC_DMABUSMOD_USP =            0x00800000, // Use Separate Programmable Burst
                                            // Length (PBL)
EMAC_DMABUSMOD_RPBL_M =         0x007E0000, // RX DMA Programmable Burst Length
                                            // (PBL)
EMAC_DMABUSMOD_FB =             0x00010000, // Fixed Burst
EMAC_DMABUSMOD_PR_M =           0x0000C000, // Priority Ratio
EMAC_DMABUSMOD_PBL_M =          0x00003F00, // Programmable Burst Length
EMAC_DMABUSMOD_ATDS =           0x00000080, // Alternate Descriptor Size
EMAC_DMABUSMOD_DSL_M =          0x0000007C, // Descriptor Skip Length
EMAC_DMABUSMOD_DA =             0x00000002, // DMA Arbitration Scheme
EMAC_DMABUSMOD_SWR =            0x00000001, // DMA Software Reset
EMAC_DMABUSMOD_RPBL_S =         17,
EMAC_DMABUSMOD_PR_S =           14,
EMAC_DMABUSMOD_PBL_S =          8,
EMAC_DMABUSMOD_DSL_S =          2,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TXPOLLD register.
//
//*****************************************************************************
EMAC_TXPOLLD_TPD_M =            0xFFFFFFFF, // Transmit Poll Demand
EMAC_TXPOLLD_TPD_S =            0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_RXPOLLD register.
//
//*****************************************************************************
EMAC_RXPOLLD_RPD_M =            0xFFFFFFFF, // Receive Poll Demand
EMAC_RXPOLLD_RPD_S =            0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_RXDLADDR
// register.
//
//*****************************************************************************
EMAC_RXDLADDR_STRXLIST_M =                                                    \
                                0xFFFFFFFC, // Start of Receive List
EMAC_RXDLADDR_STRXLIST_S =                                                    \
                                2,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_TXDLADDR
// register.
//
//*****************************************************************************
EMAC_TXDLADDR_TXDLADDR_M =                                                    \
                                0xFFFFFFFC, // Start of Transmit List Base
                                            // Address
EMAC_TXDLADDR_TXDLADDR_S =                                                    \
                                2,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_DMARIS register.
//
//*****************************************************************************
EMAC_DMARIS_TT =                0x20000000, // Timestamp Trigger Interrupt
                                            // Status
EMAC_DMARIS_PMT =               0x10000000, // MAC PMT Interrupt Status
EMAC_DMARIS_MMC =               0x08000000, // MAC MMC Interrupt
EMAC_DMARIS_AE_M =              0x03800000, // Access Error
EMAC_DMARIS_AE_RXDMAWD =        0x00000000, // Error during RX DMA Write Data
                                            // Transfer
EMAC_DMARIS_AE_TXDMARD =        0x01800000, // Error during TX DMA Read Data
                                            // Transfer
EMAC_DMARIS_AE_RXDMADW =        0x02000000, // Error during RX DMA Descriptor
                                            // Write Access
EMAC_DMARIS_AE_TXDMADW =        0x02800000, // Error during TX DMA Descriptor
                                            // Write Access
EMAC_DMARIS_AE_RXDMADR =        0x03000000, // Error during RX DMA Descriptor
                                            // Read Access
EMAC_DMARIS_AE_TXDMADR =        0x03800000, // Error during TX DMA Descriptor
                                            // Read Access
EMAC_DMARIS_TS_M =              0x00700000, // Transmit Process State
EMAC_DMARIS_TS_STOP =           0x00000000, // Stopped; Reset or Stop transmit
                                            // command processed
EMAC_DMARIS_TS_RUNTXTD =        0x00100000, // Running; Fetching transmit
                                            // transfer descriptor
EMAC_DMARIS_TS_STATUS =         0x00200000, // Running; Waiting for status
EMAC_DMARIS_TS_RUNTX =          0x00300000, // Running; Reading data from host
                                            // memory buffer and queuing it to
                                            // transmit buffer (TX FIFO)
EMAC_DMARIS_TS_TSTAMP =         0x00400000, // Writing Timestamp
EMAC_DMARIS_TS_SUSPEND =        0x00600000, // Suspended; Transmit descriptor
                                            // unavailable or transmit buffer
                                            // underflow
EMAC_DMARIS_TS_RUNCTD =         0x00700000, // Running; Closing transmit
                                            // descriptor
EMAC_DMARIS_RS_M =              0x000E0000, // Received Process State
EMAC_DMARIS_RS_STOP =           0x00000000, // Stopped: Reset or stop receive
                                            // command issued
EMAC_DMARIS_RS_RUNRXTD =        0x00020000, // Running: Fetching receive
                                            // transfer descriptor
EMAC_DMARIS_RS_RUNRXD =         0x00060000, // Running: Waiting for receive
                                            // packet
EMAC_DMARIS_RS_SUSPEND =        0x00080000, // Suspended: Receive descriptor
                                            // unavailable
EMAC_DMARIS_RS_RUNCRD =         0x000A0000, // Running: Closing receive
                                            // descriptor
EMAC_DMARIS_RS_TSWS =           0x000C0000, // Writing Timestamp
EMAC_DMARIS_RS_RUNTXD =         0x000E0000, // Running: Transferring the
                                            // receive packet data from receive
                                            // buffer to host memory
EMAC_DMARIS_NIS =               0x00010000, // Normal Interrupt Summary
EMAC_DMARIS_AIS =               0x00008000, // Abnormal Interrupt Summary
EMAC_DMARIS_ERI =               0x00004000, // Early Receive Interrupt
EMAC_DMARIS_FBI =               0x00002000, // Fatal Bus Error Interrupt
EMAC_DMARIS_ETI =               0x00000400, // Early Transmit Interrupt
EMAC_DMARIS_RWT =               0x00000200, // Receive Watchdog Timeout
EMAC_DMARIS_RPS =               0x00000100, // Receive Process Stopped
EMAC_DMARIS_RU =                0x00000080, // Receive Buffer Unavailable
EMAC_DMARIS_RI =                0x00000040, // Receive Interrupt
EMAC_DMARIS_UNF =               0x00000020, // Transmit Underflow
EMAC_DMARIS_OVF =               0x00000010, // Receive Overflow
EMAC_DMARIS_TJT =               0x00000008, // Transmit Jabber Timeout
EMAC_DMARIS_TU =                0x00000004, // Transmit Buffer Unavailable
EMAC_DMARIS_TPS =               0x00000002, // Transmit Process Stopped
EMAC_DMARIS_TI =                0x00000001, // Transmit Interrupt

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_DMAOPMODE
// register.
//
//*****************************************************************************
EMAC_DMAOPMODE_DT =             0x04000000, // Disable Dropping of TCP/IP
                                            // Checksum Error Frames
EMAC_DMAOPMODE_RSF =            0x02000000, // Receive Store and Forward
EMAC_DMAOPMODE_DFF =            0x01000000, // Disable Flushing of Received
                                            // Frames
EMAC_DMAOPMODE_TSF =            0x00200000, // Transmit Store and Forward
EMAC_DMAOPMODE_FTF =            0x00100000, // Flush Transmit FIFO
EMAC_DMAOPMODE_TTC_M =          0x0001C000, // Transmit Threshold Control
EMAC_DMAOPMODE_TTC_64 =         0x00000000, // 64 bytes
EMAC_DMAOPMODE_TTC_128 =        0x00004000, // 128 bytes
EMAC_DMAOPMODE_TTC_192 =        0x00008000, // 192 bytes
EMAC_DMAOPMODE_TTC_256 =        0x0000C000, // 256 bytes
EMAC_DMAOPMODE_TTC_40 =         0x00010000, // 40 bytes
EMAC_DMAOPMODE_TTC_32 =         0x00014000, // 32 bytes
EMAC_DMAOPMODE_TTC_24 =         0x00018000, // 24 bytes
EMAC_DMAOPMODE_TTC_16 =         0x0001C000, // 16 bytes
EMAC_DMAOPMODE_ST =             0x00002000, // Start or Stop Transmission
                                            // Command
EMAC_DMAOPMODE_FEF =            0x00000080, // Forward Error Frames
EMAC_DMAOPMODE_FUF =            0x00000040, // Forward Undersized Good Frames
EMAC_DMAOPMODE_DGF =            0x00000020, // Drop Giant Frame Enable
EMAC_DMAOPMODE_RTC_M =          0x00000018, // Receive Threshold Control
EMAC_DMAOPMODE_RTC_64 =         0x00000000, // 64 bytes
EMAC_DMAOPMODE_RTC_32 =         0x00000008, // 32 bytes
EMAC_DMAOPMODE_RTC_96 =         0x00000010, // 96 bytes
EMAC_DMAOPMODE_RTC_128 =        0x00000018, // 128 bytes
EMAC_DMAOPMODE_OSF =            0x00000004, // Operate on Second Frame
EMAC_DMAOPMODE_SR =             0x00000002, // Start or Stop Receive

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_DMAIM register.
//
//*****************************************************************************
EMAC_DMAIM_NIE =                0x00010000, // Normal Interrupt Summary Enable
EMAC_DMAIM_AIE =                0x00008000, // Abnormal Interrupt Summary
                                            // Enable
EMAC_DMAIM_ERE =                0x00004000, // Early Receive Interrupt Enable
EMAC_DMAIM_FBE =                0x00002000, // Fatal Bus Error Enable
EMAC_DMAIM_ETE =                0x00000400, // Early Transmit Interrupt Enable
EMAC_DMAIM_RWE =                0x00000200, // Receive Watchdog Timeout Enable
EMAC_DMAIM_RSE =                0x00000100, // Receive Stopped Enable
EMAC_DMAIM_RUE =                0x00000080, // Receive Buffer Unavailable
                                            // Enable
EMAC_DMAIM_RIE =                0x00000040, // Receive Interrupt Enable
EMAC_DMAIM_UNE =                0x00000020, // Underflow Interrupt Enable
EMAC_DMAIM_OVE =                0x00000010, // Overflow Interrupt Enable
EMAC_DMAIM_TJE =                0x00000008, // Transmit Jabber Timeout Enable
EMAC_DMAIM_TUE =                0x00000004, // Transmit Buffer Unvailable
                                            // Enable
EMAC_DMAIM_TSE =                0x00000002, // Transmit Stopped Enable
EMAC_DMAIM_TIE =                0x00000001, // Transmit Interrupt Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_MFBOC register.
//
//*****************************************************************************
EMAC_MFBOC_OVFCNTOVF =          0x10000000, // Overflow Bit for FIFO Overflow
                                            // Counter
EMAC_MFBOC_OVFFRMCNT_M =        0x0FFE0000, // Overflow Frame Counter
EMAC_MFBOC_MISCNTOVF =          0x00010000, // Overflow bit for Missed Frame
                                            // Counter
EMAC_MFBOC_MISFRMCNT_M =        0x0000FFFF, // Missed Frame Counter
EMAC_MFBOC_OVFFRMCNT_S =        17,
EMAC_MFBOC_MISFRMCNT_S =        0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_RXINTWDT
// register.
//
//*****************************************************************************
EMAC_RXINTWDT_RIWT_M =          0x000000FF, // Receive Interrupt Watchdog Timer
                                            // Count
EMAC_RXINTWDT_RIWT_S =          0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_HOSTXDESC
// register.
//
//*****************************************************************************
EMAC_HOSTXDESC_CURTXDESC_M =                                                  \
                                0xFFFFFFFF, // Host Transmit Descriptor Address
                                            // Pointer
EMAC_HOSTXDESC_CURTXDESC_S =                                                  \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_HOSRXDESC
// register.
//
//*****************************************************************************
EMAC_HOSRXDESC_CURRXDESC_M =                                                  \
                                0xFFFFFFFF, // Host Receive Descriptor Address
                                            // Pointer
EMAC_HOSRXDESC_CURRXDESC_S =                                                  \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_HOSTXBA register.
//
//*****************************************************************************
EMAC_HOSTXBA_CURTXBUFA_M =                                                    \
                                0xFFFFFFFF, // Host Transmit Buffer Address
                                            // Pointer
EMAC_HOSTXBA_CURTXBUFA_S =                                                    \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_HOSRXBA register.
//
//*****************************************************************************
EMAC_HOSRXBA_CURRXBUFA_M =                                                    \
                                0xFFFFFFFF, // Host Receive Buffer Address
                                            // Pointer
EMAC_HOSRXBA_CURRXBUFA_S =                                                    \
                                0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_PP register.
//
//*****************************************************************************
EMAC_PP_MACTYPE_M =             0x00000700, // Ethernet MAC Type
EMAC_PP_MACTYPE_1 =             0x00000100, // Tiva TM4E129x-class MAC
EMAC_PP_PHYTYPE_M =             0x00000007, // Ethernet PHY Type
EMAC_PP_PHYTYPE_NONE =          0x00000000, // No PHY
EMAC_PP_PHYTYPE_1 =             0x00000003, // Snowflake class PHY

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_PC register.
//
//*****************************************************************************
EMAC_PC_PHYEXT =                0x80000000, // PHY Select
EMAC_PC_PINTFS_M =              0x70000000, // Ethernet Interface Select
EMAC_PC_PINTFS_IMII =           0x00000000, // MII (default) Used for internal
                                            // PHY or external PHY connected
                                            // via MII
EMAC_PC_PINTFS_RMII =           0x40000000, // RMII: Used for external PHY
                                            // connected via RMII
EMAC_PC_DIGRESTART =            0x02000000, // PHY Soft Restart
EMAC_PC_NIBDETDIS =             0x01000000, // Odd Nibble TXER Detection
                                            // Disable
EMAC_PC_RXERIDLE =              0x00800000, // RXER Detection During Idle
EMAC_PC_ISOMIILL =              0x00400000, // Isolate MII in Link Loss
EMAC_PC_LRR =                   0x00200000, // Link Loss Recovery
EMAC_PC_TDRRUN =                0x00100000, // TDR Auto Run
EMAC_PC_FASTLDMODE_M =          0x000F8000, // Fast Link Down Mode
EMAC_PC_POLSWAP =               0x00004000, // Polarity Swap
EMAC_PC_MDISWAP =               0x00002000, // MDI Swap
EMAC_PC_RBSTMDIX =              0x00001000, // Robust Auto MDI-X
EMAC_PC_FASTMDIX =              0x00000800, // Fast Auto MDI-X
EMAC_PC_MDIXEN =                0x00000400, // MDIX Enable
EMAC_PC_FASTRXDV =              0x00000200, // Fast RXDV Detection
EMAC_PC_FASTLUPD =              0x00000100, // FAST Link-Up in Parallel Detect
EMAC_PC_EXTFD =                 0x00000080, // Extended Full Duplex Ability
EMAC_PC_FASTANEN =              0x00000040, // Fast Auto Negotiation Enable
EMAC_PC_FASTANSEL_M =           0x00000030, // Fast Auto Negotiation Select
EMAC_PC_ANEN =                  0x00000008, // Auto Negotiation Enable
EMAC_PC_ANMODE_M =              0x00000006, // Auto Negotiation Mode
EMAC_PC_ANMODE_10HD =           0x00000000, // When ANEN =       0x0, the mode is
                                            // 10Base-T, Half-Duplex
EMAC_PC_ANMODE_10FD =           0x00000002, // When ANEN =       0x0, the mode is
                                            // 10Base-T, Full-Duplex
EMAC_PC_ANMODE_100HD =          0x00000004, // When ANEN =       0x0, the mode is
                                            // 100Base-TX, Half-Duplex
EMAC_PC_ANMODE_100FD =          0x00000006, // When ANEN =       0x0, the mode is
                                            // 100Base-TX, Full-Duplex
EMAC_PC_PHYHOLD =               0x00000001, // Ethernet PHY Hold
EMAC_PC_FASTLDMODE_S =          15,
EMAC_PC_FASTANSEL_S =           4,

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_CC register.
//
//*****************************************************************************
EMAC_CC_PTPCEN =                0x00040000, // PTP Clock Reference Enable
EMAC_CC_POL =                   0x00020000, // LED Polarity Control
EMAC_CC_CLKEN =                 0x00010000, // EN0RREF_CLK Signal Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_EPHYRIS register.
//
//*****************************************************************************
EMAC_EPHYRIS_INT =              0x00000001, // Ethernet PHY Raw Interrupt
                                            // Status

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_EPHYIM register.
//
//*****************************************************************************
EMAC_EPHYIM_INT =               0x00000001, // Ethernet PHY Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the EMAC_O_EPHYMISC
// register.
//
//*****************************************************************************
EMAC_EPHYMISC_INT =             0x00000001, // Ethernet PHY Status and Clear
                                            // register

//*****************************************************************************
//
// The following are defines for the EPHY register offsets.
//
//*****************************************************************************
EPHY_BMCR =                     0x00000000, // Ethernet PHY Basic Mode Control
EPHY_BMSR =                     0x00000001, // Ethernet PHY Basic Mode Status
EPHY_ID1 =                      0x00000002, // Ethernet PHY Identifier Register
                                            // 1
EPHY_ID2 =                      0x00000003, // Ethernet PHY Identifier Register
                                            // 2
EPHY_ANA =                      0x00000004, // Ethernet PHY Auto-Negotiation
                                            // Advertisement
EPHY_ANLPA =                    0x00000005, // Ethernet PHY Auto-Negotiation
                                            // Link Partner Ability
EPHY_ANER =                     0x00000006, // Ethernet PHY Auto-Negotiation
                                            // Expansion
EPHY_ANNPTR =                   0x00000007, // Ethernet PHY Auto-Negotiation
                                            // Next Page TX
EPHY_ANLNPTR =                  0x00000008, // Ethernet PHY Auto-Negotiation
                                            // Link Partner Ability Next Page
EPHY_CFG1 =                     0x00000009, // Ethernet PHY Configuration 1
EPHY_CFG2 =                     0x0000000A, // Ethernet PHY Configuration 2
EPHY_CFG3 =                     0x0000000B, // Ethernet PHY Configuration 3
EPHY_REGCTL =                   0x0000000D, // Ethernet PHY Register Control
EPHY_ADDAR =                    0x0000000E, // Ethernet PHY Address or Data
EPHY_STS =                      0x00000010, // Ethernet PHY Status
EPHY_SCR =                      0x00000011, // Ethernet PHY Specific Control
EPHY_MISR1 =                    0x00000012, // Ethernet PHY MII Interrupt
                                            // Status 1
EPHY_MISR2 =                    0x00000013, // Ethernet PHY MII Interrupt
                                            // Status 2
EPHY_FCSCR =                    0x00000014, // Ethernet PHY False Carrier Sense
                                            // Counter
EPHY_RXERCNT =                  0x00000015, // Ethernet PHY Receive Error Count
EPHY_BISTCR =                   0x00000016, // Ethernet PHY BIST Control
EPHY_LEDCR =                    0x00000018, // Ethernet PHY LED Control
EPHY_CTL =                      0x00000019, // Ethernet PHY Control
EPHY_10BTSC =                   0x0000001A, // Ethernet PHY 10Base-T
                                            // Status/Control - MR26
EPHY_BICSR1 =                   0x0000001B, // Ethernet PHY BIST Control and
                                            // Status 1
EPHY_BICSR2 =                   0x0000001C, // Ethernet PHY BIST Control and
                                            // Status 2
EPHY_CDCR =                     0x0000001E, // Ethernet PHY Cable Diagnostic
                                            // Control
EPHY_RCR =                      0x0000001F, // Ethernet PHY Reset Control
EPHY_LEDCFG =                   0x00000025, // Ethernet PHY LED Configuration

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_BMCR register.
//
//*****************************************************************************
EPHY_BMCR_MIIRESET =            0x00008000, // MII Register reset
EPHY_BMCR_MIILOOPBK =           0x00004000, // MII Loopback
EPHY_BMCR_SPEED =               0x00002000, // Speed Select
EPHY_BMCR_ANEN =                0x00001000, // Auto-Negotiate Enable
EPHY_BMCR_PWRDWN =              0x00000800, // Power Down
EPHY_BMCR_ISOLATE =             0x00000400, // Port Isolate
EPHY_BMCR_RESTARTAN =           0x00000200, // Restart Auto-Negotiation
EPHY_BMCR_DUPLEXM =             0x00000100, // Duplex Mode
EPHY_BMCR_COLLTST =             0x00000080, // Collision Test

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_BMSR register.
//
//*****************************************************************************
EPHY_BMSR_100BTXFD =            0x00004000, // 100Base-TX Full Duplex Capable
EPHY_BMSR_100BTXHD =            0x00002000, // 100Base-TX Half Duplex Capable
EPHY_BMSR_10BTFD =              0x00001000, // 10 Base-T Full Duplex Capable
EPHY_BMSR_10BTHD =              0x00000800, // 10 Base-T Half Duplex Capable
EPHY_BMSR_MFPRESUP =            0x00000040, // Preamble Suppression Capable
EPHY_BMSR_ANC =                 0x00000020, // Auto-Negotiation Complete
EPHY_BMSR_RFAULT =              0x00000010, // Remote Fault
EPHY_BMSR_ANEN =                0x00000008, // Auto Negotiation Enabled
EPHY_BMSR_LINKSTAT =            0x00000004, // Link Status
EPHY_BMSR_JABBER =              0x00000002, // Jabber Detect
EPHY_BMSR_EXTEN =               0x00000001, // Extended Capability Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_ID1 register.
//
//*****************************************************************************
EPHY_ID1_OUIMSB_M =             0x0000FFFF, // OUI Most Significant Bits
EPHY_ID1_OUIMSB_S =             0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_ID2 register.
//
//*****************************************************************************
EPHY_ID2_OUILSB_M =             0x0000FC00, // OUI Least Significant Bits
EPHY_ID2_VNDRMDL_M =            0x000003F0, // Vendor Model Number
EPHY_ID2_MDLREV_M =             0x0000000F, // Model Revision Number
EPHY_ID2_OUILSB_S =             10,
EPHY_ID2_VNDRMDL_S =            4,
EPHY_ID2_MDLREV_S =             0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_ANA register.
//
//*****************************************************************************
EPHY_ANA_NP =                   0x00008000, // Next Page Indication
EPHY_ANA_RF =                   0x00002000, // Remote Fault
EPHY_ANA_ASMDUP =               0x00000800, // Asymmetric PAUSE support for
                                            // Full Duplex Links
EPHY_ANA_PAUSE =                0x00000400, // PAUSE Support for Full Duplex
                                            // Links
EPHY_ANA_100BT4 =               0x00000200, // 100Base-T4 Support
EPHY_ANA_100BTXFD =             0x00000100, // 100Base-TX Full Duplex Support
EPHY_ANA_100BTX =               0x00000080, // 100Base-TX Support
EPHY_ANA_10BTFD =               0x00000040, // 10Base-T Full Duplex Support
EPHY_ANA_10BT =                 0x00000020, // 10Base-T Support
EPHY_ANA_SELECT_M =             0x0000001F, // Protocol Selection
EPHY_ANA_SELECT_S =             0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_ANLPA register.
//
//*****************************************************************************
EPHY_ANLPA_NP =                 0x00008000, // Next Page Indication
EPHY_ANLPA_ACK =                0x00004000, // Acknowledge
EPHY_ANLPA_RF =                 0x00002000, // Remote Fault
EPHY_ANLPA_ASMDUP =             0x00000800, // Asymmetric PAUSE
EPHY_ANLPA_PAUSE =              0x00000400, // PAUSE
EPHY_ANLPA_100BT4 =             0x00000200, // 100Base-T4 Support
EPHY_ANLPA_100BTXFD =           0x00000100, // 100Base-TX Full Duplex Support
EPHY_ANLPA_100BTX =             0x00000080, // 100Base-TX Support
EPHY_ANLPA_10BTFD =             0x00000040, // 10Base-T Full Duplex Support
EPHY_ANLPA_10BT =               0x00000020, // 10Base-T Support
EPHY_ANLPA_SELECT_M =           0x0000001F, // Protocol Selection
EPHY_ANLPA_SELECT_S =           0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_ANER register.
//
//*****************************************************************************
EPHY_ANER_PDF =                 0x00000010, // Parallel Detection Fault
EPHY_ANER_LPNPABLE =            0x00000008, // Link Partner Next Page Able
EPHY_ANER_NPABLE =              0x00000004, // Next Page Able
EPHY_ANER_PAGERX =              0x00000002, // Link Code Word Page Received
EPHY_ANER_LPANABLE =            0x00000001, // Link Partner Auto-Negotiation
                                            // Able

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_ANNPTR register.
//
//*****************************************************************************
EPHY_ANNPTR_NP =                0x00008000, // Next Page Indication
EPHY_ANNPTR_MP =                0x00002000, // Message Page
EPHY_ANNPTR_ACK2 =              0x00001000, // Acknowledge 2
EPHY_ANNPTR_TOGTX =             0x00000800, // Toggle
EPHY_ANNPTR_CODE_M =            0x000007FF, // Code
EPHY_ANNPTR_CODE_S =            0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_ANLNPTR register.
//
//*****************************************************************************
EPHY_ANLNPTR_NP =               0x00008000, // Next Page Indication
EPHY_ANLNPTR_ACK =              0x00004000, // Acknowledge
EPHY_ANLNPTR_MP =               0x00002000, // Message Page
EPHY_ANLNPTR_ACK2 =             0x00001000, // Acknowledge 2
EPHY_ANLNPTR_TOG =              0x00000800, // Toggle
EPHY_ANLNPTR_CODE_M =           0x000007FF, // Code
EPHY_ANLNPTR_CODE_S =           0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_CFG1 register.
//
//*****************************************************************************
EPHY_CFG1_DONE =                0x00008000, // Configuration Done
EPHY_CFG1_TDRAR =               0x00000100, // TDR Auto-Run at Link Down
EPHY_CFG1_LLR =                 0x00000080, // Link Loss Recovery
EPHY_CFG1_FAMDIX =              0x00000040, // Fast Auto MDI/MDIX
EPHY_CFG1_RAMDIX =              0x00000020, // Robust Auto MDI/MDIX
EPHY_CFG1_FASTANEN =            0x00000010, // Fast Auto Negotiation Enable
EPHY_CFG1_FANSEL_M =            0x0000000C, // Fast Auto-Negotiation Select
                                            // Configuration
EPHY_CFG1_FANSEL_BLT80 =        0x00000000, // Break Link Timer: 80 ms
EPHY_CFG1_FANSEL_BLT120 =       0x00000004, // Break Link Timer: 120 ms
EPHY_CFG1_FANSEL_BLT240 =       0x00000008, // Break Link Timer: 240 ms
EPHY_CFG1_FRXDVDET =            0x00000002, // FAST RXDV Detection

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_CFG2 register.
//
//*****************************************************************************
EPHY_CFG2_FLUPPD =              0x00000040, // Fast Link-Up in Parallel Detect
                                            // Mode
EPHY_CFG2_EXTFD =               0x00000020, // Extended Full-Duplex Ability
EPHY_CFG2_ENLEDLINK =           0x00000010, // Enhanced LED Functionality
EPHY_CFG2_ISOMIILL =            0x00000008, // Isolate MII outputs when
                                            // Enhanced Link is not Achievable
EPHY_CFG2_RXERRIDLE =           0x00000004, // Detection of Receive Symbol
                                            // Error During IDLE State
EPHY_CFG2_ODDNDETDIS =          0x00000002, // Detection of Transmit Error

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_CFG3 register.
//
//*****************************************************************************
EPHY_CFG3_POLSWAP =             0x00000080, // Polarity Swap
EPHY_CFG3_MDIMDIXS =            0x00000040, // MDI/MDIX Swap
EPHY_CFG3_FLDWNM_M =            0x0000001F, // Fast Link Down Modes
EPHY_CFG3_FLDWNM_S =            0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_REGCTL register.
//
//*****************************************************************************
EPHY_REGCTL_FUNC_M =            0x0000C000, // Function
EPHY_REGCTL_FUNC_ADDR =         0x00000000, // Address
EPHY_REGCTL_FUNC_DATANI =       0x00004000, // Data, no post increment
EPHY_REGCTL_FUNC_DATAPIRW =                                                   \
                                0x00008000, // Data, post increment on read and
                                            // write
EPHY_REGCTL_FUNC_DATAPIWO =                                                   \
                                0x0000C000, // Data, post increment on write
                                            // only
EPHY_REGCTL_DEVAD_M =           0x0000001F, // Device Address
EPHY_REGCTL_DEVAD_S =           0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_ADDAR register.
//
//*****************************************************************************
EPHY_ADDAR_ADDRDATA_M =         0x0000FFFF, // Address or Data
EPHY_ADDAR_ADDRDATA_S =         0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_STS register.
//
//*****************************************************************************
EPHY_STS_MDIXM =                0x00004000, // MDI-X Mode
EPHY_STS_RXLERR =               0x00002000, // Receive Error Latch
EPHY_STS_POLSTAT =              0x00001000, // Polarity Status
EPHY_STS_FCSL =                 0x00000800, // False Carrier Sense Latch
EPHY_STS_SD =                   0x00000400, // Signal Detect
EPHY_STS_DL =                   0x00000200, // Descrambler Lock
EPHY_STS_PAGERX =               0x00000100, // Link Code Page Received
EPHY_STS_MIIREQ =               0x00000080, // MII Interrupt Pending
EPHY_STS_RF =                   0x00000040, // Remote Fault
EPHY_STS_JD =                   0x00000020, // Jabber Detect
EPHY_STS_ANS =                  0x00000010, // Auto-Negotiation Status
EPHY_STS_MIILB =                0x00000008, // MII Loopback Status
EPHY_STS_DUPLEX =               0x00000004, // Duplex Status
EPHY_STS_SPEED =                0x00000002, // Speed Status
EPHY_STS_LINK =                 0x00000001, // Link Status

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_SCR register.
//
//*****************************************************************************
EPHY_SCR_DISCLK =               0x00008000, // Disable CLK
EPHY_SCR_PSEN =                 0x00004000, // Power Saving Modes Enable
EPHY_SCR_PSMODE_M =             0x00003000, // Power Saving Modes
EPHY_SCR_PSMODE_NORMAL =        0x00000000, // Normal: Normal operation mode.
                                            // PHY is fully functional
EPHY_SCR_PSMODE_LOWPWR =        0x00001000, // IEEE Power Down
EPHY_SCR_PSMODE_ACTWOL =        0x00002000, // Active Sleep
EPHY_SCR_PSMODE_PASWOL =        0x00003000, // Passive Sleep
EPHY_SCR_SBPYASS =              0x00000800, // Scrambler Bypass
EPHY_SCR_LBFIFO_M =             0x00000300, // Loopback FIFO Depth
EPHY_SCR_LBFIFO_4 =             0x00000000, // Four nibble FIFO
EPHY_SCR_LBFIFO_5 =             0x00000100, // Five nibble FIFO
EPHY_SCR_LBFIFO_6 =             0x00000200, // Six nibble FIFO
EPHY_SCR_LBFIFO_8 =             0x00000300, // Eight nibble FIFO
EPHY_SCR_COLFDM =               0x00000010, // Collision in Full-Duplex Mode
EPHY_SCR_TINT =                 0x00000004, // Test Interrupt
EPHY_SCR_INTEN =                0x00000002, // Interrupt Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_MISR1 register.
//
//*****************************************************************************
EPHY_MISR1_LINKSTAT =           0x00002000, // Change of Link Status Interrupt
EPHY_MISR1_SPEED =              0x00001000, // Change of Speed Status Interrupt
EPHY_MISR1_DUPLEXM =            0x00000800, // Change of Duplex Status
                                            // Interrupt
EPHY_MISR1_ANC =                0x00000400, // Auto-Negotiation Complete
                                            // Interrupt
EPHY_MISR1_FCHF =               0x00000200, // False Carrier Counter Half-Full
                                            // Interrupt
EPHY_MISR1_RXHF =               0x00000100, // Receive Error Counter Half-Full
                                            // Interrupt
EPHY_MISR1_LINKSTATEN =         0x00000020, // Link Status Interrupt Enable
EPHY_MISR1_SPEEDEN =            0x00000010, // Speed Change Interrupt Enable
EPHY_MISR1_DUPLEXMEN =          0x00000008, // Duplex Status Interrupt Enable
EPHY_MISR1_ANCEN =              0x00000004, // Auto-Negotiation Complete
                                            // Interrupt Enable
EPHY_MISR1_FCHFEN =             0x00000002, // False Carrier Counter Register
                                            // half-full Interrupt Enable
EPHY_MISR1_RXHFEN =             0x00000001, // Receive Error Counter Register
                                            // Half-Full Event Interrupt

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_MISR2 register.
//
//*****************************************************************************
EPHY_MISR2_ANERR =              0x00004000, // Auto-Negotiation Error Interrupt
EPHY_MISR2_PAGERX =             0x00002000, // Page Receive Interrupt
EPHY_MISR2_LBFIFO =             0x00001000, // Loopback FIFO Overflow/Underflow
                                            // Event Interrupt
EPHY_MISR2_MDICO =              0x00000800, // MDI/MDIX Crossover Status
                                            // Changed Interrupt
EPHY_MISR2_SLEEP =              0x00000400, // Sleep Mode Event Interrupt
EPHY_MISR2_POLINT =             0x00000200, // Polarity Changed Interrupt
EPHY_MISR2_JABBER =             0x00000100, // Jabber Detect Event Interrupt
EPHY_MISR2_ANERREN =            0x00000040, // Auto-Negotiation Error Interrupt
                                            // Enable
EPHY_MISR2_PAGERXEN =           0x00000020, // Page Receive Interrupt Enable
EPHY_MISR2_LBFIFOEN =           0x00000010, // Loopback FIFO Overflow/Underflow
                                            // Interrupt Enable
EPHY_MISR2_MDICOEN =            0x00000008, // MDI/MDIX Crossover Status
                                            // Changed Interrupt Enable
EPHY_MISR2_SLEEPEN =            0x00000004, // Sleep Mode Event Interrupt
                                            // Enable
EPHY_MISR2_POLINTEN =           0x00000002, // Polarity Changed Interrupt
                                            // Enable
EPHY_MISR2_JABBEREN =           0x00000001, // Jabber Detect Event Interrupt
                                            // Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_FCSCR register.
//
//*****************************************************************************
EPHY_FCSCR_FCSCNT_M =           0x000000FF, // False Carrier Event Counter
EPHY_FCSCR_FCSCNT_S =           0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_RXERCNT register.
//
//*****************************************************************************
EPHY_RXERCNT_RXERRCNT_M =       0x0000FFFF, // Receive Error Count
EPHY_RXERCNT_RXERRCNT_S =       0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_BISTCR register.
//
//*****************************************************************************
EPHY_BISTCR_PRBSM =             0x00004000, // PRBS Single/Continuous Mode
EPHY_BISTCR_PRBSPKT =           0x00002000, // Generated PRBS Packets
EPHY_BISTCR_PKTEN =             0x00001000, // Packet Generation Enable
EPHY_BISTCR_PRBSCHKLK =         0x00000800, // PRBS Checker Lock Indication
EPHY_BISTCR_PRBSCHKSYNC =       0x00000400, // PRBS Checker Lock Sync Loss
                                            // Indication
EPHY_BISTCR_PKTGENSTAT =        0x00000200, // Packet Generator Status
                                            // Indication
EPHY_BISTCR_PWRMODE =           0x00000100, // Power Mode Indication
EPHY_BISTCR_TXMIILB =           0x00000040, // Transmit Data in MII Loopback
                                            // Mode
EPHY_BISTCR_LBMODE_M =          0x0000001F, // Loopback Mode Select
EPHY_BISTCR_LBMODE_NPCSIN =                                                   \
                                0x00000001, // Near-end loopback: PCS Input
                                            // Loopback
EPHY_BISTCR_LBMODE_NPCSOUT =                                                  \
                                0x00000002, // Near-end loopback: PCS Output
                                            // Loopback (In 100Base-TX only)
EPHY_BISTCR_LBMODE_NDIG =       0x00000004, // Near-end loopback: Digital
                                            // Loopback
EPHY_BISTCR_LBMODE_NANA =       0x00000008, // Near-end loopback: Analog
                                            // Loopback (requires 100 Ohm
                                            // termination)
EPHY_BISTCR_LBMODE_FREV =       0x00000010, // Far-end Loopback: Reverse
                                            // Loopback

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_LEDCR register.
//
//*****************************************************************************
EPHY_LEDCR_BLINKRATE_M =        0x00000600, // LED Blinking Rate (ON/OFF
                                            // duration):
EPHY_LEDCR_BLINKRATE_20HZ =                                                   \
                                0x00000000, // 20 Hz (50 ms)
EPHY_LEDCR_BLINKRATE_10HZ =                                                   \
                                0x00000200, // 10 Hz (100 ms)
EPHY_LEDCR_BLINKRATE_5HZ =                                                    \
                                0x00000400, // 5 Hz (200 ms)
EPHY_LEDCR_BLINKRATE_2HZ =                                                    \
                                0x00000600, // 2 Hz (500 ms)

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_CTL register.
//
//*****************************************************************************
EPHY_CTL_AUTOMDI =              0x00008000, // Auto-MDIX Enable
EPHY_CTL_FORCEMDI =             0x00004000, // Force MDIX
EPHY_CTL_PAUSERX =              0x00002000, // Pause Receive Negotiated Status
EPHY_CTL_PAUSETX =              0x00001000, // Pause Transmit Negotiated Status
EPHY_CTL_MIILNKSTAT =           0x00000800, // MII Link Status
EPHY_CTL_BYPLEDSTRCH =          0x00000080, // Bypass LED Stretching

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_10BTSC register.
//
//*****************************************************************************
EPHY_10BTSC_RXTHEN =            0x00002000, // Lower Receiver Threshold Enable
EPHY_10BTSC_SQUELCH_M =         0x00001E00, // Squelch Configuration
EPHY_10BTSC_NLPDIS =            0x00000080, // Normal Link Pulse (NLP)
                                            // Transmission Control
EPHY_10BTSC_POLSTAT =           0x00000010, // 10 Mb Polarity Status
EPHY_10BTSC_JABBERD =           0x00000001, // Jabber Disable
EPHY_10BTSC_SQUELCH_S =         9,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_BICSR1 register.
//
//*****************************************************************************
EPHY_BICSR1_ERRCNT_M =          0x0000FF00, // BIST Error Count
EPHY_BICSR1_IPGLENGTH_M =       0x000000FF, // BIST IPG Length
EPHY_BICSR1_ERRCNT_S =          8,
EPHY_BICSR1_IPGLENGTH_S =       0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_BICSR2 register.
//
//*****************************************************************************
EPHY_BICSR2_PKTLENGTH_M =       0x000007FF, // BIST Packet Length
EPHY_BICSR2_PKTLENGTH_S =       0,

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_CDCR register.
//
//*****************************************************************************
EPHY_CDCR_START =               0x00008000, // Cable Diagnostic Process Start
EPHY_CDCR_LINKQUAL_M =          0x00000300, // Link Quality Indication
EPHY_CDCR_LINKQUAL_GOOD =       0x00000100, // Good Quality Link Indication
EPHY_CDCR_LINKQUAL_MILD =       0x00000200, // Mid- Quality Link Indication
EPHY_CDCR_LINKQUAL_POOR =       0x00000300, // Poor Quality Link Indication
EPHY_CDCR_DONE =                0x00000002, // Cable Diagnostic Process Done
EPHY_CDCR_FAIL =                0x00000001, // Cable Diagnostic Process Fail

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_RCR register.
//
//*****************************************************************************
EPHY_RCR_SWRST =                0x00008000, // Software Reset
EPHY_RCR_SWRESTART =            0x00004000, // Software Restart

//*****************************************************************************
//
// The following are defines for the bit fields in the EPHY_LEDCFG register.
//
//*****************************************************************************
EPHY_LEDCFG_LED2_M =            0x00000F00, // LED2 Configuration
EPHY_LEDCFG_LED2_LINK =         0x00000000, // Link OK
EPHY_LEDCFG_LED2_RXTX =         0x00000100, // RX/TX Activity
EPHY_LEDCFG_LED2_TX =           0x00000200, // TX Activity
EPHY_LEDCFG_LED2_RX =           0x00000300, // RX Activity
EPHY_LEDCFG_LED2_COL =          0x00000400, // Collision
EPHY_LEDCFG_LED2_100BT =        0x00000500, // 100-Base TX
EPHY_LEDCFG_LED2_10BT =         0x00000600, // 10-Base TX
EPHY_LEDCFG_LED2_FD =           0x00000700, // Full Duplex
EPHY_LEDCFG_LED2_LINKTXRX =                                                   \
                                0x00000800, // Link OK/Blink on TX/RX Activity
EPHY_LEDCFG_LED1_M =            0x000000F0, // LED1 Configuration
EPHY_LEDCFG_LED1_LINK =         0x00000000, // Link OK
EPHY_LEDCFG_LED1_RXTX =         0x00000010, // RX/TX Activity
EPHY_LEDCFG_LED1_TX =           0x00000020, // TX Activity
EPHY_LEDCFG_LED1_RX =           0x00000030, // RX Activity
EPHY_LEDCFG_LED1_COL =          0x00000040, // Collision
EPHY_LEDCFG_LED1_100BT =        0x00000050, // 100-Base TX
EPHY_LEDCFG_LED1_10BT =         0x00000060, // 10-Base TX
EPHY_LEDCFG_LED1_FD =           0x00000070, // Full Duplex
EPHY_LEDCFG_LED1_LINKTXRX =                                                   \
                                0x00000080, // Link OK/Blink on TX/RX Activity
EPHY_LEDCFG_LED0_M =            0x0000000F, // LED0 Configuration
EPHY_LEDCFG_LED0_LINK =         0x00000000, // Link OK
EPHY_LEDCFG_LED0_RXTX =         0x00000001, // RX/TX Activity
EPHY_LEDCFG_LED0_TX =           0x00000002, // TX Activity
EPHY_LEDCFG_LED0_RX =           0x00000003, // RX Activity
EPHY_LEDCFG_LED0_COL =          0x00000004, // Collision
EPHY_LEDCFG_LED0_100BT =        0x00000005, // 100-Base TX
EPHY_LEDCFG_LED0_10BT =         0x00000006, // 10-Base TX
EPHY_LEDCFG_LED0_FD =           0x00000007, // Full Duplex
EPHY_LEDCFG_LED0_LINKTXRX =                                                   \
                                0x00000008, // Link OK/Blink on TX/RX Activity

//*****************************************************************************
//
// The following definitions are deprecated.
//
//*****************************************************************************
#ifndef DEPRECATED

//*****************************************************************************
//
// The following are deprecated defines for the bit fields in the EMAC_O_CC
// register.
//
//*****************************************************************************
EMAC_CC_CS_PA7 =                0x00000001, // GPIO

#endif
} ;

#endif // __HW_EMAC_H__
