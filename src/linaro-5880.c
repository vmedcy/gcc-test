// Target: arm-none-eabi
// Configured with: /Volumes/data/jenkins/workspace/GNU-toolchain/arm-12-mpacbti/src/gcc/configure --target=arm-none-eabi --prefix=/Volumes/data/jenkins/workspace/GNU-toolchain/arm-12-mpacbti/build-arm-none-eabi/install --with-gmp=/Volumes/data/jenkins/workspace/GNU-toolchain/arm-12-mpacbti/build-arm-none-eabi/host-tools --with-mpfr=/Volumes/data/jenkins/workspace/GNU-toolchain/arm-12-mpacbti/build-arm-none-eabi/host-tools --with-mpc=/Volumes/data/jenkins/workspace/GNU-toolchain/arm-12-mpacbti/build-arm-none-eabi/host-tools --with-isl=/Volumes/data/jenkins/workspace/GNU-toolchain/arm-12-mpacbti/build-arm-none-eabi/host-tools --disable-shared --disable-nls --disable-threads --disable-tls --enable-checking=release --enable-languages=c,c++,fortran --with-newlib --with-gnu-as --with-gnu-ld --with-sysroot=/Volumes/data/jenkins/workspace/GNU-toolchain/arm-12-mpacbti/build-arm-none-eabi/install/arm-none-eabi --with-multilib-list=aprofile,rmprofile --with-pkgversion='Arm GNU Toolchain 12.2.MPACBTI-Bet1 (Build arm-12-mpacbti.16)' --with-bugurl=https://bugs.linaro.org/
// Thread model: single
// Supported LTO compression algorithms: zlib
// gcc version 12.2.0 (Arm GNU Toolchain 12.2.MPACBTI-Bet1 (Build arm-12-mpacbti.16)) 
// 
// during GIMPLE pass: evrp
// stm32u5xx_hal_dma_ex.c: In function 'HAL_DMAEx_List_ReplaceNode_Head':
// stm32u5xx_hal_dma_ex.c:4683:1: internal compiler error: Segmentation fault: 11
//  4683 | }
//       | ^
// Please submit a full bug report, with preprocessed source.
// See <https://bugs.linaro.org/> for instructions.

// /Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/bin/../libexec/gcc/arm-none-eabi/12.2.0/cc1 -quiet -I ../Inc -I ../../ -I ../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include -I ../../../../../module/helhal/Drivers/CMSIS/Include -iprefix /Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/bin/../lib/gcc/arm-none-eabi/12.2.0/ -isysroot /Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/bin/../arm-none-eabi -D__USES_INITFINI__ -D STM32U5 -D STM32U575xx -D USE_FULL_LL_DRIVER -D USE_HAL_DRIVER stm32u5xx_hal_dma_ex.c -quiet -dumpbase stm32u5xx_hal_dma_ex.c -dumpbase-ext .c -mcpu=arm7tdmi -mfloat-abi=soft -marm -mlibarch=armv4t -march=armv4t -O2 -freport-bug -o - -frandom-seed=0 -fdump-noaddr

# 0 "stm32u5xx_hal_dma_ex.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stm32u5xx_hal_dma_ex.c"
# 514 "stm32u5xx_hal_dma_ex.c"
# 1 "../Inc/stm32u5xx_hal.h" 1
# 29 "../Inc/stm32u5xx_hal.h"
# 1 "../../stm32u5xx_hal_conf.h" 1
# 257 "../../stm32u5xx_hal_conf.h"
# 1 "../Inc/stm32u5xx_hal_rcc.h" 1
# 28 "../Inc/stm32u5xx_hal_rcc.h"
# 1 "../Inc/stm32u5xx_hal_def.h" 1
# 33 "../Inc/stm32u5xx_hal_def.h"
# 1 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u5xx.h" 1
# 97 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u5xx.h"
# 1 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u575xx.h" 1
# 51 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u575xx.h"
typedef enum
{

  Reset_IRQn = -15,
  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,

  BusFault_IRQn = -11,

  UsageFault_IRQn = -10,
  SecureFault_IRQn = -9,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,


  WWDG_IRQn = 0,
  PVD_AVD_IRQn = 1,
  RTC_IRQn = 2,
  RTC_S_IRQn = 3,
  TAMP_IRQn = 4,
  RAMCFG_IRQn = 5,
  FLASH_IRQn = 6,
  FLASH_S_IRQn = 7,
  GTZC_IRQn = 8,
  RCC_IRQn = 9,
  RCC_S_IRQn = 10,
  EXTI0_IRQn = 11,
  EXTI1_IRQn = 12,
  EXTI2_IRQn = 13,
  EXTI3_IRQn = 14,
  EXTI4_IRQn = 15,
  EXTI5_IRQn = 16,
  EXTI6_IRQn = 17,
  EXTI7_IRQn = 18,
  EXTI8_IRQn = 19,
  EXTI9_IRQn = 20,
  EXTI10_IRQn = 21,
  EXTI11_IRQn = 22,
  EXTI12_IRQn = 23,
  EXTI13_IRQn = 24,
  EXTI14_IRQn = 25,
  EXTI15_IRQn = 26,
  IWDG_IRQn = 27,
  GPDMA1_Channel0_IRQn = 29,
  GPDMA1_Channel1_IRQn = 30,
  GPDMA1_Channel2_IRQn = 31,
  GPDMA1_Channel3_IRQn = 32,
  GPDMA1_Channel4_IRQn = 33,
  GPDMA1_Channel5_IRQn = 34,
  GPDMA1_Channel6_IRQn = 35,
  GPDMA1_Channel7_IRQn = 36,
  ADC1_IRQn = 37,
  DAC1_IRQn = 38,
  FDCAN1_IT0_IRQn = 39,
  FDCAN1_IT1_IRQn = 40,
  TIM1_BRK_IRQn = 41,
  TIM1_UP_IRQn = 42,
  TIM1_TRG_COM_IRQn = 43,
  TIM1_CC_IRQn = 44,
  TIM2_IRQn = 45,
  TIM3_IRQn = 46,
  TIM4_IRQn = 47,
  TIM5_IRQn = 48,
  TIM6_IRQn = 49,
  TIM7_IRQn = 50,
  TIM8_BRK_IRQn = 51,
  TIM8_UP_IRQn = 52,
  TIM8_TRG_COM_IRQn = 53,
  TIM8_CC_IRQn = 54,
  I2C1_EV_IRQn = 55,
  I2C1_ER_IRQn = 56,
  I2C2_EV_IRQn = 57,
  I2C2_ER_IRQn = 58,
  SPI1_IRQn = 59,
  SPI2_IRQn = 60,
  USART1_IRQn = 61,
  USART2_IRQn = 62,
  USART3_IRQn = 63,
  UART4_IRQn = 64,
  UART5_IRQn = 65,
  LPUART1_IRQn = 66,
  LPTIM1_IRQn = 67,
  LPTIM2_IRQn = 68,
  TIM15_IRQn = 69,
  TIM16_IRQn = 70,
  TIM17_IRQn = 71,
  COMP_IRQn = 72,
  OTG_FS_IRQn = 73,
  CRS_IRQn = 74,
  FMC_IRQn = 75,
  OCTOSPI1_IRQn = 76,
  PWR_S3WU_IRQn = 77,
  SDMMC1_IRQn = 78,
  SDMMC2_IRQn = 79,
  GPDMA1_Channel8_IRQn = 80,
  GPDMA1_Channel9_IRQn = 81,
  GPDMA1_Channel10_IRQn = 82,
  GPDMA1_Channel11_IRQn = 83,
  GPDMA1_Channel12_IRQn = 84,
  GPDMA1_Channel13_IRQn = 85,
  GPDMA1_Channel14_IRQn = 86,
  GPDMA1_Channel15_IRQn = 87,
  I2C3_EV_IRQn = 88,
  I2C3_ER_IRQn = 89,
  SAI1_IRQn = 90,
  SAI2_IRQn = 91,
  TSC_IRQn = 92,
  RNG_IRQn = 94,
  FPU_IRQn = 95,
  HASH_IRQn = 96,
  LPTIM3_IRQn = 98,
  SPI3_IRQn = 99,
  I2C4_ER_IRQn = 100,
  I2C4_EV_IRQn = 101,
  MDF1_FLT0_IRQn = 102,
  MDF1_FLT1_IRQn = 103,
  MDF1_FLT2_IRQn = 104,
  MDF1_FLT3_IRQn = 105,
  UCPD1_IRQn = 106,
  ICACHE_IRQn = 107,
  LPTIM4_IRQn = 110,
  DCACHE1_IRQn = 111,
  ADF1_IRQn = 112,
  ADC4_IRQn = 113,
  LPDMA1_Channel0_IRQn = 114,
  LPDMA1_Channel1_IRQn = 115,
  LPDMA1_Channel2_IRQn = 116,
  LPDMA1_Channel3_IRQn = 117,
  DMA2D_IRQn = 118,
  DCMI_PSSI_IRQn = 119,
  OCTOSPI2_IRQn = 120,
  MDF1_FLT4_IRQn = 121,
  MDF1_FLT5_IRQn = 122,
  CORDIC_IRQn = 123,
  FMAC_IRQn = 124,
} IRQn_Type;
# 230 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u575xx.h"
# 1 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h" 1
# 34 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stdint.h" 1 3 4
# 9 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stdint.h" 3 4
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/stdint.h" 1 3 4
# 12 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/stdint.h" 3 4
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 1 3 4







# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/features.h" 1 3 4
# 28 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/features.h" 3 4
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/_newlib_version.h" 1 3 4
# 29 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/features.h" 2 3 4
# 9 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 2 3 4
# 41 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4

# 41 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 13 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 35 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
# 190 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
# 14 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 20 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 15 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 10 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stdint.h" 2 3 4
# 35 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h" 2
# 63 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
# 1 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_version.h" 1
# 64 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h" 2
# 206 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
# 1 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_compiler.h" 1
# 54 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_compiler.h"
# 1 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h" 1
# 29 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  
# 74 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
 struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 131 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline __attribute__((__noreturn__)) void __cmsis_start(void)
{
  extern void _start(void) __attribute__((__noreturn__));

  typedef struct {
    uint32_t const* src;
    uint32_t* dest;
    uint32_t wlen;
  } __copy_table_t;

  typedef struct {
    uint32_t* dest;
    uint32_t wlen;
  } __zero_table_t;

  extern const __copy_table_t __copy_table_start__;
  extern const __copy_table_t __copy_table_end__;
  extern const __zero_table_t __zero_table_start__;
  extern const __zero_table_t __zero_table_end__;

  for (__copy_table_t const* pTable = &__copy_table_start__; pTable < &__copy_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = pTable->src[i];
    }
  }

  for (__zero_table_t const* pTable = &__zero_table_start__; pTable < &__zero_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = 0u;
    }
  }

  _start();
}
# 196 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 248 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 272 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 344 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 368 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 398 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 449 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 479 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 833 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{
# 849 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
  return(0U);

}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{
# 872 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
  (void)fpscr;

}
# 933 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 967 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 986 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 1001 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 1021 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 1048 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;






  uint32_t s = (4U * 8U) - 1U;

  result = value;
  for (value >>= 1U; value != 0U; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;

  return result;
}
# 1078 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __CLZ(uint32_t value)
{
# 1089 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
  if (value == 0U)
  {
    return 32U;
  }
  return __builtin_clz(value);
}
# 1382 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __SSAT(int32_t val, uint32_t sat)
{
  if ((sat >= 1U) && (sat <= 32U))
  {
    const int32_t max = (int32_t)((1U << (sat - 1U)) - 1U);
    const int32_t min = -1 - max ;
    if (val > max)
    {
      return max;
    }
    else if (val < min)
    {
      return min;
    }
  }
  return val;
}
# 1407 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __USAT(int32_t val, uint32_t sat)
{
  if (sat <= 31U)
  {
    const uint32_t max = ((1U << sat) - 1U);
    if (val > (int32_t)max)
    {
      return max;
    }
    else if (val < 0)
    {
      return 0U;
    }
  }
  return (uint32_t)val;
}
# 2166 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic pop
# 55 "../../../../../module/helhal/Drivers/CMSIS/Include/cmsis_compiler.h" 2
# 207 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h" 2
# 314 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 353 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 371 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:7;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t IT:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 422 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t SFPA:1;
    uint32_t _reserved1:28;
  } b;
  uint32_t w;
} CONTROL_Type;
# 461 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
  volatile uint32_t ISER[16U];
        uint32_t RESERVED0[16U];
  volatile uint32_t ICER[16U];
        uint32_t RSERVED1[16U];
  volatile uint32_t ISPR[16U];
        uint32_t RESERVED2[16U];
  volatile uint32_t ICPR[16U];
        uint32_t RESERVED3[16U];
  volatile uint32_t IABR[16U];
        uint32_t RESERVED4[16U];
  volatile uint32_t ITNS[16U];
        uint32_t RESERVED5[16U];
  volatile uint8_t IPR[496U];
        uint32_t RESERVED6[580U];
  volatile uint32_t STIR;
} NVIC_Type;
# 497 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHPR[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t ID_PFR[2U];
  volatile const uint32_t ID_DFR;
  volatile const uint32_t ID_ADR;
  volatile const uint32_t ID_MMFR[4U];
  volatile const uint32_t ID_ISAR[6U];
  volatile const uint32_t CLIDR;
  volatile const uint32_t CTR;
  volatile const uint32_t CCSIDR;
  volatile uint32_t CSSELR;
  volatile uint32_t CPACR;
  volatile uint32_t NSACR;
        uint32_t RESERVED3[92U];
  volatile uint32_t STIR;
        uint32_t RESERVED4[15U];
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
  volatile const uint32_t MVFR2;
        uint32_t RESERVED5[1U];
  volatile uint32_t ICIALLU;
        uint32_t RESERVED6[1U];
  volatile uint32_t ICIMVAU;
  volatile uint32_t DCIMVAC;
  volatile uint32_t DCISW;
  volatile uint32_t DCCMVAU;
  volatile uint32_t DCCMVAC;
  volatile uint32_t DCCSW;
  volatile uint32_t DCCIMVAC;
  volatile uint32_t DCCISW;
} SCB_Type;
# 929 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
  volatile uint32_t CPPWR;
} SCnSCB_Type;
# 954 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 1006 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[32U];
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[1U];
  volatile const uint32_t DEVARCH;
        uint32_t RESERVED6[4U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 1106 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
        uint32_t RESERVED1[1U];
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP1;
        uint32_t RESERVED3[1U];
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED4[1U];
  volatile uint32_t COMP2;
        uint32_t RESERVED5[1U];
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED6[1U];
  volatile uint32_t COMP3;
        uint32_t RESERVED7[1U];
  volatile uint32_t FUNCTION3;
        uint32_t RESERVED8[1U];
  volatile uint32_t COMP4;
        uint32_t RESERVED9[1U];
  volatile uint32_t FUNCTION4;
        uint32_t RESERVED10[1U];
  volatile uint32_t COMP5;
        uint32_t RESERVED11[1U];
  volatile uint32_t FUNCTION5;
        uint32_t RESERVED12[1U];
  volatile uint32_t COMP6;
        uint32_t RESERVED13[1U];
  volatile uint32_t FUNCTION6;
        uint32_t RESERVED14[1U];
  volatile uint32_t COMP7;
        uint32_t RESERVED15[1U];
  volatile uint32_t FUNCTION7;
        uint32_t RESERVED16[1U];
  volatile uint32_t COMP8;
        uint32_t RESERVED17[1U];
  volatile uint32_t FUNCTION8;
        uint32_t RESERVED18[1U];
  volatile uint32_t COMP9;
        uint32_t RESERVED19[1U];
  volatile uint32_t FUNCTION9;
        uint32_t RESERVED20[1U];
  volatile uint32_t COMP10;
        uint32_t RESERVED21[1U];
  volatile uint32_t FUNCTION10;
        uint32_t RESERVED22[1U];
  volatile uint32_t COMP11;
        uint32_t RESERVED23[1U];
  volatile uint32_t FUNCTION11;
        uint32_t RESERVED24[1U];
  volatile uint32_t COMP12;
        uint32_t RESERVED25[1U];
  volatile uint32_t FUNCTION12;
        uint32_t RESERVED26[1U];
  volatile uint32_t COMP13;
        uint32_t RESERVED27[1U];
  volatile uint32_t FUNCTION13;
        uint32_t RESERVED28[1U];
  volatile uint32_t COMP14;
        uint32_t RESERVED29[1U];
  volatile uint32_t FUNCTION14;
        uint32_t RESERVED30[1U];
  volatile uint32_t COMP15;
        uint32_t RESERVED31[1U];
  volatile uint32_t FUNCTION15;
        uint32_t RESERVED32[934U];
  volatile const uint32_t LSR;
        uint32_t RESERVED33[1U];
  volatile const uint32_t DEVARCH;
} DWT_Type;
# 1292 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile uint32_t PSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t ITFTTD0;
  volatile uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t ITFTTD1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1466 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RLAR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RLAR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RLAR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RLAR_A3;
        uint32_t RESERVED0[1];
  union {
  volatile uint32_t MAIR[2];
  struct {
  volatile uint32_t MAIR0;
  volatile uint32_t MAIR1;
  };
  };
} MPU_Type;
# 1665 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
} FPU_Type;
# 1795 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
        uint32_t RESERVED4[1U];
  volatile uint32_t DAUTHCTRL;
  volatile uint32_t DSCSR;
} CoreDebug_Type;
# 2096 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 2127 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    __asm volatile("":::"memory");
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __asm volatile("":::"memory");
  }
}
# 2146 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 2165 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 2184 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 2203 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 2218 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 2235 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 2324 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IPR[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHPR[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
}
# 2346 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IPR[((uint32_t)IRQn)] >> (8U - 4U)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHPR[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 4U)));
  }
}
# 2371 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 2398 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 2421 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  vectors[(int32_t)IRQn + 16] = vector;
  __DSB();
}
# 2437 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return vectors[(int32_t)IRQn + 16];
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 2671 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
# 1 "../../../../../module/helhal/Drivers/CMSIS/Include/mpu_armv8.h" 1
# 122 "../../../../../module/helhal/Drivers/CMSIS/Include/mpu_armv8.h"
typedef struct {
  uint32_t RBAR;
  uint32_t RLAR;
} ARM_MPU_Region_t;




static inline void ARM_MPU_Enable(uint32_t MPU_Control)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL = MPU_Control | (1UL );

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR |= (1UL << 16U);

  __DSB();
  __ISB();
}



static inline void ARM_MPU_Disable(void)
{
  __DMB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR &= ~(1UL << 16U);

  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL &= ~(1UL );
}
# 182 "../../../../../module/helhal/Drivers/CMSIS/Include/mpu_armv8.h"
static inline void ARM_MPU_SetMemAttrEx(MPU_Type* mpu, uint8_t idx, uint8_t attr)
{
  const uint8_t reg = idx / 4U;
  const uint32_t pos = ((idx % 4U) * 8U);
  const uint32_t mask = 0xFFU << pos;

  if (reg >= (sizeof(mpu->MAIR) / sizeof(mpu->MAIR[0]))) {
    return;
  }

  mpu->MAIR[reg] = ((mpu->MAIR[reg] & ~mask) | ((attr << pos) & mask));
}





static inline void ARM_MPU_SetMemAttr(uint8_t idx, uint8_t attr)
{
  ARM_MPU_SetMemAttrEx(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) ), idx, attr);
}
# 219 "../../../../../module/helhal/Drivers/CMSIS/Include/mpu_armv8.h"
static inline void ARM_MPU_ClrRegionEx(MPU_Type* mpu, uint32_t rnr)
{
  mpu->RNR = rnr;
  mpu->RLAR = 0U;
}




static inline void ARM_MPU_ClrRegion(uint32_t rnr)
{
  ARM_MPU_ClrRegionEx(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) ), rnr);
}
# 249 "../../../../../module/helhal/Drivers/CMSIS/Include/mpu_armv8.h"
static inline void ARM_MPU_SetRegionEx(MPU_Type* mpu, uint32_t rnr, uint32_t rbar, uint32_t rlar)
{
  mpu->RNR = rnr;
  mpu->RBAR = rbar;
  mpu->RLAR = rlar;
}






static inline void ARM_MPU_SetRegion(uint32_t rnr, uint32_t rbar, uint32_t rlar)
{
  ARM_MPU_SetRegionEx(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) ), rnr, rbar, rlar);
}
# 283 "../../../../../module/helhal/Drivers/CMSIS/Include/mpu_armv8.h"
static inline void ARM_MPU_OrderedMemcpy(volatile uint32_t* dst, const uint32_t* __restrict src, uint32_t len)
{
  uint32_t i;
  for (i = 0U; i < len; ++i)
  {
    dst[i] = src[i];
  }
}







static inline void ARM_MPU_LoadEx(MPU_Type* mpu, uint32_t rnr, ARM_MPU_Region_t const* table, uint32_t cnt)
{
  const uint32_t rowWordSize = sizeof(ARM_MPU_Region_t)/4U;
  if (cnt == 1U) {
    mpu->RNR = rnr;
    ARM_MPU_OrderedMemcpy(&(mpu->RBAR), &(table->RBAR), rowWordSize);
  } else {
    uint32_t rnrBase = rnr & ~(4U -1U);
    uint32_t rnrOffset = rnr % 4U;

    mpu->RNR = rnrBase;
    while ((rnrOffset + cnt) > 4U) {
      uint32_t c = 4U - rnrOffset;
      ARM_MPU_OrderedMemcpy(&(mpu->RBAR)+(rnrOffset*2U), &(table->RBAR), c*rowWordSize);
      table += c;
      cnt -= c;
      rnrOffset = 0U;
      rnrBase += 4U;
      mpu->RNR = rnrBase;
    }

    ARM_MPU_OrderedMemcpy(&(mpu->RBAR)+(rnrOffset*2U), &(table->RBAR), cnt*rowWordSize);
  }
}






static inline void ARM_MPU_Load(uint32_t rnr, ARM_MPU_Region_t const* table, uint32_t cnt)
{
  ARM_MPU_LoadEx(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) ), rnr, table, cnt);
}
# 2672 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h" 2
# 2691 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = ((FPU_Type *) ((0xE000E000UL) + 0x0F30UL) )->MVFR0;
  if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x220U)
  {
    return 2U;
  }
  else if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}
# 2773 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 4U) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 2833 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
extern volatile int32_t ITM_RxBuffer;
# 2845 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 2866 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 2886 "../../../../../module/helhal/Drivers/CMSIS/Include/core_cm33.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 231 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u575xx.h" 2
# 1 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/system_stm32u5xx.h" 1
# 53 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/system_stm32u5xx.h"
extern uint32_t SystemCoreClock;

extern const uint8_t AHBPrescTable[16];
extern const uint8_t APBPrescTable[8];
extern const uint32_t MSIRangeTable[16];
# 73 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/system_stm32u5xx.h"
extern void SystemInit (void);







extern void SystemCoreClockUpdate (void);
# 90 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/system_stm32u5xx.h"
extern uint32_t SECURE_SystemCoreClockUpdate(void);
# 232 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u575xx.h" 2
# 246 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u575xx.h"
typedef struct
{
  volatile uint32_t DR;
  volatile uint32_t IDR;
  volatile uint32_t CR;
       uint32_t RESERVED2;
  volatile uint32_t INIT;
  volatile uint32_t POL;
       uint32_t RESERVED3[246];
  volatile uint32_t HWCFGR;
  volatile uint32_t VERR;
  volatile uint32_t PIDR;
  volatile uint32_t SIDR;
} CRC_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t OAR1;
  volatile uint32_t OAR2;
  volatile uint32_t TIMINGR;
  volatile uint32_t TIMEOUTR;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t PECR;
  volatile uint32_t RXDR;
  volatile uint32_t TXDR;
  volatile uint32_t AUTOCR;
} I2C_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SWTRIGR;
  volatile uint32_t DHR12R1;
  volatile uint32_t DHR12L1;
  volatile uint32_t DHR8R1;
  volatile uint32_t DHR12R2;
  volatile uint32_t DHR12L2;
  volatile uint32_t DHR8R2;
  volatile uint32_t DHR12RD;
  volatile uint32_t DHR12LD;
  volatile uint32_t DHR8RD;
  volatile uint32_t DOR1;
  volatile uint32_t DOR2;
  volatile uint32_t SR;
  volatile uint32_t CCR;
  volatile uint32_t MCR;
  volatile uint32_t SHSR1;
  volatile uint32_t SHSR2;
  volatile uint32_t SHHR;
  volatile uint32_t SHRR;
  volatile uint32_t RESERVED[1];
  volatile uint32_t AUTOCR;
} DAC_TypeDef;




typedef struct
{
volatile uint32_t CR;
volatile uint32_t CFGR;
volatile uint32_t ISR;
volatile uint32_t ICR;
} CRS_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t DIN;
  volatile uint32_t STR;
  volatile uint32_t HR[5];
  volatile uint32_t IMR;
  volatile uint32_t SR;
       uint32_t RESERVED[52];
  volatile uint32_t CSR[54];
} HASH_TypeDef;




typedef struct
{
  volatile uint32_t HR[8];
} HASH_DIGEST_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t DR;
  uint32_t RESERVED;
  volatile uint32_t HTCR;
} RNG_TypeDef;




typedef struct
{
  volatile uint32_t IDCODE;
  volatile uint32_t CR;
  volatile uint32_t APB1FZR1;
  volatile uint32_t APB1FZR2;
  volatile uint32_t APB2FZR;
  volatile uint32_t APB3FZR;
       uint32_t RESERVED1[2];
  volatile uint32_t AHB1FZR;
       uint32_t RESERVED2;
  volatile uint32_t AHB3FZR;
} DBGMCU_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t RISR;
  volatile uint32_t IER;
  volatile uint32_t MISR;
  volatile uint32_t ICR;
  volatile uint32_t ESCR;
  volatile uint32_t ESUR;
  volatile uint32_t CWSTRTR;
  volatile uint32_t CWSIZER;
  volatile uint32_t DR;
} DCMI_TypeDef;




typedef struct
{
  volatile uint32_t SECCFGR;
  volatile uint32_t PRIVCFGR;
  volatile uint32_t RCFGLOCKR;
  volatile uint32_t MISR;
  volatile uint32_t SMISR;
} DMA_TypeDef;

typedef struct
{
  volatile uint32_t CLBAR;
       uint32_t RESERVED1[2];
  volatile uint32_t CFCR;
  volatile uint32_t CSR;
  volatile uint32_t CCR;
       uint32_t RESERVED2[10];
  volatile uint32_t CTR1;
  volatile uint32_t CTR2;
  volatile uint32_t CBR1;
  volatile uint32_t CSAR;
  volatile uint32_t CDAR;
  volatile uint32_t CTR3;
  volatile uint32_t CBR2;
       uint32_t RESERVED3[8];
  volatile uint32_t CLLR;
} DMA_Channel_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t ISR;
  volatile uint32_t IFCR;
  volatile uint32_t FGMAR;
  volatile uint32_t FGOR;
  volatile uint32_t BGMAR;
  volatile uint32_t BGOR;
  volatile uint32_t FGPFCCR;
  volatile uint32_t FGCOLR;
  volatile uint32_t BGPFCCR;
  volatile uint32_t BGCOLR;
  volatile uint32_t FGCMAR;
  volatile uint32_t BGCMAR;
  volatile uint32_t OPFCCR;
  volatile uint32_t OCOLR;
  volatile uint32_t OMAR;
  volatile uint32_t OOR;
  volatile uint32_t NLR;
  volatile uint32_t LWR;
  volatile uint32_t AMTCR;
  uint32_t RESERVED[236];
  volatile uint32_t FGCLUT[256];
  volatile uint32_t BGCLUT[256];
} DMA2D_TypeDef;




