/* Created by plibgen $Revision: 1.31 $ */

#ifndef _INT_P32MX430F064L_H
#define _INT_P32MX430F064L_H

/* Section 1 - Enumerate instances, define constants, VREGs */

#include <xc.h>
#include <stdbool.h>

#include "peripheral/peripheral_common_32bit.h"

/* Default definition used for all API dispatch functions */
#ifndef PLIB_INLINE_API
    #define PLIB_INLINE_API extern inline
#endif

/* Default definition used for all other functions */
#ifndef PLIB_INLINE
    #define PLIB_INLINE extern inline
#endif

typedef enum {

    INT_ID_0 = 0,
    INT_NUMBER_OF_MODULES

} INT_MODULE_ID;

typedef enum {

    INT_EXTERNAL_INT_SOURCE0 = 0x01,
    INT_EXTERNAL_INT_SOURCE1 = 0x02,
    INT_EXTERNAL_INT_SOURCE2 = 0x04,
    INT_EXTERNAL_INT_SOURCE3 = 0x08,
    INT_EXTERNAL_INT_SOURCE4 = 0x10

} INT_EXTERNAL_SOURCES;

typedef enum {

    INT_DISABLE_INTERRUPT = 0,
    INT_PRIORITY_LEVEL1 = 1,
    INT_PRIORITY_LEVEL2 = 2,
    INT_PRIORITY_LEVEL3 = 3,
    INT_PRIORITY_LEVEL4 = 4,
    INT_PRIORITY_LEVEL5 = 5,
    INT_PRIORITY_LEVEL6 = 6,
    INT_PRIORITY_LEVEL7 = 7

} INT_PRIORITY_LEVEL;

typedef enum {

    INT_SUBPRIORITY_LEVEL0 = 0x00,
    INT_SUBPRIORITY_LEVEL1 = 0x01,
    INT_SUBPRIORITY_LEVEL2 = 0x02,
    INT_SUBPRIORITY_LEVEL3 = 0x03

} INT_SUBPRIORITY_LEVEL;

