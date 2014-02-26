/*
 *    kinetis_sysinit.c - Default init routines for P2
 *                     		Kinetis ARM systems
 *    Copyright © 2012 Freescale semiConductor Inc. All Rights Reserved.
 */
 
#include "kinetis_sysinit.h"
#include "derivative.h"

/**
 **===========================================================================
 **  External declarations
 **===========================================================================
 */
#if __cplusplus
extern "C" {
#endif
extern uint32_t __vector_table[];
extern unsigned long _estack;
extern void __thumb_startup(void);
#if __cplusplus
}
#endif

/**
 **===========================================================================
 **  Default interrupt handler
 **===========================================================================
 */
void Default_Handler_10()
{
	__asm("bkpt");
}
void Default_Handler_11()
{
	__asm("bkpt");
}
void Default_Handler_12()
{
	__asm("bkpt");
}
void Default_Handler_13()
{
	__asm("bkpt");
}
void Default_Handler_14()
{
	__asm("bkpt");
}
void Default_Handler_15()
{
	__asm("bkpt");
}
void Default_Handler_16()
{
	__asm("bkpt");
}
void Default_Handler_17()
{
	__asm("bkpt");
}
void Default_Handler_18()
{
	__asm("bkpt");
}
void Default_Handler_19()
{
	__asm("bkpt");
}
void Default_Handler_1A()
{
	__asm("bkpt");
}
void Default_Handler_1B()
{
	__asm("bkpt");
}
void Default_Handler_1C()
{
	__asm("bkpt");
}
void Default_Handler_1D()
{
	__asm("bkpt");
}
void Default_Handler_1E()
{
	__asm("bkpt");
}
void Default_Handler_1F()
{
	__asm("bkpt");
}

void Default_Handler_20()
{
	__asm("bkpt");
}
void Default_Handler_21()
{
	__asm("bkpt");
}
void Default_Handler_22()
{
	__asm("bkpt");
}
void Default_Handler_23()
{
	__asm("bkpt");
}
void Default_Handler_24()
{
	__asm("bkpt");
}
void Default_Handler_25()
{
	__asm("bkpt");
}
void Default_Handler_26()
{
	__asm("bkpt");
}
void Default_Handler_27()
{
	__asm("bkpt");
}
void Default_Handler_28()
{
	__asm("bkpt");
}
void Default_Handler_29()
{
	__asm("bkpt");
}
void Default_Handler_2A()
{
	__asm("bkpt");
}
void Default_Handler_2B()
{
	__asm("bkpt");
}
void Default_Handler_2C()
{
	__asm("bkpt");
}
void Default_Handler_2D()
{
	__asm("bkpt");
}
void Default_Handler_2E()
{
	__asm("bkpt");
}
void Default_Handler_2F()
{
	__asm("bkpt");
}

/****/

void Default_Handler_30()
{
	__asm("bkpt");
}
void Default_Handler_31()
{
	__asm("bkpt");
}
void Default_Handler_32()
{
	__asm("bkpt");
}
void Default_Handler_33()
{
	__asm("bkpt");
}
void Default_Handler_34()
{
	__asm("bkpt");
}
void Default_Handler_35()
{
	__asm("bkpt");
}
void Default_Handler_36()
{
	__asm("bkpt");
}
void Default_Handler_37()
{
	__asm("bkpt");
}
void Default_Handler_38()
{
	__asm("bkpt");
}
void Default_Handler_39()
{
	__asm("bkpt");
}
void Default_Handler_3A()
{
	__asm("bkpt");
}
void Default_Handler_3B()
{
	__asm("bkpt");
}
void Default_Handler_3C()
{
	__asm("bkpt");
}
void Default_Handler_3D()
{
	__asm("bkpt");
}
void Default_Handler_3E()
{
	__asm("bkpt");
}
void Default_Handler_3F()
{
	__asm("bkpt");
}


/****/