typedef struct
{
  volatile uint32_t RTSR1;
  volatile uint32_t FTSR1;
  volatile uint32_t SWIER1;
  volatile uint32_t RPR1;
  volatile uint32_t FPR1;
  volatile uint32_t SECCFGR1;
  volatile uint32_t PRIVCFGR1;
       uint32_t RESERVED1[17];
  volatile uint32_t EXTICR[4];
  volatile uint32_t LOCKR;
       uint32_t RESERVED2[3];
  volatile uint32_t IMR1;
  volatile uint32_t EMR1;
} EXTI_TypeDef;




typedef struct
{
  volatile uint32_t ACR;
       uint32_t RESERVED1;
  volatile uint32_t NSKEYR;
  volatile uint32_t SECKEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t RESERVED2;
  volatile uint32_t PDKEY1R;
  volatile uint32_t PDKEY2R;
  volatile uint32_t NSSR;
  volatile uint32_t SECSR;
  volatile uint32_t NSCR;
  volatile uint32_t SECCR;
  volatile uint32_t ECCR;
  volatile uint32_t OPSR;
       uint32_t RESERVED3[2];
  volatile uint32_t OPTR;
  volatile uint32_t NSBOOTADD0R;
  volatile uint32_t NSBOOTADD1R;
  volatile uint32_t SECBOOTADD0R;
  volatile uint32_t SECWM1R1;
  volatile uint32_t SECWM1R2;
  volatile uint32_t WRP1AR;
  volatile uint32_t WRP1BR;
  volatile uint32_t SECWM2R1;
  volatile uint32_t SECWM2R2;
  volatile uint32_t WRP2AR;
  volatile uint32_t WRP2BR;
  volatile uint32_t OEM1KEYR1;
  volatile uint32_t OEM1KEYR2;
  volatile uint32_t OEM2KEYR1;
  volatile uint32_t OEM2KEYR2;
  volatile uint32_t SECBB1R1;
  volatile uint32_t SECBB1R2;
  volatile uint32_t SECBB1R3;
  volatile uint32_t SECBB1R4;
       uint32_t RESERVED4[4];
  volatile uint32_t SECBB2R1;
  volatile uint32_t SECBB2R2;
  volatile uint32_t SECBB2R3;
  volatile uint32_t SECBB2R4;
       uint32_t RESERVED5[4];
  volatile uint32_t SECHDPCR;
  volatile uint32_t PRIVCFGR;
       uint32_t RESERVED6[2];
  volatile uint32_t PRIVBB1R1;
  volatile uint32_t PRIVBB1R2;
  volatile uint32_t PRIVBB1R3;
  volatile uint32_t PRIVBB1R4;
       uint32_t RESERVED7[4];
  volatile uint32_t PRIVBB2R1;
  volatile uint32_t PRIVBB2R2;
  volatile uint32_t PRIVBB2R3;
  volatile uint32_t PRIVBB2R4;
} FLASH_TypeDef;




typedef struct
{
  volatile uint32_t X1BUFCFG;
  volatile uint32_t X2BUFCFG;
  volatile uint32_t YBUFCFG;
  volatile uint32_t PARAM;
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t WDATA;
  volatile uint32_t RDATA;
} FMAC_TypeDef;




typedef struct
{
  volatile uint32_t MODER;
  volatile uint32_t OTYPER;
  volatile uint32_t OSPEEDR;
  volatile uint32_t PUPDR;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t LCKR;
  volatile uint32_t AFR[2];
  volatile uint32_t BRR;
  volatile uint32_t HSLVR;
  volatile uint32_t SECCFGR;
} GPIO_TypeDef;




typedef struct
{
  volatile uint32_t CR;
       uint32_t RESERVED1[3];
  volatile uint32_t SECCFGR1;
  volatile uint32_t SECCFGR2;
  volatile uint32_t SECCFGR3;
       uint32_t RESERVED2;
  volatile uint32_t PRIVCFGR1;
  volatile uint32_t PRIVCFGR2;
  volatile uint32_t PRIVCFGR3;
       uint32_t RESERVED3[5];
  volatile uint32_t MPCWM1ACFGR;
  volatile uint32_t MPCWM1AR;
  volatile uint32_t MPCWM1BCFGR;
  volatile uint32_t MPCWM1BR;
  volatile uint32_t MPCWM2ACFGR;
  volatile uint32_t MPCWM2AR;
  volatile uint32_t MPCWM2BCFGR;
  volatile uint32_t MPCWM2BR;
  volatile uint32_t MPCWM3ACFGR;
  volatile uint32_t MPCWM3AR;
       uint32_t RESERVED4[2];
  volatile uint32_t MPCWM4ACFGR;
  volatile uint32_t MPCWM4AR;
       uint32_t RESERVED5[2];
  volatile uint32_t MPCWM5ACFGR;
  volatile uint32_t MPCWM5AR;
  volatile uint32_t MPCWM5BCFGR;
  volatile uint32_t MPCWM5BR;
} GTZC_TZSC_TypeDef;

typedef struct
{
  volatile uint32_t CR;
  uint32_t RESERVED1[3];
  volatile uint32_t CFGLOCKR1;
  uint32_t RESERVED2[59];
  volatile uint32_t SECCFGR[32];
  uint32_t RESERVED3[32];
  volatile uint32_t PRIVCFGR[32];
} GTZC_MPCBB_TypeDef;

typedef struct
{
  volatile uint32_t IER1;
  volatile uint32_t IER2;
  volatile uint32_t IER3;
  volatile uint32_t IER4;
  volatile uint32_t SR1;
  volatile uint32_t SR2;
  volatile uint32_t SR3;
  volatile uint32_t SR4;
  volatile uint32_t FCR1;
  volatile uint32_t FCR2;
  volatile uint32_t FCR3;
  volatile uint32_t FCR4;
} GTZC_TZIC_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t IER;
  volatile uint32_t FCR;
  volatile uint32_t HMONR;
  volatile uint32_t MMONR;
       uint32_t RESERVED1[2];
  volatile uint32_t CRR0;
  volatile uint32_t CRR1;
  volatile uint32_t CRR2;
  volatile uint32_t CRR3;
       uint32_t RESERVED2[240];
  volatile uint32_t HWCFGR;
  volatile uint32_t VERR;
  volatile uint32_t IPIDR;
  volatile uint32_t SIDR;
} ICACHE_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t IER;
  volatile uint32_t FCR;
  volatile uint32_t RHMONR;
  volatile uint32_t RMMONR;
       uint32_t RESERVED1[2];
  volatile uint32_t WHMONR;
  volatile uint32_t WMMONR;
  volatile uint32_t CMDRSADDRR;
  volatile uint32_t CMDREADDRR;
} DCACHE_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t RIS;
  volatile uint32_t IER;
  volatile uint32_t MIS;
  volatile uint32_t ICR;
  volatile uint32_t RESERVED1[4];
  volatile uint32_t DR;
} PSSI_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMCR;
  volatile uint32_t DIER;
  volatile uint32_t SR;
  volatile uint32_t EGR;
  volatile uint32_t CCMR1;
  volatile uint32_t CCMR2;
  volatile uint32_t CCER;
  volatile uint32_t CNT;
  volatile uint32_t PSC;
  volatile uint32_t ARR;
  volatile uint32_t RCR;
  volatile uint32_t CCR1;
  volatile uint32_t CCR2;
  volatile uint32_t CCR3;
  volatile uint32_t CCR4;
  volatile uint32_t BDTR;
  volatile uint32_t CCR5;
  volatile uint32_t CCR6;
  volatile uint32_t CCMR3;
  volatile uint32_t DTR2;
  volatile uint32_t ECR;
  volatile uint32_t TISEL;
  volatile uint32_t AF1;
  volatile uint32_t AF2;
  volatile uint32_t OR1 ;
       uint32_t RESERVED0[220];
  volatile uint32_t DCR;
  volatile uint32_t DMAR;
} TIM_TypeDef;




typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t DIER;
  volatile uint32_t CFGR;
  volatile uint32_t CR;
  volatile uint32_t CCR1;
  volatile uint32_t ARR;
  volatile uint32_t CNT;
  volatile uint32_t RESERVED0;
  volatile uint32_t CFGR2;
  volatile uint32_t RCR;
  volatile uint32_t CCMR1;
  volatile uint32_t RESERVED1;
  volatile uint32_t CCR2;
} LPTIM_TypeDef;




typedef struct
{
  volatile uint32_t CSR;
} COMP_TypeDef;

typedef struct
{
  volatile uint32_t CSR_ODD;
  volatile uint32_t CSR_EVEN;
} COMP_Common_TypeDef;




typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t OTR;
  volatile uint32_t LPOTR;
} OPAMP_TypeDef;







typedef struct
{
 volatile uint32_t GCR;
 volatile uint32_t CKGCR;
 uint32_t RESERVED1[6];
 volatile uint32_t OR;
}MDF_TypeDef;




typedef struct
{
 volatile uint32_t SITFCR;
 volatile uint32_t BSMXCR;
 volatile uint32_t DFLTCR;
 volatile uint32_t DFLTCICR;
 volatile uint32_t DFLTRSFR;
 volatile uint32_t DFLTINTR;
 volatile uint32_t OLDCR;
 volatile uint32_t OLDTHLR;
 volatile uint32_t OLDTHHR;
 volatile uint32_t DLYCR;
 volatile uint32_t SCDCR;
 volatile uint32_t DFLTIER;
 volatile uint32_t DFLTISR;
 volatile uint32_t OECCR;
 volatile uint32_t SADCR;
 volatile uint32_t SADCFGR;
 volatile uint32_t SADSDLVR;
 volatile uint32_t SADANLVR;
 uint32_t RESERVED1[9];
 volatile uint32_t SNPSDR;
 volatile uint32_t DFLTDR;
} MDF_Filter_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  uint32_t RESERVED;
  volatile uint32_t DCR1;
  volatile uint32_t DCR2;
  volatile uint32_t DCR3;
  volatile uint32_t DCR4;
  uint32_t RESERVED1[2];
  volatile uint32_t SR;
  volatile uint32_t FCR;
  uint32_t RESERVED2[6];
  volatile uint32_t DLR;
  uint32_t RESERVED3;
  volatile uint32_t AR;
  uint32_t RESERVED4;
  volatile uint32_t DR;
  uint32_t RESERVED5[11];
  volatile uint32_t PSMKR;
  uint32_t RESERVED6;
  volatile uint32_t PSMAR;
  uint32_t RESERVED7;
  volatile uint32_t PIR;
  uint32_t RESERVED8[27];
  volatile uint32_t CCR;
  uint32_t RESERVED9;
  volatile uint32_t TCR;
  uint32_t RESERVED10;
  volatile uint32_t IR;
  uint32_t RESERVED11[3];
  volatile uint32_t ABR;
  uint32_t RESERVED12[3];
  volatile uint32_t LPTR;
  uint32_t RESERVED13[3];
  volatile uint32_t WPCCR;
  uint32_t RESERVED14;
  volatile uint32_t WPTCR;
  uint32_t RESERVED15;
  volatile uint32_t WPIR;
  uint32_t RESERVED16[3];
  volatile uint32_t WPABR;
  uint32_t RESERVED17[7];
  volatile uint32_t WCCR;
  uint32_t RESERVED18;
  volatile uint32_t WTCR;
  uint32_t RESERVED19;
  volatile uint32_t WIR;
  uint32_t RESERVED20[3];
  volatile uint32_t WABR;
  uint32_t RESERVED21[23];
  volatile uint32_t HLCR;
} OCTOSPI_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t PCR[8];
} OCTOSPIM_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t VOSR;
  volatile uint32_t SVMCR;
  volatile uint32_t WUCR1;
  volatile uint32_t WUCR2;
  volatile uint32_t WUCR3;
  volatile uint32_t BDCR1;
  volatile uint32_t BDCR2;
  volatile uint32_t DBPR;
  volatile uint32_t UCPDR;
  volatile uint32_t SECCFGR;
  volatile uint32_t PRIVCFGR;
  volatile uint32_t SR;
  volatile uint32_t SVMSR;
  volatile uint32_t BDSR;
  volatile uint32_t WUSR;
  volatile uint32_t WUSCR;
  volatile uint32_t APCR;
  volatile uint32_t PUCRA;
  volatile uint32_t PDCRA;
  volatile uint32_t PUCRB;
  volatile uint32_t PDCRB;
  volatile uint32_t PUCRC;
  volatile uint32_t PDCRC;
  volatile uint32_t PUCRD;
  volatile uint32_t PDCRD;
  volatile uint32_t PUCRE;
  volatile uint32_t PDCRE;
  volatile uint32_t PUCRF;
  volatile uint32_t PDCRF;
  volatile uint32_t PUCRG;
  volatile uint32_t PDCRG;
  volatile uint32_t PUCRH;
  volatile uint32_t PDCRH;
  volatile uint32_t PUCRI;
  volatile uint32_t PDCRI;
} PWR_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t IER;
  volatile uint32_t ISR;
  volatile uint32_t SEAR;
  volatile uint32_t DEAR;
  volatile uint32_t ICR;
  volatile uint32_t WPR1;
  volatile uint32_t WPR2;
  uint32_t RESERVED;
  volatile uint32_t ECCKEY;
  volatile uint32_t ERKEYR;
}RAMCFG_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  uint32_t RESERVED0;
  volatile uint32_t ICSCR1;
  volatile uint32_t ICSCR2;
  volatile uint32_t ICSCR3;
  volatile uint32_t CRRCR;
  uint32_t RESERVED1;
  volatile uint32_t CFGR1;
  volatile uint32_t CFGR2;
  volatile uint32_t CFGR3;
  volatile uint32_t PLL1CFGR;
  volatile uint32_t PLL2CFGR;
  volatile uint32_t PLL3CFGR;
  volatile uint32_t PLL1DIVR;
  volatile uint32_t PLL1FRACR;
  volatile uint32_t PLL2DIVR;
  volatile uint32_t PLL2FRACR;
  volatile uint32_t PLL3DIVR;
  volatile uint32_t PLL3FRACR;
  uint32_t RESERVED2;
  volatile uint32_t CIER;
  volatile uint32_t CIFR;
  volatile uint32_t CICR;
  uint32_t RESERVED3;
  volatile uint32_t AHB1RSTR;
  volatile uint32_t AHB2RSTR1;
  volatile uint32_t AHB2RSTR2;
  volatile uint32_t AHB3RSTR;
  uint32_t RESERVED4;
  volatile uint32_t APB1RSTR1;
  volatile uint32_t APB1RSTR2;
  volatile uint32_t APB2RSTR;
  volatile uint32_t APB3RSTR;
  uint32_t RESERVED5;
  volatile uint32_t AHB1ENR;
  volatile uint32_t AHB2ENR1;
  volatile uint32_t AHB2ENR2;
  volatile uint32_t AHB3ENR;
  uint32_t RESERVED6;
  volatile uint32_t APB1ENR1;
  volatile uint32_t APB1ENR2;
  volatile uint32_t APB2ENR;
  volatile uint32_t APB3ENR;
  uint32_t RESERVED7;
  volatile uint32_t AHB1SMENR;
  volatile uint32_t AHB2SMENR1;
  volatile uint32_t AHB2SMENR2;
  volatile uint32_t AHB3SMENR;
  uint32_t RESERVED8;
  volatile uint32_t APB1SMENR1;
  volatile uint32_t APB1SMENR2;
  volatile uint32_t APB2SMENR;
  volatile uint32_t APB3SMENR;
  uint32_t RESERVED9;
  volatile uint32_t SRDAMR;
  uint32_t RESERVED10;
  volatile uint32_t CCIPR1;
  volatile uint32_t CCIPR2;
  volatile uint32_t CCIPR3;
  uint32_t RESERVED11;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  uint32_t RESERVED[6];
  volatile uint32_t SECCFGR;
  volatile uint32_t PRIVCFGR;
} RCC_TypeDef;
# 1017 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u575xx.h"
typedef struct
{
  volatile uint32_t TR;
  volatile uint32_t DR;
  volatile uint32_t SSR;
  volatile uint32_t ICSR;
  volatile uint32_t PRER;
  volatile uint32_t WUTR;
  volatile uint32_t CR;
  volatile uint32_t PRIVCFGR;
  volatile uint32_t SECCFGR;
  volatile uint32_t WPR;
  volatile uint32_t CALR;
  volatile uint32_t SHIFTR;
  volatile uint32_t TSTR;
  volatile uint32_t TSDR;
  volatile uint32_t TSSSR;
       uint32_t RESERVED0;
  volatile uint32_t ALRMAR;
  volatile uint32_t ALRMASSR;
  volatile uint32_t ALRMBR;
  volatile uint32_t ALRMBSSR;
  volatile uint32_t SR;
  volatile uint32_t MISR;
  volatile uint32_t SMISR;
  volatile uint32_t SCR;
       uint32_t RESERVED4[4];
  volatile uint32_t ALRABINR;
  volatile uint32_t ALRBBINR;
} RTC_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t FLTCR;
  volatile uint32_t ATCR1;
  volatile uint32_t ATSEEDR;
  volatile uint32_t ATOR;
  volatile uint32_t ATCR2;
  volatile uint32_t SECCFGR;
  volatile uint32_t PRIVCFGR;
       uint32_t RESERVED0;
  volatile uint32_t IER;
  volatile uint32_t SR;
  volatile uint32_t MISR;
  volatile uint32_t SMISR;
  volatile uint32_t SCR;
  volatile uint32_t COUNTR;
       uint32_t RESERVED1[4];
  volatile uint32_t ERCFGR;
       uint32_t RESERVED2[42];
  volatile uint32_t BKP0R;
  volatile uint32_t BKP1R;
  volatile uint32_t BKP2R;
  volatile uint32_t BKP3R;
  volatile uint32_t BKP4R;
  volatile uint32_t BKP5R;
  volatile uint32_t BKP6R;
  volatile uint32_t BKP7R;
  volatile uint32_t BKP8R;
  volatile uint32_t BKP9R;
  volatile uint32_t BKP10R;
  volatile uint32_t BKP11R;
  volatile uint32_t BKP12R;
  volatile uint32_t BKP13R;
  volatile uint32_t BKP14R;
  volatile uint32_t BKP15R;
  volatile uint32_t BKP16R;
  volatile uint32_t BKP17R;
  volatile uint32_t BKP18R;
  volatile uint32_t BKP19R;
  volatile uint32_t BKP20R;
  volatile uint32_t BKP21R;
  volatile uint32_t BKP22R;
  volatile uint32_t BKP23R;
  volatile uint32_t BKP24R;
  volatile uint32_t BKP25R;
  volatile uint32_t BKP26R;
  volatile uint32_t BKP27R;
  volatile uint32_t BKP28R;
  volatile uint32_t BKP29R;
  volatile uint32_t BKP30R;
  volatile uint32_t BKP31R;
} TAMP_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t BRR;
  volatile uint32_t GTPR;
  volatile uint32_t RTOR;
  volatile uint32_t RQR;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t RDR;
  volatile uint32_t TDR;
  volatile uint32_t PRESC;
  volatile uint32_t AUTOCR;
} USART_TypeDef;




typedef struct
{
  volatile uint32_t GCR;
  uint32_t RESERVED[16];
  volatile uint32_t PDMCR;
  volatile uint32_t PDMDLY;
} SAI_TypeDef;

typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t FRCR;
  volatile uint32_t SLOTR;
  volatile uint32_t IMR;
  volatile uint32_t SR;
  volatile uint32_t CLRFR;
  volatile uint32_t DR;
} SAI_Block_TypeDef;




typedef struct
{
  volatile uint32_t SECCFGR;
  volatile uint32_t CFGR1;
  volatile uint32_t FPUIMR;
  volatile uint32_t CNSLCKR;
  volatile uint32_t CSLCKR;
  volatile uint32_t CFGR2;
  volatile uint32_t MESR;
  volatile uint32_t CCCSR;
  volatile uint32_t CCVR;
  volatile uint32_t CCCR;
       uint32_t RESERVED1;
  volatile uint32_t RSSCMDR;
       uint32_t RESERVED2[16];
  volatile uint32_t UCPD;
} SYSCFG_TypeDef;




typedef struct
{
  volatile uint32_t POWER;
  volatile uint32_t CLKCR;
  volatile uint32_t ARG;
  volatile uint32_t CMD;
  volatile const uint32_t RESPCMD;
  volatile const uint32_t RESP1;
  volatile const uint32_t RESP2;
  volatile const uint32_t RESP3;
  volatile const uint32_t RESP4;
  volatile uint32_t DTIMER;
  volatile uint32_t DLEN;
  volatile uint32_t DCTRL;
  volatile const uint32_t DCOUNT;
  volatile const uint32_t STA;
  volatile uint32_t ICR;
  volatile uint32_t MASK;
  volatile uint32_t ACKTIME;
  uint32_t RESERVED0[3];
  volatile uint32_t IDMACTRL;
  volatile uint32_t IDMABSIZE;
  volatile uint32_t IDMABASER;
  uint32_t RESERVED1[2];
  volatile uint32_t IDMALAR;
  volatile uint32_t IDMABAR;
  uint32_t RESERVED2[5];
  volatile uint32_t FIFO;
} SDMMC_TypeDef;







typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFGR;
} DLYB_TypeDef;




typedef struct
{
  volatile uint32_t CFG1;
  volatile uint32_t CFG2;
  uint32_t RESERVED0;
  volatile uint32_t CR;
  volatile uint32_t IMR;
  volatile uint32_t SR;
  volatile uint32_t ICR;
  volatile uint32_t TX_ORDSET;
  volatile uint32_t TX_PAYSZ;
  volatile uint32_t TXDR;
  volatile uint32_t RX_ORDSET;
  volatile uint32_t RX_PAYSZ;
  volatile uint32_t RXDR;
  volatile uint32_t RX_ORDEXT1;
  volatile uint32_t RX_ORDEXT2;
} UCPD_TypeDef;




typedef struct
{
  volatile uint32_t GOTGCTL;
  volatile uint32_t GOTGINT;
  volatile uint32_t GAHBCFG;
  volatile uint32_t GUSBCFG;
  volatile uint32_t GRSTCTL;
  volatile uint32_t GINTSTS;
  volatile uint32_t GINTMSK;
  volatile uint32_t GRXSTSR;
  volatile uint32_t GRXSTSP;
  volatile uint32_t GRXFSIZ;
  volatile uint32_t DIEPTXF0_HNPTXFSIZ;
  volatile uint32_t HNPTXSTS;
  volatile uint32_t Reserved30[2];
  volatile uint32_t GCCFG;
  volatile uint32_t CID;
  volatile uint32_t GSNPSID;
  volatile uint32_t GHWCFG1;
  volatile uint32_t GHWCFG2;
  volatile uint32_t GHWCFG3;
  volatile uint32_t Reserved6;
  volatile uint32_t GLPMCFG;
  volatile uint32_t GPWRDN;
  volatile uint32_t GDFIFOCFG;
  volatile uint32_t GADPCTL;
  volatile uint32_t Reserved43[39];
  volatile uint32_t HPTXFSIZ;
  volatile uint32_t DIEPTXF[0x0F];
} USB_OTG_GlobalTypeDef;




typedef struct
{
  volatile uint32_t DCFG;
  volatile uint32_t DCTL;
  volatile uint32_t DSTS;
  uint32_t Reserved0C;
  volatile uint32_t DIEPMSK;
  volatile uint32_t DOEPMSK;
  volatile uint32_t DAINT;
  volatile uint32_t DAINTMSK;
  uint32_t Reserved20;
  uint32_t Reserved9;
  volatile uint32_t DVBUSDIS;
  volatile uint32_t DVBUSPULSE;
  volatile uint32_t DTHRCTL;
  volatile uint32_t DIEPEMPMSK;
  volatile uint32_t DEACHINT;
  volatile uint32_t DEACHMSK;
  uint32_t Reserved40;
  volatile uint32_t DINEP1MSK;
  uint32_t Reserved44[15];
  volatile uint32_t DOUTEP1MSK;
} USB_OTG_DeviceTypeDef;





typedef struct
{
  volatile uint32_t DIEPCTL;
  volatile uint32_t Reserved04;
  volatile uint32_t DIEPINT;
  volatile uint32_t Reserved0C;
  volatile uint32_t DIEPTSIZ;
  volatile uint32_t DIEPDMA;
  volatile uint32_t DTXFSTS;
  volatile uint32_t Reserved18;
} USB_OTG_INEndpointTypeDef;




typedef struct
{
  volatile uint32_t DOEPCTL;
  volatile uint32_t Reserved04;
  volatile uint32_t DOEPINT;
  volatile uint32_t Reserved0C;
  volatile uint32_t DOEPTSIZ;
  volatile uint32_t DOEPDMA;
  volatile uint32_t Reserved18[2];
} USB_OTG_OUTEndpointTypeDef;




typedef struct
{
  volatile uint32_t HCFG;
  volatile uint32_t HFIR;
  volatile uint32_t HFNUM;
  uint32_t Reserved40C;
  volatile uint32_t HPTXSTS;
  volatile uint32_t HAINT;
  volatile uint32_t HAINTMSK;
} USB_OTG_HostTypeDef;




typedef struct
{
  volatile uint32_t HCCHAR;
  volatile uint32_t HCSPLT;
  volatile uint32_t HCINT;
  volatile uint32_t HCINTMSK;
  volatile uint32_t HCTSIZ;
  volatile uint32_t HCDMA;
  uint32_t Reserved[2];
} USB_OTG_HostChannelTypeDef;




typedef struct
{
  volatile uint32_t CREL;
  volatile uint32_t ENDN;
       uint32_t RESERVED1;
  volatile uint32_t DBTP;
  volatile uint32_t TEST;
  volatile uint32_t RWD;
  volatile uint32_t CCCR;
  volatile uint32_t NBTP;
  volatile uint32_t TSCC;
  volatile uint32_t TSCV;
  volatile uint32_t TOCC;
  volatile uint32_t TOCV;
       uint32_t RESERVED2[4];
  volatile uint32_t ECR;
  volatile uint32_t PSR;
  volatile uint32_t TDCR;
       uint32_t RESERVED3;
  volatile uint32_t IR;
  volatile uint32_t IE;
  volatile uint32_t ILS;
  volatile uint32_t ILE;
       uint32_t RESERVED4[8];
  volatile uint32_t RXGFC;
  volatile uint32_t XIDAM;
  volatile uint32_t HPMS;
       uint32_t RESERVED5;
  volatile uint32_t RXF0S;
  volatile uint32_t RXF0A;
  volatile uint32_t RXF1S;
  volatile uint32_t RXF1A;
       uint32_t RESERVED6[8];
  volatile uint32_t TXBC;
  volatile uint32_t TXFQS;
  volatile uint32_t TXBRP;
  volatile uint32_t TXBAR;
  volatile uint32_t TXBCR;
  volatile uint32_t TXBTO;
  volatile uint32_t TXBCF;
  volatile uint32_t TXBTIE;
  volatile uint32_t TXBCIE;
  volatile uint32_t TXEFS;
  volatile uint32_t TXEFA;
} FDCAN_GlobalTypeDef;




typedef struct
{
  volatile uint32_t CKDIV;
       uint32_t RESERVED1[128];
  volatile uint32_t OPTR;
       uint32_t RESERVED2[58];
  volatile uint32_t HWCFG;
  volatile uint32_t VERR;
  volatile uint32_t IPIDR;
  volatile uint32_t SIDR;
} FDCAN_Config_TypeDef;




typedef struct
{
  volatile uint32_t BTCR[8];
  volatile uint32_t PCSCNTR;
} FMC_Bank1_TypeDef;




typedef struct
{
  volatile uint32_t BWTR[7];
} FMC_Bank1E_TypeDef;




typedef struct
{
  volatile uint32_t PCR;
  volatile uint32_t SR;
  volatile uint32_t PMEM;
  volatile uint32_t PATT;
  uint32_t RESERVED0;
  volatile uint32_t ECCR;
} FMC_Bank3_TypeDef;




typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t CCR;
} VREFBUF_TypeDef;




typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t IER;
  volatile uint32_t CR;
  volatile uint32_t CFGR1;
  volatile uint32_t CFGR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
  volatile uint32_t PCSEL;
  volatile uint32_t AWD1TR;
  volatile uint32_t AWD2TR;
  volatile uint32_t CHSELR;
  volatile uint32_t AWD3TR;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t SQR4;
  volatile uint32_t DR;
  volatile uint32_t PW;
  uint32_t RESERVED1;
  volatile uint32_t JSQR;
  uint32_t RESERVED2[4];
  volatile uint32_t OFR1;
  volatile uint32_t OFR2;
  volatile uint32_t OFR3;
  volatile uint32_t OFR4;
  volatile uint32_t GCOMP;
  uint32_t RESERVED3[3];
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
  uint32_t RESERVED4[4];
  volatile uint32_t AWD2CR;
  volatile uint32_t AWD3CR;
  volatile uint32_t LTR1;
  volatile uint32_t HTR1;
  volatile uint32_t LTR2;
  volatile uint32_t HTR2;
  volatile uint32_t LTR3;
  volatile uint32_t HTR3;
  volatile uint32_t DIFSEL;
  volatile uint32_t CALFACT;
  volatile uint32_t CALFACT2;
  uint32_t RESERVED5;
  volatile uint32_t OR;
} ADC_TypeDef;

typedef struct
{
  volatile uint32_t CCR;
} ADC_Common_TypeDef;




typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t WDATA;
  volatile uint32_t RDATA;
} CORDIC_TypeDef;




typedef struct
{
  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
  volatile uint32_t WINR;
  volatile uint32_t EWCR;
} IWDG_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CFG1;
  volatile uint32_t CFG2;
  volatile uint32_t IER;
  volatile uint32_t SR;
  volatile uint32_t IFCR;
  volatile uint32_t AUTOCR;
  volatile uint32_t TXDR;
  uint32_t RESERVED1[3];
  volatile uint32_t RXDR;
  uint32_t RESERVED2[3];
  volatile uint32_t CRCPOLY;
  volatile uint32_t TXCRC;
  volatile uint32_t RXCRC;
  volatile uint32_t UDRDR;
} SPI_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t IER;
  volatile uint32_t ICR;
  volatile uint32_t ISR;
  volatile uint32_t IOHCR;
  uint32_t RESERVED1;
  volatile uint32_t IOASCR;
  uint32_t RESERVED2;
  volatile uint32_t IOSCR;
  uint32_t RESERVED3;
  volatile uint32_t IOCCR;
  uint32_t RESERVED4;
  volatile uint32_t IOGCSR;
  volatile uint32_t IOGXCR[8];
} TSC_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_TypeDef;
# 2042 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u575xx.h"
typedef uint32_t ( *RSSLIB_S_CloseExitHDP_TypeDef)( uint32_t HdpArea, uint32_t VectorTableAddr );





typedef struct
{
  volatile const uint32_t Reserved[8];
}NSC_pFuncTypeDef;




typedef struct
{
  volatile const uint32_t Reserved2[2];
  volatile const RSSLIB_S_CloseExitHDP_TypeDef CloseExitHDP;
}S_pFuncTypeDef;




typedef struct
{
  NSC_pFuncTypeDef NSC;
  S_pFuncTypeDef S;
}RSSLIB_pFunc_TypeDef;
# 98 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u5xx.h" 2
# 111 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u5xx.h"
typedef enum
{
  RESET = 0,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0,
  ENABLE = !DISABLE
} FunctionalState;


typedef enum
{
  SUCCESS = 0,
  ERROR = !SUCCESS
} ErrorStatus;
# 215 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u5xx.h"
# 1 "../Inc/stm32u5xx_hal.h" 1
# 216 "../../../../../module/helhal/Drivers/CMSIS/Device/ST/STM32U5xx/Include/stm32u5xx.h" 2
# 34 "../Inc/stm32u5xx_hal_def.h" 2
# 1 "../Inc/Legacy/stm32_hal_legacy.h" 1
# 35 "../Inc/stm32u5xx_hal_def.h" 2
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 1 3 4
# 145 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 3 4

# 145 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 214 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 3 4
typedef unsigned int size_t;
# 329 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 424 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 435 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 3 4
} max_align_t;
# 36 "../Inc/stm32u5xx_hal_def.h" 2
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 1 3




# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 1 3
# 13 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/_ansi.h" 1 3
# 10 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/_ansi.h" 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/newlib.h" 1 3
# 11 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/config.h" 1 3



# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 5 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/config.h" 2 3
# 12 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/_ansi.h" 2 3
# 14 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 1 3 4
# 15 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_types.h" 1 3
# 24 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_types.h" 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 1 3 4
# 359 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 25 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_types.h" 2 3


# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/_types.h" 1 3
# 28 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 131 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_types.h" 3
typedef unsigned int __size_t;
# 147 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_types.h" 3
typedef signed int _ssize_t;
# 158 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef long __daddr_t;



typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 34 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/lock.h" 1 3
# 33 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;






extern void __retarget_lock_init(_LOCK_T *lock);

extern void __retarget_lock_init_recursive(_LOCK_T *lock);

extern void __retarget_lock_close(_LOCK_T lock);

extern void __retarget_lock_close_recursive(_LOCK_T lock);

extern void __retarget_lock_acquire(_LOCK_T lock);

extern void __retarget_lock_acquire_recursive(_LOCK_T lock);

extern int __retarget_lock_try_acquire(_LOCK_T lock);

extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);


extern void __retarget_lock_release(_LOCK_T lock);

extern void __retarget_lock_release_recursive(_LOCK_T lock);
# 35 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 2 3
typedef _LOCK_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 115 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 147 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 253 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



extern __FILE __sf[3];

struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

extern struct _glue __sglue;
# 289 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 551 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];




  struct __locale_t *_locale;





  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {



          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;







    } _new;







  void (**_sig_func)(int);
};
# 749 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
extern struct _reent *_impure_ptr ;





extern struct _reent _impure_data ;
# 867 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/reent.h" 3
extern struct _atexit *__atexit;
extern struct _atexit __atexit0;

extern void (*__stdio_exit_handler) (void);

void _reclaim_reent (struct _reent *);

extern int _fwalk_sglue (struct _reent *, int (*)(struct _reent *, __FILE *),
    struct _glue *);
# 6 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 2 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/cdefs.h" 1 3
# 47 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/cdefs.h" 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/include/stddef.h" 1 3 4
# 48 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/sys/cdefs.h" 2 3
# 7 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 2 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 8 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 2 3
# 1 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/_ansi.h" 1 3
# 9 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 2 3


# 86 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 3
extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);






extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);




extern int finite (double);
extern int finitef (float);
extern int finitel (long double);
extern int isinff (float);
extern int isnanf (float);





extern int isinf (double);




extern int isnan (double);
# 160 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 3
    typedef float float_t;
    typedef double double_t;
# 223 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 3
extern int __isinff (float);
extern int __isinfd (double);
extern int __isnanf (float);
extern int __isnand (double);
extern int __fpclassifyf (float);
extern int __fpclassifyd (double);
extern int __signbitf (float);
extern int __signbitd (double);
# 319 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 3
extern double infinity (void);
extern double nan (const char *);
extern double copysign (double, double);
extern double logb (double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);

extern double exp2 (double);
extern double scalbln (double, long int);
extern double tgamma (double);
extern double nearbyint (double);
extern long int lrint (double);
extern long long int llrint (double);
extern double round (double);
extern long int lround (double);
extern long long int llround (double);
extern double trunc (double);
extern double remquo (double, double, int *);
extern double fdim (double, double);
extern double fmax (double, double);
extern double fmin (double, double);
extern double fma (double, double, double);


extern double log1p (double);
extern double expm1 (double);



extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double lgamma (double);
extern double erf (double);
extern double erfc (double);
extern double log2 (double);





extern double hypot (double, double);






extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);


extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);




extern float exp2f (float);
extern float scalblnf (float, long int);
extern float tgammaf (float);
extern float nearbyintf (float);
extern long int lrintf (float);
extern long long int llrintf (float);
extern float roundf (float);
extern long int lroundf (float);
extern long long int llroundf (float);
extern float truncf (float);
extern float remquof (float, float, int *);
extern float fdimf (float, float);
extern float fmaxf (float, float);
extern float fminf (float, float);
extern float fmaf (float, float, float);

extern float infinityf (void);
extern float nanf (const char *);
extern float copysignf (float, float);
extern float logbf (float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);


extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float lgammaf (float);
extern float erff (float);
extern float erfcf (float);
extern float log2f (float);
extern float hypotf (float, float);
# 451 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 3
extern long double atanl (long double);
extern long double cosl (long double);
extern long double sinl (long double);
extern long double tanl (long double);
extern long double tanhl (long double);
extern long double frexpl (long double, int *);
extern long double modfl (long double, long double *);
extern long double ceill (long double);
extern long double fabsl (long double);
extern long double floorl (long double);
extern long double log1pl (long double);
extern long double expm1l (long double);




extern long double acosl (long double);
extern long double asinl (long double);
extern long double atan2l (long double, long double);
extern long double coshl (long double);
extern long double sinhl (long double);
extern long double expl (long double);
extern long double ldexpl (long double, int);
extern long double logl (long double);
extern long double log10l (long double);
extern long double powl (long double, long double);
extern long double sqrtl (long double);
extern long double fmodl (long double, long double);
extern long double hypotl (long double, long double);


extern long double copysignl (long double, long double);
extern long double nanl (const char *);
extern int ilogbl (long double);
extern long double asinhl (long double);
extern long double cbrtl (long double);
extern long double nextafterl (long double, long double);
extern float nexttowardf (float, long double);
extern double nexttoward (double, long double);
extern long double nexttowardl (long double, long double);
extern long double logbl (long double);
extern long double log2l (long double);
extern long double rintl (long double);
extern long double scalbnl (long double, int);
extern long double exp2l (long double);
extern long double scalblnl (long double, long);
extern long double tgammal (long double);
extern long double nearbyintl (long double);
extern long int lrintl (long double);
extern long long int llrintl (long double);
extern long double roundl (long double);
extern long lroundl (long double);
extern long long int llroundl (long double);
extern long double truncl (long double);
extern long double remquol (long double, long double, int *);
extern long double fdiml (long double, long double);
extern long double fmaxl (long double, long double);
extern long double fminl (long double, long double);
extern long double fmal (long double, long double, long double);

extern long double acoshl (long double);
extern long double atanhl (long double);
extern long double remainderl (long double, long double);
extern long double lgammal (long double);
extern long double erfl (long double);
extern long double erfcl (long double);
# 533 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 3
extern double drem (double, double);
extern float dremf (float, float);



extern double gamma_r (double, int *);
extern double lgamma_r (double, int *);
extern float gammaf_r (float, int *);
extern float lgammaf_r (float, int *);



extern double y0 (double);
extern double y1 (double);
extern double yn (int, double);
extern double j0 (double);
extern double j1 (double);
extern double jn (int, double);



extern float y0f (float);
extern float y1f (float);
extern float ynf (int, float);
extern float j0f (float);
extern float j1f (float);
extern float jnf (int, float);
# 595 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 3
extern int *__signgam (void);
# 637 "/Applications/ArmGNUToolchain/12.2.mpacbti-bet1/arm-none-eabi/arm-none-eabi/include/math.h" 3

# 37 "../Inc/stm32u5xx_hal_def.h" 2







# 43 "../Inc/stm32u5xx_hal_def.h"
typedef enum
{
  HAL_OK = 0x00,
  HAL_ERROR = 0x01,
  HAL_BUSY = 0x02,
  HAL_TIMEOUT = 0x03
} HAL_StatusTypeDef;




typedef enum
{
  HAL_UNLOCKED = 0x00,
  HAL_LOCKED = 0x01
} HAL_LockTypeDef;
# 29 "../Inc/stm32u5xx_hal_rcc.h" 2
# 46 "../Inc/stm32u5xx_hal_rcc.h"
typedef struct
{
  uint32_t PLLState;


  uint32_t PLLSource;


  uint32_t PLLM;


  uint32_t PLLMBOOST;


  uint32_t PLLN;


  uint32_t PLLP;



  uint32_t PLLQ;


  uint32_t PLLR;


  uint32_t PLLRGE;


  uint32_t PLLFRACN;


} RCC_PLLInitTypeDef;




typedef struct
{
  uint32_t OscillatorType;


  uint32_t HSEState;


  uint32_t LSEState;


  uint32_t HSIState;


  uint32_t HSICalibrationValue;



  uint32_t LSIState;


  uint32_t LSIDiv;


  uint32_t MSIState;


  uint32_t MSICalibrationValue;


  uint32_t MSIClockRange;


  uint32_t MSIKClockRange;


  uint32_t HSI48State;


  uint32_t SHSIState;


  uint32_t MSIKState;


  RCC_PLLInitTypeDef PLL;

} RCC_OscInitTypeDef;




typedef struct
{
  uint32_t ClockType;


  uint32_t SYSCLKSource;


  uint32_t AHBCLKDivider;



  uint32_t APB1CLKDivider;


  uint32_t APB2CLKDivider;


  uint32_t APB3CLKDivider;

} RCC_ClkInitTypeDef;
# 3880 "../Inc/stm32u5xx_hal_rcc.h"
# 1 "../Inc/stm32u5xx_hal_rcc_ex.h" 1
# 46 "../Inc/stm32u5xx_hal_rcc_ex.h"
typedef struct
{
  uint32_t PLL2Source;


  uint32_t PLL2M;


  uint32_t PLL2N;


  uint32_t PLL2P;


  uint32_t PLL2Q;


  uint32_t PLL2R;



  uint32_t PLL2RGE;


  uint32_t PLL2FRACN;


  uint32_t PLL2ClockOut;

} RCC_PLL2InitTypeDef;





typedef struct
{
  uint32_t PLL3Source;


  uint32_t PLL3M;


  uint32_t PLL3N;


  uint32_t PLL3P;


  uint32_t PLL3Q;


  uint32_t PLL3R;



  uint32_t PLL3RGE;


  uint32_t PLL3FRACN;


  uint32_t PLL3ClockOut;

} RCC_PLL3InitTypeDef;




typedef struct
{
  uint32_t PLL1_P_Frequency;
  uint32_t PLL1_Q_Frequency;
  uint32_t PLL1_R_Frequency;
} PLL1_ClocksTypeDef;




typedef struct
{
  uint32_t PLL2_P_Frequency;
  uint32_t PLL2_Q_Frequency;
  uint32_t PLL2_R_Frequency;
} PLL2_ClocksTypeDef;




typedef struct
{
  uint32_t PLL3_P_Frequency;
  uint32_t PLL3_Q_Frequency;
  uint32_t PLL3_R_Frequency;
} PLL3_ClocksTypeDef;





typedef struct
{
  uint32_t PeriphClockSelection;


  RCC_PLL2InitTypeDef PLL2;



  RCC_PLL3InitTypeDef PLL3;



  uint32_t Usart1ClockSelection;


  uint32_t Usart2ClockSelection;


  uint32_t Usart3ClockSelection;


  uint32_t Uart4ClockSelection;


  uint32_t Uart5ClockSelection;


  uint32_t Lpuart1ClockSelection;


  uint32_t I2c1ClockSelection;


  uint32_t I2c2ClockSelection;


  uint32_t I2c3ClockSelection;


  uint32_t I2c4ClockSelection;


  uint32_t Lptim1ClockSelection;


  uint32_t Lptim2ClockSelection;


  uint32_t Lptim34ClockSelection;


  uint32_t Fdcan1ClockSelection;


  uint32_t Mdf1ClockSelection;


  uint32_t Adf1ClockSelection;


  uint32_t Sai1ClockSelection;


  uint32_t Sai2ClockSelection;


  uint32_t RngClockSelection;


  uint32_t SaesClockSelection;


  uint32_t Clk48ClockSelection;


  uint32_t SdmmcClockSelection;


  uint32_t AdcDacClockSelection;


  uint32_t Dac1ClockSelection;


  uint32_t OspiClockSelection;


  uint32_t Spi1ClockSelection;


  uint32_t Spi2ClockSelection;


  uint32_t Spi3ClockSelection;


  uint32_t RTCClockSelection;

} RCC_PeriphCLKInitTypeDef;






typedef struct
{
  uint32_t Prescaler;


  uint32_t Source;


  uint32_t Polarity;


  uint32_t ReloadValue;





  uint32_t ErrorLimitValue;



  uint32_t HSI48CalibrationValue;



} RCC_CRSInitTypeDef;




typedef struct
{
  uint32_t ReloadValue;


  uint32_t HSI48CalibrationValue;


  uint32_t FreqErrorCapture;



  uint32_t FreqErrorDirection;




} RCC_CRSSynchroInfoTypeDef;
# 1932 "../Inc/stm32u5xx_hal_rcc_ex.h"
HAL_StatusTypeDef HAL_RCCEx_PeriphCLKConfig(RCC_PeriphCLKInitTypeDef *pPeriphClkInit);
void HAL_RCCEx_GetPeriphCLKConfig(RCC_PeriphCLKInitTypeDef *pPeriphClkInit);
uint32_t HAL_RCCEx_GetPeriphCLKFreq(uint32_t PeriphClk);
void HAL_RCCEx_GetPLL1ClockFreq(PLL1_ClocksTypeDef *PLL1_Clocks);
void HAL_RCCEx_GetPLL2ClockFreq(PLL2_ClocksTypeDef *PLL2_Clocks);
void HAL_RCCEx_GetPLL3ClockFreq(PLL3_ClocksTypeDef *PLL3_Clocks);
# 1946 "../Inc/stm32u5xx_hal_rcc_ex.h"
HAL_StatusTypeDef HAL_RCCEx_EnablePLL2(RCC_PLL2InitTypeDef *PLL2Init);
HAL_StatusTypeDef HAL_RCCEx_DisablePLL2(void);
HAL_StatusTypeDef HAL_RCCEx_EnablePLL3(RCC_PLL3InitTypeDef *PLL3Init);
HAL_StatusTypeDef HAL_RCCEx_DisablePLL3(void);
HAL_StatusTypeDef HAL_RCCEx_EnableMSIPLLFastStartup(void);
HAL_StatusTypeDef HAL_RCCEx_DisableMSIPLLFastStartup(void);
HAL_StatusTypeDef HAL_RCCEx_EnableMSIPLLModeSelection(uint32_t MSIPLLModeSelection);
void HAL_RCCEx_WakeUpStopCLKConfig(uint32_t WakeUpClk);
void HAL_RCCEx_KerWakeUpStopCLKConfig(uint32_t WakeUpClk);
void HAL_RCCEx_StandbyMSIRangeConfig(uint32_t MSIRange);
void HAL_RCCEx_EnableLSECSS(void);
void HAL_RCCEx_DisableLSECSS(void);
void HAL_RCCEx_LSECSS_IRQHandler(void);
void HAL_RCCEx_LSECSS_Callback(void);
void HAL_RCCEx_EnableLSCO(uint32_t LSCOSource);
void HAL_RCCEx_DisableLSCO(void);
void HAL_RCCEx_EnableMSIPLLMode(void);
void HAL_RCCEx_DisableMSIPLLMode(void);
# 1974 "../Inc/stm32u5xx_hal_rcc_ex.h"
void HAL_RCCEx_CRSConfig(const RCC_CRSInitTypeDef *const pInit);
void HAL_RCCEx_CRSSoftwareSynchronizationGenerate(void);
void HAL_RCCEx_CRSGetSynchronizationInfo(RCC_CRSSynchroInfoTypeDef *pSynchroInfo);
uint32_t HAL_RCCEx_CRSWaitSynchronization(uint32_t Timeout);
void HAL_RCCEx_CRS_IRQHandler(void);
void HAL_RCCEx_CRS_SyncOkCallback(void);
void HAL_RCCEx_CRS_SyncWarnCallback(void);
void HAL_RCCEx_CRS_ExpectedSyncCallback(void);
void HAL_RCCEx_CRS_ErrorCallback(uint32_t Error);
# 3881 "../Inc/stm32u5xx_hal_rcc.h" 2
# 3892 "../Inc/stm32u5xx_hal_rcc.h"
HAL_StatusTypeDef HAL_RCC_DeInit(void);
HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *pRCC_OscInitStruct);
HAL_StatusTypeDef HAL_RCC_ClockConfig(const RCC_ClkInitTypeDef *const pRCC_ClkInitStruct, uint32_t FLatency);
# 3905 "../Inc/stm32u5xx_hal_rcc.h"
void HAL_RCC_MCOConfig(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv);
void HAL_RCC_EnableCSS(void);
uint32_t HAL_RCC_GetSysClockFreq(void);
uint32_t HAL_RCC_GetHCLKFreq(void);
uint32_t HAL_RCC_GetPCLK1Freq(void);
uint32_t HAL_RCC_GetPCLK2Freq(void);
uint32_t HAL_RCC_GetPCLK3Freq(void);
void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *pRCC_OscInitStruct);
void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *pRCC_ClkInitStruct, uint32_t *pFLatency);
uint32_t HAL_RCC_GetResetSource(void);

void HAL_RCC_NMI_IRQHandler(void);

void HAL_RCC_CSSCallback(void);






void HAL_RCC_ConfigAttributes(uint32_t Item, uint32_t Attributes);
HAL_StatusTypeDef HAL_RCC_GetConfigAttributes(uint32_t Item, uint32_t *pAttributes);
# 258 "../../stm32u5xx_hal_conf.h" 2



# 1 "../Inc/stm32u5xx_hal_gpio.h" 1
# 47 "../Inc/stm32u5xx_hal_gpio.h"
typedef struct
{
  uint32_t Pin;


  uint32_t Mode;


  uint32_t Pull;


  uint32_t Speed;


  uint32_t Alternate;

} GPIO_InitTypeDef;