typedef enum {

    INT_SOURCE_TIMER_CORE = 0x00,
    INT_SOURCE_SOFTWARE_0 = 0x01,
    INT_SOURCE_SOFTWARE_1 = 0x02,
    INT_SOURCE_EXTERNAL_0 = 0x03,
    INT_SOURCE_TIMER_1 = 0x04,
    INT_SOURCE_INPUT_CAPTURE_1_ERROR = 0x05,
    INT_SOURCE_INPUT_CAPTURE_1 = 0x06,
    INT_SOURCE_OUTPUT_COMPARE_1 = 0x07,
    INT_SOURCE_EXTERNAL_1 = 0x08,
    INT_SOURCE_TIMER_2 = 0x09,
    INT_SOURCE_INPUT_CAPTURE_2_ERROR = 0x0A,
    INT_SOURCE_INPUT_CAPTURE_2 = 0x0B,
    INT_SOURCE_OUTPUT_COMPARE_2 = 0x0C,
    INT_SOURCE_EXTERNAL_2 = 0x0D,
    INT_SOURCE_TIMER_3 = 0x0E,
    INT_SOURCE_INPUT_CAPTURE_3_ERROR = 0x0F,
    INT_SOURCE_INPUT_CAPTURE_3 = 0x10,
    INT_SOURCE_OUTPUT_COMPARE_3 = 0x11,
    INT_SOURCE_EXTERNAL_3 = 0x12,
    INT_SOURCE_TIMER_4 = 0x13,
    INT_SOURCE_INPUT_CAPTURE_4_ERROR = 0x14,
    INT_SOURCE_INPUT_CAPTURE_4 = 0x15,
    INT_SOURCE_OUTPUT_COMPARE_4 = 0x16,
    INT_SOURCE_EXTERNAL_4 = 0x17,
    INT_SOURCE_TIMER_5 = 0x18,
    INT_SOURCE_INPUT_CAPTURE_5_ERROR = 0x19,
    INT_SOURCE_INPUT_CAPTURE_5 = 0x1A,
    INT_SOURCE_OUTPUT_COMPARE_5 = 0x1B,
    INT_SOURCE_ADC_1 = 0x1C,
    INT_SOURCE_SPI_1_ERROR = 0x23,
    INT_SOURCE_SPI_1_RECEIVE = 0x24,
    INT_SOURCE_SPI_1_TRANSMIT = 0x25,
    INT_SOURCE_USART_1_ERROR = 0x26,
    INT_SOURCE_USART_1_RECEIVE = 0x27,
    INT_SOURCE_USART_1_TRANSMIT = 0x28,
    INT_SOURCE_I2C_1_BUS = 0x29,
    INT_SOURCE_I2C_1_ERROR = 0x29,
    INT_SOURCE_I2C_1_SLAVE = 0x2A,
    INT_SOURCE_I2C_1_MASTER = 0x2B,
    INT_SOURCE_CHANGE_NOTICE_A = 0x2C,
    INT_SOURCE_CHANGE_NOTICE_B = 0x2D,
    INT_SOURCE_CHANGE_NOTICE_C = 0x2E,
    INT_SOURCE_CHANGE_NOTICE_D = 0x2F,
    INT_SOURCE_CHANGE_NOTICE_E = 0x30,
    INT_SOURCE_CHANGE_NOTICE_F = 0x31,
    INT_SOURCE_CHANGE_NOTICE_G = 0x32,
    INT_SOURCE_PARALLEL_PORT = 0x33,
    INT_SOURCE_PARALLEL_PORT_ERROR = 0x34,
    INT_SOURCE_COMPARATOR_1 = 0x20,
    INT_SOURCE_COMPARATOR_2 = 0x21,
    INT_SOURCE_USB_1 = 0x22,
    INT_SOURCE_DMA_0 = 0x48,
    INT_SOURCE_DMA_1 = 0x49,
    INT_SOURCE_DMA_2 = 0x4A,
    INT_SOURCE_DMA_3 = 0x4B,
    INT_SOURCE_SPI_2_ERROR = 0x35,
    INT_SOURCE_SPI_2_RECEIVE = 0x36,
    INT_SOURCE_SPI_2_TRANSMIT = 0x37,
    INT_SOURCE_USART_2_ERROR = 0x38,
    INT_SOURCE_USART_2_RECEIVE = 0x39,
    INT_SOURCE_USART_2_TRANSMIT = 0x3A,
    INT_SOURCE_I2C_2_BUS = 0x3B,
    INT_SOURCE_I2C_2_ERROR = 0x3B,
    INT_SOURCE_I2C_2_SLAVE = 0x3C,
    INT_SOURCE_I2C_2_MASTER = 0x3D,
    INT_SOURCE_USART_3_ERROR = 0x3E,
    INT_SOURCE_USART_3_RECEIVE = 0x3F,
    INT_SOURCE_USART_3_TRANSMIT = 0x40,
    INT_SOURCE_USART_4_ERROR = 0x41,
    INT_SOURCE_USART_4_RECEIVE = 0x42,
    INT_SOURCE_USART_4_TRANSMIT = 0x43,
    INT_SOURCE_USART_5_ERROR = 0x44,
    INT_SOURCE_USART_5_RECEIVE = 0x45,
    INT_SOURCE_USART_5_TRANSMIT = 0x46,
    INT_SOURCE_CLOCK_MONITOR = 0x1D,
    INT_SOURCE_RTCC = 0x1E,
    INT_SOURCE_FLASH_CONTROL = 0x1F,
    INT_SOURCE_CTMU = 0x47

} INT_SOURCE;

