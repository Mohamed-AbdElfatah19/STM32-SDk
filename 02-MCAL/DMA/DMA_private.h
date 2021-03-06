*****************************************/
/* Author  :  mohamed abd elfatah           */
/* Version :  V01                          */
/* Date    : 12 Sep 2020                   */
/*****************************************/

  
  #ifndef DMA_PRIVATE_H
  #define DMA_PRIVATE_H
  
  /* definations for Registers */
  
  typedef struct {
   volatile u32 CCR   ;
   volatile u32 CNDTR ;
   volatile u32 CPAR  ;
   volatile u32 CMAR  ;
   volatile u32 Reserved ;
  }DMA_channel ;
  

  typedef struct {
   volatile u32 ISR          ;  
   volatile u32 IFCR         ;
   DMA_channel channel[7]    ;
  }DMA_t ;
  
#define MDMA ((volatile DMA_t*)0x40020000)

#endif 