typedef enum
{
  GPIO_PIN_RESET = 0U,
  GPIO_PIN_SET
} GPIO_PinState;
# 315 "../Inc/stm32u5xx_hal_gpio.h"
# 1 "../Inc/stm32u5xx_hal_gpio_ex.h" 1
# 43 "../Inc/stm32u5xx_hal_gpio_ex.h"
typedef struct
{
  GPIO_TypeDef *GPIO_PORT;
  uint32_t Pin_Pos;
} LPGPIO_MapTypeDef;
# 316 "../Inc/stm32u5xx_hal_gpio.h" 2
# 329 "../Inc/stm32u5xx_hal_gpio.h"
void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, const GPIO_InitTypeDef *pGPIO_Init);
void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);
# 342 "../Inc/stm32u5xx_hal_gpio.h"
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
void HAL_GPIO_TogglePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_EnableHighSPeedLowVoltage(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_DisableHighSPeedLowVoltage(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_Rising_Callback(uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_Falling_Callback(uint16_t GPIO_Pin);
# 262 "../../stm32u5xx_hal_conf.h" 2
# 277 "../../stm32u5xx_hal_conf.h"
# 1 "../Inc/stm32u5xx_hal_dma.h" 1
# 49 "../Inc/stm32u5xx_hal_dma.h"
typedef struct
{
  uint32_t Request;


  uint32_t BlkHWRequest;



  uint32_t Direction;


  uint32_t SrcInc;


  uint32_t DestInc;


  uint32_t SrcDataWidth;


  uint32_t DestDataWidth;


  uint32_t Priority;


  uint32_t SrcBurstLength;



  uint32_t DestBurstLength;



  uint32_t TransferAllocatedPort;


  uint32_t TransferEventMode;


  uint32_t Mode;


} DMA_InitTypeDef;




typedef struct
{
  uint32_t Priority;


  uint32_t LinkStepMode;


  uint32_t LinkAllocatedPort;


  uint32_t TransferEventMode;


  uint32_t LinkedListMode;


} DMA_InitLinkedListTypeDef;




typedef enum
{
  HAL_DMA_STATE_RESET = 0x00U,
  HAL_DMA_STATE_READY = 0x01U,
  HAL_DMA_STATE_BUSY = 0x02U,
  HAL_DMA_STATE_ERROR = 0x03U,
  HAL_DMA_STATE_ABORT = 0x04U,
  HAL_DMA_STATE_SUSPEND = 0x05U,

} HAL_DMA_StateTypeDef;




typedef enum
{
  HAL_DMA_FULL_TRANSFER = 0x00U,
  HAL_DMA_HALF_TRANSFER = 0x01U,

} HAL_DMA_LevelCompleteTypeDef;




typedef enum
{
  HAL_DMA_XFER_CPLT_CB_ID = 0x00U,
  HAL_DMA_XFER_HALFCPLT_CB_ID = 0x01U,
  HAL_DMA_XFER_ERROR_CB_ID = 0x02U,
  HAL_DMA_XFER_ABORT_CB_ID = 0x03U,
  HAL_DMA_XFER_SUSPEND_CB_ID = 0x04U,
  HAL_DMA_XFER_ALL_CB_ID = 0x05U

} HAL_DMA_CallbackIDTypeDef;




typedef struct __DMA_HandleTypeDef
{
  DMA_Channel_TypeDef *Instance;

  DMA_InitTypeDef Init;

  DMA_InitLinkedListTypeDef InitLinkedList;

  HAL_LockTypeDef Lock;

  uint32_t Mode;

  volatile HAL_DMA_StateTypeDef State;

  volatile uint32_t ErrorCode;

  void *Parent;

  void (* XferCpltCallback)(struct __DMA_HandleTypeDef *hdma);

  void (* XferHalfCpltCallback)(struct __DMA_HandleTypeDef *hdma);

  void (* XferErrorCallback)(struct __DMA_HandleTypeDef *hdma);

  void (* XferAbortCallback)(struct __DMA_HandleTypeDef *hdma);

  void (* XferSuspendCallback)(struct __DMA_HandleTypeDef *hdma);

  struct __DMA_QListTypeDef *LinkedListQueue;

} DMA_HandleTypeDef;
# 670 "../Inc/stm32u5xx_hal_dma.h"
# 1 "../Inc/stm32u5xx_hal_dma_ex.h" 1
# 47 "../Inc/stm32u5xx_hal_dma_ex.h"
typedef struct
{
  uint32_t DataExchange;


  uint32_t DataAlignment;


} DMA_DataHandlingConfTypeDef;




typedef struct
{
  uint32_t TriggerMode;


  uint32_t TriggerPolarity;


  uint32_t TriggerSelection;


} DMA_TriggerConfTypeDef;




typedef struct
{
  uint32_t RepeatCount;


  int32_t SrcAddrOffset;
# 90 "../Inc/stm32u5xx_hal_dma_ex.h"
  int32_t DestAddrOffset;
# 99 "../Inc/stm32u5xx_hal_dma_ex.h"
  int32_t BlkSrcAddrOffset;
# 108 "../Inc/stm32u5xx_hal_dma_ex.h"
  int32_t BlkDestAddrOffset;
# 117 "../Inc/stm32u5xx_hal_dma_ex.h"
} DMA_RepeatBlockConfTypeDef;




typedef enum
{
  HAL_DMA_QUEUE_STATE_RESET = 0x00U,
  HAL_DMA_QUEUE_STATE_READY = 0x01U,
  HAL_DMA_QUEUE_STATE_BUSY = 0x02U

} HAL_DMA_QStateTypeDef;




typedef struct
{
  uint32_t NodeType;


  DMA_InitTypeDef Init;

  DMA_DataHandlingConfTypeDef DataHandlingConfig;

  DMA_TriggerConfTypeDef TriggerConfig;

  DMA_RepeatBlockConfTypeDef RepeatBlockConfig;

  uint32_t SrcAddress;
  uint32_t DstAddress;
  uint32_t DataSize;






} DMA_NodeConfTypeDef;




typedef struct
{
  uint32_t LinkRegisters[8U];
  uint32_t NodeInfo;

} DMA_NodeTypeDef;




typedef struct __DMA_QListTypeDef
{
  DMA_NodeTypeDef *Head;

  DMA_NodeTypeDef *FirstCircularNode;

  uint32_t NodeNumber;

  volatile HAL_DMA_QStateTypeDef State;

  volatile uint32_t ErrorCode;

  volatile uint32_t Type;

} DMA_QListTypeDef;
# 415 "../Inc/stm32u5xx_hal_dma_ex.h"
HAL_StatusTypeDef HAL_DMAEx_List_Init(DMA_HandleTypeDef *const hdma);
HAL_StatusTypeDef HAL_DMAEx_List_DeInit(DMA_HandleTypeDef *const hdma);
# 425 "../Inc/stm32u5xx_hal_dma_ex.h"
HAL_StatusTypeDef HAL_DMAEx_List_Start(DMA_HandleTypeDef *const hdma);
HAL_StatusTypeDef HAL_DMAEx_List_Start_IT(DMA_HandleTypeDef *const hdma);
# 435 "../Inc/stm32u5xx_hal_dma_ex.h"
HAL_StatusTypeDef HAL_DMAEx_List_BuildNode(DMA_NodeConfTypeDef const *const pNodeConfig,
                                           DMA_NodeTypeDef *const pNode);
HAL_StatusTypeDef HAL_DMAEx_List_GetNodeConfig(DMA_NodeConfTypeDef *const pNodeConfig,
                                               DMA_NodeTypeDef const *const pNode);

HAL_StatusTypeDef HAL_DMAEx_List_InsertNode(DMA_QListTypeDef *const pQList,
                                            DMA_NodeTypeDef *const pPrevNode,
                                            DMA_NodeTypeDef *const pNewNode);
HAL_StatusTypeDef HAL_DMAEx_List_InsertNode_Head(DMA_QListTypeDef *const pQList,
                                                 DMA_NodeTypeDef *const pNewNode);
HAL_StatusTypeDef HAL_DMAEx_List_InsertNode_Tail(DMA_QListTypeDef *const pQList,
                                                 DMA_NodeTypeDef *const pNewNode);

HAL_StatusTypeDef HAL_DMAEx_List_RemoveNode(DMA_QListTypeDef *const pQList,
                                            DMA_NodeTypeDef *const pNode);
HAL_StatusTypeDef HAL_DMAEx_List_RemoveNode_Head(DMA_QListTypeDef *const pQList);
HAL_StatusTypeDef HAL_DMAEx_List_RemoveNode_Tail(DMA_QListTypeDef *const pQList);

HAL_StatusTypeDef HAL_DMAEx_List_ReplaceNode(DMA_QListTypeDef *const pQList,
                                             DMA_NodeTypeDef *const pOldNode,
                                             DMA_NodeTypeDef *const pNewNode);
HAL_StatusTypeDef HAL_DMAEx_List_ReplaceNode_Head(DMA_QListTypeDef *const pQList,
                                                  DMA_NodeTypeDef *const pNewNode);
HAL_StatusTypeDef HAL_DMAEx_List_ReplaceNode_Tail(DMA_QListTypeDef *const pQList,
                                                  DMA_NodeTypeDef *const pNewNode);

HAL_StatusTypeDef HAL_DMAEx_List_ResetQ(DMA_QListTypeDef *const pQList);

HAL_StatusTypeDef HAL_DMAEx_List_InsertQ(DMA_QListTypeDef *const pSrcQList,
                                         DMA_NodeTypeDef const *const pPrevNode,
                                         DMA_QListTypeDef *const pDestQList);
HAL_StatusTypeDef HAL_DMAEx_List_InsertQ_Head(DMA_QListTypeDef *const pSrcQList,
                                              DMA_QListTypeDef *const pDestQList);
HAL_StatusTypeDef HAL_DMAEx_List_InsertQ_Tail(DMA_QListTypeDef *const pSrcQList,
                                              DMA_QListTypeDef *const pDestQList);

HAL_StatusTypeDef HAL_DMAEx_List_SetCircularModeConfig(DMA_QListTypeDef *const pQList,
                                                       DMA_NodeTypeDef *const pFirstCircularNode);
HAL_StatusTypeDef HAL_DMAEx_List_SetCircularMode(DMA_QListTypeDef *const pQList);
HAL_StatusTypeDef HAL_DMAEx_List_ClearCircularMode(DMA_QListTypeDef *const pQList);

HAL_StatusTypeDef HAL_DMAEx_List_ConvertQToDynamic(DMA_QListTypeDef *const pQList);
HAL_StatusTypeDef HAL_DMAEx_List_ConvertQToStatic(DMA_QListTypeDef *const pQList);

HAL_StatusTypeDef HAL_DMAEx_List_LinkQ(DMA_HandleTypeDef *const hdma,
                                       DMA_QListTypeDef *const pQList);
HAL_StatusTypeDef HAL_DMAEx_List_UnLinkQ(DMA_HandleTypeDef *const hdma);
# 490 "../Inc/stm32u5xx_hal_dma_ex.h"
HAL_StatusTypeDef HAL_DMAEx_ConfigDataHandling(DMA_HandleTypeDef *const hdma,
                                               DMA_DataHandlingConfTypeDef const *const pConfigDataHandling);
HAL_StatusTypeDef HAL_DMAEx_ConfigTrigger(DMA_HandleTypeDef *const hdma,
                                          DMA_TriggerConfTypeDef const *const pConfigTrigger);
HAL_StatusTypeDef HAL_DMAEx_ConfigRepeatBlock(DMA_HandleTypeDef *const hdma,
                                              DMA_RepeatBlockConfTypeDef const *const pConfigRepeatBlock);
# 504 "../Inc/stm32u5xx_hal_dma_ex.h"
HAL_StatusTypeDef HAL_DMAEx_Suspend(DMA_HandleTypeDef *const hdma);
HAL_StatusTypeDef HAL_DMAEx_Suspend_IT(DMA_HandleTypeDef *const hdma);
HAL_StatusTypeDef HAL_DMAEx_Resume(DMA_HandleTypeDef *const hdma);
# 515 "../Inc/stm32u5xx_hal_dma_ex.h"
uint32_t HAL_DMAEx_GetFifoLevel(DMA_HandleTypeDef const *const hdma);
# 533 "../Inc/stm32u5xx_hal_dma_ex.h"
typedef struct
{
  uint32_t cllr_offset;

  uint32_t previousnode_addr;

  uint32_t currentnode_pos;

  uint32_t currentnode_addr;

  uint32_t nextnode_addr;

} DMA_NodeInQInfoTypeDef;
# 671 "../Inc/stm32u5xx_hal_dma.h" 2
# 683 "../Inc/stm32u5xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Init(DMA_HandleTypeDef *const hdma);
HAL_StatusTypeDef HAL_DMA_DeInit(DMA_HandleTypeDef *const hdma);
# 693 "../Inc/stm32u5xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Start(DMA_HandleTypeDef *const hdma,
                                uint32_t SrcAddress,
                                uint32_t DstAddress,
                                uint32_t SrcDataSize);
HAL_StatusTypeDef HAL_DMA_Start_IT(DMA_HandleTypeDef *const hdma,
                                   uint32_t SrcAddress,
                                   uint32_t DstAddress,
                                   uint32_t SrcDataSize);
HAL_StatusTypeDef HAL_DMA_Abort(DMA_HandleTypeDef *const hdma);
HAL_StatusTypeDef HAL_DMA_Abort_IT(DMA_HandleTypeDef *const hdma);
HAL_StatusTypeDef HAL_DMA_PollForTransfer(DMA_HandleTypeDef *const hdma,
                                          HAL_DMA_LevelCompleteTypeDef CompleteLevel,
                                          uint32_t Timeout);
void HAL_DMA_IRQHandler(DMA_HandleTypeDef *const hdma);
HAL_StatusTypeDef HAL_DMA_RegisterCallback(DMA_HandleTypeDef *const hdma,
                                           HAL_DMA_CallbackIDTypeDef CallbackID,
                                           void (*const pCallback)(DMA_HandleTypeDef *const _hdma));
HAL_StatusTypeDef HAL_DMA_UnRegisterCallback(DMA_HandleTypeDef *const hdma,
                                             HAL_DMA_CallbackIDTypeDef CallbackID);
# 720 "../Inc/stm32u5xx_hal_dma.h"
HAL_DMA_StateTypeDef HAL_DMA_GetState(DMA_HandleTypeDef const *const hdma);
uint32_t HAL_DMA_GetError(DMA_HandleTypeDef const *const hdma);
# 730 "../Inc/stm32u5xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_ConfigChannelAttributes(DMA_HandleTypeDef *const hdma,
                                                  uint32_t ChannelAttributes);
HAL_StatusTypeDef HAL_DMA_GetConfigChannelAttributes(DMA_HandleTypeDef const *const hdma,
                                                     uint32_t *const pChannelAttributes);



HAL_StatusTypeDef HAL_DMA_GetLockChannelAttributes(DMA_HandleTypeDef const *const hdma,
                                                   uint32_t *const pLockState);
# 278 "../../stm32u5xx_hal_conf.h" 2







# 1 "../Inc/stm32u5xx_hal_cortex.h" 1
# 46 "../Inc/stm32u5xx_hal_cortex.h"
typedef struct
{
  uint8_t Enable;

  uint8_t Number;

  uint32_t BaseAddress;
  uint32_t LimitAddress;
  uint8_t AttributesIndex;

  uint8_t AccessPermission;

  uint8_t DisableExec;

  uint8_t IsShareable;

} MPU_Region_InitTypeDef;
# 71 "../Inc/stm32u5xx_hal_cortex.h"
typedef struct
{
  uint8_t Number;


  uint8_t Attributes;


} MPU_Attributes_InitTypeDef;
# 252 "../Inc/stm32u5xx_hal_cortex.h"
void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup);
void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority);
void HAL_NVIC_EnableIRQ(IRQn_Type IRQn);
void HAL_NVIC_DisableIRQ(IRQn_Type IRQn);
void HAL_NVIC_SystemReset(void);
uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb);
# 267 "../Inc/stm32u5xx_hal_cortex.h"
uint32_t HAL_NVIC_GetPriorityGrouping(void);
void HAL_NVIC_GetPriority(IRQn_Type IRQn, uint32_t PriorityGroup, uint32_t *const pPreemptPriority,
                          uint32_t *const pSubPriority);
uint32_t HAL_NVIC_GetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn);
uint32_t HAL_NVIC_GetActive(IRQn_Type IRQn);
void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource);
void HAL_SYSTICK_IRQHandler(void);
void HAL_SYSTICK_Callback(void);

void HAL_MPU_Enable(uint32_t MPU_Control);
void HAL_MPU_Disable(void);
void HAL_MPU_ConfigRegion(const MPU_Region_InitTypeDef *const pMPU_RegionInit);
void HAL_MPU_ConfigMemoryAttributes(const MPU_Attributes_InitTypeDef *const pMPU_AttributesInit);
# 286 "../../stm32u5xx_hal_conf.h" 2
# 313 "../../stm32u5xx_hal_conf.h"
# 1 "../Inc/stm32u5xx_hal_flash.h" 1
# 46 "../Inc/stm32u5xx_hal_flash.h"
typedef struct
{
  uint32_t TypeErase;

  uint32_t Banks;


  uint32_t Page;


  uint32_t NbPages;

} FLASH_EraseInitTypeDef;




typedef struct
{
  uint32_t OptionType;

  uint32_t WRPArea;


  uint32_t WRPStartOffset;

  uint32_t WRPEndOffset;


  FunctionalState WRPLock;

  uint32_t RDPLevel;

  uint32_t USERType;

  uint32_t USERConfig;
# 105 "../Inc/stm32u5xx_hal_flash.h"
  uint32_t BootAddrConfig;

  uint32_t BootAddr;

  uint32_t RDPKeyType;

  uint32_t RDPKey1;
  uint32_t RDPKey2;
} FLASH_OBProgramInitTypeDef;




typedef struct
{
  HAL_LockTypeDef Lock;
  uint32_t ErrorCode;
  uint32_t ProcedureOnGoing;

  uint32_t Address;

  uint32_t Bank;

  uint32_t Page;

  uint32_t NbPagesToErase;
} FLASH_ProcessTypeDef;
# 875 "../Inc/stm32u5xx_hal_flash.h"
# 1 "../Inc/stm32u5xx_hal_flash_ex.h" 1
# 47 "../Inc/stm32u5xx_hal_flash_ex.h"
typedef struct
{
  uint32_t Bank;

  uint32_t BBAttributesType;

  uint32_t BBAttributes_array[(4U)];



} FLASH_BBAttributesTypeDef;





typedef struct
{
  uint32_t OperationType;

  uint32_t FlashArea;

  uint32_t Address;

} FLASH_OperationTypeDef;
# 164 "../Inc/stm32u5xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_Erase(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *PageError);
HAL_StatusTypeDef HAL_FLASHEx_Erase_IT(FLASH_EraseInitTypeDef *pEraseInit);
HAL_StatusTypeDef HAL_FLASHEx_OBProgram(FLASH_OBProgramInitTypeDef *pOBInit);
void HAL_FLASHEx_OBGetConfig(FLASH_OBProgramInitTypeDef *pOBInit);
HAL_StatusTypeDef HAL_FLASHEx_ConfigBBAttributes(FLASH_BBAttributesTypeDef *pBBAttributes);
void HAL_FLASHEx_GetConfigBBAttributes(FLASH_BBAttributesTypeDef *pBBAttributes);
# 180 "../Inc/stm32u5xx_hal_flash_ex.h"
void HAL_FLASHEx_ConfigPrivMode(uint32_t PrivMode);
uint32_t HAL_FLASHEx_GetPrivMode(void);




HAL_StatusTypeDef HAL_FLASHEx_EnablePowerDown(uint32_t Banks);
HAL_StatusTypeDef HAL_FLASHEx_ConfigLowPowerRead(uint32_t ConfigLPM);
uint32_t HAL_FLASHEx_GetLowPowerRead(void);
void HAL_FLASHEx_GetOperation(FLASH_OperationTypeDef *pFlashOperation);
# 202 "../Inc/stm32u5xx_hal_flash_ex.h"
void FLASH_PageErase(uint32_t Page, uint32_t Banks);
# 876 "../Inc/stm32u5xx_hal_flash.h" 2
# 887 "../Inc/stm32u5xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint32_t DataAddress);
HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t Address, uint32_t DataAddress);

void HAL_FLASH_IRQHandler(void);

void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue);
void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue);
# 902 "../Inc/stm32u5xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_Lock(void);

HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Launch(void);
# 916 "../Inc/stm32u5xx_hal_flash.h"
uint32_t HAL_FLASH_GetError(void);
# 929 "../Inc/stm32u5xx_hal_flash.h"
extern FLASH_ProcessTypeDef pFlash;
# 1102 "../Inc/stm32u5xx_hal_flash.h"
HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout);
# 314 "../../stm32u5xx_hal_conf.h" 2
# 353 "../../stm32u5xx_hal_conf.h"
# 1 "../Inc/stm32u5xx_hal_pwr.h" 1
# 47 "../Inc/stm32u5xx_hal_pwr.h"
typedef struct
{
  uint32_t PVDLevel;



  uint32_t Mode;

} PWR_PVDTypeDef;
# 694 "../Inc/stm32u5xx_hal_pwr.h"
# 1 "../Inc/stm32u5xx_hal_pwr_ex.h" 1
# 47 "../Inc/stm32u5xx_hal_pwr_ex.h"
typedef struct
{
  uint32_t PVMType;



  uint32_t Mode;


} PWR_PVMTypeDef;
# 819 "../Inc/stm32u5xx_hal_pwr_ex.h"
HAL_StatusTypeDef HAL_PWREx_ControlVoltageScaling(uint32_t VoltageScaling);
uint32_t HAL_PWREx_GetVoltageRange(void);
HAL_StatusTypeDef HAL_PWREx_ConfigSupply(uint32_t SupplySource);
uint32_t HAL_PWREx_GetSupplyConfig(void);
void HAL_PWREx_EnableFastSoftStart(void);
void HAL_PWREx_DisableFastSoftStart(void);







void HAL_PWREx_EnterSTOP1Mode(uint8_t STOPEntry);
void HAL_PWREx_EnterSTOP2Mode(uint8_t STOPEntry);
void HAL_PWREx_EnterSTOP3Mode(uint8_t STOPEntry);
void HAL_PWREx_EnterSHUTDOWNMode(void);
void HAL_PWREx_ConfigSRDDomain(uint32_t SRDState);
void HAL_PWREx_EnableUltraLowPowerMode(void);
void HAL_PWREx_DisableUltraLowPowerMode(void);
void HAL_PWREx_S3WU_IRQHandler(uint32_t WakeUpPin);
void HAL_PWREx_S3WUCallback(uint32_t WakeUpPin);







void HAL_PWREx_EnableBatteryCharging(uint32_t ResistorValue);
void HAL_PWREx_DisableBatteryCharging(void);
void HAL_PWREx_EnableVddUSB(void);
void HAL_PWREx_DisableVddUSB(void);
void HAL_PWREx_EnableVddIO2(void);
void HAL_PWREx_DisableVddIO2(void);
void HAL_PWREx_EnableVddA(void);
void HAL_PWREx_DisableVddA(void);
void HAL_PWREx_EnableUVM(void);
void HAL_PWREx_DisableUVM(void);
void HAL_PWREx_EnableIO2VM(void);
void HAL_PWREx_DisableIO2VM(void);
void HAL_PWREx_EnableAVM1(void);
void HAL_PWREx_DisableAVM1(void);
void HAL_PWREx_EnableAVM2(void);
void HAL_PWREx_DisableAVM2(void);
HAL_StatusTypeDef HAL_PWREx_ConfigPVM(PWR_PVMTypeDef *pConfigPVM);
void HAL_PWREx_EnableMonitoring(void);
void HAL_PWREx_DisableMonitoring(void);
void HAL_PWREx_EnableUCPDStandbyMode(void);
void HAL_PWREx_DisableUCPDStandbyMode(void);
void HAL_PWREx_EnableUCPDDeadBattery(void);
void HAL_PWREx_DisableUCPDDeadBattery(void);
void HAL_PWREx_PVD_PVM_IRQHandler(void);
void HAL_PWREx_UVMCallback(void);
void HAL_PWREx_IO2VMCallback(void);
void HAL_PWREx_AVM1Callback(void);
void HAL_PWREx_AVM2Callback(void);







void HAL_PWREx_EnableSRAM2ContentStandbyRetention(uint32_t SRAM2Pages);
void HAL_PWREx_DisableSRAM2ContentStandbyRetention(uint32_t SRAM2Pages);
void HAL_PWREx_EnableRAMsContentStopRetention(uint32_t RAMSelection);
void HAL_PWREx_DisableRAMsContentStopRetention(uint32_t RAMSelection);
void HAL_PWREx_EnableRAMsContentRunRetention(uint32_t RAMSelection);
void HAL_PWREx_DisableRAMsContentRunRetention(uint32_t RAMSelection);
void HAL_PWREx_EnableFlashFastWakeUp(void);
void HAL_PWREx_DisableFlashFastWakeUp(void);
void HAL_PWREx_EnableSRAM4FastWakeUp(void);
void HAL_PWREx_DisableSRAM4FastWakeUp(void);
HAL_StatusTypeDef HAL_PWREx_EnableBkupRAMRetention(void);
void HAL_PWREx_DisableBkupRAMRetention(void);







void HAL_PWREx_EnablePullUpPullDownConfig(void);
void HAL_PWREx_DisablePullUpPullDownConfig(void);
HAL_StatusTypeDef HAL_PWREx_EnableGPIOPullUp(uint32_t GPIO_Port, uint32_t GPIO_Pin);
HAL_StatusTypeDef HAL_PWREx_DisableGPIOPullUp(uint32_t GPIO_Port, uint32_t GPIO_Pin);
HAL_StatusTypeDef HAL_PWREx_EnableGPIOPullDown(uint32_t GPIO_Port, uint32_t GPIO_Pin);
HAL_StatusTypeDef HAL_PWREx_DisableGPIOPullDown(uint32_t GPIO_Port, uint32_t GPIO_Pin);
# 695 "../Inc/stm32u5xx_hal_pwr.h" 2
# 706 "../Inc/stm32u5xx_hal_pwr.h"
void HAL_PWR_DeInit(void);
void HAL_PWR_EnableBkUpAccess(void);
void HAL_PWR_DisableBkUpAccess(void);
# 717 "../Inc/stm32u5xx_hal_pwr.h"
HAL_StatusTypeDef HAL_PWR_ConfigPVD(PWR_PVDTypeDef *pConfigPVD);
void HAL_PWR_EnablePVD(void);
void HAL_PWR_DisablePVD(void);


void HAL_PWR_EnableWakeUpPin(uint32_t WakeUpPin);
void HAL_PWR_DisableWakeUpPin(uint32_t WakeUpPin);


void HAL_PWR_EnterSLEEPMode(uint32_t Regulator, uint8_t SleepEntry);
void HAL_PWR_EnterSTOPMode(uint32_t Regulator, uint8_t StopEntry);
void HAL_PWR_EnterSTANDBYMode(void);


void HAL_PWR_EnableSleepOnExit(void);
void HAL_PWR_DisableSleepOnExit(void);
void HAL_PWR_EnableSEVOnPend(void);
void HAL_PWR_DisableSEVOnPend(void);


void HAL_PWR_PVD_IRQHandler(void);
void HAL_PWR_PVDCallback(void);
# 747 "../Inc/stm32u5xx_hal_pwr.h"
void HAL_PWR_ConfigAttributes(uint32_t Item, uint32_t Attributes);
HAL_StatusTypeDef HAL_PWR_GetConfigAttributes(uint32_t Item, uint32_t *pAttributes);
# 354 "../../stm32u5xx_hal_conf.h" 2
# 453 "../../stm32u5xx_hal_conf.h"
# 1 "../Inc/stm32u5xx_hal_mdf.h" 1
# 46 "../Inc/stm32u5xx_hal_mdf.h"
typedef enum
{
  HAL_MDF_STATE_RESET = 0x00U,
  HAL_MDF_STATE_READY = 0x01U,
  HAL_MDF_STATE_ACQUISITION = 0x02U,
  HAL_MDF_STATE_ERROR = 0xFFU
} HAL_MDF_StateTypeDef;




typedef struct
{
  FunctionalState Activation;
  uint32_t Source;

  uint32_t Edge;

} MDF_ClockTriggerTypeDef;




typedef struct
{
  FunctionalState Activation;
  uint32_t Pins;

  uint32_t Divider;

  MDF_ClockTriggerTypeDef Trigger;
} MDF_OutputClockTypeDef;




typedef struct
{
  uint32_t InterleavedFilters;



  uint32_t ProcClockDivider;


  MDF_OutputClockTypeDef OutputClock;
} MDF_CommonParamTypeDef;




typedef struct
{
  FunctionalState Activation;
  uint32_t Mode;

  uint32_t ClockSource;

  uint32_t Threshold;

} MDF_SerialInterfaceTypeDef;




typedef struct
{
  MDF_CommonParamTypeDef CommonParam;
  MDF_SerialInterfaceTypeDef SerialInterface;
  uint32_t FilterBistream;

} MDF_InitTypeDef;







typedef struct

{
  MDF_Filter_TypeDef *Instance;
  MDF_InitTypeDef Init;
  DMA_HandleTypeDef *hdma;
  volatile HAL_MDF_StateTypeDef State;
  volatile uint32_t ErrorCode;
# 149 "../Inc/stm32u5xx_hal_mdf.h"
} MDF_HandleTypeDef;
# 181 "../Inc/stm32u5xx_hal_mdf.h"
typedef struct
{
  FunctionalState Activation;
  uint32_t DecimationRatio;

} MDF_ReshapeFilterTypeDef;




typedef struct
{
  FunctionalState Activation;
  uint32_t CutOffFrequency;

} MDF_HighPassFilterTypeDef;




typedef struct
{
  FunctionalState Activation;
  uint32_t Value;

  uint32_t OutputDivision;

} MDF_IntegratorTypeDef;




typedef struct
{
  FunctionalState Activation;
  uint32_t Mode;

  uint32_t FrameSize;

  FunctionalState Hysteresis;


  uint32_t SoundTriggerEvent;

  uint32_t DataMemoryTransfer;

  uint32_t MinNoiseLevel;


  uint32_t HangoverWindow;

  uint32_t LearningFrames;

  uint32_t AmbientNoiseSlope;



  uint32_t SignalNoiseThreshold;

  FunctionalState SoundLevelInterrupt;


} MDF_SoundActivityTypeDef;




typedef struct
{
  uint32_t Source;

  uint32_t Edge;

} MDF_FilterTriggerTypeDef;




typedef struct
{
  uint32_t DataSource;

  uint32_t Delay;


  uint32_t CicMode;

  uint32_t DecimationRatio;


  int32_t Offset;



  int32_t Gain;


  MDF_ReshapeFilterTypeDef ReshapeFilter;
  MDF_HighPassFilterTypeDef HighPassFilter;
  MDF_IntegratorTypeDef Integrator;

  MDF_SoundActivityTypeDef SoundActivity;

  uint32_t AcquisitionMode;

  uint32_t FifoThreshold;

  uint32_t DiscardSamples;


  MDF_FilterTriggerTypeDef Trigger;


  uint32_t SnapshotFormat;



} MDF_FilterConfigTypeDef;




typedef struct
{
  int32_t Value;
  uint32_t DecimationCounter;
  uint32_t IntegratorCounter;

} MDF_SnapshotParamTypeDef;




typedef struct
{
  uint32_t Address;
  uint32_t DataLength;
  FunctionalState MsbOnly;
} MDF_DmaConfigTypeDef;




typedef struct
{
  uint32_t Threshold;

  uint32_t BreakSignal;

} MDF_ScdConfigTypeDef;




typedef struct
{
  uint32_t OldCicMode;

  uint32_t OldDecimationRatio;

  int32_t HighThreshold;


  int32_t LowThreshold;


  uint32_t OldEventConfig;

  uint32_t BreakSignal;

} MDF_OldConfigTypeDef;
# 815 "../Inc/stm32u5xx_hal_mdf.h"
HAL_StatusTypeDef HAL_MDF_Init(MDF_HandleTypeDef *hmdf);
HAL_StatusTypeDef HAL_MDF_DeInit(MDF_HandleTypeDef *hmdf);
void HAL_MDF_MspInit(MDF_HandleTypeDef *hmdf);
void HAL_MDF_MspDeInit(MDF_HandleTypeDef *hmdf);
# 840 "../Inc/stm32u5xx_hal_mdf.h"
HAL_StatusTypeDef HAL_MDF_AcqStart(MDF_HandleTypeDef *hmdf, MDF_FilterConfigTypeDef *pFilterConfig);
HAL_StatusTypeDef HAL_MDF_PollForAcq(MDF_HandleTypeDef *hmdf, uint32_t Timeout);
HAL_StatusTypeDef HAL_MDF_PollForSnapshotAcq(MDF_HandleTypeDef *hmdf, uint32_t Timeout);
HAL_StatusTypeDef HAL_MDF_GetAcqValue(MDF_HandleTypeDef *hmdf, int32_t *pValue);
HAL_StatusTypeDef HAL_MDF_GetSnapshotAcqValue(MDF_HandleTypeDef *hmdf, MDF_SnapshotParamTypeDef *pSnapshotParam);
HAL_StatusTypeDef HAL_MDF_AcqStop(MDF_HandleTypeDef *hmdf);
HAL_StatusTypeDef HAL_MDF_AcqStart_IT(MDF_HandleTypeDef *hmdf, MDF_FilterConfigTypeDef *pFilterConfig);
HAL_StatusTypeDef HAL_MDF_AcqStop_IT(MDF_HandleTypeDef *hmdf);
HAL_StatusTypeDef HAL_MDF_AcqStart_DMA(MDF_HandleTypeDef *hmdf, MDF_FilterConfigTypeDef *pFilterConfig,
                                       MDF_DmaConfigTypeDef *pDmaConfig);