typedef enum {

    INT_VECTOR_CT = _CORE_TIMER_VECTOR,
    INT_VECTOR_CS0 = _CORE_SOFTWARE_0_VECTOR,
    INT_VECTOR_CS1 = _CORE_SOFTWARE_1_VECTOR,
    INT_VECTOR_INT0 = _EXTERNAL_0_VECTOR,
    INT_VECTOR_T1 = _TIMER_1_VECTOR,
    INT_VECTOR_IC1 = _INPUT_CAPTURE_1_VECTOR,
    INT_VECTOR_IC1_ERROR = _INPUT_CAPTURE_1_VECTOR,
    INT_VECTOR_OC1 = _OUTPUT_COMPARE_1_VECTOR,
    INT_VECTOR_INT1 = _EXTERNAL_1_VECTOR,
    INT_VECTOR_T2 = _TIMER_2_VECTOR,
    INT_VECTOR_IC2 = _INPUT_CAPTURE_2_VECTOR,
    INT_VECTOR_IC2_ERROR = _INPUT_CAPTURE_2_VECTOR,
    INT_VECTOR_OC2 = _OUTPUT_COMPARE_2_VECTOR,
    INT_VECTOR_INT2 = _EXTERNAL_2_VECTOR,
    INT_VECTOR_T3 = _TIMER_3_VECTOR,
    INT_VECTOR_IC3 = _INPUT_CAPTURE_3_VECTOR,
    INT_VECTOR_IC3_ERROR = _INPUT_CAPTURE_3_VECTOR,
    INT_VECTOR_OC3 = _OUTPUT_COMPARE_3_VECTOR,
    INT_VECTOR_INT3 = _EXTERNAL_3_VECTOR,
    INT_VECTOR_T4 = _TIMER_4_VECTOR,
    INT_VECTOR_IC4 = _INPUT_CAPTURE_4_VECTOR,
    INT_VECTOR_IC4_ERROR = _INPUT_CAPTURE_4_VECTOR,
    INT_VECTOR_OC4 = _OUTPUT_COMPARE_4_VECTOR,
    INT_VECTOR_INT4 = _EXTERNAL_4_VECTOR,
    INT_VECTOR_T5 = _TIMER_5_VECTOR,
    INT_VECTOR_IC5 = _INPUT_CAPTURE_5_VECTOR,
    INT_VECTOR_IC5_ERROR = _INPUT_CAPTURE_5_VECTOR,
    INT_VECTOR_OC5 = _OUTPUT_COMPARE_5_VECTOR,
    INT_VECTOR_SPI1_FAULT = _SPI_1_VECTOR,
    INT_VECTOR_SPI1_RX = _SPI_1_VECTOR,
    INT_VECTOR_SPI1_TX = _SPI_1_VECTOR,
    INT_VECTOR_UART1_FAULT = _UART_1_VECTOR,
    INT_VECTOR_UART1_RX = _UART_1_VECTOR,
    INT_VECTOR_UART1_TX = _UART_1_VECTOR,
    INT_VECTOR_I2C1_BUS = _I2C_1_VECTOR,
    INT_VECTOR_I2C1_SLAVE = _I2C_1_VECTOR,
    INT_VECTOR_I2C1_MASTER = _I2C_1_VECTOR,
    INT_VECTOR_SPI2_FAULT = _SPI_2_VECTOR,
    INT_VECTOR_SPI2_RX = _SPI_2_VECTOR,
    INT_VECTOR_SPI2_TX = _SPI_2_VECTOR,
    INT_VECTOR_UART2_FAULT = _UART_2_VECTOR,
    INT_VECTOR_UART2_RX = _UART_2_VECTOR,
    INT_VECTOR_UART2_TX = _UART_2_VECTOR,
    INT_VECTOR_I2C2_BUS = _I2C_2_VECTOR,
    INT_VECTOR_I2C2_SLAVE = _I2C_2_VECTOR,
    INT_VECTOR_I2C2_MASTER = _I2C_2_VECTOR,
    INT_VECTOR_UART3_FAULT = _UART_3_VECTOR,
    INT_VECTOR_UART3_RX = _UART_3_VECTOR,
    INT_VECTOR_UART3_TX = _UART_3_VECTOR,
    INT_VECTOR_UART4_FAULT = _UART_4_VECTOR,
    INT_VECTOR_UART4_RX = _UART_4_VECTOR,
    INT_VECTOR_UART4_TX = _UART_4_VECTOR,
    INT_VECTOR_UART5_FAULT = _UART_5_VECTOR,
    INT_VECTOR_UART5_RX = _UART_5_VECTOR,
    INT_VECTOR_UART5_TX = _UART_5_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_A = _CHANGE_NOTICE_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_B = _CHANGE_NOTICE_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_C = _CHANGE_NOTICE_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_D = _CHANGE_NOTICE_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_E = _CHANGE_NOTICE_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_F = _CHANGE_NOTICE_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_G = _CHANGE_NOTICE_VECTOR,
    INT_VECTOR_PMP = _PMP_VECTOR,
    INT_VECTOR_PMP_ERROR = _PMP_VECTOR,
    INT_VECTOR_USB1 = _USB_1_VECTOR,
    INT_VECTOR_RTCC = _RTCC_VECTOR,
    INT_VECTOR_FLASH = _FCE_VECTOR,
    INT_VECTOR_SPI1 = _SPI_1_VECTOR,
    INT_VECTOR_UART1 = _UART_1_VECTOR,
    INT_VECTOR_I2C1 = _I2C_1_VECTOR,
    INT_VECTOR_CN = _CHANGE_NOTICE_VECTOR,
    INT_VECTOR_AD1 = _ADC_VECTOR,
    INT_VECTOR_CMP1 = _COMPARATOR_1_VECTOR,
    INT_VECTOR_CMP2 = _COMPARATOR_2_VECTOR,
    INT_VECTOR_UART3 = _UART_3_VECTOR,
    INT_VECTOR_SPI2 = _SPI_2_VECTOR,
    INT_VECTOR_UART2 = _UART_2_VECTOR,
    INT_VECTOR_I2C2 = _I2C_2_VECTOR,
    INT_VECTOR_FSCM = _FAIL_SAFE_MONITOR_VECTOR,
    INT_VECTOR_CTMU = _CTMU_VECTOR,
    INT_VECTOR_DMA0 = _DMA_0_VECTOR,
    INT_VECTOR_DMA1 = _DMA_1_VECTOR,
    INT_VECTOR_DMA2 = _DMA_2_VECTOR,
    INT_VECTOR_DMA3 = _DMA_3_VECTOR,
    INT_VECTOR_FCE = _FCE_VECTOR,
    INT_VECTOR_UART4 = _UART_4_VECTOR,
    INT_VECTOR_UART5 = _UART_5_VECTOR

} INT_VECTOR;