void Default_Handler_40()
{
	__asm("bkpt");
}
void Default_Handler_41()
{
	__asm("bkpt");
}
void Default_Handler_42()
{
	__asm("bkpt");
}
void Default_Handler_43()
{
	__asm("bkpt");
}
void Default_Handler_44()
{
	__asm("bkpt");
}
void Default_Handler_45()
{
	__asm("bkpt");
}
void Default_Handler_46()
{
	__asm("bkpt");
}
void Default_Handler_47()
{
	__asm("bkpt");
}
void Default_Handler_48()
{
	__asm("bkpt");
}
void Default_Handler_49()
{
	__asm("bkpt");
}
void Default_Handler_4A()
{
	__asm("bkpt");
}
void Default_Handler_4B()
{
	__asm("bkpt");
}
void Default_Handler_4C()
{
	__asm("bkpt");
}
void Default_Handler_4D()
{
	__asm("bkpt");
}
void Default_Handler_4E()
{
	__asm("bkpt");
}
void Default_Handler_4F()
{
	__asm("bkpt");
}
/****/


void Default_Handler_50()
{
	__asm("bkpt");
}
void Default_Handler_51()
{
	__asm("bkpt");
}
void Default_Handler_52()
{
	__asm("bkpt");
}
void Default_Handler_53()
{
	__asm("bkpt");
}
void Default_Handler_54()
{
	__asm("bkpt");
}
void Default_Handler_55()
{
	__asm("bkpt");
}
void Default_Handler_56()
{
	__asm("bkpt");
}
void Default_Handler_57()
{
	__asm("bkpt");
}
void Default_Handler_58()
{
	__asm("bkpt");
}
void Default_Handler_59()
{
	__asm("bkpt");
}
void Default_Handler_5A()
{
	__asm("bkpt");
}
void Default_Handler_5B()
{
	__asm("bkpt");
}
void Default_Handler_5C()
{
	__asm("bkpt");
}
void Default_Handler_5D()
{
	__asm("bkpt");
}
void Default_Handler_5E()
{
	__asm("bkpt");
}
void Default_Handler_5F()
{
	__asm("bkpt");
}


/****/

void Default_Handler_60()
{
	__asm("bkpt");
}
void Default_Handler_61()
{
	__asm("bkpt");
}
void Default_Handler_62()
{
	__asm("bkpt");
}
void Default_Handler_63()
{
	__asm("bkpt");
}
void Default_Handler_64()
{
	__asm("bkpt");
}
void Default_Handler_65()
{
	__asm("bkpt");
}
void Default_Handler_66()
{
	__asm("bkpt");
}
void Default_Handler_67()
{
	__asm("bkpt");
}
void Default_Handler_68()
{
	__asm("bkpt");
}
void Default_Handler_69()
{
	__asm("bkpt");
}
void Default_Handler_6A()
{
	__asm("bkpt");
}
void Default_Handler_6B()
{
	__asm("bkpt");
}
void Default_Handler_6C()
{
	__asm("bkpt");
}
void Default_Handler_6D()
{
	__asm("bkpt");
}
void Default_Handler_6E()
{
	__asm("bkpt");
}
void Default_Handler_6F()
{
	__asm("bkpt");
}



/****/

void Default_Handler_70()
{
	__asm("bkpt");
}
void Default_Handler_71()
{
	__asm("bkpt");
}
void Default_Handler_72()
{
	__asm("bkpt");
}
void Default_Handler_73()
{
	__asm("bkpt");
}
void Default_Handler_74()
{
	__asm("bkpt");
}
void Default_Handler_75()
{
	__asm("bkpt");
}
void Default_Handler_76()
{
	__asm("bkpt");
}
void Default_Handler_77()
{
	__asm("bkpt");
}

void Default_Handler()
{
	__asm("bkpt");
}

extern void IRQ_ISR_PORTA();
extern void IRQ_ISR_PORTC();
extern void IRQ_ISR_PORTE();
extern void USB_ISR(void);

/**
 **===========================================================================
 **  Reset handler
 **===========================================================================
 */
void __init_hardware()
{
	SCB_VTOR = (uint32_t)__vector_table; /* Set the interrupt vector table position */
	/*
		Disable the Watchdog because it may reset the core before entering main().
		There are 2 unlock words which shall be provided in sequence before
		accessing the control register.
	*/
	WDOG_UNLOCK = KINETIS_WDOG_UNLOCK_SEQ_1;
	WDOG_UNLOCK = KINETIS_WDOG_UNLOCK_SEQ_2;
	WDOG_STCTRLH = KINETIS_WDOG_DISABLED_CTRL;
}