HAL_StatusTypeDef HAL_MDF_AcqStop_DMA(MDF_HandleTypeDef *hmdf);
HAL_StatusTypeDef HAL_MDF_GenerateTrgo(MDF_HandleTypeDef *hmdf);
HAL_StatusTypeDef HAL_MDF_SetDelay(MDF_HandleTypeDef *hmdf, uint32_t Delay);
HAL_StatusTypeDef HAL_MDF_GetDelay(MDF_HandleTypeDef *hmdf, uint32_t *pDelay);
HAL_StatusTypeDef HAL_MDF_SetGain(MDF_HandleTypeDef *hmdf, int32_t Gain);
HAL_StatusTypeDef HAL_MDF_GetGain(MDF_HandleTypeDef *hmdf, int32_t *pGain);
HAL_StatusTypeDef HAL_MDF_SetOffset(MDF_HandleTypeDef *hmdf, int32_t Offset);
HAL_StatusTypeDef HAL_MDF_GetOffset(MDF_HandleTypeDef *hmdf, int32_t *pOffset);
HAL_StatusTypeDef HAL_MDF_PollForSndLvl(MDF_HandleTypeDef *hmdf, uint32_t Timeout, uint32_t *pSoundLevel,
                                        uint32_t *pAmbientNoise);
HAL_StatusTypeDef HAL_MDF_PollForSad(MDF_HandleTypeDef *hmdf, uint32_t Timeout);
void HAL_MDF_AcqCpltCallback(MDF_HandleTypeDef *hmdf);
void HAL_MDF_AcqHalfCpltCallback(MDF_HandleTypeDef *hmdf);
void HAL_MDF_SndLvlCallback(MDF_HandleTypeDef *hmdf, uint32_t SoundLevel, uint32_t AmbientNoise);
void HAL_MDF_SadCallback(MDF_HandleTypeDef *hmdf);
# 873 "../Inc/stm32u5xx_hal_mdf.h"
HAL_StatusTypeDef HAL_MDF_PollForCkab(MDF_HandleTypeDef *hmdf, uint32_t Timeout);
HAL_StatusTypeDef HAL_MDF_CkabStart_IT(MDF_HandleTypeDef *hmdf);
HAL_StatusTypeDef HAL_MDF_CkabStop_IT(MDF_HandleTypeDef *hmdf);
# 884 "../Inc/stm32u5xx_hal_mdf.h"
HAL_StatusTypeDef HAL_MDF_ScdStart(MDF_HandleTypeDef *hmdf, MDF_ScdConfigTypeDef *pScdConfig);
HAL_StatusTypeDef HAL_MDF_PollForScd(MDF_HandleTypeDef *hmdf, uint32_t Timeout);
HAL_StatusTypeDef HAL_MDF_ScdStop(MDF_HandleTypeDef *hmdf);
HAL_StatusTypeDef HAL_MDF_ScdStart_IT(MDF_HandleTypeDef *hmdf, MDF_ScdConfigTypeDef *pScdConfig);
HAL_StatusTypeDef HAL_MDF_ScdStop_IT(MDF_HandleTypeDef *hmdf);
# 897 "../Inc/stm32u5xx_hal_mdf.h"
HAL_StatusTypeDef HAL_MDF_OldStart(MDF_HandleTypeDef *hmdf, MDF_OldConfigTypeDef *pOldConfig);
HAL_StatusTypeDef HAL_MDF_PollForOld(MDF_HandleTypeDef *hmdf, uint32_t Timeout, uint32_t *pThresholdInfo);
HAL_StatusTypeDef HAL_MDF_OldStop(MDF_HandleTypeDef *hmdf);
HAL_StatusTypeDef HAL_MDF_OldStart_IT(MDF_HandleTypeDef *hmdf, MDF_OldConfigTypeDef *pOldConfig);
HAL_StatusTypeDef HAL_MDF_OldStop_IT(MDF_HandleTypeDef *hmdf);
void HAL_MDF_OldCallback(MDF_HandleTypeDef *hmdf, uint32_t ThresholdInfo);
# 911 "../Inc/stm32u5xx_hal_mdf.h"
void HAL_MDF_IRQHandler(MDF_HandleTypeDef *hmdf);
void HAL_MDF_ErrorCallback(MDF_HandleTypeDef *hmdf);
HAL_MDF_StateTypeDef HAL_MDF_GetState(MDF_HandleTypeDef *hmdf);
uint32_t HAL_MDF_GetError(MDF_HandleTypeDef *hmdf);
# 454 "../../stm32u5xx_hal_conf.h" 2
# 30 "../Inc/stm32u5xx_hal.h" 2
# 47 "../Inc/stm32u5xx_hal.h"
typedef enum
{
  HAL_TICK_FREQ_10HZ = 100U,
  HAL_TICK_FREQ_100HZ = 10U,
  HAL_TICK_FREQ_1KHZ = 1U,
  HAL_TICK_FREQ_DEFAULT = HAL_TICK_FREQ_1KHZ
} HAL_TickFreqTypeDef;
# 66 "../Inc/stm32u5xx_hal.h"
extern volatile uint32_t uwTick;
extern uint32_t uwTickPrio;
extern HAL_TickFreqTypeDef uwTickFreq;
# 582 "../Inc/stm32u5xx_hal.h"
HAL_StatusTypeDef HAL_Init(void);
HAL_StatusTypeDef HAL_DeInit(void);
void HAL_MspInit(void);
void HAL_MspDeInit(void);
HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority);
# 597 "../Inc/stm32u5xx_hal.h"
void HAL_IncTick(void);
void HAL_Delay(uint32_t Delay);
uint32_t HAL_GetTick(void);
uint32_t HAL_GetTickPrio(void);
HAL_StatusTypeDef HAL_SetTickFreq(HAL_TickFreqTypeDef Freq);
HAL_TickFreqTypeDef HAL_GetTickFreq(void);
void HAL_SuspendTick(void);
void HAL_ResumeTick(void);
uint32_t HAL_GetHalVersion(void);
uint32_t HAL_GetREVID(void);
uint32_t HAL_GetDEVID(void);
# 618 "../Inc/stm32u5xx_hal.h"
void HAL_DBGMCU_EnableDBGStopMode(void);
void HAL_DBGMCU_DisableDBGStopMode(void);
void HAL_DBGMCU_EnableDBGStandbyMode(void);
void HAL_DBGMCU_DisableDBGStandbyMode(void);
# 632 "../Inc/stm32u5xx_hal.h"
void HAL_SYSCFG_SRAM2Erase(void);

void HAL_SYSCFG_VREFBUF_VoltageScalingConfig(uint32_t VoltageScaling);
void HAL_SYSCFG_VREFBUF_HighImpedanceConfig(uint32_t Mode);
void HAL_SYSCFG_VREFBUF_TrimmingConfig(uint32_t TrimmingValue);
HAL_StatusTypeDef HAL_SYSCFG_EnableVREFBUF(void);
void HAL_SYSCFG_DisableVREFBUF(void);

void HAL_SYSCFG_EnableIOAnalogSwitchBooster(void);
void HAL_SYSCFG_DisableIOAnalogSwitchBooster(void);
# 652 "../Inc/stm32u5xx_hal.h"
void HAL_SYSCFG_Lock(uint32_t Item);
HAL_StatusTypeDef HAL_SYSCFG_GetLock(uint32_t *pItem);
# 515 "stm32u5xx_hal_dma_ex.c" 2
# 532 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_Init(DMA_HandleTypeDef const *const hdma);
static void DMA_List_BuildNode(DMA_NodeConfTypeDef const *const pNodeConfig,
                               DMA_NodeTypeDef *const pNode);
static void DMA_List_GetNodeConfig(DMA_NodeConfTypeDef *const pNodeConfig,
                                   DMA_NodeTypeDef const *const pNode);
static uint32_t DMA_List_CheckNodesBaseAddresses(DMA_NodeTypeDef const *const pNode1,
                                                 DMA_NodeTypeDef const *const pNode2,
                                                 DMA_NodeTypeDef const *const pNode3);
static uint32_t DMA_List_CheckNodesTypes(DMA_NodeTypeDef const *const pNode1,
                                         DMA_NodeTypeDef const *const pNode2,
                                         DMA_NodeTypeDef const *const pNode3);
static void DMA_List_GetCLLRNodeInfo(DMA_NodeTypeDef const *const pNode,
                                     uint32_t *const cllr_mask,
                                     uint32_t *const cllr_offset);
static uint32_t DMA_List_FindNode(DMA_QListTypeDef const *const pQList,
                                  DMA_NodeTypeDef const *const pNode,
                                  DMA_NodeInQInfoTypeDef *const NodeInfo);
static void DMA_List_ResetQueueNodes(DMA_QListTypeDef const *const pQList,
                                     DMA_NodeInQInfoTypeDef const *const NodeInfo);
static void DMA_List_FillNode(DMA_NodeTypeDef const *const pSrcNode,
                              DMA_NodeTypeDef *const pDestNode);
static void DMA_List_ConvertNodeToDynamic(uint32_t ContextNodeAddr,
                                          uint32_t CurrentNodeAddr,
                                          uint32_t RegisterNumber);
static void DMA_List_ConvertNodeToStatic(uint32_t ContextNodeAddr,
                                         uint32_t CurrentNodeAddr,
                                         uint32_t RegisterNumber);
static void DMA_List_UpdateDynamicQueueNodesCLLR(DMA_QListTypeDef const *const pQList,
                                                 uint32_t LastNode_IsCircular);
static void DMA_List_UpdateStaticQueueNodesCLLR(DMA_QListTypeDef const *const pQList,
                                                uint32_t operation);
static void DMA_List_FormatNode(DMA_NodeTypeDef *const pNode,
                                uint32_t RegisterIdx,
                                uint32_t RegisterNumber,
                                uint32_t Format);
static void DMA_List_ClearUnusedFields(DMA_NodeTypeDef *const pNode,
                                       uint32_t FirstUnusedField);
static void DMA_List_CleanQueue(DMA_QListTypeDef *const pQList);
# 601 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_Init(DMA_HandleTypeDef *const hdma)
{

  uint32_t tickstart = HAL_GetTick();


  if (hdma == 
# 607 "stm32u5xx_hal_dma_ex.c" 3 4
             ((void *)0)
# 607 "stm32u5xx_hal_dma_ex.c"
                 )
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);

  if ((((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0050UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0050UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x00D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x00D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0150UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0150UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x01D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x01D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0250UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0250UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x02D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x02D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0350UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0350UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x03D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x03D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0450UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0450UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x04D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x04D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0550UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0550UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x05D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x05D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0650UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0650UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x06D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x06D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0750UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0750UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x07D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x07D0UL)))) != 0U)
  {
    ((void)0U);
  }


  do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);


  hdma->State = HAL_DMA_STATE_BUSY;


  ((hdma)->Instance->CCR |= ((0x1UL << (2U)) | (0x1UL << (1U))));


  while ((hdma->Instance->CCR & (0x1UL << (0U))) != 0U)
  {

    if ((HAL_GetTick() - tickstart) > (0x00000005U))
    {

      hdma->ErrorCode = (0x0010U);


      hdma->State = HAL_DMA_STATE_ERROR;

      return HAL_ERROR;
    }
  }


  DMA_List_Init(hdma);


  hdma->Mode = hdma->InitLinkedList.LinkedListMode;


  hdma->ErrorCode = (0x0000U);


  hdma->State = HAL_DMA_STATE_READY;

  return HAL_OK;
}







HAL_StatusTypeDef HAL_DMAEx_List_DeInit(DMA_HandleTypeDef *const hdma)
{

  DMA_TypeDef *p_dma_instance;

  uint32_t tickstart = HAL_GetTick();


  if (hdma == 
# 678 "stm32u5xx_hal_dma_ex.c" 3 4
             ((void *)0)
# 678 "stm32u5xx_hal_dma_ex.c"
                 )
  {
    return HAL_ERROR;
  }


  ((void)0U);


  p_dma_instance = ((DMA_TypeDef *)((uint32_t)((hdma)->Instance) & (~(0x00000FFFU))));


  ((hdma)->Instance->CCR |= ((0x1UL << (2U)) | (0x1UL << (1U))));


  while ((hdma->Instance->CCR & (0x1UL << (0U))) != 0U)
  {

    if ((HAL_GetTick() - tickstart) > (0x00000005U))
    {

      hdma->ErrorCode = (0x0010U);


      hdma->State = HAL_DMA_STATE_ERROR;

      return HAL_ERROR;
    }
  }


  hdma->Instance->CCR = 0U;
  hdma->Instance->CLBAR = 0U;
  hdma->Instance->CTR1 = 0U;
  hdma->Instance->CTR2 = 0U;
  hdma->Instance->CBR1 = 0U;
  hdma->Instance->CSAR = 0U;
  hdma->Instance->CDAR = 0U;
  hdma->Instance->CLLR = 0U;


  if ((((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0650UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0650UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x06D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x06D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0750UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0750UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x07D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x07D0UL)))) != 0U)
  {
    hdma->Instance->CTR3 = 0U;
    hdma->Instance->CBR2 = 0U;
  }


  ((p_dma_instance->PRIVCFGR) &= ~((1UL << (((((uint32_t)((hdma)->Instance) & (0x00000FFFU)) - (0x00000050U)) / (0x00000080U)) & 0x1FU))));







  ((hdma)->Instance->CFCR = (((0x1UL << (8U)) | (0x1UL << (9U)) | (0x1UL << (10U)) | (0x1UL << (11U)) | (0x1UL << (12U)) | (0x1UL << (13U)) | (0x1UL << (14U)))))
                                           ;


  hdma->XferCpltCallback = 
# 738 "stm32u5xx_hal_dma_ex.c" 3 4
                              ((void *)0)
# 738 "stm32u5xx_hal_dma_ex.c"
                                  ;
  hdma->XferHalfCpltCallback = 
# 739 "stm32u5xx_hal_dma_ex.c" 3 4
                              ((void *)0)
# 739 "stm32u5xx_hal_dma_ex.c"
                                  ;
  hdma->XferErrorCallback = 
# 740 "stm32u5xx_hal_dma_ex.c" 3 4
                              ((void *)0)
# 740 "stm32u5xx_hal_dma_ex.c"
                                  ;
  hdma->XferAbortCallback = 
# 741 "stm32u5xx_hal_dma_ex.c" 3 4
                              ((void *)0)
# 741 "stm32u5xx_hal_dma_ex.c"
                                  ;
  hdma->XferSuspendCallback = 
# 742 "stm32u5xx_hal_dma_ex.c" 3 4
                              ((void *)0)
# 742 "stm32u5xx_hal_dma_ex.c"
                                  ;


  if(hdma->LinkedListQueue != 
# 745 "stm32u5xx_hal_dma_ex.c" 3 4
                             ((void *)0)
# 745 "stm32u5xx_hal_dma_ex.c"
                                 )
  {

    hdma->LinkedListQueue->State = HAL_DMA_QUEUE_STATE_READY;
    hdma->LinkedListQueue->ErrorCode = (0x00U);


    hdma->LinkedListQueue = 
# 752 "stm32u5xx_hal_dma_ex.c" 3 4
                           ((void *)0)
# 752 "stm32u5xx_hal_dma_ex.c"
                               ;
  }


  if (hdma->Parent != 
# 756 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 756 "stm32u5xx_hal_dma_ex.c"
                         )
  {
    hdma->Parent = 
# 758 "stm32u5xx_hal_dma_ex.c" 3 4
                  ((void *)0)
# 758 "stm32u5xx_hal_dma_ex.c"
                      ;
  }


  hdma->Mode = (0x00U);


  hdma->ErrorCode = (0x0000U);


  hdma->State = HAL_DMA_STATE_RESET;


  do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

  return HAL_OK;
}
# 807 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_Start(DMA_HandleTypeDef *const hdma)
{
  HAL_DMA_StateTypeDef dma_state;
  uint32_t ccr_value;
  uint32_t cllr_mask;


  if ((hdma == 
# 814 "stm32u5xx_hal_dma_ex.c" 3 4
              ((void *)0)
# 814 "stm32u5xx_hal_dma_ex.c"
                  ) || (hdma->LinkedListQueue == 
# 814 "stm32u5xx_hal_dma_ex.c" 3 4
                                                 ((void *)0)
# 814 "stm32u5xx_hal_dma_ex.c"
                                                     ))
  {
    return HAL_ERROR;
  }


  dma_state = hdma->State;
  ccr_value = hdma->Instance->CCR & (0x1UL << (16U));
  if ((dma_state == HAL_DMA_STATE_READY) || ((dma_state == HAL_DMA_STATE_BUSY) && (ccr_value != 0U)))
  {

    if (hdma->State == HAL_DMA_STATE_READY)
    {

      do{ if((hdma)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (hdma)->Lock = HAL_LOCKED; } }while (0);


      hdma->State = HAL_DMA_STATE_BUSY;
      hdma->LinkedListQueue->State = HAL_DMA_QUEUE_STATE_BUSY;


      hdma->ErrorCode = (0x0000U);
      hdma->LinkedListQueue->ErrorCode = (0x00U);


      DMA_List_GetCLLRNodeInfo(hdma->LinkedListQueue->Head, &cllr_mask, 
# 839 "stm32u5xx_hal_dma_ex.c" 3 4
                                                                       ((void *)0)
# 839 "stm32u5xx_hal_dma_ex.c"
                                                                           );


      hdma->Instance->CLBAR = ((uint32_t)hdma->LinkedListQueue->Head & (0xFFFFUL << (16U)));
      hdma->Instance->CLLR = ((uint32_t)hdma->LinkedListQueue->Head & (0x3FFFUL << (2U))) | cllr_mask;
    }


    ((hdma)->Instance->CCR |= (0x1UL << (0U)));
  }
  else
  {

    hdma->ErrorCode = (0x0040U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }

  return HAL_OK;
}







HAL_StatusTypeDef HAL_DMAEx_List_Start_IT(DMA_HandleTypeDef *const hdma)
{
  HAL_DMA_StateTypeDef dma_state;
  uint32_t ccr_value;
  uint32_t cllr_mask;


  if ((hdma == 
# 876 "stm32u5xx_hal_dma_ex.c" 3 4
              ((void *)0)
# 876 "stm32u5xx_hal_dma_ex.c"
                  ) || (hdma->LinkedListQueue == 
# 876 "stm32u5xx_hal_dma_ex.c" 3 4
                                                 ((void *)0)
# 876 "stm32u5xx_hal_dma_ex.c"
                                                     ))
  {
    return HAL_ERROR;
  }


  dma_state = hdma->State;
  ccr_value = hdma->Instance->CCR & (0x1UL << (16U));
  if ((dma_state == HAL_DMA_STATE_READY) || ((dma_state == HAL_DMA_STATE_BUSY) && (ccr_value != 0U)))
  {

    if (hdma->State == HAL_DMA_STATE_READY)
    {

      do{ if((hdma)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (hdma)->Lock = HAL_LOCKED; } }while (0);


      hdma->State = HAL_DMA_STATE_BUSY;
      hdma->LinkedListQueue->State = HAL_DMA_QUEUE_STATE_BUSY;


      hdma->ErrorCode = (0x0000U);
      hdma->LinkedListQueue->ErrorCode = (0x00U);


      ((hdma)->Instance->CCR |= (((0x1UL << (8U)) | (0x1UL << (10U)) | (0x1UL << (11U)) | (0x1UL << (12U)) | (0x1UL << (14U)))));


      if (hdma->XferHalfCpltCallback != 
# 904 "stm32u5xx_hal_dma_ex.c" 3 4
                                       ((void *)0)
# 904 "stm32u5xx_hal_dma_ex.c"
                                           )
      {

        ((hdma)->Instance->CCR |= ((0x1UL << (9U))));
      }


      if (hdma->XferSuspendCallback != 
# 911 "stm32u5xx_hal_dma_ex.c" 3 4
                                      ((void *)0)
# 911 "stm32u5xx_hal_dma_ex.c"
                                          )
      {

        ((hdma)->Instance->CCR |= ((0x1UL << (13U))));
      }


      DMA_List_GetCLLRNodeInfo(hdma->LinkedListQueue->Head, &cllr_mask, 
# 918 "stm32u5xx_hal_dma_ex.c" 3 4
                                                                       ((void *)0)
# 918 "stm32u5xx_hal_dma_ex.c"
                                                                           );


      hdma->Instance->CLBAR = ((uint32_t)hdma->LinkedListQueue->Head & (0xFFFFUL << (16U)));
      hdma->Instance->CLLR = ((uint32_t)hdma->LinkedListQueue->Head & (0x3FFFUL << (2U))) | cllr_mask;
    }


    ((hdma)->Instance->CCR |= (0x1UL << (0U)));
  }
  else
  {

    hdma->ErrorCode = (0x0040U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }

  return HAL_OK;
}
# 1035 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_BuildNode(DMA_NodeConfTypeDef const *const pNodeConfig,
                                           DMA_NodeTypeDef *const pNode)
{

  if ((pNodeConfig == 
# 1039 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1039 "stm32u5xx_hal_dma_ex.c"
                         ) || (pNode == 
# 1039 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 1039 "stm32u5xx_hal_dma_ex.c"
                                            ))
  {
    return HAL_ERROR;
  }


  ((void)0U);


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);


  if ((pNodeConfig->NodeType & (0x0020U)) == (0x0020U))
  {
    ((void)0U);
    ((void)0U);
    ((void)0U);
    ((void)0U);
  }


  ((void)0U);
  if (pNodeConfig->TriggerConfig.TriggerPolarity != 0x00000000U)
  {
    ((void)0U);
    ((void)0U);
  }


  if ((pNodeConfig->NodeType & (0x0002U)) == (0x0002U))
  {
    ((void)0U);
    ((void)0U);
    ((void)0U);
    ((void)0U);
    ((void)0U);
    ((void)0U);
    ((void)0U);
    ((void)0U);
    ((void)0U);
  }
# 1096 "stm32u5xx_hal_dma_ex.c"
  DMA_List_BuildNode(pNodeConfig, pNode);

  return HAL_OK;
}
# 1109 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_GetNodeConfig(DMA_NodeConfTypeDef *const pNodeConfig,
                                               DMA_NodeTypeDef const *const pNode)
{

  if ((pNodeConfig == 
# 1113 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1113 "stm32u5xx_hal_dma_ex.c"
                         ) || (pNode == 
# 1113 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 1113 "stm32u5xx_hal_dma_ex.c"
                                            ))
  {
    return HAL_ERROR;
  }


  DMA_List_GetNodeConfig(pNodeConfig, pNode);

  return HAL_OK;
}
# 1133 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_InsertNode(DMA_QListTypeDef *const pQList,
                                            DMA_NodeTypeDef *const pPrevNode,
                                            DMA_NodeTypeDef *const pNewNode)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if ((pQList == 
# 1142 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 1142 "stm32u5xx_hal_dma_ex.c"
                    ) || (pNewNode == 
# 1142 "stm32u5xx_hal_dma_ex.c" 3 4
                                      ((void *)0)
# 1142 "stm32u5xx_hal_dma_ex.c"
                                          ))
  {
    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesBaseAddresses(pQList->Head, pPrevNode, pNewNode) != 0U)
  {

    pQList->ErrorCode = (0x05U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesTypes(pQList->Head, pPrevNode, pNewNode) != 0U)
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pNewNode, &cllr_mask, &cllr_offset);


  if (pQList->Head == 
# 1184 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1184 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    if (pPrevNode == 
# 1187 "stm32u5xx_hal_dma_ex.c" 3 4
                    ((void *)0)
# 1187 "stm32u5xx_hal_dma_ex.c"
                        )
    {
      pQList->Head = pNewNode;
      pQList->NodeNumber = 1U;
    }

    else
    {
      pQList->Head = pPrevNode;
      pPrevNode->LinkRegisters[cllr_offset] = ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;
      pQList->NodeNumber = 2U;
    }
  }

  else
  {

    if (pPrevNode == 
# 1204 "stm32u5xx_hal_dma_ex.c" 3 4
                    ((void *)0)
# 1204 "stm32u5xx_hal_dma_ex.c"
                        )
    {
      pNewNode->LinkRegisters[cllr_offset] = ((uint32_t)pQList->Head & (0x3FFFUL << (2U))) | cllr_mask;
      pQList->Head = pNewNode;
    }

    else
    {

      node_info.cllr_offset = cllr_offset;
      if (DMA_List_FindNode(pQList, pPrevNode, &node_info) == 0U)
      {

        if (node_info.currentnode_pos == pQList->NodeNumber)
        {

          if (pQList->FirstCircularNode != 
# 1220 "stm32u5xx_hal_dma_ex.c" 3 4
                                          ((void *)0)
# 1220 "stm32u5xx_hal_dma_ex.c"
                                              )
          {
            pNewNode->LinkRegisters[cllr_offset] = ((uint32_t)pQList->FirstCircularNode & (0x3FFFUL << (2U))) | cllr_mask;
          }

          pPrevNode->LinkRegisters[cllr_offset] = ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;
        }

        else
        {
          pNewNode->LinkRegisters[cllr_offset] = pPrevNode->LinkRegisters[cllr_offset];
          pPrevNode->LinkRegisters[cllr_offset] = ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;
        }
      }
      else
      {

        pQList->ErrorCode = (0x06U);

        return HAL_ERROR;
      }
    }


    pQList->NodeNumber++;
  }


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;

  return HAL_OK;
}
# 1263 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_InsertNode_Head(DMA_QListTypeDef *const pQList,
                                                 DMA_NodeTypeDef *const pNewNode)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;


  if ((pQList == 
# 1270 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 1270 "stm32u5xx_hal_dma_ex.c"
                    ) || (pNewNode == 
# 1270 "stm32u5xx_hal_dma_ex.c" 3 4
                                      ((void *)0)
# 1270 "stm32u5xx_hal_dma_ex.c"
                                          ))
  {
    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesBaseAddresses(pQList->Head, pNewNode, 
# 1285 "stm32u5xx_hal_dma_ex.c" 3 4
                                                              ((void *)0)
# 1285 "stm32u5xx_hal_dma_ex.c"
                                                                  ) != 0U)
  {

    pQList->ErrorCode = (0x05U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesTypes(pQList->Head, pNewNode, 
# 1294 "stm32u5xx_hal_dma_ex.c" 3 4
                                                      ((void *)0)
# 1294 "stm32u5xx_hal_dma_ex.c"
                                                          ) != 0U)
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  if (pQList->Head == 
# 1309 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1309 "stm32u5xx_hal_dma_ex.c"
                         )
  {
    pQList->Head = pNewNode;
  }

  else
  {

    DMA_List_GetCLLRNodeInfo(pNewNode, &cllr_mask, &cllr_offset);

    pNewNode->LinkRegisters[cllr_offset] = ((uint32_t)pQList->Head & (0x3FFFUL << (2U))) | cllr_mask;
    pQList->Head = pNewNode;
  }


  pQList->NodeNumber++;


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;

  return HAL_OK;
}
# 1342 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_InsertNode_Tail(DMA_QListTypeDef *const pQList,
                                                 DMA_NodeTypeDef *const pNewNode)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if ((pQList == 
# 1350 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 1350 "stm32u5xx_hal_dma_ex.c"
                    ) || (pNewNode == 
# 1350 "stm32u5xx_hal_dma_ex.c" 3 4
                                      ((void *)0)
# 1350 "stm32u5xx_hal_dma_ex.c"
                                          ))
  {
    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesBaseAddresses(pQList->Head, pNewNode, 
# 1365 "stm32u5xx_hal_dma_ex.c" 3 4
                                                              ((void *)0)
# 1365 "stm32u5xx_hal_dma_ex.c"
                                                                  ) != 0U)
  {

    pQList->ErrorCode = (0x05U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesTypes(pQList->Head, pNewNode, 
# 1374 "stm32u5xx_hal_dma_ex.c" 3 4
                                                      ((void *)0)
# 1374 "stm32u5xx_hal_dma_ex.c"
                                                          ) != 0U)
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (pQList->Head == 
# 1383 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1383 "stm32u5xx_hal_dma_ex.c"
                         )
  {
    pQList->Head = pNewNode;
  }

  else
  {

    DMA_List_GetCLLRNodeInfo(pNewNode, &cllr_mask, &cllr_offset);


    node_info.cllr_offset = cllr_offset;
    (void)DMA_List_FindNode(pQList, 
# 1395 "stm32u5xx_hal_dma_ex.c" 3 4
                                   ((void *)0)
# 1395 "stm32u5xx_hal_dma_ex.c"
                                       , &node_info);


    if (pQList->FirstCircularNode != 
# 1398 "stm32u5xx_hal_dma_ex.c" 3 4
                                    ((void *)0)
# 1398 "stm32u5xx_hal_dma_ex.c"
                                        )
    {
      pNewNode->LinkRegisters[cllr_offset] = ((uint32_t)pQList->FirstCircularNode & (0x3FFFUL << (2U))) | cllr_mask;
    }

    ((DMA_NodeTypeDef *)node_info.currentnode_addr)->LinkRegisters[cllr_offset] =
      ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;
  }


  pQList->NodeNumber++;


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;


  ((void)(node_info));

  return HAL_OK;
}
# 1429 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_RemoveNode(DMA_QListTypeDef *const pQList,
                                            DMA_NodeTypeDef *const pNode)
{
  uint32_t previousnode_addr;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if ((pQList == 
# 1437 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 1437 "stm32u5xx_hal_dma_ex.c"
                    ) || (pNode == 
# 1437 "stm32u5xx_hal_dma_ex.c" 3 4
                                   ((void *)0)
# 1437 "stm32u5xx_hal_dma_ex.c"
                                       ))
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 1443 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1443 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pNode, 
# 1467 "stm32u5xx_hal_dma_ex.c" 3 4
                                 ((void *)0)
# 1467 "stm32u5xx_hal_dma_ex.c"
                                     , &cllr_offset);


  node_info.cllr_offset = cllr_offset;
  if (DMA_List_FindNode(pQList, pNode, &node_info) == 0U)
  {

    if (node_info.currentnode_pos == 1U)
    {

      if (pQList->FirstCircularNode == ((DMA_NodeTypeDef *)node_info.currentnode_addr))
      {

        (void)DMA_List_FindNode(pQList, 
# 1480 "stm32u5xx_hal_dma_ex.c" 3 4
                                       ((void *)0)
# 1480 "stm32u5xx_hal_dma_ex.c"
                                           , &node_info);


        ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


        pQList->FirstCircularNode = 
# 1486 "stm32u5xx_hal_dma_ex.c" 3 4
                                   ((void *)0)
# 1486 "stm32u5xx_hal_dma_ex.c"
                                       ;
      }


      pQList->Head = (DMA_NodeTypeDef *)(((uint32_t)pQList->Head & (0xFFFFUL << (16U))) +
                                         (pNode->LinkRegisters[cllr_offset] & (0x3FFFUL << (2U))));

      pNode->LinkRegisters[cllr_offset] = 0U;
    }

    else if (node_info.currentnode_pos == pQList->NodeNumber)
    {

      ((DMA_NodeTypeDef *)(node_info.previousnode_addr))->LinkRegisters[cllr_offset] = 0U;


      ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


      pQList->FirstCircularNode = 
# 1505 "stm32u5xx_hal_dma_ex.c" 3 4
                                 ((void *)0)
# 1505 "stm32u5xx_hal_dma_ex.c"
                                     ;
    }

    else
    {

      previousnode_addr = node_info.previousnode_addr;


      if (pQList->FirstCircularNode == ((DMA_NodeTypeDef *)node_info.currentnode_addr))
      {

        (void)DMA_List_FindNode(pQList, 
# 1517 "stm32u5xx_hal_dma_ex.c" 3 4
                                       ((void *)0)
# 1517 "stm32u5xx_hal_dma_ex.c"
                                           , &node_info);


        ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


        pQList->FirstCircularNode = 
# 1523 "stm32u5xx_hal_dma_ex.c" 3 4
                                   ((void *)0)
# 1523 "stm32u5xx_hal_dma_ex.c"
                                       ;
      }


      ((DMA_NodeTypeDef *)(previousnode_addr))->LinkRegisters[cllr_offset] = pNode->LinkRegisters[cllr_offset];


      pNode->LinkRegisters[cllr_offset] = 0U;
    }


    pQList->NodeNumber--;
  }
  else
  {

    pQList->ErrorCode = (0x06U);

    return HAL_ERROR;
  }


  if (pQList->NodeNumber == 0U)
  {

    DMA_List_CleanQueue(pQList);
  }
  else
  {

    pQList->ErrorCode = (0x00U);


    pQList->State = HAL_DMA_QUEUE_STATE_READY;
  }


  ((void)(node_info));

  return HAL_OK;
}