typedef enum {

    INT_VECTOR_SPACING_0 = 0x00,
    INT_VECTOR_SPACING_8 = 0x01,
    INT_VECTOR_SPACING_16 = 0x02,
    INT_VECTOR_SPACING_32 = 0x04,
    INT_VECTOR_SPACING_64 = 0x08,
    INT_VECTOR_SPACING_128 = 0x10,
    INT_VECTOR_SPACING_256 = 0x20,
    INT_VECTOR_SPACING_512 = 0x40

} INT_VECTOR_SPACING;

typedef enum {

    INT_SHADOW_REGISTER_NONE

} INT_SHADOW_REGISTER;

PLIB_INLINE SFR_TYPE* _INT_INT_EXT_INT0_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTCON;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_PROXIMITY_TIMER_ENABLE_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTCON;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_SINGLE_MULTI_VECTOR_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTCON;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_VECTOR_BASE_ADDRESS_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTCON;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_SHADOW_SET_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTCON;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_LATEST_INT_VECTOR_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTSTAT;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_LATEST_INT_PRIORITY_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTSTAT;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_FLAG_STATUS_0_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IFS0;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_FLAG_STATUS_1_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IFS1;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_FLAG_STATUS_2_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IFS2;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_ENABLE_CONTROL_0_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IEC0;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_ENABLE_CONTROL_1_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IEC1;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_ENABLE_CONTROL_2_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IEC2;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_PRIORITY_CONTROL_0_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IPC0;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_EXT_INT0_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_INT0EP_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_PROXIMITY_TIMER_ENABLE_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_TPC_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SINGLE_MULTI_VECTOR_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_VECTOR_BASE_ADDRESS_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SHADOW_SET_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_SS0_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_VECTOR_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_VEC_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_PRIORITY_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_SRIPL_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_0_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS0_CTIF_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_1_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS1_CMP1IF_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_2_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS2_U3TXIF_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_0_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC0_CTIE_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_1_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC1_CMP1IE_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_2_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC2_U3TXIE_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_PRIORITY_CONTROL_0_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IPC0_CTIS_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_EXT_INT0_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_INT0EP_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_PROXIMITY_TIMER_ENABLE_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_TPC_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SINGLE_MULTI_VECTOR_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_VECTOR_BASE_ADDRESS_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SHADOW_SET_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_SS0_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_VECTOR_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_VEC_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_PRIORITY_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_SRIPL_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_0_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS0_CTIF_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_1_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS1_CMP1IF_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_2_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS2_U3TXIF_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_0_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC0_CTIE_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_1_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC1_CMP1IE_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_2_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC2_U3TXIE_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_PRIORITY_CONTROL_0_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IPC0_CTIS_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_EXT_INT0_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_INT0EP_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_PROXIMITY_TIMER_ENABLE_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_TPC_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SINGLE_MULTI_VECTOR_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_VECTOR_BASE_ADDRESS_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SHADOW_SET_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_SS0_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_VECTOR_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_VEC_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_PRIORITY_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_SRIPL_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_0_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS0_CTIF_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_1_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS1_CMP1IF_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_2_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS2_U3TXIF_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_0_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC0_CTIE_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_1_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC1_CMP1IE_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_2_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC2_U3TXIE_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_PRIORITY_CONTROL_0_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IPC0_CTIS_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