/* Weak definitions of handlers point to Default_Handler if not implemented */
void NMI_Handler() __attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler() __attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler() __attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler() __attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler() __attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler() __attribute__ ((weak, alias("Default_Handler")));
void DebugMonitor_Handler() __attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler() __attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler() __attribute__ ((weak, alias("Default_Handler")));


/* The Interrupt Vector Table */
void (* const InterruptVector[])() __attribute__ ((section(".vectortable"))) = {
    /* Processor exceptions */
    (void(*)(void)) &_estack,
    __thumb_startup,/* 0x01  0x00000004   -   ivINT_Initial_Program_Counter */ 
    NMI_Handler, /* 0x02  0x00000008   -2   ivINT_NMI */ 
    HardFault_Handler, /* 0x03  0x0000000C   -1   ivINT_Hard_Fault */ 
    MemManage_Handler, /* 0x04  0x00000010   -   ivINT_Reserved4 */ 
    BusFault_Handler,/* 0x05  0x00000014   -   ivINT_Bus_Fault */
    UsageFault_Handler, /* 0x06  0x00000018   -   ivINT_Usage_Fault */
    0, /* 0x07  0x0000001C   -   ivINT_Reserved7  */
    0, /* 0x08  0x0000001C   -   ivINT_Reserved8  */
    0, /* 0x09  0x0000001C   -   ivINT_Reserved9 */
    0, /* 0x0A  0x0000001C   -   ivINT_Reserved10  */
    SVC_Handler, /* 0x0B  0x0000002C   -   ivINT_SVCall */ 
    DebugMonitor_Handler, /* 0x0C  0x00000030   -   ivINT_DebugMonitor */ 
    0,/* 0x0D  0x00000034   -   ivINT_Reserved13 */
    PendSV_Handler, /* 0x0E  0x00000038   -   ivINT_PendableSrvReq */
    SysTick_Handler,/* 0x0F  0x0000003C   -   ivINT_SysTick */

    /* Interrupts */
    Default_Handler_10, /* 0x10  0x00000040   -   ivINT_DMA0  */
    Default_Handler_11,/* 0x11  0x00000044   -   ivINT_DMA1 */
    Default_Handler_12,/* 0x12  0x00000048   -   ivINT_DMA2 */
    Default_Handler_13,/* 0x13  0x0000004C   -   ivINT_DMA3 */
    Default_Handler_14,/* 0x14  0x00000050   -   ivINT_DMA4  */
    Default_Handler_15,/* 0x14  0x00000050   -   ivINT_DMA4  */
    Default_Handler_16,/* 0x16  0x00000058   -   ivINT_DMA6 */
    Default_Handler_17,/* 0x17  0x0000005C   -   ivINT_DMA7 */
    Default_Handler_18,/* 0x18  0x00000060   -   ivINT_DMA8 */
    Default_Handler_19,/* 0x19  0x00000064   -   ivINT_DMA9 */
    Default_Handler_1A,/* 0x1A  0x00000068   -   ivINT_DMA10 */
    Default_Handler_1B,/* 0x1B  0x0000006C   -   ivINT_DMA11 */
    Default_Handler_1C,/* 0x1C  0x00000070   -   ivINT_DMA12 */
    Default_Handler_1D,/* 0x1D  0x00000074   -   ivINT_DMA13  */
    Default_Handler_1E,/* 0x1E  0x00000078   -   ivINT_DMA14 */
    Default_Handler_1F,/* 0x1F  0x0000007C   -   ivINT_DMA15  */
    Default_Handler_20,/* 0x20  0x00000080   -   ivINT_DMA_Error */
    Default_Handler_21,/* 0x21  0x00000084   -   ivINT_MCM   */
    Default_Handler_22,/* 0x22  0x00000088   -   ivINT_FTFL */
    Default_Handler_23,/* 0x23  0x0000008C   -   ivINT_Read_Collision */
    Default_Handler_24,/* 0x24  0x00000090   -   ivINT_LVD_LVW  */
    Default_Handler_25,/* 0x25  0x00000094   -   ivINT_LLW */
    Default_Handler_26,/* 0x26  0x00000098   -   ivINT_Watchdog */
    Default_Handler_27,/* 0x27  0x0000009C   -   ivINT_Reserved39 */
    Default_Handler_28,/* 0x28  0x000000A0   -   ivINT_I2C0 */ 
    Default_Handler_29,/* 0x29  0x000000A4   -   ivINT_I2C1 */
    Default_Handler_2A,/* 0x2A  0x000000A8   -   ivINT_SPI0 */
    Default_Handler_2B,/* 0x2B  0x000000AC   -   ivINT_SPI1 */
    Default_Handler_2C,/* 0x2C  0x000000B0   -   ivINT_SPI2 */
    Default_Handler_2D,/* 0x2D  0x000000B4   -   ivINT_CAN0_ORed_Message_buffer */
    Default_Handler_2E,/* 0x2E  0x000000B8   -   ivINT_CAN0_Bus_Off */
    Default_Handler_2F,/* 0x2F  0x000000BC   -   ivINT_CAN0_Error */
    Default_Handler_30,/* 0x30  0x000000C0   -   ivINT_CAN0_Tx_Warning */
    Default_Handler_31,/* 0x31  0x000000C4   -   ivINT_CAN0_Rx_Warning */
    Default_Handler_32,/* 0x32  0x000000C8   -   ivINT_CAN0_Wake_Up */
    Default_Handler_33,/* 0x33  0x000000CC   -   ivINT_CAN0_IMEU */
    Default_Handler_34,/* 0x34  0x000000D0   -   ivINT_CAN0_Lost_Rx */
    Default_Handler_35,/* 0x35  0x000000D4   -   ivINT_CAN1_ORed_Message_buffer */
    Default_Handler_36,/* 0x36  0x000000D8   -   ivINT_CAN1_Bus_Off */
    Default_Handler_37,/* 0x37  0x000000DC   -   ivINT_CAN1_Error  */
    Default_Handler_38,/* 0x38  0x000000E0   -   ivINT_CAN1_Tx_Warning */
    Default_Handler_39,/* 0x39  0x000000E4   -   ivINT_CAN1_Rx_Warning */
    Default_Handler_3A,/* 0x3A  0x000000E8   -   ivINT_CAN1_Wake_Up  */
    Default_Handler_3B,/* 0x3B  0x000000EC   -   ivINT_CAN1_IMEU */
    Default_Handler_3C,/* 0x3C  0x000000F0   -   ivINT_CAN1_Lost_Rx */ 
    Default_Handler_3D,/* 0x3D  0x000000F4   -   ivINT_UART0_RX_TX */
    Default_Handler_3E,/* 0x3E  0x000000F8   -   ivINT_UART0_ERR */
    Default_Handler_3F,/* 0x3F  0x000000FC   -   ivINT_UART1_RX_TX */
    Default_Handler_40,/* 0x40  0x00000100   -   ivINT_UART1_ERR */
    Default_Handler_41,/* 0x41  0x00000104   -   ivINT_UART2_RX_TX */
    Default_Handler_42,/* 0x42  0x00000108   -   ivINT_UART2_ERR */
    Default_Handler_43,/* 0x43  0x0000010C   -   ivINT_UART3_RX_TX */
    Default_Handler_44,/* 0x44  0x00000110   -   ivINT_UART3_ERR  */
    Default_Handler_45,/* 0x45  0x00000114   -   ivINT_UART4_RX_TX */
    Default_Handler_46,/* 0x46  0x00000118   -   ivINT_UART4_ERR  */
    Default_Handler_47,/* 0x47  0x0000011C   -   ivINT_UART5_RX_TX */
    Default_Handler_48,/* 0x48  0x00000120   -   ivINT_UART5_ERR */
    Default_Handler_49,/* 0x49  0x00000124   -   ivINT_ADC0 */
    Default_Handler_4A,/* 0x4A  0x00000128   -   ivINT_ADC1 */
    Default_Handler_4B,/* 0x4B  0x0000012C   -   ivINT_HSCMP0 */
    Default_Handler_4C,/* 0x4C  0x00000130   -   ivINT_HSCMP1 */
    Default_Handler_4D,/* 0x4D  0x00000134   -   ivINT_HSCMP2 */
    Default_Handler_4E,/* 0x4E  0x00000138   -   ivINT_FTM0 */
    Default_Handler_4F,/* 0x4F  0x0000013C   -   ivINT_FTM1 */
    Default_Handler_50,/* 0x50  0x00000140   -   ivINT_FTM2  */
    Default_Handler_51,/* 0x51  0x00000144   -   ivINT_CMT */
    Default_Handler_52,/* 0x52  0x00000148   -   ivINT_RTC */
    Default_Handler_53,/* 0x53  0x0000014C   -   ivINT_Reserved83 */
    Default_Handler_54,/* 0x54  0x00000150   -   ivINT_PIT0  */
    Default_Handler_55,/* 0x55  0x00000154   -   ivINT_PIT1  */
    Default_Handler_56,/* 0x56  0x00000158   -   ivINT_PIT2  */
    Default_Handler_57,/* 0x57  0x0000015C   -   ivINT_PIT3  */
    Default_Handler_58,/* 0x58  0x00000160   -   ivINT_PDB0 */
    USB_ISR,/* 0x59  0x00000164   -   ivINT_USB0   */
    Default_Handler_5A,/* 0x5A  0x00000168   -   ivINT_USBDCD */
    Default_Handler_5B,/* 0x5B  0x0000016C   -   ivINT_Reserved91 */
    Default_Handler_5C,/* 0x5C  0x0000016C   -   ivINT_Reserved92 */
    Default_Handler_5D,/* 0x5D  0x0000016C   -   ivINT_Reserved93 */
    Default_Handler_5E,/* 0x5E  0x0000016C   -   ivINT_Reserved94 */
    Default_Handler_5F,/* 0x5F  0x0000017C   -   ivINT_I2S0 */
    Default_Handler_60,/* 0x60  0x00000180   -   ivINT_SDHC */
    Default_Handler_61,/* 0x61  0x00000184   -   ivINT_DAC0 */
    Default_Handler_62,/* 0x62  0x00000188   -   ivINT_DAC1 */
    Default_Handler_63,/* 0x63  0x0000018C   -   ivINT_TSI0  */
    Default_Handler_64,/* 0x64  0x00000190   -   ivINT_MCG */
    Default_Handler_65,/* 0x65  0x00000194   -   ivINT_LPTimer */  
    Default_Handler_66,/* 0x66  0x00000198   -   ivINT_LCD   */
    IRQ_ISR_PORTA,/* 0x67  0x0000019C   -   ivINT_PORTA */
    Default_Handler_68,/* 0x68  0x0000019C   -   ivINT_PORTB */
    IRQ_ISR_PORTC,/* 0x69  0x0000019C   -   ivINT_PORTC */
    Default_Handler_6A,/* 0x6A  0x0000019C   -   ivINT_PORTD */
    IRQ_ISR_PORTE,/* 0x6B  0x0000019C   -   ivINT_PORTE */
    Default_Handler_6C,/* 0x6C  0x000001B0   -   ivINT_Reserved108 */
    Default_Handler_6D,/* 0x6D  0x000001B0   -   ivINT_Reserved109 */
    Default_Handler_6E,/* 0x6E  0x000001B0   -   ivINT_Reserved110 */
    Default_Handler_6F,/* 0x6F  0x000001B0   -   ivINT_Reserved111 */
    Default_Handler_70,/* 0x70  0x000001B0   -   ivINT_Reserved112 */
    Default_Handler_71,/* 0x71  0x000001B0   -   ivINT_Reserved113 */
    Default_Handler_72,/* 0x72  0x000001B0   -   ivINT_Reserved114 */
    Default_Handler_73,/* 0x73  0x000001B0   -   ivINT_Reserved115 */
    Default_Handler_74,/* 0x74  0x000001B0   -   ivINT_Reserved116 */
    Default_Handler_75,/* 0x75  0x000001B0   -   ivINT_Reserved117 */
    Default_Handler_76,/* 0x76  0x000001B0   -   ivINT_Reserved108 */
    Default_Handler_77,/* 0x77  0x000001DC   -   ivINT_Reserved119 */
};