HAL_StatusTypeDef HAL_DMAEx_List_RemoveNode_Head(DMA_QListTypeDef *const pQList)
{
  uint32_t cllr_offset;
  uint32_t current_addr;
  DMA_NodeInQInfoTypeDef node_info;


  if (pQList == 
# 1577 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 1577 "stm32u5xx_hal_dma_ex.c"
                   )
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 1583 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1583 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pQList->Head, 
# 1607 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 1607 "stm32u5xx_hal_dma_ex.c"
                                            , &cllr_offset);


  if (pQList->NodeNumber == 1U)
  {
    pQList->Head->LinkRegisters[cllr_offset] = 0U;
    pQList->FirstCircularNode = 0U;
    pQList->ErrorCode = (0x00U);
  }

  else
  {

    if (pQList->FirstCircularNode == pQList->Head)
    {

      node_info.cllr_offset = cllr_offset;
      (void)DMA_List_FindNode(pQList, 
# 1624 "stm32u5xx_hal_dma_ex.c" 3 4
                                     ((void *)0)
# 1624 "stm32u5xx_hal_dma_ex.c"
                                         , &node_info);


      ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


      pQList->FirstCircularNode = 
# 1630 "stm32u5xx_hal_dma_ex.c" 3 4
                                 ((void *)0)
# 1630 "stm32u5xx_hal_dma_ex.c"
                                     ;
    }

    current_addr = pQList->Head->LinkRegisters[cllr_offset] & (0x3FFFUL << (2U));
    pQList->Head->LinkRegisters[cllr_offset] = 0U;
    pQList->Head = ((DMA_NodeTypeDef *)(current_addr + ((uint32_t)pQList->Head & (0xFFFFUL << (16U)))));
  }


  pQList->NodeNumber--;


  if (pQList->NodeNumber == 0U)
  {

    DMA_List_CleanQueue(pQList);
  }
  else
  {

    pQList->ErrorCode = (0x00U);


    pQList->State = HAL_DMA_QUEUE_STATE_READY;
  }


  ((void)(node_info));

  return HAL_OK;
}






HAL_StatusTypeDef HAL_DMAEx_List_RemoveNode_Tail(DMA_QListTypeDef *const pQList)
{
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if (pQList == 
# 1673 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 1673 "stm32u5xx_hal_dma_ex.c"
                   )
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 1679 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1679 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pQList->Head, 
# 1703 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 1703 "stm32u5xx_hal_dma_ex.c"
                                            , &cllr_offset);


  if (pQList->NodeNumber == 1U)
  {
    pQList->Head->LinkRegisters[cllr_offset] = 0U;
    pQList->FirstCircularNode = 0U;
    pQList->ErrorCode = (0x00U);
  }

  else
  {

    node_info.cllr_offset = cllr_offset;
    (void)DMA_List_FindNode(pQList, 
# 1717 "stm32u5xx_hal_dma_ex.c" 3 4
                                   ((void *)0)
# 1717 "stm32u5xx_hal_dma_ex.c"
                                       , &node_info);


    ((DMA_NodeTypeDef *)(node_info.previousnode_addr))->LinkRegisters[cllr_offset] = 0U;


    ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


    pQList->FirstCircularNode = 
# 1726 "stm32u5xx_hal_dma_ex.c" 3 4
                               ((void *)0)
# 1726 "stm32u5xx_hal_dma_ex.c"
                                   ;
  }


  pQList->NodeNumber--;


  if (pQList->NodeNumber == 0U)
  {

    DMA_List_CleanQueue(pQList);
  }
  else
  {

    pQList->ErrorCode = (0x00U);


    pQList->State = HAL_DMA_QUEUE_STATE_READY;
  }


  ((void)(node_info));

  return HAL_OK;
}
# 1762 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_ReplaceNode(DMA_QListTypeDef *const pQList,
                                             DMA_NodeTypeDef *const pOldNode,
                                             DMA_NodeTypeDef *const pNewNode)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if ((pQList == 
# 1771 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 1771 "stm32u5xx_hal_dma_ex.c"
                    ) || (pOldNode == 
# 1771 "stm32u5xx_hal_dma_ex.c" 3 4
                                      ((void *)0)
# 1771 "stm32u5xx_hal_dma_ex.c"
                                          ) || (pNewNode == 
# 1771 "stm32u5xx_hal_dma_ex.c" 3 4
                                                            ((void *)0)
# 1771 "stm32u5xx_hal_dma_ex.c"
                                                                ))
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 1777 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1777 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesBaseAddresses(pQList->Head, pOldNode, pNewNode) != 0U)
  {

    pQList->ErrorCode = (0x05U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesTypes(pQList->Head, pOldNode, pNewNode) != 0U)
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pNewNode, &cllr_mask, &cllr_offset);


  node_info.cllr_offset = cllr_offset;
  if (DMA_List_FindNode(pQList, pOldNode, &node_info) == 0U)
  {

    if (node_info.currentnode_pos == 1U)
    {
      pNewNode->LinkRegisters[cllr_offset] =
        ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset];
      pQList->Head = pNewNode;
      ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


      if (pQList->FirstCircularNode == ((DMA_NodeTypeDef *)node_info.currentnode_addr))
      {

        (void)DMA_List_FindNode(pQList, 
# 1837 "stm32u5xx_hal_dma_ex.c" 3 4
                                       ((void *)0)
# 1837 "stm32u5xx_hal_dma_ex.c"
                                           , &node_info);


        ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
          ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;


        pQList->FirstCircularNode = pNewNode;
      }
    }

    else if (node_info.currentnode_pos == pQList->NodeNumber)
    {
      ((DMA_NodeTypeDef *)(node_info.previousnode_addr))->LinkRegisters[cllr_offset] =
        ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;
      ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


      if (pQList->FirstCircularNode == ((DMA_NodeTypeDef *)(node_info.currentnode_addr)))
      {

        pNewNode->LinkRegisters[cllr_offset] = ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;


        pQList->FirstCircularNode = pNewNode;
      }

      else if (pQList->FirstCircularNode != 
# 1864 "stm32u5xx_hal_dma_ex.c" 3 4
                                           ((void *)0)
# 1864 "stm32u5xx_hal_dma_ex.c"
                                               )
      {

        pNewNode->LinkRegisters[cllr_offset] = ((uint32_t)pQList->FirstCircularNode & (0x3FFFUL << (2U))) | cllr_mask;
      }
      else
      {

      }
    }

    else
    {
      ((DMA_NodeTypeDef *)(node_info.previousnode_addr))->LinkRegisters[cllr_offset] =
        ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;
      pNewNode->LinkRegisters[cllr_offset] =
        ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset];
      ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


      if (pQList->FirstCircularNode == ((DMA_NodeTypeDef *)(node_info.currentnode_addr)))
      {

        (void)DMA_List_FindNode(pQList, 
# 1887 "stm32u5xx_hal_dma_ex.c" 3 4
                                       ((void *)0)
# 1887 "stm32u5xx_hal_dma_ex.c"
                                           , &node_info);


        ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
          ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;


        pQList->FirstCircularNode = pNewNode;
      }
    }
  }
  else
  {

    pQList->ErrorCode = (0x06U);

    return HAL_ERROR;
  }


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;


  ((void)(node_info));

  return HAL_OK;
}
# 1925 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_ReplaceNode_Head(DMA_QListTypeDef *const pQList,
                                                  DMA_NodeTypeDef *const pNewNode)
{
  uint32_t cllr_offset;
  uint32_t cllr_mask;
  DMA_NodeInQInfoTypeDef node_info;


  if ((pQList == 
# 1933 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 1933 "stm32u5xx_hal_dma_ex.c"
                    ) || (pNewNode == 
# 1933 "stm32u5xx_hal_dma_ex.c" 3 4
                                      ((void *)0)
# 1933 "stm32u5xx_hal_dma_ex.c"
                                          ))
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 1939 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 1939 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesBaseAddresses(pQList->Head, pNewNode, 
# 1957 "stm32u5xx_hal_dma_ex.c" 3 4
                                                              ((void *)0)
# 1957 "stm32u5xx_hal_dma_ex.c"
                                                                  ) != 0U)
  {

    pQList->ErrorCode = (0x05U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesTypes(pQList->Head, pNewNode, 
# 1966 "stm32u5xx_hal_dma_ex.c" 3 4
                                                      ((void *)0)
# 1966 "stm32u5xx_hal_dma_ex.c"
                                                          ) != 0U)
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pNewNode, &cllr_mask, &cllr_offset);


  if (pQList->FirstCircularNode == pQList->Head)
  {

    node_info.cllr_offset = cllr_offset;
    (void)DMA_List_FindNode(pQList, 
# 1988 "stm32u5xx_hal_dma_ex.c" 3 4
                                   ((void *)0)
# 1988 "stm32u5xx_hal_dma_ex.c"
                                       , &node_info);


    ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
      ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;


    pQList->FirstCircularNode = pNewNode;
  }


  pNewNode->LinkRegisters[cllr_offset] = pQList->Head->LinkRegisters[cllr_offset];
  pQList->Head->LinkRegisters[cllr_offset] = 0U;
  pQList->Head = pNewNode;


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;


  ((void)(node_info));

  return HAL_OK;
}
# 2022 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_ReplaceNode_Tail(DMA_QListTypeDef *const pQList,
                                                  DMA_NodeTypeDef *const pNewNode)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if ((pQList == 
# 2030 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 2030 "stm32u5xx_hal_dma_ex.c"
                    ) || (pNewNode == 
# 2030 "stm32u5xx_hal_dma_ex.c" 3 4
                                      ((void *)0)
# 2030 "stm32u5xx_hal_dma_ex.c"
                                          ))
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 2036 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 2036 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pNewNode, &cllr_mask, &cllr_offset);


  node_info.cllr_offset = cllr_offset;
  (void)DMA_List_FindNode(pQList, 
# 2064 "stm32u5xx_hal_dma_ex.c" 3 4
                                 ((void *)0)
# 2064 "stm32u5xx_hal_dma_ex.c"
                                     , &node_info);


  ((DMA_NodeTypeDef *)(node_info.previousnode_addr))->LinkRegisters[cllr_offset] =
    ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;


  ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


  if (pQList->FirstCircularNode == ((DMA_NodeTypeDef *)(node_info.currentnode_addr)))
  {

    pNewNode->LinkRegisters[cllr_offset] = ((uint32_t)pNewNode & (0x3FFFUL << (2U))) | cllr_mask;


    pQList->FirstCircularNode = pNewNode;
  }

  else if (pQList->FirstCircularNode != 
# 2083 "stm32u5xx_hal_dma_ex.c" 3 4
                                       ((void *)0)
# 2083 "stm32u5xx_hal_dma_ex.c"
                                           )
  {

    pNewNode->LinkRegisters[cllr_offset] = ((uint32_t)pQList->FirstCircularNode & (0x3FFFUL << (2U))) | cllr_mask;
  }
  else
  {

  }


  if (pQList->NodeNumber == 1U)
  {
    pQList->Head = pNewNode;
  }


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;

  return HAL_OK;
}