/* Section 2 - Feature variant inclusion */

#define PLIB_TEMPLATE PLIB_INLINE
#include "../templates/int_SingleVectorShadowSet_Default.h"
#include "../templates/int_VectorSelect_Default.h"
#include "../templates/int_ProximityTimerEnable_Default.h"
#include "../templates/int_ProximityTimerControl_Default.h"
#include "../templates/int_ExternalINTEdgeSelect_Default.h"
#include "../templates/int_INTCPUPriority_Default.h"
#include "../templates/int_INTCPUVector_Default.h"
#include "../templates/int_SourceFlag_Default.h"
#include "../templates/int_SourceControl_Default.h"
#include "../templates/int_VectorPriority_Default.h"
#include "../templates/int_CPUCurrentPriorityLevel_Default.h"
#include "../templates/int_EnableControl_PIC32.h"
#include "../templates/int_ShadowRegisterAssign_Unsupported.h"
#include "../templates/int_VariableOffset_Unsupported.h"
#include "../templates/int_SoftwareNMI_Unsupported.h"

/* Section 3 - PLIB dispatch function definitions */

PLIB_INLINE_API bool PLIB_INT_ExistsSingleVectorShadowSet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsSingleVectorShadowSet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_SingleVectorShadowSetDisable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_SingleVectorShadowSetDisable_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_SingleVectorShadowSetEnable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_SingleVectorShadowSetEnable_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsVectorSelect(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsVectorSelect_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_MultiVectorSelect(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_MultiVectorSelect_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_SingleVectorSelect(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_SingleVectorSelect_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsProximityTimerEnable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsProximityTimerEnable_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_ProximityTimerEnable(INT_MODULE_ID index, INT_PRIORITY_LEVEL priority)
{
    switch (index) {
        case INT_ID_0 :
            INT_ProximityTimerEnable_Default(index, priority);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_ProximityTimerDisable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_ProximityTimerDisable_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsProximityTimerControl(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsProximityTimerControl_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_ProximityTimerSet(INT_MODULE_ID index, uint32_t timerreloadvalue)
{
    switch (index) {
        case INT_ID_0 :
            INT_ProximityTimerSet_Default(index, timerreloadvalue);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API uint32_t PLIB_INT_ProximityTimerGet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ProximityTimerGet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (uint32_t)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsExternalINTEdgeSelect(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsExternalINTEdgeSelect_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_ExternalRisingEdgeSelect(INT_MODULE_ID index, INT_EXTERNAL_SOURCES source)
{
    switch (index) {
        case INT_ID_0 :
            INT_ExternalRisingEdgeSelect_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_ExternalFallingEdgeSelect(INT_MODULE_ID index, INT_EXTERNAL_SOURCES source)
{
    switch (index) {
        case INT_ID_0 :
            INT_ExternalFallingEdgeSelect_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsINTCPUPriority(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsINTCPUPriority_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API INT_PRIORITY_LEVEL PLIB_INT_PriorityGet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_PriorityGet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_PRIORITY_LEVEL)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsINTCPUVector(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsINTCPUVector_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API INT_VECTOR PLIB_INT_VectorGet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_VectorGet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_VECTOR)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsSourceFlag(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsSourceFlag_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_SourceFlagGet(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            return INT_SourceFlagGet_Default(index, source);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_SourceFlagSet(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            INT_SourceFlagSet_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_SourceFlagClear(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            INT_SourceFlagClear_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsSourceControl(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsSourceControl_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_SourceEnable(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            INT_SourceEnable_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_SourceDisable(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            INT_SourceDisable_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_SourceIsEnabled(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            return INT_SourceIsEnabled_Default(index, source);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsVectorPriority(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsVectorPriority_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_VectorPrioritySet(INT_MODULE_ID index, INT_VECTOR vector, INT_PRIORITY_LEVEL priority)
{
    switch (index) {
        case INT_ID_0 :
            INT_VectorPrioritySet_Default(index, vector, priority);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API INT_PRIORITY_LEVEL PLIB_INT_VectorPriorityGet(INT_MODULE_ID index, INT_VECTOR vector)
{
    switch (index) {
        case INT_ID_0 :
            return INT_VectorPriorityGet_Default(index, vector);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_PRIORITY_LEVEL)0;
    }
}

PLIB_INLINE_API void PLIB_INT_VectorSubPrioritySet(INT_MODULE_ID index, INT_VECTOR vector, INT_SUBPRIORITY_LEVEL subPriority)
{
    switch (index) {
        case INT_ID_0 :
            INT_VectorSubPrioritySet_Default(index, vector, subPriority);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API INT_SUBPRIORITY_LEVEL PLIB_INT_VectorSubPriorityGet(INT_MODULE_ID index, INT_VECTOR vector)
{
    switch (index) {
        case INT_ID_0 :
            return INT_VectorSubPriorityGet_Default(index, vector);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_SUBPRIORITY_LEVEL)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsCPUCurrentPriorityLevel(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsCPUCurrentPriorityLevel_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API INT_PRIORITY_LEVEL PLIB_INT_CPUCurrentPriorityLevelGet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_CPUCurrentPriorityLevelGet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_PRIORITY_LEVEL)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsEnableControl(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsEnableControl_PIC32(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_Enable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_Enable_PIC32(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_Disable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_Disable_PIC32(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_IsEnabled(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_IsEnabled_PIC32(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_SetState(INT_MODULE_ID index, INT_STATE_GLOBAL interrupt_state)
{
    switch (index) {
        case INT_ID_0 :
            INT_SetState_PIC32(index, interrupt_state);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API INT_STATE_GLOBAL PLIB_INT_GetStateAndDisable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_GetStateAndDisable_PIC32(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_STATE_GLOBAL)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsShadowRegisterAssign(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsShadowRegisterAssign_Unsupported(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_INT_ShadowRegisterAssign(INT_MODULE_ID index, INT_PRIORITY_LEVEL priority, INT_SHADOW_REGISTER shadowRegister)
{
    switch (index) {
        case INT_ID_0 :
            INT_ShadowRegisterAssign_Unsupported(index, priority, shadowRegister);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API INT_SHADOW_REGISTER _PLIB_UNSUPPORTED PLIB_INT_ShadowRegisterGet(INT_MODULE_ID index, INT_PRIORITY_LEVEL priority)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ShadowRegisterGet_Unsupported(index, priority);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_SHADOW_REGISTER)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsVariableOffset(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsVariableOffset_Unsupported(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_INT_VariableVectorOffsetSet(INT_MODULE_ID index, INT_VECTOR vector, uint32_t offset)
{
    switch (index) {
        case INT_ID_0 :
            INT_VariableVectorOffsetSet_Unsupported(index, vector, offset);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API uint32_t _PLIB_UNSUPPORTED PLIB_INT_VariableVectorOffsetGet(INT_MODULE_ID index, INT_VECTOR vector)
{
    switch (index) {
        case INT_ID_0 :
            return INT_VariableVectorOffsetGet_Unsupported(index, vector);
        case INT_NUMBER_OF_MODULES :
        default :
            return (uint32_t)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsSoftwareNMI(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsSoftwareNMI_Unsupported(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_INT_SoftwareNMITrigger(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_SoftwareNMITrigger_Unsupported(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

#endif