HAL_StatusTypeDef HAL_DMAEx_List_ResetQ(DMA_QListTypeDef *const pQList)
{
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if (pQList == 
# 2119 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 2119 "stm32u5xx_hal_dma_ex.c"
                   )
  {
    return HAL_ERROR;
  }


  if (pQList->State == HAL_DMA_QUEUE_STATE_BUSY)
  {

    pQList->ErrorCode = (0x01U);

    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  if (pQList->Head != 
# 2149 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 2149 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    DMA_List_GetCLLRNodeInfo(pQList->Head, 
# 2152 "stm32u5xx_hal_dma_ex.c" 3 4
                                          ((void *)0)
# 2152 "stm32u5xx_hal_dma_ex.c"
                                              , &cllr_offset);


    node_info.cllr_offset = cllr_offset;
    DMA_List_ResetQueueNodes(pQList, &node_info);
  }


  pQList->Head = 
# 2160 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 2160 "stm32u5xx_hal_dma_ex.c"
                    ;


  pQList->NodeNumber = 0U;


  pQList->FirstCircularNode = 
# 2166 "stm32u5xx_hal_dma_ex.c" 3 4
                             ((void *)0)
# 2166 "stm32u5xx_hal_dma_ex.c"
                                 ;


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_RESET;

  return HAL_OK;
}
# 2185 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_InsertQ(DMA_QListTypeDef *const pSrcQList,
                                         DMA_NodeTypeDef const *const pPrevNode,
                                         DMA_QListTypeDef *const pDestQList)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef src_q_node_info;
  DMA_NodeInQInfoTypeDef dest_q_node_info;


  if ((pSrcQList == 
# 2195 "stm32u5xx_hal_dma_ex.c" 3 4
                   ((void *)0)
# 2195 "stm32u5xx_hal_dma_ex.c"
                       ) || (pDestQList == 
# 2195 "stm32u5xx_hal_dma_ex.c" 3 4
                                           ((void *)0)
# 2195 "stm32u5xx_hal_dma_ex.c"
                                               ))
  {
    return HAL_ERROR;
  }


  if (pSrcQList->Head == 
# 2201 "stm32u5xx_hal_dma_ex.c" 3 4
                        ((void *)0)
# 2201 "stm32u5xx_hal_dma_ex.c"
                            )
  {

    pSrcQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pSrcQList->Type == (0x0001U))
  {

    pSrcQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (pDestQList->Type == (0x0001U))
  {

    pDestQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (pSrcQList->FirstCircularNode != 
# 2228 "stm32u5xx_hal_dma_ex.c" 3 4
                                     ((void *)0)
# 2228 "stm32u5xx_hal_dma_ex.c"
                                         )
  {

    pSrcQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesBaseAddresses(pSrcQList->Head, pPrevNode, pDestQList->Head) != 0U)
  {

    pSrcQList->ErrorCode = (0x05U);


    pDestQList->ErrorCode = (0x05U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesTypes(pSrcQList->Head, pPrevNode, pDestQList->Head) != 0U)
  {

    pSrcQList->ErrorCode = (0x04U);


    pDestQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pSrcQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pSrcQList->ErrorCode = (0x00U);


  pDestQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pDestQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pSrcQList->Head, &cllr_mask, &cllr_offset);


  if (pDestQList->Head == 
# 2276 "stm32u5xx_hal_dma_ex.c" 3 4
                         ((void *)0)
# 2276 "stm32u5xx_hal_dma_ex.c"
                             )
  {
    pDestQList->Head = pSrcQList->Head;
    pDestQList->NodeNumber = pSrcQList->NodeNumber;
  }

  else
  {

    if (pPrevNode == 
# 2285 "stm32u5xx_hal_dma_ex.c" 3 4
                    ((void *)0)
# 2285 "stm32u5xx_hal_dma_ex.c"
                        )
    {

      src_q_node_info.cllr_offset = cllr_offset;
      (void)DMA_List_FindNode(pSrcQList, 
# 2289 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 2289 "stm32u5xx_hal_dma_ex.c"
                                            , &src_q_node_info);


      if (pDestQList->FirstCircularNode == pDestQList->Head)
      {

        dest_q_node_info.cllr_offset = cllr_offset;
        (void)DMA_List_FindNode(pDestQList, 
# 2296 "stm32u5xx_hal_dma_ex.c" 3 4
                                           ((void *)0)
# 2296 "stm32u5xx_hal_dma_ex.c"
                                               , &dest_q_node_info);


        ((DMA_NodeTypeDef *)dest_q_node_info.currentnode_addr)->LinkRegisters[cllr_offset] =
          ((uint32_t)pSrcQList->Head & (0x3FFFUL << (2U))) | cllr_mask;


        pDestQList->FirstCircularNode = pSrcQList->Head;
      }


      ((DMA_NodeTypeDef *)(src_q_node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
        ((uint32_t)pDestQList->Head & (0x3FFFUL << (2U))) | cllr_mask;
      pDestQList->Head = pSrcQList->Head;
      pDestQList->NodeNumber += pSrcQList->NodeNumber;
    }

    else
    {

      dest_q_node_info.cllr_offset = cllr_offset;
      if (DMA_List_FindNode(pDestQList, pPrevNode, &dest_q_node_info) == 0U)
      {

        if (dest_q_node_info.currentnode_pos == pDestQList->NodeNumber)
        {

          ((DMA_NodeTypeDef *)(dest_q_node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
            ((uint32_t)pSrcQList->Head & (0x3FFFUL << (2U))) | cllr_mask;
          pDestQList->NodeNumber += pSrcQList->NodeNumber;


          if (pDestQList->FirstCircularNode != 
# 2328 "stm32u5xx_hal_dma_ex.c" 3 4
                                              ((void *)0)
# 2328 "stm32u5xx_hal_dma_ex.c"
                                                  )
          {

            src_q_node_info.cllr_offset = cllr_offset;
            (void)DMA_List_FindNode(pSrcQList, 
# 2332 "stm32u5xx_hal_dma_ex.c" 3 4
                                              ((void *)0)
# 2332 "stm32u5xx_hal_dma_ex.c"
                                                  , &src_q_node_info);


            (void)DMA_List_FindNode(pDestQList, pDestQList->FirstCircularNode, &dest_q_node_info);


            ((DMA_NodeTypeDef *)src_q_node_info.currentnode_addr)->LinkRegisters[cllr_offset] =
              (dest_q_node_info.currentnode_addr & (0x3FFFUL << (2U))) | cllr_mask;
          }
        }

        else
        {

          ((DMA_NodeTypeDef *)(dest_q_node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
            ((uint32_t)pSrcQList->Head & (0x3FFFUL << (2U))) | cllr_mask;


          src_q_node_info.cllr_offset = cllr_offset;
          (void)DMA_List_FindNode(pSrcQList, 
# 2351 "stm32u5xx_hal_dma_ex.c" 3 4
                                            ((void *)0)
# 2351 "stm32u5xx_hal_dma_ex.c"
                                                , &src_q_node_info);


          ((DMA_NodeTypeDef *)(src_q_node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
            (dest_q_node_info.nextnode_addr & (0x3FFFUL << (2U))) | cllr_mask;


          pDestQList->NodeNumber += pSrcQList->NodeNumber;
        }
      }
      else
      {

        pDestQList->ErrorCode = (0x06U);

        return HAL_ERROR;
      }
    }
  }


  DMA_List_CleanQueue(pSrcQList);


  pDestQList->ErrorCode = (0x00U);


  pDestQList->State = HAL_DMA_QUEUE_STATE_READY;


  ((void)(src_q_node_info));
  ((void)(dest_q_node_info));

  return HAL_OK;
}







HAL_StatusTypeDef HAL_DMAEx_List_InsertQ_Head(DMA_QListTypeDef *const pSrcQList,
                                              DMA_QListTypeDef *const pDestQList)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef src_q_node_info;
  DMA_NodeInQInfoTypeDef dest_q_node_info;


  if ((pSrcQList == 
# 2402 "stm32u5xx_hal_dma_ex.c" 3 4
                   ((void *)0)
# 2402 "stm32u5xx_hal_dma_ex.c"
                       ) || (pDestQList == 
# 2402 "stm32u5xx_hal_dma_ex.c" 3 4
                                           ((void *)0)
# 2402 "stm32u5xx_hal_dma_ex.c"
                                               ))
  {
    return HAL_ERROR;
  }


  if (pSrcQList->Head == 
# 2408 "stm32u5xx_hal_dma_ex.c" 3 4
                        ((void *)0)
# 2408 "stm32u5xx_hal_dma_ex.c"
                            )
  {

    pSrcQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pSrcQList->Type == (0x0001U))
  {

    pSrcQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (pDestQList->Type == (0x0001U))
  {

    pDestQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesBaseAddresses(pSrcQList->Head, pDestQList->Head, 
# 2435 "stm32u5xx_hal_dma_ex.c" 3 4
                                                                         ((void *)0)
# 2435 "stm32u5xx_hal_dma_ex.c"
                                                                             ) != 0U)
  {

    pSrcQList->ErrorCode = (0x05U);


    pDestQList->ErrorCode = (0x05U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesTypes(pSrcQList->Head, pDestQList->Head, 
# 2447 "stm32u5xx_hal_dma_ex.c" 3 4
                                                                 ((void *)0)
# 2447 "stm32u5xx_hal_dma_ex.c"
                                                                     ) != 0U)
  {

    pSrcQList->ErrorCode = (0x04U);


    pDestQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pSrcQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pSrcQList->ErrorCode = (0x00U);


  pDestQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pDestQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pSrcQList->Head, &cllr_mask, &cllr_offset);


  if (pDestQList->Head == 
# 2474 "stm32u5xx_hal_dma_ex.c" 3 4
                         ((void *)0)
# 2474 "stm32u5xx_hal_dma_ex.c"
                             )
  {
    pDestQList->Head = pSrcQList->Head;
    pDestQList->NodeNumber = pSrcQList->NodeNumber;
  }

  else
  {

    src_q_node_info.cllr_offset = cllr_offset;
    (void)DMA_List_FindNode(pSrcQList, 
# 2484 "stm32u5xx_hal_dma_ex.c" 3 4
                                      ((void *)0)
# 2484 "stm32u5xx_hal_dma_ex.c"
                                          , &src_q_node_info);


    if (pDestQList->FirstCircularNode == pDestQList->Head)
    {

      dest_q_node_info.cllr_offset = cllr_offset;
      (void)DMA_List_FindNode(pDestQList, 
# 2491 "stm32u5xx_hal_dma_ex.c" 3 4
                                         ((void *)0)
# 2491 "stm32u5xx_hal_dma_ex.c"
                                             , &dest_q_node_info);


      ((DMA_NodeTypeDef *)dest_q_node_info.currentnode_addr)->LinkRegisters[cllr_offset] =
        ((uint32_t)pSrcQList->Head & (0x3FFFUL << (2U))) | cllr_mask;


      pDestQList->FirstCircularNode = pSrcQList->Head;
    }


    ((DMA_NodeTypeDef *)(src_q_node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
      ((uint32_t)pDestQList->Head & (0x3FFFUL << (2U))) | cllr_mask;
    pDestQList->Head = pSrcQList->Head;
    pDestQList->NodeNumber += pSrcQList->NodeNumber;
  }


  DMA_List_CleanQueue(pSrcQList);


  pDestQList->ErrorCode = (0x00U);


  pDestQList->State = HAL_DMA_QUEUE_STATE_READY;


  ((void)(src_q_node_info));
  ((void)(dest_q_node_info));

  return HAL_OK;
}







HAL_StatusTypeDef HAL_DMAEx_List_InsertQ_Tail(DMA_QListTypeDef *const pSrcQList,
                                              DMA_QListTypeDef *const pDestQList)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef src_q_node_info;
  DMA_NodeInQInfoTypeDef dest_q_node_info;


  if ((pSrcQList == 
# 2539 "stm32u5xx_hal_dma_ex.c" 3 4
                   ((void *)0)
# 2539 "stm32u5xx_hal_dma_ex.c"
                       ) || (pDestQList == 
# 2539 "stm32u5xx_hal_dma_ex.c" 3 4
                                           ((void *)0)
# 2539 "stm32u5xx_hal_dma_ex.c"
                                               ))
  {
    return HAL_ERROR;
  }


  if (pSrcQList->Head == 
# 2545 "stm32u5xx_hal_dma_ex.c" 3 4
                        ((void *)0)
# 2545 "stm32u5xx_hal_dma_ex.c"
                            )
  {

    pSrcQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pSrcQList->Type == (0x0001U))
  {

    pSrcQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (pDestQList->Type == (0x0001U))
  {

    pDestQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesBaseAddresses(pSrcQList->Head, pDestQList->Head, 
# 2572 "stm32u5xx_hal_dma_ex.c" 3 4
                                                                         ((void *)0)
# 2572 "stm32u5xx_hal_dma_ex.c"
                                                                             ) != 0U)
  {

    pSrcQList->ErrorCode = (0x05U);


    pDestQList->ErrorCode = (0x05U);

    return HAL_ERROR;
  }


  if (DMA_List_CheckNodesTypes(pSrcQList->Head, pDestQList->Head, 
# 2584 "stm32u5xx_hal_dma_ex.c" 3 4
                                                                 ((void *)0)
# 2584 "stm32u5xx_hal_dma_ex.c"
                                                                     ) != 0U)
  {

    pSrcQList->ErrorCode = (0x04U);


    pDestQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pSrcQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pSrcQList->ErrorCode = (0x00U);


  pDestQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pDestQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pSrcQList->Head, &cllr_mask, &cllr_offset);


  if (pDestQList->Head == 
# 2611 "stm32u5xx_hal_dma_ex.c" 3 4
                         ((void *)0)
# 2611 "stm32u5xx_hal_dma_ex.c"
                             )
  {
    pDestQList->Head = pSrcQList->Head;
    pDestQList->NodeNumber = pSrcQList->NodeNumber;
  }

  else
  {

    dest_q_node_info.cllr_offset = cllr_offset;
    (void)DMA_List_FindNode(pDestQList, 
# 2621 "stm32u5xx_hal_dma_ex.c" 3 4
                                       ((void *)0)
# 2621 "stm32u5xx_hal_dma_ex.c"
                                           , &dest_q_node_info);


    ((DMA_NodeTypeDef *)(dest_q_node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
      ((uint32_t)pSrcQList->Head & (0x3FFFUL << (2U))) | cllr_mask;
    pDestQList->NodeNumber += pSrcQList->NodeNumber;


    if (pDestQList->FirstCircularNode != 
# 2629 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 2629 "stm32u5xx_hal_dma_ex.c"
                                            )
    {

      src_q_node_info.cllr_offset = cllr_offset;
      (void)DMA_List_FindNode(pSrcQList, 
# 2633 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 2633 "stm32u5xx_hal_dma_ex.c"
                                            , &src_q_node_info);


      (void)DMA_List_FindNode(pDestQList, pDestQList->FirstCircularNode, &dest_q_node_info);


      ((DMA_NodeTypeDef *)src_q_node_info.currentnode_addr)->LinkRegisters[cllr_offset] =
        (dest_q_node_info.currentnode_addr & (0x3FFFUL << (2U))) | cllr_mask;
    }
  }


  DMA_List_CleanQueue(pSrcQList);


  pDestQList->ErrorCode = (0x00U);


  pDestQList->State = HAL_DMA_QUEUE_STATE_READY;


  ((void)(src_q_node_info));

  return HAL_OK;
}
# 2666 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_SetCircularModeConfig(DMA_QListTypeDef *const pQList,
                                                       DMA_NodeTypeDef *const pFirstCircularNode)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if ((pQList == 
# 2674 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 2674 "stm32u5xx_hal_dma_ex.c"
                    ) || (pFirstCircularNode == 
# 2674 "stm32u5xx_hal_dma_ex.c" 3 4
                                                ((void *)0)
# 2674 "stm32u5xx_hal_dma_ex.c"
                                                    ))
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 2680 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 2680 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->FirstCircularNode != 
# 2689 "stm32u5xx_hal_dma_ex.c" 3 4
                                  ((void *)0)
# 2689 "stm32u5xx_hal_dma_ex.c"
                                      )
  {
    if (pQList->FirstCircularNode == pFirstCircularNode)
    {
      return HAL_OK;
    }
    else
    {

      pQList->ErrorCode = (0x04U);

      return HAL_ERROR;
    }
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pFirstCircularNode, &cllr_mask, &cllr_offset);


  node_info.cllr_offset = cllr_offset;
  if (DMA_List_FindNode(pQList, pFirstCircularNode, &node_info) == 0U)
  {

    (void)DMA_List_FindNode(pQList, 
# 2727 "stm32u5xx_hal_dma_ex.c" 3 4
                                   ((void *)0)
# 2727 "stm32u5xx_hal_dma_ex.c"
                                       , &node_info);


    ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
      ((uint32_t)pFirstCircularNode & (0x3FFFUL << (2U))) | cllr_mask;


    pQList->FirstCircularNode = pFirstCircularNode;
  }
  else
  {

    pQList->ErrorCode = (0x06U);

    return HAL_ERROR;
  }


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;


  ((void)(node_info));

  return HAL_OK;
}






HAL_StatusTypeDef HAL_DMAEx_List_SetCircularMode(DMA_QListTypeDef *const pQList)
{
  uint32_t cllr_mask;
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if (pQList == 
# 2768 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 2768 "stm32u5xx_hal_dma_ex.c"
                   )
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 2774 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 2774 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->FirstCircularNode != 
# 2783 "stm32u5xx_hal_dma_ex.c" 3 4
                                  ((void *)0)
# 2783 "stm32u5xx_hal_dma_ex.c"
                                      )
  {
    if (pQList->FirstCircularNode == pQList->Head)
    {
      return HAL_OK;
    }
    else
    {

      pQList->ErrorCode = (0x04U);

      return HAL_ERROR;
    }
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pQList->Head, &cllr_mask, &cllr_offset);


  node_info.cllr_offset = cllr_offset;
  (void)DMA_List_FindNode(pQList, 
# 2818 "stm32u5xx_hal_dma_ex.c" 3 4
                                 ((void *)0)
# 2818 "stm32u5xx_hal_dma_ex.c"
                                     , &node_info);


  ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] =
    ((uint32_t)pQList->Head & (0x3FFFUL << (2U))) | cllr_mask;


  pQList->FirstCircularNode = pQList->Head;


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;


  ((void)(node_info));

  return HAL_OK;
}






HAL_StatusTypeDef HAL_DMAEx_List_ClearCircularMode(DMA_QListTypeDef *const pQList)
{
  uint32_t cllr_offset;
  DMA_NodeInQInfoTypeDef node_info;


  if (pQList == 
# 2850 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 2850 "stm32u5xx_hal_dma_ex.c"
                   )
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 2856 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 2856 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->FirstCircularNode == 
# 2865 "stm32u5xx_hal_dma_ex.c" 3 4
                                  ((void *)0)
# 2865 "stm32u5xx_hal_dma_ex.c"
                                      )
  {
    return HAL_OK;
  }


  if (pQList->Type == (0x0001U))
  {

    pQList->ErrorCode = (0x04U);

    return HAL_ERROR;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pQList->Head, 
# 2886 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 2886 "stm32u5xx_hal_dma_ex.c"
                                            , &cllr_offset);


  node_info.cllr_offset = cllr_offset;
  (void)DMA_List_FindNode(pQList, 
# 2890 "stm32u5xx_hal_dma_ex.c" 3 4
                                 ((void *)0)
# 2890 "stm32u5xx_hal_dma_ex.c"
                                     , &node_info);


  ((DMA_NodeTypeDef *)(node_info.currentnode_addr))->LinkRegisters[cllr_offset] = 0U;


  pQList->FirstCircularNode = 
# 2896 "stm32u5xx_hal_dma_ex.c" 3 4
                             ((void *)0)
# 2896 "stm32u5xx_hal_dma_ex.c"
                                 ;


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;


  ((void)(node_info));

  return HAL_OK;
}






HAL_StatusTypeDef HAL_DMAEx_List_ConvertQToDynamic(DMA_QListTypeDef *const pQList)
{
  uint32_t cllr_offset;
  uint32_t currentnode_addr;
  DMA_NodeTypeDef context_node;
  DMA_NodeInQInfoTypeDef node_info;


  if (pQList == 
# 2923 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 2923 "stm32u5xx_hal_dma_ex.c"
                   )
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 2929 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 2929 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->Type == (0x0001U))
  {
    return HAL_OK;
  }


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pQList->Head, 
# 2950 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 2950 "stm32u5xx_hal_dma_ex.c"
                                            , &cllr_offset);


  if (pQList->FirstCircularNode != 0U)
  {

    node_info.cllr_offset = cllr_offset;
    (void)DMA_List_FindNode(pQList, 
# 2957 "stm32u5xx_hal_dma_ex.c" 3 4
                                   ((void *)0)
# 2957 "stm32u5xx_hal_dma_ex.c"
                                       , &node_info);
  }


  currentnode_addr = (uint32_t)pQList->Head;


  DMA_List_FillNode(pQList->Head, &context_node);


  for (uint32_t node_count = 1U; node_count < pQList->NodeNumber; node_count++)
  {

    (((currentnode_addr)) = ((((((currentnode_addr))) & (~((0x3FFFUL << (2U))))) | ((context_node.LinkRegisters[cllr_offset] & (0x3FFFUL << (2U)))))));


    if (((uint32_t)pQList->FirstCircularNode != 0U) &&
        ((uint32_t)pQList->FirstCircularNode != node_info.currentnode_addr) &&
        ((uint32_t)pQList->FirstCircularNode == currentnode_addr))
    {

      DMA_List_FillNode(pQList->FirstCircularNode, &context_node);
    }
    else
    {

      DMA_List_ConvertNodeToDynamic((uint32_t)&context_node, currentnode_addr, (cllr_offset + 1U));
    }
  }


  if (((uint32_t)pQList->FirstCircularNode != 0U) &&
      ((uint32_t)pQList->FirstCircularNode != node_info.currentnode_addr))
  {

    DMA_List_UpdateDynamicQueueNodesCLLR(pQList, (0x0000U));
  }
  else
  {

    DMA_List_UpdateDynamicQueueNodesCLLR(pQList, (0x0001U));
  }


  pQList->Type = (0x0001U);


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;

  return HAL_OK;
}






HAL_StatusTypeDef HAL_DMAEx_List_ConvertQToStatic(DMA_QListTypeDef *const pQList)
{
  uint32_t cllr_offset;
  uint32_t currentnode_addr;
  DMA_NodeTypeDef context_node;


  if (pQList == 
# 3024 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 3024 "stm32u5xx_hal_dma_ex.c"
                   )
  {
    return HAL_ERROR;
  }


  if (pQList->Head == 
# 3030 "stm32u5xx_hal_dma_ex.c" 3 4
                     ((void *)0)
# 3030 "stm32u5xx_hal_dma_ex.c"
                         )
  {

    pQList->ErrorCode = (0x02U);

    return HAL_ERROR;
  }


  if (pQList->Type == (0x0000U))
  {
    return HAL_OK;
  }


  currentnode_addr = (uint32_t)pQList->Head;


  pQList->State = HAL_DMA_QUEUE_STATE_BUSY;


  pQList->ErrorCode = (0x00U);


  DMA_List_GetCLLRNodeInfo(pQList->Head, 
# 3054 "stm32u5xx_hal_dma_ex.c" 3 4
                                        ((void *)0)
# 3054 "stm32u5xx_hal_dma_ex.c"
                                            , &cllr_offset);


  DMA_List_UpdateStaticQueueNodesCLLR(pQList, (0x0000U));


  for (uint32_t node_count = 1U; node_count < pQList->NodeNumber; node_count++)
  {

    DMA_List_FillNode((DMA_NodeTypeDef *)currentnode_addr, &context_node);


    (((currentnode_addr)) = ((((((currentnode_addr))) & (~((0x3FFFUL << (2U))))) | ((context_node.LinkRegisters[cllr_offset] & (0x3FFFUL << (2U)))))));


    DMA_List_ConvertNodeToStatic((uint32_t)&context_node, currentnode_addr, (cllr_offset + 1U));
  }


  DMA_List_UpdateStaticQueueNodesCLLR(pQList, (0x0001U));


  pQList->Type = (0x0000U);


  pQList->ErrorCode = (0x00U);


  pQList->State = HAL_DMA_QUEUE_STATE_READY;

  return HAL_OK;
}
# 3094 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_List_LinkQ(DMA_HandleTypeDef *const hdma,
                                       DMA_QListTypeDef *const pQList)
{
  HAL_DMA_StateTypeDef state;


  if ((hdma == 
# 3100 "stm32u5xx_hal_dma_ex.c" 3 4
              ((void *)0)
# 3100 "stm32u5xx_hal_dma_ex.c"
                  ) || (pQList == 
# 3100 "stm32u5xx_hal_dma_ex.c" 3 4
                                  ((void *)0)
# 3100 "stm32u5xx_hal_dma_ex.c"
                                      ))
  {
    return HAL_ERROR;
  }


  state = hdma->State;


  if ((hdma->State == HAL_DMA_STATE_BUSY) || (state == HAL_DMA_STATE_SUSPEND))
  {

    hdma->ErrorCode = (0x0040U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }


  if (pQList->State == HAL_DMA_QUEUE_STATE_BUSY)
  {

    pQList->ErrorCode = (0x01U);

    return HAL_ERROR;
  }


  if (((((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0650UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0650UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x06D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x06D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0750UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0750UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x07D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x07D0UL)))) == 0U) &&
      ((pQList->Head->NodeInfo & (0x0002U)) == (0x0002U)))
  {

    pQList->ErrorCode = (0x03U);

    return HAL_ERROR;
  }


  if (hdma->Mode == ((0x0080U) | (0x01U)))
  {

    if (pQList->FirstCircularNode == 
# 3143 "stm32u5xx_hal_dma_ex.c" 3 4
                                    ((void *)0)
# 3143 "stm32u5xx_hal_dma_ex.c"
                                        )
    {

      pQList->ErrorCode = (0x04U);

      return HAL_ERROR;
    }
  }
  else
  {

    if (pQList->FirstCircularNode != 
# 3154 "stm32u5xx_hal_dma_ex.c" 3 4
                                    ((void *)0)
# 3154 "stm32u5xx_hal_dma_ex.c"
                                        )
    {

      pQList->ErrorCode = (0x04U);

      return HAL_ERROR;
    }
  }


  hdma->LinkedListQueue = pQList;

  return HAL_OK;
}







HAL_StatusTypeDef HAL_DMAEx_List_UnLinkQ(DMA_HandleTypeDef *const hdma)
{
  HAL_DMA_StateTypeDef state;


  if (hdma == 
# 3180 "stm32u5xx_hal_dma_ex.c" 3 4
             ((void *)0)
# 3180 "stm32u5xx_hal_dma_ex.c"
                 )
  {
    return HAL_ERROR;
  }


  state = hdma->State;


  if ((hdma->State == HAL_DMA_STATE_BUSY) || (state == HAL_DMA_STATE_SUSPEND))
  {

    hdma->ErrorCode = (0x0040U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }


  hdma->LinkedListQueue = 
# 3201 "stm32u5xx_hal_dma_ex.c" 3 4
                         ((void *)0)
# 3201 "stm32u5xx_hal_dma_ex.c"
                             ;

  return HAL_OK;
}
# 3245 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_ConfigDataHandling(DMA_HandleTypeDef *const hdma,
                                               DMA_DataHandlingConfTypeDef const *const pConfigDataHandling)
{

  if ((hdma == 
# 3249 "stm32u5xx_hal_dma_ex.c" 3 4
              ((void *)0)
# 3249 "stm32u5xx_hal_dma_ex.c"
                  ) || (pConfigDataHandling == 
# 3249 "stm32u5xx_hal_dma_ex.c" 3 4
                                               ((void *)0)
# 3249 "stm32u5xx_hal_dma_ex.c"
                                                   ))
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);


  if (hdma->State == HAL_DMA_STATE_READY)
  {
    (((hdma->Instance->CTR1)) = ((((((hdma->Instance->CTR1))) & (~(((0x1UL << (27U)) | (0x1UL << (26U)) | (0x1UL << (13U)) | (0x3UL << (11U)))))) | ((pConfigDataHandling->DataAlignment | pConfigDataHandling->DataExchange)))))
                                                                                        ;
  }
  else
  {

    hdma->ErrorCode = (0x0040U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }

  return HAL_OK;
}
# 3285 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_ConfigTrigger(DMA_HandleTypeDef *const hdma,
                                          DMA_TriggerConfTypeDef const *const pConfigTrigger)
{

  if ((hdma == 
# 3289 "stm32u5xx_hal_dma_ex.c" 3 4
              ((void *)0)
# 3289 "stm32u5xx_hal_dma_ex.c"
                  ) || (pConfigTrigger == 
# 3289 "stm32u5xx_hal_dma_ex.c" 3 4
                                          ((void *)0)
# 3289 "stm32u5xx_hal_dma_ex.c"
                                              ))
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);


  if (hdma->State == HAL_DMA_STATE_READY)
  {
    (((hdma->Instance->CTR2)) = ((((((hdma->Instance->CTR2))) & (~(((0x3UL << (24U)) | (0x3FUL << (16U)) | (0x3UL << (14U)))))) | ((pConfigTrigger->TriggerPolarity | pConfigTrigger->TriggerMode | (pConfigTrigger->TriggerSelection << (16U)))))))

                                                                            ;
  }
  else
  {

    hdma->ErrorCode = (0x0040U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }

  return HAL_OK;
}
# 3330 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_ConfigRepeatBlock(DMA_HandleTypeDef *const hdma,
                                              DMA_RepeatBlockConfTypeDef const *const pConfigRepeatBlock)
{
  uint32_t tmpreg1;
  uint32_t tmpreg2;


  if ((hdma == 
# 3337 "stm32u5xx_hal_dma_ex.c" 3 4
              ((void *)0)
# 3337 "stm32u5xx_hal_dma_ex.c"
                  ) || (pConfigRepeatBlock == 
# 3337 "stm32u5xx_hal_dma_ex.c" 3 4
                                              ((void *)0)
# 3337 "stm32u5xx_hal_dma_ex.c"
                                                  ))
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);


  if (hdma->State == HAL_DMA_STATE_READY)
  {

    tmpreg1 = ((pConfigRepeatBlock->RepeatCount - 1U) << (16U));


    if (pConfigRepeatBlock->DestAddrOffset < 0)
    {

      tmpreg1 |= (0x1UL << (29U));
      tmpreg2 = (uint32_t)(- pConfigRepeatBlock->DestAddrOffset);
      tmpreg2 = tmpreg2 << (16U);
    }
    else
    {

      tmpreg2 = ((uint32_t)pConfigRepeatBlock->DestAddrOffset << (16U));
    }


    if (pConfigRepeatBlock->SrcAddrOffset < 0)
    {

      tmpreg1 |= (0x1UL << (28U));
      tmpreg2 |= (uint32_t)(- pConfigRepeatBlock->SrcAddrOffset);
    }
    else
    {

      tmpreg2 |= (uint32_t)pConfigRepeatBlock->SrcAddrOffset;
    }


    ((hdma->Instance->CTR3) = (tmpreg2));


    if (pConfigRepeatBlock->BlkDestAddrOffset < 0)
    {

      tmpreg1 |= (0x1UL << (31U));
      tmpreg2 = (uint32_t)(- pConfigRepeatBlock->BlkDestAddrOffset);
      tmpreg2 = tmpreg2 << (16U);
    }
    else
    {

      tmpreg2 = ((uint32_t)pConfigRepeatBlock->BlkDestAddrOffset << (16U));
    }


    if (pConfigRepeatBlock->BlkSrcAddrOffset < 0)
    {

      tmpreg1 |= (0x1UL << (30U));
      tmpreg2 |= (uint32_t)(- pConfigRepeatBlock->BlkSrcAddrOffset);
    }
    else
    {

      tmpreg2 |= (uint32_t)pConfigRepeatBlock->BlkSrcAddrOffset;
    }


    ((hdma->Instance->CBR2) = (tmpreg2));


    ((hdma->Instance->CBR1) = (tmpreg1));
  }
  else
  {

    hdma->ErrorCode = (0x0040U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }

  return HAL_OK;
}
# 3469 "stm32u5xx_hal_dma_ex.c"
HAL_StatusTypeDef HAL_DMAEx_Suspend(DMA_HandleTypeDef *const hdma)
{

  uint32_t tickstart = HAL_GetTick();


  if (hdma == 
# 3475 "stm32u5xx_hal_dma_ex.c" 3 4
             ((void *)0)
# 3475 "stm32u5xx_hal_dma_ex.c"
                 )
  {
    return HAL_ERROR;
  }


  if (hdma->State != HAL_DMA_STATE_BUSY)
  {

    hdma->ErrorCode = (0x0020U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }
  else
  {

    hdma->Instance->CCR |= (0x1UL << (2U));


    while ((hdma->Instance->CSR & (0x1UL << (13U))) != 0U)
    {

      if ((HAL_GetTick() - tickstart) > (0x00000005U))
      {

        hdma->ErrorCode |= (0x0010U);


        hdma->State = HAL_DMA_STATE_ERROR;


        do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

        return HAL_ERROR;
      }


      hdma->State = HAL_DMA_STATE_SUSPEND;
    }
  }

  return HAL_OK;
}







HAL_StatusTypeDef HAL_DMAEx_Suspend_IT(DMA_HandleTypeDef *const hdma)
{

  if (hdma == 
# 3531 "stm32u5xx_hal_dma_ex.c" 3 4
             ((void *)0)
# 3531 "stm32u5xx_hal_dma_ex.c"
                 )
  {
    return HAL_ERROR;
  }


  if (hdma->State != HAL_DMA_STATE_BUSY)
  {

    hdma->ErrorCode = (0x0020U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }
  else
  {

    hdma->Instance->CCR |= ((0x1UL << (2U)) | (0x1UL << (13U)));
  }

  return HAL_OK;
}







HAL_StatusTypeDef HAL_DMAEx_Resume(DMA_HandleTypeDef *const hdma)
{

  if (hdma == 
# 3565 "stm32u5xx_hal_dma_ex.c" 3 4
             ((void *)0)
# 3565 "stm32u5xx_hal_dma_ex.c"
                 )
  {
    return HAL_ERROR;
  }


  if (hdma->State != HAL_DMA_STATE_SUSPEND)
  {

    hdma->ErrorCode = (0x0020U);


    do{ (hdma)->Lock = HAL_UNLOCKED; }while (0);

    return HAL_ERROR;
  }
  else
  {

    hdma->Instance->CCR &= (~(0x1UL << (2U)));


    hdma->Instance->CFCR |= (0x1UL << (13U));


    hdma->State = HAL_DMA_STATE_BUSY;
  }

  return HAL_OK;
}
# 3623 "stm32u5xx_hal_dma_ex.c"
uint32_t HAL_DMAEx_GetFifoLevel(DMA_HandleTypeDef const *const hdma)
{
  return ((hdma->Instance->CSR & (0xFFUL << (16U))) >> (16U));
}
# 3647 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_Init(DMA_HandleTypeDef const *const hdma)
{
  uint32_t tmpreg;


  tmpreg = hdma->InitLinkedList.Priority | hdma->InitLinkedList.LinkStepMode | hdma->InitLinkedList.LinkAllocatedPort;


  (((hdma->Instance->CCR)) = ((((((hdma->Instance->CCR))) & (~((0x3UL << (22U)) | (0x1UL << (17U)) | (0x1UL << (16U))))) | (tmpreg))));


  ((hdma->Instance->CTR1) = (0U));


  ((hdma->Instance->CTR2) = (hdma->InitLinkedList.TransferEventMode));


  ((hdma->Instance->CBR1) = (0U));


  ((hdma->Instance->CSAR) = (0U));


  ((hdma->Instance->CDAR) = (0U));


  if ((((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0650UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0650UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x06D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x06D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x0750UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x0750UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x40000000UL) + 0x00020000UL)) + 0x07D0UL))) || ((hdma->Instance) == ((DMA_Channel_TypeDef *) ((((0x50000000UL) + 0x00020000UL)) + 0x07D0UL)))) != 0U)
  {

    ((hdma->Instance->CTR3) = (0U));


    ((hdma->Instance->CBR2) = (0U));
  }


  ((hdma->Instance->CLLR) = (0U));
}
# 3694 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_BuildNode(DMA_NodeConfTypeDef const *const pNodeConfig,
                               DMA_NodeTypeDef *const pNode)
{
  int32_t blockoffset;



  pNode->LinkRegisters[(0x0000U)] = pNodeConfig->Init.DestInc |
                                                   pNodeConfig->Init.DestDataWidth |
                                                   pNodeConfig->DataHandlingConfig.DataAlignment |
                                                   pNodeConfig->Init.SrcInc |
                                                   pNodeConfig->Init.SrcDataWidth;
# 3722 "stm32u5xx_hal_dma_ex.c"
  if ((pNodeConfig->NodeType & (0x0020U)) == (0x0020U))
  {

    pNode->LinkRegisters[(0x0000U)] |=
      (pNodeConfig->Init.TransferAllocatedPort | pNodeConfig->DataHandlingConfig.DataExchange |
       (((pNodeConfig->Init.DestBurstLength - 1U) << (20U)) & (0x3FUL << (20U))) |
       (((pNodeConfig->Init.SrcBurstLength - 1U) << (4U)) & (0x3FUL << (4U))));
  }





  pNode->LinkRegisters[(0x0001U)] = pNodeConfig->Init.TransferEventMode |
                                                   (pNodeConfig->Init.Request & ((0x7FUL << (0U)) | (0x1UL << (9U))));


  if ((pNodeConfig->Init.Direction) == (0x1UL << (10U)))
  {

    if ((pNodeConfig->NodeType & (0x0020U)) == (0x0020U))
    {
      pNode->LinkRegisters[(0x0001U)] |= (0x1UL << (10U));
    }
  }

  else if ((pNodeConfig->Init.Direction) == (0x1UL << (9U)))
  {
    pNode->LinkRegisters[(0x0001U)] |= (0x1UL << (9U));
  }
  else
  {

  }


  if (pNodeConfig->TriggerConfig.TriggerPolarity != 0x00000000U)
  {

    pNode->LinkRegisters[(0x0001U)] |=
      pNodeConfig->TriggerConfig.TriggerMode | pNodeConfig->TriggerConfig.TriggerPolarity |
      ((pNodeConfig->TriggerConfig.TriggerSelection << (16U)) & (0x3FUL << (16U)));
  }





  pNode->LinkRegisters[(0x0002U)] = (pNodeConfig->DataSize & (0xFFFFUL << (0U)));


  if ((pNodeConfig->NodeType & (0x0002U)) == (0x0002U))
  {

    pNode->LinkRegisters[(0x0002U)] |=
      (((pNodeConfig->RepeatBlockConfig.RepeatCount - 1U) << (16U)) & (0x7FFUL << (16U)));


    if (pNodeConfig->RepeatBlockConfig.SrcAddrOffset < 0)
    {
      pNode->LinkRegisters[(0x0002U)] |= (0x1UL << (28U));
    }
    else
    {
      pNode->LinkRegisters[(0x0002U)] &= (~(0x1UL << (28U)));
    }


    if (pNodeConfig->RepeatBlockConfig.DestAddrOffset < 0)
    {
      pNode->LinkRegisters[(0x0002U)] |= (0x1UL << (29U));
    }
    else
    {
      pNode->LinkRegisters[(0x0002U)] &= (~(0x1UL << (29U)));
    }


    if (pNodeConfig->RepeatBlockConfig.BlkSrcAddrOffset < 0)
    {
      pNode->LinkRegisters[(0x0002U)] |= (0x1UL << (30U));
    }
    else
    {
      pNode->LinkRegisters[(0x0002U)] &= (~(0x1UL << (30U)));
    }


    if (pNodeConfig->RepeatBlockConfig.BlkDestAddrOffset < 0)
    {
      pNode->LinkRegisters[(0x0002U)] |= (0x1UL << (31U));
    }
    else
    {
      pNode->LinkRegisters[(0x0002U)] &= (~(0x1UL << (31U)));
    }
  }




  pNode->LinkRegisters[(0x0003U)] = pNodeConfig->SrcAddress;




  pNode->LinkRegisters[(0x0004U)] = pNodeConfig->DstAddress;




  if ((pNodeConfig->NodeType & (0x0002U)) == (0x0002U))
  {


    if (pNodeConfig->RepeatBlockConfig.SrcAddrOffset < 0)
    {
      blockoffset = (- pNodeConfig->RepeatBlockConfig.SrcAddrOffset);
      pNode->LinkRegisters[(0x0005U)] = ((uint32_t)blockoffset & (0x1FFFUL << (0U)));
    }
    else
    {
      pNode->LinkRegisters[(0x0005U)] =
        ((uint32_t)pNodeConfig->RepeatBlockConfig.SrcAddrOffset & (0x1FFFUL << (0U)));
    }


    if (pNodeConfig->RepeatBlockConfig.DestAddrOffset < 0)
    {
      blockoffset = (- pNodeConfig->RepeatBlockConfig.DestAddrOffset);
      pNode->LinkRegisters[(0x0005U)] |= (((uint32_t)blockoffset << (16U)) & (0x1FFFUL << (16U)));
    }
    else
    {
      pNode->LinkRegisters[(0x0005U)] |=
        (((uint32_t)pNodeConfig->RepeatBlockConfig.DestAddrOffset << (16U)) & (0x1FFFUL << (16U)));
    }





    if (pNodeConfig->RepeatBlockConfig.BlkSrcAddrOffset < 0)
    {
      blockoffset = (- pNodeConfig->RepeatBlockConfig.BlkSrcAddrOffset);
      pNode->LinkRegisters[(0x0006U)] = ((uint32_t)blockoffset & (0xFFFFUL << (0U)));
    }
    else
    {
      pNode->LinkRegisters[(0x0006U)] =
        ((uint32_t)pNodeConfig->RepeatBlockConfig.BlkSrcAddrOffset & (0xFFFFUL << (0U)));
    }


    if (pNodeConfig->RepeatBlockConfig.BlkDestAddrOffset < 0)
    {
      blockoffset = (- pNodeConfig->RepeatBlockConfig.BlkDestAddrOffset);
      pNode->LinkRegisters[(0x0006U)] |=
        (((uint32_t)blockoffset & (0xFFFFUL << (0U))) << (16U));
    }
    else
    {
      pNode->LinkRegisters[(0x0006U)] |=
        (((uint32_t)pNodeConfig->RepeatBlockConfig.BlkDestAddrOffset << (16U)) & (0xFFFFUL << (16U)));
    }

  }




  pNode->NodeInfo = pNodeConfig->NodeType;
  if ((pNodeConfig->NodeType & (0x0002U)) == (0x0002U))
  {
    pNode->NodeInfo |= ((0x0007U) << (0x0008U));
  }
  else
  {
    pNode->NodeInfo |= ((0x0005U) << (0x0008U));
  }

}
# 3913 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_GetNodeConfig(DMA_NodeConfTypeDef *const pNodeConfig,
                                   DMA_NodeTypeDef const *const pNode)
{
  uint16_t offset;


  pNodeConfig->NodeType = (pNode->NodeInfo & (0x00FFU));




  pNodeConfig->Init.SrcInc = pNode->LinkRegisters[(0x0000U)] & (0x1UL << (3U));
  pNodeConfig->Init.DestInc = pNode->LinkRegisters[(0x0000U)] & (0x1UL << (19U));
  pNodeConfig->Init.SrcDataWidth = pNode->LinkRegisters[(0x0000U)] & (0x3UL << (0U));
  pNodeConfig->Init.DestDataWidth = pNode->LinkRegisters[(0x0000U)] & (0x3UL << (16U));
  pNodeConfig->Init.SrcBurstLength = ((pNode->LinkRegisters[(0x0000U)] &
                                                    (0x3FUL << (4U))) >> (4U)) + 1U;
  pNodeConfig->Init.DestBurstLength = ((pNode->LinkRegisters[(0x0000U)] &
                                                    (0x3FUL << (20U))) >> (20U)) + 1U;
  pNodeConfig->Init.TransferAllocatedPort = pNode->LinkRegisters[(0x0000U)] &
                                                  ((0x1UL << (14U)) | (0x1UL << (30U)));
  pNodeConfig->DataHandlingConfig.DataExchange = pNode->LinkRegisters[(0x0000U)] &
                                                  ((0x1UL << (13U)) | (0x1UL << (26U)) | (0x1UL << (27U)));
  pNodeConfig->DataHandlingConfig.DataAlignment = pNode->LinkRegisters[(0x0000U)] & (0x3UL << (11U));
# 3960 "stm32u5xx_hal_dma_ex.c"
  if ((pNode->LinkRegisters[(0x0001U)] & (0x1UL << (9U))) != 0U)
  {
    pNodeConfig->Init.Request = (0x1UL << (9U));
    pNodeConfig->Init.Direction = (0x1UL << (9U));
  }
  else
  {
    pNodeConfig->Init.Request = pNode->LinkRegisters[(0x0001U)] & (0x7FUL << (0U));

    if ((pNode->LinkRegisters[(0x0001U)] & (0x1UL << (10U))) != 0U)
    {
      pNodeConfig->Init.Direction = (0x1UL << (10U));
    }
    else
    {
      pNodeConfig->Init.Direction = 0x00000000U;
    }
  }

  pNodeConfig->Init.BlkHWRequest = (pNode->LinkRegisters[(0x0001U)] & (0x1UL << (11U)));
  pNodeConfig->TriggerConfig.TriggerMode = pNode->LinkRegisters[(0x0001U)] & (0x3UL << (14U));
  pNodeConfig->TriggerConfig.TriggerPolarity = pNode->LinkRegisters[(0x0001U)] & (0x3UL << (24U));
  pNodeConfig->TriggerConfig.TriggerSelection = (pNode->LinkRegisters[(0x0001U)] &
                                                 (0x3FUL << (16U))) >> (16U);
  pNodeConfig->Init.TransferEventMode = pNode->LinkRegisters[(0x0001U)] & (0x3UL << (30U));




  pNodeConfig->DataSize = pNode->LinkRegisters[(0x0002U)] & (0xFFFFUL << (0U));

  if ((pNodeConfig->NodeType & (0x0002U)) == (0x0002U))
  {
    pNodeConfig->RepeatBlockConfig.RepeatCount =
      ((pNode->LinkRegisters[(0x0002U)] & (0x7FFUL << (16U))) >> (16U)) + 1U;
  }
  else
  {
    pNodeConfig->RepeatBlockConfig.RepeatCount = 1U;
  }




  pNodeConfig->SrcAddress = pNode->LinkRegisters[(0x0003U)];




  pNodeConfig->DstAddress = pNode->LinkRegisters[(0x0004U)];



  if ((pNodeConfig->NodeType & (0x0002U)) == (0x0002U))
  {

    offset = (uint16_t)(pNode->LinkRegisters[(0x0005U)] & (0x1FFFUL << (0U)));
    pNodeConfig->RepeatBlockConfig.SrcAddrOffset = (int32_t)offset;

    offset = (uint16_t)((pNode->LinkRegisters[(0x0005U)] & (0x1FFFUL << (16U))) >> (16U));
    pNodeConfig->RepeatBlockConfig.DestAddrOffset = (int32_t)offset;

    if ((pNode->LinkRegisters[(0x0002U)] & (0x1UL << (28U))) != 0U)
    {
      pNodeConfig->RepeatBlockConfig.SrcAddrOffset *= (-1);
    }

    if ((pNode->LinkRegisters[(0x0002U)] & (0x1UL << (29U))) != 0U)
    {
      pNodeConfig->RepeatBlockConfig.DestAddrOffset *= (-1);
    }




    offset = (uint16_t)(pNode->LinkRegisters[(0x0006U)] & (0xFFFFUL << (0U)));
    pNodeConfig->RepeatBlockConfig.BlkSrcAddrOffset = (int32_t)offset;

    offset = (uint16_t)((pNode->LinkRegisters[(0x0006U)] & (0xFFFFUL << (16U))) >> (16U));
    pNodeConfig->RepeatBlockConfig.BlkDestAddrOffset = (int32_t)offset;

    if ((pNode->LinkRegisters[(0x0002U)] & (0x1UL << (30U))) != 0U)
    {
      pNodeConfig->RepeatBlockConfig.BlkSrcAddrOffset *= (-1);
    }

    if ((pNode->LinkRegisters[(0x0002U)] & (0x1UL << (31U))) != 0U)
    {
      pNodeConfig->RepeatBlockConfig.BlkDestAddrOffset *= (-1);
    }

  }
  else
  {

    pNodeConfig->RepeatBlockConfig.SrcAddrOffset = 0;
    pNodeConfig->RepeatBlockConfig.DestAddrOffset = 0;




    pNodeConfig->RepeatBlockConfig.BlkSrcAddrOffset = 0;
    pNodeConfig->RepeatBlockConfig.BlkDestAddrOffset = 0;

  }
}
# 4074 "stm32u5xx_hal_dma_ex.c"
static uint32_t DMA_List_CheckNodesBaseAddresses(DMA_NodeTypeDef const *const pNode1,
                                                 DMA_NodeTypeDef const *const pNode2,
                                                 DMA_NodeTypeDef const *const pNode3)
{
  uint32_t temp = (((uint32_t)pNode1 | (uint32_t)pNode2 | (uint32_t)pNode3) & (0xFFFFUL << (16U)));
  uint32_t ref = 0U;


  if ((uint32_t)pNode1 != 0U)
  {
    ref = (uint32_t)pNode1;
  }

  else if ((uint32_t)pNode2 != 0U)
  {
    ref = (uint32_t)pNode2;
  }

  else if ((uint32_t)pNode3 != 0U)
  {
    ref = (uint32_t)pNode3;
  }
  else
  {

  }


  if (temp != ((uint32_t)ref & (0xFFFFUL << (16U))))
  {
    return 1U;
  }

  return 0U;
}
# 4117 "stm32u5xx_hal_dma_ex.c"
static uint32_t DMA_List_CheckNodesTypes(DMA_NodeTypeDef const *const pNode1,
                                         DMA_NodeTypeDef const *const pNode2,
                                         DMA_NodeTypeDef const *const pNode3)
{
  uint32_t ref = 0U;


  if (pNode1 != 
# 4124 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 4124 "stm32u5xx_hal_dma_ex.c"
                   )
  {
    ref = pNode1->NodeInfo & (0x00FFU);
  }

  else if (pNode2 != 
# 4129 "stm32u5xx_hal_dma_ex.c" 3 4
                    ((void *)0)
# 4129 "stm32u5xx_hal_dma_ex.c"
                        )
  {
    ref = pNode2->NodeInfo & (0x00FFU);
  }

  else if (pNode3 != 
# 4134 "stm32u5xx_hal_dma_ex.c" 3 4
                    ((void *)0)
# 4134 "stm32u5xx_hal_dma_ex.c"
                        )
  {
    ref = pNode3->NodeInfo & (0x00FFU);
  }
  else
  {

  }


  if (pNode2 != 
# 4144 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 4144 "stm32u5xx_hal_dma_ex.c"
                   )
  {

    if (ref != (pNode2->NodeInfo & (0x00FFU)))
    {
      return 2U;
    }
  }


  if (pNode3 != 
# 4154 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 4154 "stm32u5xx_hal_dma_ex.c"
                   )
  {

    if (ref != (pNode3->NodeInfo & (0x00FFU)))
    {
      return 3U;
    }
  }

  return 0U;
}
# 4174 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_GetCLLRNodeInfo(DMA_NodeTypeDef const *const pNode,
                                     uint32_t *const cllr_mask,
                                     uint32_t *const cllr_offset)
{

  if ((pNode->NodeInfo & (0x0002U)) == (0x0002U))
  {

    if (cllr_mask != 
# 4182 "stm32u5xx_hal_dma_ex.c" 3 4
                    ((void *)0)
# 4182 "stm32u5xx_hal_dma_ex.c"
                        )
    {
      *cllr_mask = (0x1UL << (31U)) | (0x1UL << (30U)) | (0x1UL << (29U)) | (0x1UL << (28U)) | (0x1UL << (27U)) | (0x1UL << (26U)) |
                   (0x1UL << (25U)) | (0x1UL << (16U));
    }


    if (cllr_offset != 
# 4189 "stm32u5xx_hal_dma_ex.c" 3 4
                      ((void *)0)
# 4189 "stm32u5xx_hal_dma_ex.c"
                          )
    {
      *cllr_offset = (0x0007U);
    }
  }

  else
  {

    if (cllr_mask != 
# 4198 "stm32u5xx_hal_dma_ex.c" 3 4
                    ((void *)0)
# 4198 "stm32u5xx_hal_dma_ex.c"
                        )
    {
      *cllr_mask = (0x1UL << (31U)) | (0x1UL << (30U)) | (0x1UL << (29U)) | (0x1UL << (28U)) | (0x1UL << (27U)) | (0x1UL << (16U));
    }


    if (cllr_offset != 
# 4204 "stm32u5xx_hal_dma_ex.c" 3 4
                      ((void *)0)
# 4204 "stm32u5xx_hal_dma_ex.c"
                          )
    {
      *cllr_offset = (0x0005U);
    }
  }
}
# 4218 "stm32u5xx_hal_dma_ex.c"
static uint32_t DMA_List_FindNode(DMA_QListTypeDef const *const pQList,
                                  DMA_NodeTypeDef const *const pNode,
                                  DMA_NodeInQInfoTypeDef *const NodeInfo)
{
  uint32_t node_idx = 0U;
  uint32_t currentnode_address = 0U;
  uint32_t previousnode_address = 0U;
  uint32_t cllr_offset = NodeInfo->cllr_offset;


  if (pNode == 
# 4228 "stm32u5xx_hal_dma_ex.c" 3 4
               ((void *)0)
# 4228 "stm32u5xx_hal_dma_ex.c"
                   )
  {

    while (node_idx < pQList->NodeNumber)
    {

      if (node_idx == 0U)
      {
        currentnode_address = (uint32_t)pQList->Head & (0x3FFFUL << (2U));
      }

      else
      {
        previousnode_address = currentnode_address;
        currentnode_address =
          ((DMA_NodeTypeDef *)(currentnode_address +
                               ((uint32_t)pQList->Head & (0xFFFFUL << (16U)))))->LinkRegisters[cllr_offset] & (0x3FFFUL << (2U));
      }


      node_idx++;
    }
  }

  else
  {

    while ((node_idx < pQList->NodeNumber) && (currentnode_address != ((uint32_t)pNode & (0x3FFFUL << (2U)))))
    {

      if (node_idx == 0U)
      {
        currentnode_address = (uint32_t)pQList->Head & (0x3FFFUL << (2U));
      }

      else
      {
        previousnode_address = currentnode_address;
        currentnode_address =
          ((DMA_NodeTypeDef *)(currentnode_address +
                               ((uint32_t)pQList->Head & (0xFFFFUL << (16U)))))->LinkRegisters[cllr_offset] & (0x3FFFUL << (2U));
      }


      node_idx++;
    }
  }


  if (pNode != 
# 4277 "stm32u5xx_hal_dma_ex.c" 3 4
              ((void *)0)
# 4277 "stm32u5xx_hal_dma_ex.c"
                  )
  {
    if (currentnode_address != ((uint32_t)pNode & (0x3FFFUL << (2U))))
    {
      return 1U;
    }
  }


  NodeInfo->currentnode_pos = node_idx;


  NodeInfo->previousnode_addr = previousnode_address | ((uint32_t)pQList->Head & (0xFFFFUL << (16U)));


  NodeInfo->currentnode_addr = currentnode_address | ((uint32_t)pQList->Head & (0xFFFFUL << (16U)));


  if (((DMA_NodeTypeDef *)NodeInfo->currentnode_addr)->LinkRegisters[cllr_offset] != 0U)
  {
    NodeInfo->nextnode_addr = (((DMA_NodeTypeDef *)NodeInfo->currentnode_addr)->LinkRegisters[cllr_offset] &
                               (0x3FFFUL << (2U))) | ((uint32_t)pQList->Head & (0xFFFFUL << (16U)));
  }

  return 0U;
}







static void DMA_List_ResetQueueNodes(DMA_QListTypeDef const *const pQList,
                                     DMA_NodeInQInfoTypeDef const *const NodeInfo)
{
  uint32_t node_idx = 0U;
  uint32_t currentnode_address = 0U;
  uint32_t previousnode_address;
  uint32_t cllr_offset = NodeInfo->cllr_offset;


  while (node_idx < pQList->NodeNumber)
  {

    if (node_idx == 0U)
    {
      previousnode_address = (uint32_t)pQList->Head & (0x3FFFUL << (2U));
      currentnode_address = (pQList->Head->LinkRegisters[cllr_offset] & (0x3FFFUL << (2U)));
    }

    else
    {
      previousnode_address = currentnode_address;
      currentnode_address =
        ((DMA_NodeTypeDef *)(currentnode_address +
                             ((uint32_t)pQList->Head & (0xFFFFUL << (16U)))))->LinkRegisters[cllr_offset] & (0x3FFFUL << (2U));
    }


    ((DMA_NodeTypeDef *)(previousnode_address +
                         ((uint32_t)pQList->Head & (0xFFFFUL << (16U)))))->LinkRegisters[cllr_offset] = 0U;


    node_idx++;
  }
}
# 4353 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_FillNode(DMA_NodeTypeDef const *const pSrcNode,
                              DMA_NodeTypeDef *const pDestNode)
{

  for (uint32_t reg_idx = 0U; reg_idx < (0x0008U); reg_idx++)
  {
    pDestNode->LinkRegisters[reg_idx] = pSrcNode->LinkRegisters[reg_idx];
  }


  pDestNode->NodeInfo = pSrcNode->NodeInfo;
}
# 4373 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_ConvertNodeToDynamic(uint32_t ContextNodeAddr,
                                          uint32_t CurrentNodeAddr,
                                          uint32_t RegisterNumber)
{
  uint32_t currentnode_reg_counter = 0U;
  uint32_t contextnode_reg_counter = 0U;
  uint32_t cllr_idx = RegisterNumber - 1U;
  DMA_NodeTypeDef *context_node = (DMA_NodeTypeDef *)ContextNodeAddr;
  DMA_NodeTypeDef *current_node = (DMA_NodeTypeDef *)CurrentNodeAddr;
  uint32_t update_link[(0x0008U)] = {(0x1UL << (31U)), (0x1UL << (30U)), (0x1UL << (29U)), (0x1UL << (28U)),
                                             (0x1UL << (27U)), (0x1UL << (26U)), (0x1UL << (25U)), (0x1UL << (16U))
                                            };


  update_link[cllr_idx] = update_link[(0x0008U) - 1U];


  while (contextnode_reg_counter != RegisterNumber)
  {

    if ((context_node->LinkRegisters[contextnode_reg_counter] ==
         current_node->LinkRegisters[currentnode_reg_counter]) &&
        (contextnode_reg_counter != (0x0003U)) &&
        (contextnode_reg_counter != (0x0004U)) &&
        (contextnode_reg_counter != (RegisterNumber - 1U)))
    {

      DMA_List_FormatNode(current_node, currentnode_reg_counter, RegisterNumber, (0x0001U));


      cllr_idx --;


      current_node->LinkRegisters[cllr_idx] &= ~update_link[contextnode_reg_counter];
    }
    else
    {

      context_node->LinkRegisters[contextnode_reg_counter] = current_node->LinkRegisters[currentnode_reg_counter];


      current_node->LinkRegisters[cllr_idx] |= update_link[contextnode_reg_counter];


      currentnode_reg_counter++;
    }


    contextnode_reg_counter++;
  }


  (((current_node->NodeInfo)) = ((((((current_node->NodeInfo))) & (~((0x0700U)))) | (((currentnode_reg_counter - 1U) << (0x0008U))))));


  DMA_List_ClearUnusedFields(current_node, currentnode_reg_counter);
}
# 4438 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_ConvertNodeToStatic(uint32_t ContextNodeAddr,
                                         uint32_t CurrentNodeAddr,
                                         uint32_t RegisterNumber)
{
  uint32_t contextnode_reg_counter = 0U;
  uint32_t cllr_idx;
  uint32_t cllr_mask;
  DMA_NodeTypeDef *context_node = (DMA_NodeTypeDef *)ContextNodeAddr;
  DMA_NodeTypeDef *current_node = (DMA_NodeTypeDef *)CurrentNodeAddr;
  uint32_t update_link[(0x0008U)] = {(0x1UL << (31U)), (0x1UL << (30U)), (0x1UL << (29U)), (0x1UL << (28U)),
                                             (0x1UL << (27U)), (0x1UL << (26U)), (0x1UL << (25U)), (0x1UL << (16U))
                                            };


  update_link[RegisterNumber - 1U] = update_link[(0x0008U) - 1U];


  cllr_idx = (context_node->NodeInfo & (0x0700U)) >> (0x0008U);
  cllr_mask = context_node->LinkRegisters[cllr_idx];


  while (contextnode_reg_counter != RegisterNumber)
  {

    if ((cllr_mask & update_link[contextnode_reg_counter]) == 0U)
    {

      DMA_List_FormatNode(current_node, contextnode_reg_counter, RegisterNumber, (0x0000U));


      current_node->LinkRegisters[contextnode_reg_counter] = context_node->LinkRegisters[contextnode_reg_counter];
    }


    contextnode_reg_counter++;
  }


  (((current_node->NodeInfo)) = ((((((current_node->NodeInfo))) & (~((0x0700U)))) | (((RegisterNumber - 1U) << (0x0008U))))));
}
# 4488 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_FormatNode(DMA_NodeTypeDef *const pNode,
                                uint32_t RegisterIdx,
                                uint32_t RegisterNumber,
                                uint32_t Format)
{
  if (Format == (0x0001U))
  {

    for (uint32_t reg_idx = RegisterIdx; reg_idx < (RegisterNumber - 1U); reg_idx++)
    {
      pNode->LinkRegisters[reg_idx] = pNode->LinkRegisters[reg_idx + 1U];
    }
  }
  else
  {

    for (uint32_t reg_idx = (RegisterNumber - 2U); reg_idx > RegisterIdx; reg_idx--)
    {
      pNode->LinkRegisters[reg_idx] = pNode->LinkRegisters[reg_idx - 1U];
    }
  }
}
# 4518 "stm32u5xx_hal_dma_ex.c"
static void DMA_List_ClearUnusedFields(DMA_NodeTypeDef *const pNode,
                                       uint32_t FirstUnusedField)
{

  for (uint32_t reg_idx = FirstUnusedField; reg_idx < (0x0008U); reg_idx++)
  {
    pNode->LinkRegisters[reg_idx] = 0U;
  }
}







static void DMA_List_UpdateDynamicQueueNodesCLLR(DMA_QListTypeDef const *const pQList,
                                                 uint32_t LastNode_IsCircular)
{
  uint32_t previous_cllr_offset;
  uint32_t current_cllr_offset = 0U;
  uint32_t previousnode_addr;
  uint32_t currentnode_addr = (uint32_t)pQList->Head;
  uint32_t cllr_mask;
  uint32_t node_idx = 0U;


  while (node_idx < pQList->NodeNumber)
  {

    if (node_idx == 0U)
    {

      current_cllr_offset = (((DMA_NodeTypeDef *)currentnode_addr)->NodeInfo & (0x0700U)) >> (0x0008U);
    }

    else
    {

      previousnode_addr = currentnode_addr;
      previous_cllr_offset = current_cllr_offset;


      currentnode_addr = (((DMA_NodeTypeDef *)(previousnode_addr))->LinkRegisters[previous_cllr_offset] & (0x3FFFUL << (2U))) +
                         ((uint32_t)pQList->Head & (0xFFFFUL << (16U)));
      current_cllr_offset = (((DMA_NodeTypeDef *)currentnode_addr)->NodeInfo & (0x0700U)) >> (0x0008U);


      cllr_mask = (((DMA_NodeTypeDef *)currentnode_addr)->LinkRegisters[current_cllr_offset] & ~(0x3FFFUL << (2U))) |
                  (((DMA_NodeTypeDef *)(previousnode_addr))->LinkRegisters[previous_cllr_offset] & (0x3FFFUL << (2U)));


      ((DMA_NodeTypeDef *)(previousnode_addr))->LinkRegisters[previous_cllr_offset] = cllr_mask;
    }


    node_idx++;
  }


  if (pQList->FirstCircularNode != 0U)
  {

    if (LastNode_IsCircular == 0U)
    {

      DMA_List_GetCLLRNodeInfo(((DMA_NodeTypeDef *)currentnode_addr), &cllr_mask, 
# 4584 "stm32u5xx_hal_dma_ex.c" 3 4
                                                                                 ((void *)0)
# 4584 "stm32u5xx_hal_dma_ex.c"
                                                                                     );


      ((DMA_NodeTypeDef *)currentnode_addr)->LinkRegisters[current_cllr_offset] =
        ((uint32_t)pQList->Head & (0x3FFFUL << (2U))) | cllr_mask;
    }

    else
    {

      ((DMA_NodeTypeDef *)currentnode_addr)->LinkRegisters[current_cllr_offset] &= ~(0x1UL << (16U));
    }
  }
  else
  {

    ((DMA_NodeTypeDef *)currentnode_addr)->LinkRegisters[current_cllr_offset] = 0U;
  }
}







static void DMA_List_UpdateStaticQueueNodesCLLR(DMA_QListTypeDef const *const pQList,
                                                uint32_t operation)
{
  uint32_t currentnode_addr = (uint32_t)pQList->Head;
  uint32_t current_cllr_offset = ((uint32_t)pQList->Head->NodeInfo & (0x0700U)) >> (0x0008U);
  uint32_t cllr_default_offset;
  uint32_t cllr_default_mask;
  uint32_t cllr_mask;
  uint32_t node_idx = 0U;


  DMA_List_GetCLLRNodeInfo(pQList->Head, &cllr_default_mask, &cllr_default_offset);


  while (node_idx < pQList->NodeNumber)
  {
    if (operation == (0x0000U))
    {

      cllr_mask = ((DMA_NodeTypeDef *)currentnode_addr)->LinkRegisters[current_cllr_offset];
    }
    else
    {

      cllr_mask = (((DMA_NodeTypeDef *)currentnode_addr)->LinkRegisters[current_cllr_offset] & (0x3FFFUL << (2U))) |
                  cllr_default_mask;
    }


    if ((node_idx == (pQList->NodeNumber - 1U)) && (pQList->FirstCircularNode == 
# 4639 "stm32u5xx_hal_dma_ex.c" 3 4
                                                                                ((void *)0)
# 4639 "stm32u5xx_hal_dma_ex.c"
                                                                                    ))
    {
      ((DMA_NodeTypeDef *)(currentnode_addr))->LinkRegisters[cllr_default_offset] = 0U;
    }
    else
    {
      ((DMA_NodeTypeDef *)(currentnode_addr))->LinkRegisters[cllr_default_offset] = cllr_mask;
    }


    currentnode_addr = (currentnode_addr & (0xFFFFUL << (16U))) | (cllr_mask & (0x3FFFUL << (2U)));


    current_cllr_offset = (((DMA_NodeTypeDef *)currentnode_addr)->NodeInfo & (0x0700U)) >> (0x0008U);


    node_idx++;
  }
}






static void DMA_List_CleanQueue(DMA_QListTypeDef *const pQList)
{

  pQList->Head = 
# 4667 "stm32u5xx_hal_dma_ex.c" 3 4
                ((void *)0)
# 4667 "stm32u5xx_hal_dma_ex.c"
                    ;


  pQList->FirstCircularNode = 
# 4670 "stm32u5xx_hal_dma_ex.c" 3 4
                             ((void *)0)
# 4670 "stm32u5xx_hal_dma_ex.c"
                                 ;


  pQList->NodeNumber = 0U;


  pQList->State = HAL_DMA_QUEUE_STATE_RESET;


  pQList->ErrorCode = (0x00U);


  pQList->Type = (0x0000U);
}
