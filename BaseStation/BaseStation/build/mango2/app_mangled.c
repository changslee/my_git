
#define MANGLED_NESC_APP_C
#define nx_struct struct
#define nx_union union
#define dbg(mode, format) ((void)0)
#define dbg_clear(mode, format) ((void)0)
#define dbg_active(mode) 0
// # 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
// #line 214
typedef unsigned int size_t;
// #line 326
typedef int wchar_t;
// # 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
// #line 8
  int dummy;
}  ;
// #line 9
struct __nesc_attr_bnd {
// #line 9
  void *lo, *hi;
}  ;
// #line 10
struct __nesc_attr_bnd_nok {
// #line 10
  void *lo, *hi;
}  ;
// #line 11
struct __nesc_attr_count {
// #line 11
  int n;
}  ;
// #line 12
struct __nesc_attr_count_nok {
// #line 12
  int n;
}  ;
// #line 13
struct __nesc_attr_one {
// #line 13
  int dummy;
}  ;
// #line 14
struct __nesc_attr_one_nok {
// #line 14
  int dummy;
}  ;
// #line 15
struct __nesc_attr_dmemset {
// #line 15
  int a1, a2, a3;
}  ;
// #line 16
struct __nesc_attr_dmemcpy {
// #line 16
  int a1, a2, a3;
}  ;
// #line 17
struct __nesc_attr_nts {
// #line 17
  int dummy;
}  ;
// # 58 "/opt/mg-sds/tos/chips/mg245x/etc/stdint.h"
enum __nesc_unnamed4242 {
  ID = 9
};








typedef signed char int8_t;




typedef unsigned char uint8_t;
// #line 108
typedef int int16_t;




typedef unsigned int uint16_t;










typedef long int32_t;




typedef unsigned long uint32_t;














// #line 159
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
// # 281 "/usr/lib/ncc/nesc_nx.h"
static /*__inline*/ uint8_t __nesc_ntoh_uint8(const void * source) reentrant   ;




static /*__inline*/ uint8_t __nesc_hton_uint8(void * target, uint8_t value) reentrant   ;





static /*__inline*/ uint8_t __nesc_ntoh_leuint8(const void * source) reentrant   ;




static /*__inline*/ uint8_t __nesc_hton_leuint8(void * target, uint8_t value) reentrant   ;





static /*__inline*/ int8_t __nesc_hton_int8(void * target, int8_t value) reentrant   ;






static /*__inline*/ uint16_t __nesc_ntoh_uint16(const void * source) reentrant   ;




static /*__inline*/ uint16_t __nesc_hton_uint16(void * target, uint16_t value) reentrant   ;






static /*__inline*/ uint16_t __nesc_ntoh_leuint16(const void * source) reentrant   ;




static /*__inline*/ uint16_t __nesc_hton_leuint16(void * target, uint16_t value) reentrant   ;
// #line 431
typedef struct { unsigned char nxdata[1]; } /*__attribute__((packed))*/ nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } /*__attribute__((packed))*/ nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } /*__attribute__((packed))*/ nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nx_int64_t;typedef int32_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } /*__attribute__((packed))*/ nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } /*__attribute__((packed))*/ nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } /*__attribute__((packed))*/ nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nx_uint64_t;typedef uint32_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } /*__attribute__((packed))*/ nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } /*__attribute__((packed))*/ nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } /*__attribute__((packed))*/ nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nxle_int64_t;typedef int32_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } /*__attribute__((packed))*/ nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } /*__attribute__((packed))*/ nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } /*__attribute__((packed))*/ nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nxle_uint64_t;typedef uint32_t __nesc_nxbase_nxle_uint64_t  ;
// # 67 "/opt/mg-original/tos/chips/mg245x/etc/string.h"
extern void *memcpy(void *arg_0x7e3b1978, const void *arg_0x7e3b1b10, size_t arg_0x7e3b1ca8);

extern void *memset(void *arg_0x7e3b0980, int arg_0x7e3b0ad8, size_t arg_0x7e3b0c70);
// # 69 "/opt/mg-original/tos/chips/mg245x/etc/stdlib.h"
// #line 66
typedef struct __nesc_unnamed4243 {
  int quot;
  int rem;
} div_t;





// #line 72
typedef struct __nesc_unnamed4244 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x7e360c80, const void *arg_0x7e360e18);
// # 19 "/home/Suchang/work/mg/tos/platforms/mango2/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4245 {
// #line 20
  FALSE = 0, TRUE = 1
};
typedef struct { unsigned char nxdata[1]; } /*__attribute__((packed))*/ nx_bool;typedef int8_t __nesc_nxbase_nx_bool  ;
uint16_t TOS_NODE_ID = ID;










struct __nesc_attr_atmostonce {
// #line 34
  uint8_t nothing;
};
// #line 35
struct __nesc_attr_atleastonce {
// #line 35
  uint8_t nothing;
};
// #line 36
struct __nesc_attr_exactlyonce {
// #line 36
  uint8_t nothing;
};
// # 51 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static /*inline*/ error_t ecombine(error_t r1, error_t r2) reentrant   ;
// # 19 "/opt/mg-original/tos/chips/mg245x/etc/MG245x.h"
#include <ABSACC.H>
// typedef int sfr;
// typedef int sbit;
// #line 50
sfr TCON = 0x88;
sfr TMOD = 0x89;
sfr TL0 = 0x8A;
sfr TL1 = 0x8B;
sfr TH0 = 0x8C;
sfr TH1 = 0x8D;

sfr EXIF = 0x91;


sfr IE = 0xA8;







sfr P1OEN = 0xB2;

sfr IP = 0xB8;








sfr WDT = 0xD2;


sfr EIE = 0xE8;

sfr EIP = 0xF8;
// #line 99
sbit RFIP = 0xF8;
// #line 112
sbit RFIE = 0xE8;
// #line 174
sbit EA = 0xAF;
sbit ES1 = 0xAE;


sbit ET1 = 0xAB;

sbit ET0 = 0xA9;




sbit P1_7 = 0x97;
sbit P1_6 = 0x96;
sbit P1_5 = 0x95;








sbit TF1 = 0x8F;
sbit TR1 = 0x8E;

sbit TR0 = 0x8C;
// # 51 "/opt/mg-original/tos/chips/mg245x/etc/pgmspace.h"
typedef void code prog_void ;
typedef char code prog_char ;
typedef unsigned char code prog_uchar ;

typedef int8_t code prog_int8_t ;
typedef uint8_t code prog_uint8_t ;
typedef int16_t code prog_int16_t ;
typedef uint16_t code prog_uint16_t ;

typedef int32_t code prog_int32_t ;
typedef uint32_t code prog_uint32_t ;


typedef int32_t code prog_int64_t ;
typedef uint32_t code prog_uint64_t ;
// # 25 "/opt/mg-original/tos/chips/mg245x/MG245XConst.h"
typedef uint8_t code const_uint8_t ;
typedef uint16_t code const_uint16_t ;
typedef uint32_t code const_uint32_t ;
typedef int8_t code const_int8_t ;
typedef int16_t code const_int16_t ;
typedef int32_t code const_int32_t ;
// # 83 "/opt/mg-original/tos/chips/mg245x/MG245XHardware.h"
static /*__inline*/ void __nesc_enable_interrupt() reentrant ;




static /*__inline*/ void __nesc_disable_interrupt() reentrant ;





typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );

void __nesc_atomic_end(__nesc_atomic_t original_SREG);









// #line 106
/*__inline*/ __nesc_atomic_t 
__nesc_atomic_start(void )  ;









// #line 116
/*__inline*/ void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;







typedef uint8_t mcu_power_t  ;


// # 60 "/home/Suchang/work/mg/tos/chips/mg245x/adc/MG245XAdc4.h"
// #line 55
typedef struct __nesc_unnamed4248 {
  unsigned int inch : 4;
  unsigned int sref : 2;
  unsigned int  : 2;
  unsigned int bias;
} mg245x_adc4_channel_config_t;

enum inch_enum {


  INPUT_CHANNEL_A0 = 0, 
  INPUT_CHANNEL_A1 = 1, 
  INPUT_CHANNEL_A2 = 2, 
  INPUT_CHANNEL_A3 = 3, 
  INPUT_CHANNEL_TEMPERATURE_SENSOR = 6, 
  INPUT_CHANNEL_BATTERY_MONITOR = 7, 
  INPUT_CHANNEL_GND = 8, 
  INPUT_CHANNEL_VDD = 9, 
  INPUT_CHANNEL_NONE = 10
};

enum sref_enum {

  REFERENCE_INTERNAL_0 = 0, 
  REFERENCE_EXTERNAL_2 = 2, 
  REFERENCE_INTERNAL_3 = 3
};
// #line 96
struct adc4_t;
// # 36 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/Timer.h"
typedef struct __nesc_unnamed4249 {
// #line 36
  uint8_t nothing;
} 
// #line 36
TMilli;
typedef struct __nesc_unnamed4250 {
// #line 37
  uint8_t nothing;
} 
// #line 37
T32khz;
typedef struct __nesc_unnamed4251 {
// #line 38
  uint8_t nothing;
} 
// #line 38
TMicro;
typedef struct __nesc_unnamed4252 {
// #line 39
  uint8_t nothing;
} 
// #line 39
T3Micro;
// # 45 "/opt/mg-original/tos/chips/mg245x/timer/MG245XTimer.h"
enum __nesc_unnamed4253 {
  MG245X_CLK8_OFF = 0x0, 
  MG245X_CLK8_NORMAL = 0x1, 
  MG245X_CLK8_DIVIDE_8 = 0x2, 
  MG245X_CLK8_DIVIDE_32 = 0x3, 
  MG245X_CLK8_DIVIDE_64 = 0x4, 
  MG245X_CLK8_DIVIDE_128 = 0x5, 
  MG245X_CLK8_DIVIDE_256 = 0x6, 
  MG245X_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4254 {
  MG245X_CLK16_OFF = 0x0, 
  MG245X_CLK16_NORMAL = 0x1, 
  MG245X_CLK16_DIVIDE_8 = 0x2, 
  MG245X_CLK16_DIVIDE_64 = 0x3, 
  MG245X_CLK16_DIVIDE_256 = 0x4, 
  MG245X_CLK16_DIVIDE_1024 = 0x5, 
  MG245X_CLK16_EXTERNAL_FALL = 0x6, 
  MG245X_CLK16_EXTERNAL_RISE = 0x7
};
// #line 167
// #line 154
typedef union __nesc_unnamed4255 {

  uint8_t flat;
  struct __nesc_unnamed4256 {
    uint8_t ex0 : 1;
    uint8_t et0 : 1;
    uint8_t ex1 : 1;
    uint8_t et1 : 1;
    uint8_t es0 : 1;
    uint8_t et2 : 1;
    uint8_t es1 : 1;
    uint8_t ea : 1;
  } bits;
} MG245X_IE_t;
// #line 201
// #line 188
typedef union __nesc_unnamed4257 {

  uint8_t flat;
  struct __nesc_unnamed4258 {
    uint8_t it0 : 1;
    uint8_t tf1 : 1;
    uint8_t tr1 : 1;
    uint8_t tf0 : 1;
    uint8_t tr0 : 1;
    uint8_t ie1 : 1;
    uint8_t it1 : 1;
    uint8_t ie0 : 1;
  } bits;
} MG245X_TCON_t;
// #line 242
// #line 233
typedef union __nesc_unnamed4259 {

  uint8_t flat;
  struct __nesc_unnamed4260 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} MG245X_TimerCtrlCompare_t;
// #line 287
// #line 277
typedef union __nesc_unnamed4261 {

  uint8_t flat;
  struct __nesc_unnamed4262 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} MG245X_TimerCtrlCapture_t;
// #line 309
// #line 300
typedef union __nesc_unnamed4263 {

  uint8_t flat;
  struct __nesc_unnamed4264 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} MG245X_TimerCtrlClock_t;
// #line 371
// #line 359
typedef union __nesc_unnamed4265 {

  uint8_t flat;
  struct __nesc_unnamed4266 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} MG245X_ETIMSK_t;
// #line 386
// #line 374
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} MG245X_ETIFR_t;


enum __nesc_unnamed4269 {
  MG245X_TIMER_CM_NONE = 0, 
  MG245X_TIMER_CM_RISING = 1, 
  MG245X_TIMER_CM_FALLING = 2, 
  MG245X_TIMER_CM_BOTH = 3, 

  MG245X_TIMER_STOP_MODE = 0, 
  MG245X_TIMER_UP_MODE = 1, 
  MG245X_TIMER_CONTINUOUS_MODE = 2, 
  MG245X_TIMER_UPDOWN_MODE = 3, 

  MG245X_TIMER_TACLK = 0, 
  MG245X_TIMER_TBCLK = 0, 
  MG245X_TIMER_ACLK = 1, 
  MG245X_TIMER_SMCLK = 2, 
  MG245X_TIMER_INCLK = 3, 

  MG245X_TIMER_CLOCKDIV_1 = 0, 
  MG245X_TIMER_CLOCKDIV_2 = 1, 
  MG245X_TIMER_CLOCKDIV_4 = 2, 
  MG245X_TIMER_CLOCKDIV_8 = 3
};
// #line 425
// #line 412
typedef struct __nesc_unnamed4270 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} mg245x_compare_control_t;
// #line 437
// #line 427
typedef struct __nesc_unnamed4271 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} mg245x_timer_a_control_t;
// #line 452
// #line 439
typedef struct __nesc_unnamed4272 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} mg245x_timer_b_control_t;
// # 60 "/opt/mg-original/tos/platforms/mango2/Mango2Timer.h"
typedef struct __nesc_unnamed4273 {
// #line 60
  uint8_t nothing;
} 
// #line 60
T64khz;
typedef struct __nesc_unnamed4274 {
// #line 61
  uint8_t nothing;
} 
// #line 61
T128khz;
typedef struct __nesc_unnamed4275 {
// #line 62
  uint8_t nothing;
} 
// #line 62
T2mhz;
typedef struct __nesc_unnamed4276 {
// #line 63
  uint8_t nothing;
} 
// #line 63
T4mhz;
// #line 116
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4277 {
  MANGO2_PRESCALER_ONE = MG245X_CLK16_DIVIDE_256, 
  MANGO2_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MANGO2_PRESCALER_THREE = MG245X_CLK16_DIVIDE_8, 
  MANGO2_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4278 {
  PLATFORM_MHZ = 8
};
// # 66 "/opt/mg-original/tos/platforms/mango2/hardware.h"
enum __nesc_unnamed4279 {
  PLATFORM_BAUDRATE = 57600L
};
// # 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4280 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4281 {
  TOS_AM_GROUP = 0x12, 
  TOS_AM_ADDRESS = 1
};
// # 83 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4282 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4283 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4284 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
// #line 121
// #line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







// #line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} /*__attribute__((packed))*/ serial_header_t;




// #line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  /*nx_uint8_t _data[];*/
} /*__attribute__((packed))*/ serial_packet_t;



// #line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} /*__attribute__((packed))*/ serial_metadata_t;
// # 46 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XComm.h"
typedef uint8_t mg245x_comm_status_t;
// #line 58
// #line 48
typedef nx_struct mg245x_comm_header {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;

  nxle_uint8_t network;
  nxle_uint8_t type;
} /*__attribute__((packed))*/ mg245x_comm_header_t;



// #line 60
typedef nx_struct mg245x_comm_footer {
  nx_uint16_t fcs;
} /*__attribute__((packed))*/ mg245x_comm_footer_t;
// #line 77
// #line 64
typedef nx_struct mg245x_comm_metadata {
  nx_uint8_t tx_power;
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_bool crc;
  nx_bool ack;
  nx_uint16_t time;
  nx_uint16_t rxInterval;
} /*__attribute__((packed))*/ 




mg245x_comm_metadata_t;




// #line 79
typedef nx_struct mg245x_comm_packet {
  mg245x_comm_header_t packet;
  /*nx_uint8_t _data[];*/
} /*__attribute__((packed))*/ mg245x_comm_packet_t;
// #line 100
enum __nesc_unnamed4285 {

  MAC_HEADER_SIZE = sizeof(mg245x_comm_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE
};


enum mg245x_comm_enums {
  MG245XCOMM_TIME_ACK_TURNAROUND = 72, 
  MG245XCOMM_TIME_PER_SYMBOL = 6, 
  MG245XCOMM_BACKOFF_PERIOD = 20 * MG245XCOMM_TIME_PER_SYMBOL
};
// # 50 "/opt/mg-original/tos/platforms/mango2/platform_message.h"
// #line 47
typedef union message_header {
  mg245x_comm_header_t mg245x_comm;
  serial_header_t serial;
} message_header_t;



// #line 52
typedef union message_footer {
  mg245x_comm_footer_t mg245x_comm;
} message_footer_t;



// #line 56
typedef union message_metadata {
  mg245x_comm_metadata_t mg245x_comm;
} message_metadata_t;
// # 19 "/opt/tinyos-2.x/tos/types/message.h"
// #line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t _data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} /*__attribute__((packed))*/ message_t;
// # 43 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4286 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
// # 40 "/opt/mg-original/tos/chips/mg245x/comm/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
// # 91 "/opt/tinyos-2.x/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b) reentrant ;
// # 32 "/opt/mg-original/tos/chips/mg245x/uart/MG245XUart.h"
typedef uint8_t MG245X_UDR0_t;
typedef uint8_t MG245X_UDR1_t;
// #line 48
// #line 36
typedef union __nesc_unnamed4287 {
  struct MG245X_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} MG245X_UartStatus_t;

typedef MG245X_UartStatus_t MG245X_UCSR0A_t;
typedef MG245X_UartStatus_t MG245X_UCSR1A_t;
// #line 66
// #line 54
typedef union __nesc_unnamed4288 {
  struct MG245X_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} MG245X_UartControl_t;

typedef MG245X_UartControl_t MG245X_UCSR0B_t;
typedef MG245X_UartControl_t MG245X_UCSR1B_t;

enum __nesc_unnamed4289 {
  MG245X_UART_DATA_SIZE_5_BITS = 0, 
  MG245X_UART_DATA_SIZE_6_BITS = 1, 
  MG245X_UART_DATA_SIZE_7_BITS = 2, 
  MG245X_UART_DATA_SIZE_8_BITS = 3
};
// #line 89
// #line 79
typedef union __nesc_unnamed4290 {
  uint8_t flat;
  struct MG245X_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} MG245X_UartMode_t;

typedef MG245X_UartMode_t MG245X_UCSR0C_t;
typedef MG245X_UartMode_t MG245X_UCSR1C_t;





enum __nesc_unnamed4291 {
  MG245X_19200_BAUD_4MHZ = 12, 
  MG245X_38400_BAUD_4MHZ = 6, 
  MG245X_57600_BAUD_4MHZ = 3, 

  MG245X_19200_BAUD_4MHZ_2X = 25, 
  MG245X_38400_BAUD_4MHZ_2X = 12, 
  MG245X_57600_BAUD_4MHZ_2X = 8, 

  MG245X_19200_BAUD_7MHZ = 23, 
  MG245X_38400_BAUD_7MHZ = 11, 
  MG245X_57600_BAUD_7MHZ = 7, 

  MG245X_19200_BAUD_7MHZ_2X = 47, 
  MG245X_38400_BAUD_7MHZ_2X = 23, 
  MG245X_57600_BAUD_7MHZ_2X = 15, 

  MG245X_19200_BAUD_8MHZ = 25, 
  MG245X_38400_BAUD_8MHZ = 12, 
  MG245X_57600_BAUD_8MHZ = 8, 

  MG245X_19200_BAUD_8MHZ_2X = 51, 
  MG245X_38400_BAUD_8MHZ_2X = 34, 
  MG245X_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t MG245X_UBRR0L_t;
typedef uint8_t MG245X_UBRR0H_t;

typedef uint8_t MG245X_UBRR1L_t;
typedef uint8_t MG245X_UBRR1H_t;
typedef T3Micro MG245XCommTransmitP__MultipurposeTimer__precision_tag;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum HilTimer3MicroC____nesc_unnamed4292 {
  HilTimer3MicroC__TIMER_COUNT = 1U
};
typedef uint16_t HplMG245XTimerAsyncC__Compare__size_type;
typedef uint16_t HplMG245XTimerAsyncC__Timer__timer_size;
typedef uint16_t /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__timer_size;
typedef /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__timer_size /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__timer_size;
typedef T3Micro /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__frequency_tag;
typedef uint16_t /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size;
typedef /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__frequency_tag /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__precision_tag;
typedef /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__size_type;
typedef /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__size_type;
typedef /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__timer_size;
typedef T3Micro /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__frequency_tag;
typedef uint16_t /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__timer_size;
typedef /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__frequency_tag /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__precision_tag;
typedef /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__timer_size /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__size_type;
typedef /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__timer_size /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__timer_size;
typedef T3Micro /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_precision_tag;
typedef uint32_t /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type;
typedef T3Micro /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_precision_tag;
typedef uint16_t /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_size_type;
typedef uint32_t /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__upper_count_type;
typedef /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_precision_tag /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__precision_tag;
typedef /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__size_type;
typedef /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_precision_tag /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__precision_tag;
typedef /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__size_type;
typedef /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_precision_tag /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__precision_tag;
typedef /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__size_type;
typedef /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_precision_tag /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__precision_tag;
typedef /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__size_type;
typedef T3Micro /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef T3Micro /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef T3Micro /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TMicro /*MG245XUartC.UartP*/MG245XUartP__0__Counter__precision_tag;
typedef uint32_t /*MG245XUartC.UartP*/MG245XUartP__0__Counter__size_type;
typedef uint16_t /*InitThreeP.InitThree*/MG245XTimerInitC__1__timer_size;
typedef /*InitThreeP.InitThree*/MG245XTimerInitC__1__timer_size /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/MG245XCounterC__1__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/MG245XCounterC__1__timer_size;
typedef /*CounterThree16C.NCounter*/MG245XCounterC__1__frequency_tag /*CounterThree16C.NCounter*/MG245XCounterC__1__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/MG245XCounterC__1__timer_size /*CounterThree16C.NCounter*/MG245XCounterC__1__Counter__size_type;
typedef /*CounterThree16C.NCounter*/MG245XCounterC__1__timer_size /*CounterThree16C.NCounter*/MG245XCounterC__1__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__size_type;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void ) reentrant ;
// #line 62
static error_t MotePlatformP__PlatformInit__init(void ) reentrant ;
// #line 62
static error_t MeasureClockC__Init__init(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
// # 45 "/home/Suchang/work/mg/tos/platforms/mango2/system/SchedulerBasicP.nc"
uint8_t arg_0x7e031ec8) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
// # 45 "/home/Suchang/work/mg/tos/platforms/mango2/system/SchedulerBasicP.nc"
uint8_t arg_0x7e031ec8) reentrant ;
// # 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void ) reentrant ;
// #line 72
static void SchedulerBasicP__Scheduler__taskLoop(void ) reentrant ;
// #line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void ) reentrant ;
// # 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void ) reentrant ;
// # 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void ) reentrant ;
// # 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void BaseStationP__Boot__booted(void ) reentrant ;
// # 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void BaseStationP__SerialControl__startDone(error_t error) reentrant ;
// #line 138
static void BaseStationP__SerialControl__stopDone(error_t error) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



BaseStationP__UartReceive__receive(
// # 67 "BaseStationP.nc"
am_id_t arg_0x7de946c0, 
// # 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void BaseStationP__uartSendTask__runTask(void ) reentrant ;
// # 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void BaseStationP__RadioControl__startDone(error_t error) reentrant ;
// #line 138
static void BaseStationP__RadioControl__stopDone(error_t error) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



BaseStationP__RadioReceive__receive(
// # 72 "BaseStationP.nc"
am_id_t arg_0x7de84428, 
// # 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void BaseStationP__radioSendTask__runTask(void ) reentrant ;
// # 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void BaseStationP__RadioSend__sendDone(
// # 71 "BaseStationP.nc"
am_id_t arg_0x7dea3940, 
// # 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error) reentrant ;
// #line 110
static void BaseStationP__UartSend__sendDone(
// # 66 "BaseStationP.nc"
am_id_t arg_0x7dee11b8, 
// # 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



BaseStationP__RadioSnoop__receive(
// # 73 "BaseStationP.nc"
am_id_t arg_0x7de84af0, 
// # 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void ) reentrant ;
// #line 83
static void LedsP__Leds__led1Toggle(void ) reentrant ;
// #line 100
static void LedsP__Leds__led2Toggle(void ) reentrant ;
// # 48 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
static void HplMG245XGeneralIOP__Port17__toggle(void ) reentrant ;
// #line 75
static void HplMG245XGeneralIOP__Port17__makeOutput(void ) reentrant ;
// #line 38
static void HplMG245XGeneralIOP__Port17__set(void ) reentrant ;









static void HplMG245XGeneralIOP__Port15__toggle(void ) reentrant ;
// #line 75
static void HplMG245XGeneralIOP__Port15__makeOutput(void ) reentrant ;
// #line 38
static void HplMG245XGeneralIOP__Port15__set(void ) reentrant ;









static void HplMG245XGeneralIOP__Port16__toggle(void ) reentrant ;
// #line 75
static void HplMG245XGeneralIOP__Port16__makeOutput(void ) reentrant ;
// #line 38
static void HplMG245XGeneralIOP__Port16__set(void ) reentrant ;
// # 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__toggle(void ) reentrant ;



static void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__makeOutput(void ) reentrant ;
// #line 40
static void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__set(void ) reentrant ;

static void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__toggle(void ) reentrant ;



static void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__makeOutput(void ) reentrant ;
// #line 40
static void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__set(void ) reentrant ;

static void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__toggle(void ) reentrant ;



static void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__makeOutput(void ) reentrant ;
// #line 40
static void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__set(void ) reentrant ;
// # 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void MG245XCommActiveMessageP__SubSend__sendDone(
// #line 96
message_t * msg, 



error_t error) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



MG245XCommActiveMessageP__SubReceive__receive(
// #line 71
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t MG245XCommActiveMessageP__AMSend__send(
// # 43 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
am_id_t arg_0x7d9832a0, 
// # 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
// #line 71
message_t * msg, 








uint8_t len) reentrant ;
// # 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void MG245XCommActiveMessageP__Packet__clear(
// #line 62
message_t * msg) reentrant ;
// #line 78
static uint8_t MG245XCommActiveMessageP__Packet__payloadLength(
// #line 74
message_t * msg) reentrant ;
// # 177 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_group_t MG245XCommActiveMessageP__AMPacket__group(
// #line 173
message_t * amsg) reentrant ;
// #line 88
static am_addr_t MG245XCommActiveMessageP__AMPacket__source(
// #line 84
message_t * amsg) reentrant ;
// #line 68
static am_addr_t MG245XCommActiveMessageP__AMPacket__address(void ) reentrant ;









static am_addr_t MG245XCommActiveMessageP__AMPacket__destination(
// #line 74
message_t * amsg) reentrant ;
// #line 121
static void MG245XCommActiveMessageP__AMPacket__setSource(
// #line 117
message_t * amsg, 



am_addr_t addr) reentrant ;
// #line 147
static am_id_t MG245XCommActiveMessageP__AMPacket__type(
// #line 143
message_t * amsg) reentrant ;
// #line 136
static bool MG245XCommActiveMessageP__AMPacket__isForMe(
// #line 133
message_t * amsg) reentrant ;
// # 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MG245XCommCsmaP__SplitControl__start(void ) reentrant ;
// # 75 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommConfig.nc"
static void MG245XCommCsmaP__MG245XCommConfig__setTxPower(uint8_t power) reentrant ;
// #line 61
static void MG245XCommCsmaP__MG245XCommConfig__setChannel(uint8_t channel) reentrant ;





static void MG245XCommCsmaP__MG245XCommConfig__setShortAddr(uint16_t address) reentrant ;





static void MG245XCommCsmaP__MG245XCommConfig__setPanAddr(uint16_t address) reentrant ;




static void MG245XCommCsmaP__MG245XCommConfig__setTrswB(uint8_t rate) reentrant ;
// #line 77
static void MG245XCommCsmaP__MG245XCommConfig__setTrsw(uint8_t rate) reentrant ;
// # 87 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommTransmit.nc"
static void MG245XCommCsmaP__MG245XCommTransmit__sendDone(message_t *p_msg, error_t error) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MG245XCommCsmaP__syncDone__runTask(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t MG245XCommCsmaP__Send__send(
// #line 67
message_t * msg, 







uint8_t len) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MG245XCommCsmaP__startDone__runTask(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MG245XCommCsmaP__Init__init(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MG245XCommCsmaP__stopDone__runTask(void ) reentrant ;
// #line 75
static void MG245XCommCsmaP__sendDone__runTask(void ) reentrant ;
// # 56 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
static uint16_t MG245XCommCsmaP__CsmaBackoff__congestion(
// #line 53
message_t * m) reentrant ;
// #line 48
static uint16_t MG245XCommCsmaP__CsmaBackoff__initial(
// #line 45
message_t * m) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MG245XCommTransmitP__SoftwareInit__init(void ) reentrant ;
// # 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void MG245XCommTransmitP__MultipurposeTimer__fired(void ) reentrant ;
// # 67 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommReceive.nc"
static void MG245XCommTransmitP__MG245XCommReceive__receiveAckDone(message_t *message) reentrant ;

static void MG245XCommTransmitP__MG245XCommReceive__sendMsgDone(void ) reentrant ;
// #line 68
static void MG245XCommTransmitP__MG245XCommReceive__sendAck(uint8_t framePend, message_t *message) reentrant ;
// # 50 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommTransmit.nc"
static error_t MG245XCommTransmitP__Send__sendCCA(message_t *p_msg) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MG245XCommTransmitP__startWaitAckTimer__runTask(void ) reentrant ;
// #line 75
static void MG245XCommTransmitP__stopSendMsgTimer__runTask(void ) reentrant ;
// # 95 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t MG245XCommTransmitP__SubControl__start(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MG245XCommTransmitP__startSendMsgTimer__runTask(void ) reentrant ;
// #line 75
static void MG245XCommTransmitP__stopWaitAckTimer__runTask(void ) reentrant ;
// #line 75
static void MG245XCommTransmitP__startWaitCcaTimer__runTask(void ) reentrant ;
// # 55 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommConfig.nc"
static void MG245XCommReceiveP__MG245XCommConfig__syncDone(error_t error) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MG245XCommReceiveP__receiveMsgDone__runTask(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MG245XCommReceiveP__Init__init(void ) reentrant ;
// # 95 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t MG245XCommReceiveP__AsyncStdControl__start(void ) reentrant ;
// # 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void ) reentrant ;
// #line 46
static uint32_t RandomMlcgC__Random__rand32(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void ) reentrant ;
// #line 62
static error_t HplMG245XTimerAsyncC__Init__init(void ) reentrant ;
// # 55 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XCompare.nc"
static void HplMG245XTimerAsyncC__Compare__reset(void ) reentrant ;
// #line 47
static void HplMG245XTimerAsyncC__Compare__set(HplMG245XTimerAsyncC__Compare__size_type t) reentrant ;










static void HplMG245XTimerAsyncC__Compare__start(void ) reentrant ;


static void HplMG245XTimerAsyncC__Compare__stop(void ) reentrant ;
// # 84 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static bool HplMG245XTimerAsyncC__Timer__test(void ) reentrant ;
// #line 58
static HplMG245XTimerAsyncC__Timer__timer_size HplMG245XTimerAsyncC__Timer__get(void ) reentrant ;
// #line 102
static void HplMG245XTimerAsyncC__Timer__setScale(void ) reentrant ;
// #line 64
static void HplMG245XTimerAsyncC__Timer__set(HplMG245XTimerAsyncC__Timer__timer_size t) reentrant ;










static void HplMG245XTimerAsyncC__Timer__start(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Init__init(void ) reentrant ;
// # 67 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static void /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__overflow(void ) reentrant ;
// # 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__startAt(/*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__size_type t0, /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__size_type dt) reentrant ;
// #line 73
static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__stop(void ) reentrant ;
// # 51 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XCompare.nc"
static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__fired(void ) reentrant ;
// # 67 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__overflow(void ) reentrant ;
// # 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__size_type /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__get(void ) reentrant ;






static bool /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__isOverflowPending(void ) reentrant ;
// # 67 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static void /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__overflow(void ) reentrant ;
// # 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__getNow(void ) reentrant ;
// #line 103
static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__startAt(/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__size_type t0, /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__size_type dt) reentrant ;
// #line 116
static /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__getAlarm(void ) reentrant ;
// #line 73
static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__stop(void ) reentrant ;
// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__overflow(void ) reentrant ;
// #line 64
static /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__get(void ) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__fired(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void ) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void ) reentrant ;
// # 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void ) reentrant ;
// #line 129
static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt) reentrant ;
// #line 78
static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void ) reentrant ;
// # 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void ) reentrant ;
// #line 83
static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
// # 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7d605c78) reentrant ;
// # 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
// # 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7d605c78, 
// # 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt) reentrant ;




static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
// # 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7d605c78) reentrant ;
// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void ) reentrant ;
// # 55 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void ) reentrant ;
// # 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
// #line 96
message_t * msg, 



error_t error) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
// #line 71
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
// # 52 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d598d98, 
// # 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
// #line 71
message_t * msg, 








uint8_t len) reentrant ;
// # 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(
// #line 62
message_t * msg) reentrant ;
// #line 78
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
// #line 74
message_t * msg) reentrant ;
// #line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void ) reentrant ;
// # 88 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(
// #line 84
message_t * amsg) reentrant ;
// #line 78
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
// #line 74
message_t * amsg) reentrant ;
// #line 121
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(
// #line 117
message_t * amsg, 



am_addr_t addr) reentrant ;
// #line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
// #line 143
message_t * amsg) reentrant ;
// #line 187
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(
// #line 184
message_t * amsg, 


am_group_t grp) reentrant ;
// # 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void ) reentrant ;
// #line 75
static void SerialP__RunTx__runTask(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void ) reentrant ;
// # 54 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void ) reentrant ;
// #line 49
static void SerialP__SerialFlush__default__flush(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void ) reentrant ;
// # 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t _data) reentrant ;





static void SerialP__SerialFrameComm__putDone(void ) reentrant ;
// #line 85
static void SerialP__SerialFrameComm__delimiterReceived(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void ) reentrant ;
// # 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void ) reentrant ;
// #line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
// # 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4d0888, 
// # 67 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len) reentrant ;
// #line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
// # 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4d0888, 
// # 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void ) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
// # 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4d0248, 
// # 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
// # 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4ce3a8, 
// # 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t _dataLinkLen) reentrant ;
// #line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
// # 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4ce3a8) reentrant ;
// # 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
// # 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4ce3a8, 
// # 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen) reentrant ;
// # 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void ) reentrant ;









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void ) reentrant ;






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t _data) reentrant ;










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result) reentrant ;
// # 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte) reentrant ;
// #line 99
static void HdlcTranslateC__UartStream__receiveDone(
// #line 95
uint8_t * buf, 



uint16_t len, error_t error) reentrant ;
// #line 57
static void HdlcTranslateC__UartStream__sendDone(
// #line 53
uint8_t * buf, 



uint16_t len, error_t error) reentrant ;
// # 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void ) reentrant ;
// #line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void ) reentrant ;
// #line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t _data) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*MG245XUartC.UartP*/MG245XUartP__0__Init__init(void ) reentrant ;
// # 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__send(
// #line 44
uint8_t * buf, 



uint16_t len) reentrant ;
// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*MG245XUartC.UartP*/MG245XUartP__0__Counter__overflow(void ) reentrant ;
// # 51 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
static void /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__rxDone(uint8_t _data) reentrant ;
// #line 49
static void /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__txDone(void ) reentrant ;
// # 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*MG245XUartC.UartP*/MG245XUartP__0__StdControl__start(void ) reentrant ;









static error_t /*MG245XUartC.UartP*/MG245XUartP__0__StdControl__stop(void ) reentrant ;
// # 51 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
static void HplMG245XUartP__HplUart0__default__rxDone(uint8_t _data) reentrant ;
// #line 49
static void HplMG245XUartP__HplUart0__default__txDone(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplMG245XUartP__Uart1Init__init(void ) reentrant ;
// # 48 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
static void HplMG245XUartP__HplUart1__tx(uint8_t _data) reentrant ;
// # 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t HplMG245XUartP__Uart1TxControl__start(void ) reentrant ;









static error_t HplMG245XUartP__Uart1TxControl__stop(void ) reentrant ;
// #line 95
static error_t HplMG245XUartP__Uart1RxControl__start(void ) reentrant ;









static error_t HplMG245XUartP__Uart1RxControl__stop(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/MG245XTimerInitC__1__Init__init(void ) reentrant ;
// # 67 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static void /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__overflow(void ) reentrant ;
// #line 67
static void /*CounterThree16C.NCounter*/MG245XCounterC__1__Timer__overflow(void ) reentrant ;
// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void ) reentrant ;
// # 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t _dataLinkLen) reentrant ;
// #line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void ) reentrant ;







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void ) reentrant ;
// #line 62
static error_t PlatformP__MeasureClock__init(void ) reentrant ;
// # 44 "/opt/mg-original/tos/platforms/mango2/PlatformP.nc"
static /*inline*/ void PlatformP__power_init(void ) reentrant ;






static /*inline*/ error_t PlatformP__Init__init(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void ) reentrant ;
// # 32 "/home/Suchang/work/mg/tos/platforms/mango2/MotePlatformP.nc"
static /*inline*/ error_t MotePlatformP__PlatformInit__init(void ) reentrant ;
// # 36 "/opt/mg-original/tos/platforms/mango2/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4293 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static /*inline*/ error_t MeasureClockC__Init__init(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void ) reentrant ;
// # 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void ) reentrant ;
// # 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void ) reentrant ;
// #line 72
static void RealMainP__Scheduler__taskLoop(void ) reentrant ;
// #line 65
static bool RealMainP__Scheduler__runNextTask(void ) reentrant ;
// # 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
// # 45 "/home/Suchang/work/mg/tos/platforms/mango2/system/SchedulerBasicP.nc"
uint8_t arg_0x7e031ec8) reentrant ;
// # 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void ) reentrant ;
// # 50 "/home/Suchang/work/mg/tos/platforms/mango2/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4294 {

  SchedulerBasicP__NUM_TASKS = 20U, 
  SchedulerBasicP__NO_TASK = 255
};

volatile uint8_t SchedulerBasicP__m_head;
volatile uint8_t SchedulerBasicP__m_tail;
volatile uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static /*__inline*/ uint8_t SchedulerBasicP__popTask(void ) reentrant ;
// #line 86
static /*inline*/ bool SchedulerBasicP__isWaiting(uint8_t id) reentrant ;




static /*inline*/ bool SchedulerBasicP__pushTask(uint8_t id) reentrant ;
// #line 113
static /*inline*/ void SchedulerBasicP__Scheduler__init(void ) reentrant ;
// #line 126
static bool SchedulerBasicP__Scheduler__runNextTask(void ) reentrant ;
// #line 141
static /*inline*/ void SchedulerBasicP__Scheduler__taskLoop(void ) reentrant ;
// #line 162
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id) reentrant ;




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id) reentrant ;
// # 114 "/opt/mg-original/tos/chips/mg245x/McuSleepC.nc"
static /*inline*/ void McuSleepC__McuSleep__sleep(void ) reentrant ;
// #line 134
static /*inline*/ void McuSleepC__McuPowerState__update(void ) reentrant ;
// # 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t BaseStationP__SerialControl__start(void ) reentrant ;
// # 177 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_group_t BaseStationP__RadioAMPacket__group(
// #line 173
message_t * amsg) reentrant ;
// #line 88
static am_addr_t BaseStationP__RadioAMPacket__source(
// #line 84
message_t * amsg) reentrant ;
// #line 78
static am_addr_t BaseStationP__RadioAMPacket__destination(
// #line 74
message_t * amsg) reentrant ;
// #line 121
static void BaseStationP__RadioAMPacket__setSource(
// #line 117
message_t * amsg, 



am_addr_t addr) reentrant ;
// #line 147
static am_id_t BaseStationP__RadioAMPacket__type(
// #line 143
message_t * amsg) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t BaseStationP__uartSendTask__postTask(void ) reentrant ;
// # 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t BaseStationP__RadioControl__start(void ) reentrant ;
// # 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void BaseStationP__RadioPacket__clear(
// #line 62
message_t * msg) reentrant ;
// #line 78
static uint8_t BaseStationP__RadioPacket__payloadLength(
// #line 74
message_t * msg) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t BaseStationP__radioSendTask__postTask(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void BaseStationP__Leds__led0Toggle(void ) reentrant ;
// #line 83
static void BaseStationP__Leds__led1Toggle(void ) reentrant ;
// #line 100
static void BaseStationP__Leds__led2Toggle(void ) reentrant ;
// # 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void BaseStationP__UartPacket__clear(
// #line 62
message_t * msg) reentrant ;
// #line 78
static uint8_t BaseStationP__UartPacket__payloadLength(
// #line 74
message_t * msg) reentrant ;
// # 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t BaseStationP__RadioSend__send(
// # 71 "BaseStationP.nc"
am_id_t arg_0x7dea3940, 
// # 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
// #line 71
message_t * msg, 








uint8_t len) reentrant ;
// #line 80
static error_t BaseStationP__UartSend__send(
// # 66 "BaseStationP.nc"
am_id_t arg_0x7dee11b8, 
// # 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
// #line 71
message_t * msg, 








uint8_t len) reentrant ;
// # 88 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t BaseStationP__UartAMPacket__source(
// #line 84
message_t * amsg) reentrant ;
// #line 78
static am_addr_t BaseStationP__UartAMPacket__destination(
// #line 74
message_t * amsg) reentrant ;
// #line 121
static void BaseStationP__UartAMPacket__setSource(
// #line 117
message_t * amsg, 



am_addr_t addr) reentrant ;
// #line 147
static am_id_t BaseStationP__UartAMPacket__type(
// #line 143
message_t * amsg) reentrant ;
// #line 187
static void BaseStationP__UartAMPacket__setGroup(
// #line 184
message_t * amsg, 


am_group_t grp) reentrant ;
// # 98 "BaseStationP.nc"
enum BaseStationP____nesc_unnamed4295 {
// #line 98
  BaseStationP__uartSendTask = 0U
};
// #line 98

enum BaseStationP____nesc_unnamed4296 {
// #line 99
  BaseStationP__radioSendTask = 1U
};
// #line 99

// #line 83
enum BaseStationP____nesc_unnamed4297 {
  BaseStationP__UART_QUEUE_LEN = 12, 
  BaseStationP__RADIO_QUEUE_LEN = 12
};

message_t BaseStationP__uartQueueBufs[BaseStationP__UART_QUEUE_LEN];
message_t * BaseStationP__uartQueue[BaseStationP__UART_QUEUE_LEN];
uint8_t BaseStationP__uartIn;
// #line 90
uint8_t BaseStationP__uartOut;
bool BaseStationP__uartBusy;
// #line 91
bool BaseStationP__uartFull;

message_t BaseStationP__radioQueueBufs[BaseStationP__RADIO_QUEUE_LEN];
message_t * BaseStationP__radioQueue[BaseStationP__RADIO_QUEUE_LEN];
uint8_t BaseStationP__radioIn;
// #line 95
uint8_t BaseStationP__radioOut;
bool BaseStationP__radioBusy;
// #line 96
bool BaseStationP__radioFull;




static /*inline*/ void BaseStationP__dropBlink(void ) reentrant ;



static /*inline*/ void BaseStationP__failBlink(void ) reentrant ;



static /*inline*/ void BaseStationP__Boot__booted(void ) reentrant ;
// #line 130
static /*inline*/ void BaseStationP__RadioControl__startDone(error_t error) reentrant ;





static /*inline*/ void BaseStationP__SerialControl__startDone(error_t error) reentrant ;





static /*inline*/ void BaseStationP__SerialControl__stopDone(error_t error) reentrant ;
static /*inline*/ void BaseStationP__RadioControl__stopDone(error_t error) reentrant ;



static message_t * BaseStationP__receive(message_t * msg, void *payload, uint8_t len) reentrant ;

static /*inline*/ message_t *BaseStationP__RadioSnoop__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len) reentrant ;



static /*inline*/ message_t *BaseStationP__RadioReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len) reentrant ;



static message_t *BaseStationP__receive(message_t *msg, void *payload, uint8_t len) reentrant ;
// #line 188
uint8_t BaseStationP__tmpLen;

static /*inline*/ void BaseStationP__uartSendTask__runTask(void ) reentrant ;
// #line 222
static /*inline*/ void BaseStationP__UartSend__sendDone(am_id_t id, message_t *msg, error_t error) reentrant ;
// #line 237
static /*inline*/ message_t *BaseStationP__UartReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len) reentrant ;
// #line 270
static /*inline*/ void BaseStationP__radioSendTask__runTask(void ) reentrant ;
// #line 301
static /*inline*/ void BaseStationP__RadioSend__sendDone(am_id_t id, message_t *msg, error_t error) reentrant ;
// # 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void ) reentrant ;



static void LedsP__Led0__makeOutput(void ) reentrant ;
// #line 40
static void LedsP__Led0__set(void ) reentrant ;

static void LedsP__Led1__toggle(void ) reentrant ;



static void LedsP__Led1__makeOutput(void ) reentrant ;
// #line 40
static void LedsP__Led1__set(void ) reentrant ;

static void LedsP__Led2__toggle(void ) reentrant ;



static void LedsP__Led2__makeOutput(void ) reentrant ;
// #line 40
static void LedsP__Led2__set(void ) reentrant ;
// # 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static /*inline*/ error_t LedsP__Init__init(void ) reentrant ;
// #line 84
static /*inline*/ void LedsP__Leds__led0Toggle(void ) reentrant ;
// #line 99
static /*inline*/ void LedsP__Leds__led1Toggle(void ) reentrant ;
// #line 114
static /*inline*/ void LedsP__Leds__led2Toggle(void ) reentrant ;
// # 46 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
enum HplMG245XGeneralIOP____nesc_unnamed4298 {
  HplMG245XGeneralIOP__BIT0 = 0x01, 
  HplMG245XGeneralIOP__BIT1 = 0x02, 
  HplMG245XGeneralIOP__BIT2 = 0x04, 
  HplMG245XGeneralIOP__BIT3 = 0x08, 
  HplMG245XGeneralIOP__BIT4 = 0x10, 
  HplMG245XGeneralIOP__BIT5 = 0x20, 
  HplMG245XGeneralIOP__BIT6 = 0x40, 
  HplMG245XGeneralIOP__BIT7 = 0x80
};
// #line 86
static /*__inline*/ void HplMG245XGeneralIOP__Port15__set(void ) reentrant ;
// #line 86
static /*inline*/ void HplMG245XGeneralIOP__Port15__toggle(void ) reentrant ;
// #line 86
static /*__inline*/ void HplMG245XGeneralIOP__Port15__makeOutput(void ) reentrant ;
static /*__inline*/ void HplMG245XGeneralIOP__Port16__set(void ) reentrant ;
// #line 87
static /*inline*/ void HplMG245XGeneralIOP__Port16__toggle(void ) reentrant ;
// #line 87
static /*__inline*/ void HplMG245XGeneralIOP__Port16__makeOutput(void ) reentrant ;
static /*__inline*/ void HplMG245XGeneralIOP__Port17__set(void ) reentrant ;
// #line 88
static void HplMG245XGeneralIOP__Port17__toggle(void ) reentrant ;
// #line 88
static /*__inline*/ void HplMG245XGeneralIOP__Port17__makeOutput(void ) reentrant ;
// # 48 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__HplGeneralIO__toggle(void ) reentrant ;
// #line 75
static void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__HplGeneralIO__makeOutput(void ) reentrant ;
// #line 38
static void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__HplGeneralIO__set(void ) reentrant ;
// # 41 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__set(void ) reentrant ;

static /*inline*/ void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__toggle(void ) reentrant ;



static /*inline*/ void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__makeOutput(void ) reentrant ;
// # 48 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__HplGeneralIO__toggle(void ) reentrant ;
// #line 75
static void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__HplGeneralIO__makeOutput(void ) reentrant ;
// #line 38
static void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__HplGeneralIO__set(void ) reentrant ;
// # 41 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__set(void ) reentrant ;

static /*inline*/ void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__toggle(void ) reentrant ;



static /*inline*/ void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__makeOutput(void ) reentrant ;
// # 48 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__HplGeneralIO__toggle(void ) reentrant ;
// #line 75
static void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__HplGeneralIO__makeOutput(void ) reentrant ;
// #line 38
static void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__HplGeneralIO__set(void ) reentrant ;
// # 41 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__set(void ) reentrant ;

static /*inline*/ void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__toggle(void ) reentrant ;



static /*inline*/ void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__makeOutput(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t MG245XCommActiveMessageP__SubSend__send(
// #line 67
message_t * msg, 







uint8_t len) reentrant ;
// # 52 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static am_addr_t MG245XCommActiveMessageP__amAddress(void ) reentrant ;
// # 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void MG245XCommActiveMessageP__AMSend__sendDone(
// # 43 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
am_id_t arg_0x7d9832a0, 
// # 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



MG245XCommActiveMessageP__Snoop__receive(
// # 45 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
am_id_t arg_0x7d982308, 
// # 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// #line 78
static 
// #line 74
message_t * 



MG245XCommActiveMessageP__Receive__receive(
// # 44 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
am_id_t arg_0x7d983c60, 
// # 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 57 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
enum MG245XCommActiveMessageP____nesc_unnamed4299 {
  MG245XCommActiveMessageP__MG245XCOMM_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

static /*inline*/ mg245x_comm_header_t *MG245XCommActiveMessageP__getHeader(message_t *msg) reentrant ;



static /*inline*/ error_t MG245XCommActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len) reentrant ;
// #line 106
static /*inline*/ void MG245XCommActiveMessageP__SubSend__sendDone(message_t *msg, error_t result) reentrant ;





static /*inline*/ message_t *MG245XCommActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len) reentrant ;








static /*inline*/ am_addr_t MG245XCommActiveMessageP__AMPacket__address(void ) reentrant ;



static /*inline*/ am_addr_t MG245XCommActiveMessageP__AMPacket__destination(message_t *amsg) reentrant ;




static /*inline*/ am_addr_t MG245XCommActiveMessageP__AMPacket__source(message_t *amsg) reentrant ;









static /*inline*/ void MG245XCommActiveMessageP__AMPacket__setSource(message_t *amsg, am_addr_t addr) reentrant ;




static /*inline*/ bool MG245XCommActiveMessageP__AMPacket__isForMe(message_t *amsg) reentrant ;




static am_id_t MG245XCommActiveMessageP__AMPacket__type(message_t *amsg) reentrant ;
// #line 173
static /*inline*/ void MG245XCommActiveMessageP__Packet__clear(message_t *msg) reentrant ;

static /*inline*/ uint8_t MG245XCommActiveMessageP__Packet__payloadLength(message_t *msg) reentrant ;
// #line 198
static /*inline*/ am_group_t MG245XCommActiveMessageP__AMPacket__group(message_t *msg) reentrant ;
// # 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MG245XCommCsmaP__SplitControl__startDone(error_t error) reentrant ;
// #line 138
static void MG245XCommCsmaP__SplitControl__stopDone(error_t error) reentrant ;
// # 55 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommConfig.nc"
static void MG245XCommCsmaP__MG245XCommConfig__syncDone(error_t error) reentrant ;
// # 50 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommTransmit.nc"
static error_t MG245XCommCsmaP__MG245XCommTransmit__sendCCA(message_t *p_msg) reentrant ;
// # 54 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static am_addr_t MG245XCommCsmaP__amAddress(void ) reentrant ;
// # 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void MG245XCommCsmaP__Send__sendDone(
// #line 96
message_t * msg, 



error_t error) reentrant ;
// # 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t MG245XCommCsmaP__Random__rand16(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MG245XCommCsmaP__startDone__postTask(void ) reentrant ;
// # 95 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t MG245XCommCsmaP__SubControl__start(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MG245XCommCsmaP__sendDone__postTask(void ) reentrant ;
// # 68 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t MG245XCommCsmaP__AMPacket__address(void ) reentrant ;
// # 78 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
enum MG245XCommCsmaP____nesc_unnamed4300 {
// #line 78
  MG245XCommCsmaP__startDone = 2U
};
// #line 78

enum MG245XCommCsmaP____nesc_unnamed4301 {
// #line 79
  MG245XCommCsmaP__stopDone = 3U
};
// #line 79

enum MG245XCommCsmaP____nesc_unnamed4302 {
// #line 80
  MG245XCommCsmaP__syncDone = 4U
};
// #line 80

enum MG245XCommCsmaP____nesc_unnamed4303 {
// #line 81
  MG245XCommCsmaP__sendDone = 5U
};
// #line 81

// #line 58
enum MG245XCommCsmaP____nesc_unnamed4304 {
  MG245XCommCsmaP__S_PREINIT, 
  MG245XCommCsmaP__S_STOPPED, 
  MG245XCommCsmaP__S_STARTING, 
  MG245XCommCsmaP__S_STARTED, 
  MG245XCommCsmaP__S_STOPPING, 
  MG245XCommCsmaP__S_TRANSMIT
};

message_t *MG245XCommCsmaP__m_msg;
error_t MG245XCommCsmaP__sendErr = SUCCESS;

uint8_t MG245XCommCsmaP__m_state = MG245XCommCsmaP__S_PREINIT;
uint8_t MG245XCommCsmaP__m_dsn;
uint8_t MG245XCommCsmaP__m_channel = 12;
uint16_t MG245XCommCsmaP__m_pan = TOS_AM_GROUP;
uint16_t MG245XCommCsmaP__m_short;

uint8_t MG245XCommCsmaP__m_tx_power = 0;






static /*inline*/ void MG245XCommCsmaP__SetDelay(uint16_t delay1, uint16_t delay2) reentrant ;
// #line 99
static /*inline*/ mg245x_comm_header_t *MG245XCommCsmaP__getHeader(message_t *msg) reentrant ;



static /*inline*/ mg245x_comm_metadata_t *MG245XCommCsmaP__getMetadata(message_t *msg) reentrant ;



static /*inline*/ error_t MG245XCommCsmaP__Init__init(void ) reentrant ;








static /*inline*/ error_t MG245XCommCsmaP__SplitControl__start(void ) reentrant ;










static /*inline*/ void MG245XCommCsmaP__startDone__runTask(void ) reentrant ;
// #line 391
static /*inline*/ void MG245XCommCsmaP__stopDone__runTask(void ) reentrant ;









static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setChannel(uint8_t channel) reentrant ;
// #line 539
static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setShortAddr(uint16_t address) reentrant ;










static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setPanAddr(uint16_t address) reentrant ;







static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setTrsw(bool enable) reentrant ;
// #line 570
static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setTrswB(bool enable) reentrant ;
// #line 583
static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setTxPower(uint8_t power) reentrant ;
// #line 662
static /*inline*/ void MG245XCommCsmaP__syncDone__runTask(void ) reentrant ;









static /*inline*/ error_t MG245XCommCsmaP__Send__send(message_t *p_msg, uint8_t len) reentrant ;
// #line 712
static uint16_t MG245XCommCsmaP__CsmaBackoff__initial(message_t *m) reentrant ;



static /*inline*/ uint16_t MG245XCommCsmaP__CsmaBackoff__congestion(message_t *m) reentrant ;



static /*inline*/ void MG245XCommCsmaP__MG245XCommTransmit__sendDone(message_t *p_msg, error_t err) reentrant ;




static /*inline*/ void MG245XCommCsmaP__sendDone__runTask(void ) reentrant ;
// # 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void MG245XCommTransmitP__MultipurposeTimer__startOneShot(uint32_t dt) reentrant ;




static void MG245XCommTransmitP__MultipurposeTimer__stop(void ) reentrant ;
// # 87 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommTransmit.nc"
static void MG245XCommTransmitP__Send__sendDone(message_t *p_msg, error_t error) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MG245XCommTransmitP__startWaitAckTimer__postTask(void ) reentrant ;
// #line 67
static error_t MG245XCommTransmitP__stopSendMsgTimer__postTask(void ) reentrant ;
// #line 67
static error_t MG245XCommTransmitP__startSendMsgTimer__postTask(void ) reentrant ;
// #line 67
static error_t MG245XCommTransmitP__stopWaitAckTimer__postTask(void ) reentrant ;
// # 56 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
static uint16_t MG245XCommTransmitP__CsmaBackoff__congestion(
// #line 53
message_t * m) reentrant ;
// #line 48
static uint16_t MG245XCommTransmitP__CsmaBackoff__initial(
// #line 45
message_t * m) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MG245XCommTransmitP__startWaitCcaTimer__postTask(void ) reentrant ;
// # 66 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
enum MG245XCommTransmitP____nesc_unnamed4305 {
// #line 66
  MG245XCommTransmitP__startSendMsgTimer = 6U
};
// #line 66

enum MG245XCommTransmitP____nesc_unnamed4306 {
// #line 67
  MG245XCommTransmitP__startWaitCcaTimer = 7U
};
// #line 67

enum MG245XCommTransmitP____nesc_unnamed4307 {
// #line 68
  MG245XCommTransmitP__startWaitAckTimer = 8U
};
// #line 68

enum MG245XCommTransmitP____nesc_unnamed4308 {
// #line 69
  MG245XCommTransmitP__stopSendMsgTimer = 9U
};
// #line 69

enum MG245XCommTransmitP____nesc_unnamed4309 {
// #line 70
  MG245XCommTransmitP__stopWaitAckTimer = 10U
};
// #line 70

// #line 60
// #line 54
typedef enum MG245XCommTransmitP____nesc_unnamed4310 {
  MG245XCommTransmitP__S_STOPPED, 
  MG245XCommTransmitP__S_STARTED, 
  MG245XCommTransmitP__S_CCA_WAIT, 
  MG245XCommTransmitP__S_BEGIN_MSG_SEND, 
  MG245XCommTransmitP__S_ACK_WAIT
} MG245XCommTransmitP__mg245x_comm_transmit_state_t;

message_t *MG245XCommTransmitP__m_msg;
MG245XCommTransmitP__mg245x_comm_transmit_state_t MG245XCommTransmitP__m_state;
uint16_t MG245XCommTransmitP__timeValue;








static error_t MG245XCommTransmitP__startTransmission(void ) reentrant ;
// #line 85
static void MG245XCommTransmitP__cancelTransmission(void ) reentrant ;







static /*inline*/ mg245x_comm_header_t *MG245XCommTransmitP__getHeader(message_t *msg) reentrant ;



static /*inline*/ mg245x_comm_metadata_t *MG245XCommTransmitP__getMetadata(message_t *msg) reentrant ;



static /*inline*/ void MG245XCommTransmitP__startSendMsgTimer__runTask(void ) reentrant ;




static /*inline*/ void MG245XCommTransmitP__startWaitCcaTimer__runTask(void ) reentrant ;




static /*inline*/ void MG245XCommTransmitP__startWaitAckTimer__runTask(void ) reentrant ;




static /*inline*/ void MG245XCommTransmitP__stopSendMsgTimer__runTask(void ) reentrant ;



static /*inline*/ void MG245XCommTransmitP__stopWaitAckTimer__runTask(void ) reentrant ;



static /*inline*/ error_t MG245XCommTransmitP__resend(void ) reentrant ;
// #line 153
static /*inline*/ void MG245XCommTransmitP__congestionBackoff(void ) reentrant ;
// #line 168
static /*inline*/ void MG245XCommTransmitP__signalDone(error_t err) reentrant ;






static /*inline*/ error_t MG245XCommTransmitP__SoftwareInit__init(void ) reentrant ;







static /*inline*/ error_t MG245XCommTransmitP__SubControl__start(void ) reentrant ;
// #line 196
static /*inline*/ error_t MG245XCommTransmitP__send(message_t *p_msg, bool cca) reentrant ;
// #line 243
static /*inline*/ error_t MG245XCommTransmitP__Send__sendCCA(message_t *p_msg) reentrant ;
// #line 271
static /*inline*/ void MG245XCommTransmitP__MG245XCommReceive__sendMsgDone(void ) reentrant ;
// #line 286
static /*inline*/ void MG245XCommTransmitP__attemptSend(void ) reentrant ;
// #line 308
static /*inline*/ void MG245XCommTransmitP__MultipurposeTimer__fired(void ) reentrant ;
// #line 348
static /*inline*/ void MG245XCommTransmitP__MG245XCommReceive__receiveAckDone(message_t *msg) reentrant ;
// #line 365
static /*inline*/ void MG245XCommTransmitP__MG245XCommReceive__sendAck(uint8_t framePend, message_t *msg) reentrant ;
// # 67 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommReceive.nc"
static void MG245XCommReceiveP__MG245XCommReceive__receiveAckDone(message_t *message) reentrant ;

static void MG245XCommReceiveP__MG245XCommReceive__sendMsgDone(void ) reentrant ;
// #line 68
static void MG245XCommReceiveP__MG245XCommReceive__sendAck(uint8_t framePend, message_t *message) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MG245XCommReceiveP__receiveMsgDone__postTask(void ) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



MG245XCommReceiveP__Receive__receive(
// #line 71
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 57 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommReceiveP.nc"
enum MG245XCommReceiveP____nesc_unnamed4311 {
// #line 57
  MG245XCommReceiveP__receiveMsgDone = 11U
};
// #line 57

// #line 53
bool MG245XCommReceiveP__packetLock = FALSE;
message_t MG245XCommReceiveP__m_rx_buf;
message_t *MG245XCommReceiveP__m_p_rx_buf;



static /*inline*/ mg245x_comm_header_t *MG245XCommReceiveP__getHeader(message_t *msg) reentrant ;



static /*inline*/ mg245x_comm_metadata_t *MG245XCommReceiveP__getMetadata(message_t *msg) reentrant ;



static /*inline*/ error_t MG245XCommReceiveP__Init__init(void ) reentrant ;




static /*inline*/ error_t MG245XCommReceiveP__AsyncStdControl__start(void ) reentrant ;









enum MG245XCommReceiveP____nesc_unnamed4312 {
  MG245XCommReceiveP__MG245X_COMM_RECEIVE_MAX_LQI = 110, 
  MG245XCommReceiveP__MG245X_COMM_RECEIVE_MIN_LQI = 50
};

static /*inline*/ uint8_t MG245XCommReceiveP__getLqi(int8_t dBm) reentrant ;
// #line 105
static /*inline*/ void MG245XCommReceiveP__receiveMsgDone__runTask(void ) reentrant ;
// #line 144
static /*inline*/ void MG245XCommReceiveP__MG245XCommConfig__syncDone(error_t error) reentrant ;

// # 52 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static /*inline*/ error_t RandomMlcgC__Init__init(void ) reentrant ;
// #line 69
static uint32_t RandomMlcgC__Random__rand32(void ) reentrant ;
// #line 89
static /*inline*/ uint16_t RandomMlcgC__Random__rand16(void ) reentrant ;
// # 51 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XCompare.nc"
static void HplMG245XTimerAsyncC__Compare__fired(void ) reentrant ;
// # 67 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static void HplMG245XTimerAsyncC__Timer__overflow(void ) reentrant ;
// # 54 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static /*inline*/ error_t HplMG245XTimerAsyncC__Init__init(void ) reentrant ;







static uint16_t HplMG245XTimerAsyncC__Timer__get(void ) reentrant ;
// #line 76
static /*inline*/ void HplMG245XTimerAsyncC__Timer__set(uint16_t t) reentrant ;
// #line 98
static /*inline*/ void HplMG245XTimerAsyncC__Timer__setScale(void ) reentrant ;
// #line 181
static /*inline*/ void HplMG245XTimerAsyncC__Timer__start(void ) reentrant ;







static /*inline*/ bool HplMG245XTimerAsyncC__overflowed(void ) reentrant ;



static /*inline*/ bool HplMG245XTimerAsyncC__Timer__test(void ) reentrant ;
// #line 216
static /*inline*/ void HplMG245XTimerAsyncC__Compare__reset(void ) reentrant ;



static /*inline*/ void HplMG245XTimerAsyncC__Compare__start(void ) reentrant ;



static /*inline*/ void HplMG245XTimerAsyncC__Compare__stop(void ) reentrant ;
// #line 256
static /*inline*/ void HplMG245XTimerAsyncC__Compare__set(uint16_t t) reentrant ;
// #line 279
// void __vector_3(void ) __attribute((signal))   ;










// void __vector_1(void ) __attribute((signal))   ;
// # 102 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static void /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__setScale(void ) reentrant ;
// #line 64
static void /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__set(/*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__timer_size t) reentrant ;










static void /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__start(void ) reentrant ;
// # 47 "/opt/mg-original/tos/chips/mg245x/timer/MG245XTimerInitC.nc"
static /*inline*/ error_t /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Init__init(void ) reentrant ;
// #line 59
static /*inline*/ void /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__overflow(void ) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__fired(void ) reentrant ;
// # 55 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XCompare.nc"
static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__reset(void ) reentrant ;
// #line 47
static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__set(/*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__size_type t) reentrant ;










static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__start(void ) reentrant ;


static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__stop(void ) reentrant ;
// # 58 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__timer_size /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__get(void ) reentrant ;
// # 66 "/opt/mg-original/tos/chips/mg245x/timer/MG245XAlarmC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__stop(void ) reentrant ;








static /*inline*/ void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__startAt(/*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size t0, /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size dt) reentrant ;
// #line 121
static /*inline*/ void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__fired(void ) reentrant ;






static /*inline*/ void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__overflow(void ) reentrant ;
// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__overflow(void ) reentrant ;
// # 84 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static bool /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__test(void ) reentrant ;
// #line 58
static /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__timer_size /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__get(void ) reentrant ;
// # 42 "/opt/mg-original/tos/chips/mg245x/timer/MG245XCounterC.nc"
static /*inline*/ /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__timer_size /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__get(void ) reentrant ;




static /*inline*/ bool /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__isOverflowPending(void ) reentrant ;









static /*inline*/ void /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__overflow(void ) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__fired(void ) reentrant ;
// # 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__get(void ) reentrant ;






static bool /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__isOverflowPending(void ) reentrant ;










static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__overflow(void ) reentrant ;
// # 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__startAt(/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__size_type t0, /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__size_type dt) reentrant ;
// #line 73
static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__stop(void ) reentrant ;
// # 74 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/TransformAlarmCounterC.nc"
/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__upper_count_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_upper = 0;
/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_t0;
/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt;
uint8_t /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_skip_overflows;

enum /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0____nesc_unnamed4313 {

  TransformAlarmCounterC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_size_type ) - 1 - 1, 
  TransformAlarmCounterC__0__MAX_DELAY = (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type )1 << /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__MAX_DELAY_LOG2
};

enum /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0____nesc_unnamed4314 {

  TransformAlarmCounterC__0__LOW_SHIFT_RIGHT = 1, 
  TransformAlarmCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_size_type ) - /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__LOW_SHIFT_RIGHT, 
  TransformAlarmCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type ) - 8 * sizeof(/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_size_type ) + 1
};






uint32_t /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__OVERFLOW_MASK = /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__NUM_UPPER_BITS ? ((/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__upper_count_type )2 << (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0;

static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__set_alarm(void ) reentrant ;

static /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__get(void ) reentrant ;
// #line 154
static /*inline*/ void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__overflow(void ) reentrant ;
// #line 167
static /*inline*/ /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__getNow(void ) reentrant ;




static /*inline*/ /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__getAlarm(void ) reentrant ;









static /*inline*/ void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__stop(void ) reentrant ;




static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__set_alarm(void ) reentrant ;
// #line 230
static /*inline*/ void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__startAt(/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type t0, /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type dt) reentrant ;
// #line 245
static /*inline*/ void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__fired(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ) reentrant ;
// # 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ) reentrant ;
// #line 103
static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt) reentrant ;
// #line 116
static /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ) reentrant ;
// #line 73
static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ) reentrant ;
// # 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ) reentrant ;
// # 67 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/AlarmToTimerC.nc"
enum /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4315 {
// #line 67
  AlarmToTimerC__0__fired = 12U
};
// #line 67

// #line 48
uint32_t /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot) reentrant ;
// #line 64
static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void ) reentrant ;


static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void ) reentrant ;






static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void ) reentrant ;
// #line 86
static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt) reentrant ;


static uint32_t /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ) reentrant ;
// # 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ) reentrant ;
// #line 129
static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt) reentrant ;
// #line 78
static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ) reentrant ;




static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
// # 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7d605c78) reentrant ;
// #line 71
enum /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4316 {
// #line 71
  VirtualizeTimerC__0__updateFromTimer = 13U
};
// #line 71

// #line 53
enum /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4317 {

  VirtualizeTimerC__0__NUM_TIMERS = 1, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








// #line 59
typedef struct /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4318 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now) reentrant ;
// #line 100
static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void ) reentrant ;
// #line 139
static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void ) reentrant ;




static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot) reentrant ;
// #line 159
static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt) reentrant ;




static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num) reentrant ;
// #line 204
static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num) reentrant ;
// # 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static /*inline*/ void /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void ) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;
// #line 106
static am_addr_t ActiveMessageAddressC__amAddress(void ) reentrant ;
// # 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
// #line 67
message_t * msg, 







uint8_t len) reentrant ;
// # 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
// # 52 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d598d98, 
// # 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
// # 53 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d595768, 
// # 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 65 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg) reentrant ;







static /*inline*/ error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len) reentrant ;
// #line 106
static /*inline*/ void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result) reentrant ;
// #line 118
static /*inline*/ message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len) reentrant ;



static /*inline*/ void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(message_t *msg) reentrant ;






static /*inline*/ uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg) reentrant ;








static /*inline*/ uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void ) reentrant ;
// #line 155
static /*inline*/ am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg) reentrant ;




static /*inline*/ am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(message_t *amsg) reentrant ;









static /*inline*/ void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(message_t *amsg, am_addr_t addr) reentrant ;








static /*inline*/ am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg) reentrant ;
// #line 196
static /*inline*/ void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(message_t *msg, am_group_t group) reentrant ;
// # 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error) reentrant ;
// #line 138
static void SerialP__SplitControl__stopDone(error_t error) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void ) reentrant ;
// # 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void ) reentrant ;









static error_t SerialP__SerialControl__stop(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void ) reentrant ;
// # 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void ) reentrant ;
// # 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void ) reentrant ;
// #line 79
static void SerialP__SerialFrameComm__resetReceive(void ) reentrant ;
// #line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t _data) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void ) reentrant ;
// # 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void ) reentrant ;









static void SerialP__SendBytePacket__sendCompleted(error_t error) reentrant ;
// # 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void ) reentrant ;






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t _data) reentrant ;










static void SerialP__ReceiveBytePacket__endPacket(error_t result) reentrant ;
// # 191 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4319 {
// #line 191
  SerialP__RunTx = 14U
};
// #line 191

// #line 322
enum SerialP____nesc_unnamed4320 {
// #line 322
  SerialP__startDoneTask = 15U
};
// #line 322










enum SerialP____nesc_unnamed4321 {
// #line 332
  SerialP__stopDoneTask = 16U
};
// #line 332









enum SerialP____nesc_unnamed4322 {
// #line 341
  SerialP__defaultSerialFlushTask = 17U
};
// #line 341

// #line 81
enum SerialP____nesc_unnamed4323 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4324 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4325 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





// #line 111
typedef enum SerialP____nesc_unnamed4326 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4327 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






// #line 124
typedef struct SerialP____nesc_unnamed4328 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




// #line 130
typedef struct SerialP____nesc_unnamed4329 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





// #line 135
typedef struct SerialP____nesc_unnamed4330 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static /*__inline*/ void SerialP__txInit(void ) reentrant ;
static /*__inline*/ void SerialP__rxInit(void ) reentrant ;
static /*__inline*/ void SerialP__ackInit(void ) reentrant ;

static /*__inline*/ bool SerialP__ack_queue_is_full(void ) reentrant ;
static /*__inline*/ bool SerialP__ack_queue_is_empty(void ) reentrant ;
static /*__inline*/ void SerialP__ack_queue_push(uint8_t token) reentrant ;
static /*__inline*/ uint8_t SerialP__ack_queue_top(void ) reentrant ;
static /*inline*/ uint8_t SerialP__ack_queue_pop(void ) reentrant ;




static /*__inline*/ void SerialP__rx_buffer_push(uint8_t _data) reentrant ;
static /*__inline*/ uint8_t SerialP__rx_buffer_top(void ) reentrant ;
static /*__inline*/ uint8_t SerialP__rx_buffer_pop(void ) reentrant ;
static /*__inline*/ uint16_t SerialP__rx_current_crc(void ) reentrant ;

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t _data) reentrant ;
static void SerialP__MaybeScheduleTx(void ) reentrant ;




static /*__inline*/ void SerialP__txInit(void ) reentrant ;
// #line 207
static /*__inline*/ void SerialP__rxInit(void ) reentrant ;








static /*__inline*/ void SerialP__ackInit(void ) reentrant ;



static /*inline*/ error_t SerialP__Init__init(void ) reentrant ;
// #line 234
static /*__inline*/ bool SerialP__ack_queue_is_full(void ) reentrant ;









static /*__inline*/ bool SerialP__ack_queue_is_empty(void ) reentrant ;





static /*__inline*/ void SerialP__ack_queue_push(uint8_t token) reentrant ;









static /*__inline*/ uint8_t SerialP__ack_queue_top(void ) reentrant ;









static /*inline*/ uint8_t SerialP__ack_queue_pop(void ) reentrant ;
// #line 297
static /*__inline*/ void SerialP__rx_buffer_push(uint8_t _data) reentrant ;



static /*__inline*/ uint8_t SerialP__rx_buffer_top(void ) reentrant ;



static /*__inline*/ uint8_t SerialP__rx_buffer_pop(void ) reentrant ;





static /*__inline*/ uint16_t SerialP__rx_current_crc(void ) reentrant ;










static /*inline*/ void SerialP__startDoneTask__runTask(void ) reentrant ;









static /*inline*/ void SerialP__stopDoneTask__runTask(void ) reentrant ;



static /*inline*/ void SerialP__SerialFlush__flushDone(void ) reentrant ;




static /*inline*/ void SerialP__defaultSerialFlushTask__runTask(void ) reentrant ;


static /*inline*/ void SerialP__SerialFlush__default__flush(void ) reentrant ;



static /*inline*/ error_t SerialP__SplitControl__start(void ) reentrant ;








static void SerialP__testOff(void ) reentrant ;
// #line 394
static /*inline*/ void SerialP__SerialFrameComm__delimiterReceived(void ) reentrant ;


static /*inline*/ void SerialP__SerialFrameComm__dataReceived(uint8_t _data) reentrant ;



static /*inline*/ bool SerialP__valid_rx_proto(uint8_t proto) reentrant ;










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t _data) reentrant ;
// #line 518
static void SerialP__MaybeScheduleTx(void ) reentrant ;










static /*inline*/ error_t SerialP__SendBytePacket__completeSend(void ) reentrant ;








static /*inline*/ error_t SerialP__SendBytePacket__startSend(uint8_t b) reentrant ;
// #line 559
static /*inline*/ void SerialP__RunTx__runTask(void ) reentrant ;
// #line 668
static /*inline*/ void SerialP__SerialFrameComm__putDone(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ) reentrant ;
// # 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
// # 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4d0888, 
// # 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ) reentrant ;
// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
// #line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
// # 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4d0248, 
// # 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len) reentrant ;
// # 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
// # 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4ce3a8, 
// # 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t _dataLinkLen) reentrant ;
// #line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
// # 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4ce3a8) reentrant ;
// # 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
// # 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d4ce3a8, 
// # 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen) reentrant ;
// # 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ) reentrant ;
// #line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte) reentrant ;
// # 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4331 {
// #line 158
  SerialDispatcherP__0__signalSendDone = 18U
};
// #line 158

// #line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4332 {
// #line 275
  SerialDispatcherP__0__receiveTask = 19U
};
// #line 275

// #line 66
// #line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4333 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4334 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






// #line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4335 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static /*inline*/ error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len) reentrant ;
// #line 158
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void ) reentrant ;
// #line 178
static /*inline*/ uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void ) reentrant ;
// #line 194
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error) reentrant ;




static /*inline*/ bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void ) reentrant ;



static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void ) reentrant ;








static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which) reentrant ;








static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void ) reentrant ;




static /*inline*/ error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void ) reentrant ;
// #line 244
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b) reentrant ;
// #line 275
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void ) reentrant ;
// #line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result) reentrant ;
// #line 358
static /*inline*/ uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id) reentrant ;


static /*inline*/ uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen) reentrant ;


static /*inline*/ uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t _dataLinkLen) reentrant ;




static /*inline*/ message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len) reentrant ;


static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error) reentrant ;
// # 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
// #line 44
uint8_t * buf, 



uint16_t len) reentrant ;
// # 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t _data) reentrant ;





static void HdlcTranslateC__SerialFrameComm__putDone(void ) reentrant ;
// #line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ) reentrant ;
// # 59 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
// #line 56
typedef struct HdlcTranslateC____nesc_unnamed4336 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static /*inline*/ void HdlcTranslateC__SerialFrameComm__resetReceive(void ) reentrant ;





static /*inline*/ void HdlcTranslateC__UartStream__receivedByte(uint8_t _data) reentrant ;
// #line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void ) reentrant ;







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t _data) reentrant ;
// #line 118
static /*inline*/ void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error) reentrant ;
// #line 132
static /*inline*/ void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error) reentrant ;
// # 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*MG245XUartC.UartP*/MG245XUartP__0__HplUartTxControl__start(void ) reentrant ;









static error_t /*MG245XUartC.UartP*/MG245XUartP__0__HplUartTxControl__stop(void ) reentrant ;
// # 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__receivedByte(uint8_t byte) reentrant ;
// #line 99
static void /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__receiveDone(
// #line 95
uint8_t * buf, 



uint16_t len, error_t error) reentrant ;
// #line 57
static void /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__sendDone(
// #line 53
uint8_t * buf, 



uint16_t len, error_t error) reentrant ;
// # 48 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
static void /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__tx(uint8_t _data) reentrant ;
// # 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*MG245XUartC.UartP*/MG245XUartP__0__HplUartRxControl__start(void ) reentrant ;









static error_t /*MG245XUartC.UartP*/MG245XUartP__0__HplUartRxControl__stop(void ) reentrant ;
// # 58 "/opt/mg-original/tos/chips/mg245x/uart/MG245XUartP.nc"
uint8_t */*MG245XUartC.UartP*/MG245XUartP__0__m_tx_buf;
// #line 58
uint8_t */*MG245XUartC.UartP*/MG245XUartP__0__m_rx_buf;
uint16_t /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_len;
// #line 59
uint16_t /*MG245XUartC.UartP*/MG245XUartP__0__m_rx_len;
uint16_t /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_pos;
// #line 60
uint16_t /*MG245XUartC.UartP*/MG245XUartP__0__m_rx_pos;
uint16_t /*MG245XUartC.UartP*/MG245XUartP__0__m_byte_time;

static /*inline*/ error_t /*MG245XUartC.UartP*/MG245XUartP__0__Init__init(void ) reentrant ;









static /*inline*/ error_t /*MG245XUartC.UartP*/MG245XUartP__0__StdControl__start(void ) reentrant ;





static /*inline*/ error_t /*MG245XUartC.UartP*/MG245XUartP__0__StdControl__stop(void ) reentrant ;
// #line 111
static /*inline*/ void /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__rxDone(uint8_t _data) reentrant ;
// #line 127
static error_t /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__send(uint8_t *buf, uint16_t len) reentrant ;
// #line 143
static /*inline*/ void /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__txDone(void ) reentrant ;
// #line 176
static /*inline*/ void /*MG245XUartC.UartP*/MG245XUartP__0__Counter__overflow(void ) reentrant ;
// # 51 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
static void HplMG245XUartP__HplUart0__rxDone(uint8_t _data) reentrant ;
// #line 49
static void HplMG245XUartP__HplUart0__txDone(void ) reentrant ;
// # 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplMG245XUartP__McuPowerState__update(void ) reentrant ;
// # 51 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
static void HplMG245XUartP__HplUart1__rxDone(uint8_t _data) reentrant ;
// #line 49
static void HplMG245XUartP__HplUart1__txDone(void ) reentrant ;
// # 101 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
static /*inline*/ void HplMG245XUartP__setBaudrate(uint8_t channel, uint32_t baudrate) reentrant ;
// #line 288
// #line 326
static /*inline*/ error_t HplMG245XUartP__Uart1Init__init(void ) reentrant ;
// #line 369
static /*inline*/ error_t HplMG245XUartP__Uart1TxControl__start(void ) reentrant ;
// #line 387
static /*inline*/ error_t HplMG245XUartP__Uart1TxControl__stop(void ) reentrant ;
// #line 404
static /*inline*/ error_t HplMG245XUartP__Uart1RxControl__start(void ) reentrant ;
// #line 421
static /*inline*/ error_t HplMG245XUartP__Uart1RxControl__stop(void ) reentrant ;
// #line 492
static /*inline*/ void HplMG245XUartP__HplUart1__tx(uint8_t _data) reentrant ;
// #line 507
// void __vector_7(void ) __attribute((signal))   ;
// #line 541
static /*inline*/ void HplMG245XUartP__setBaudrate(uint8_t channel, uint32_t baudrate) reentrant ;
// #line 615
static /*inline*/ void HplMG245XUartP__HplUart0__default__txDone(void ) reentrant ;
static /*inline*/ void HplMG245XUartP__HplUart0__default__rxDone(uint8_t _data) reentrant ;
// # 102 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
static void /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__setScale(void ) reentrant ;
// #line 64
static void /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__set(/*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__timer_size t) reentrant ;










static void /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__start(void ) reentrant ;
// # 47 "/opt/mg-original/tos/chips/mg245x/timer/MG245XTimerInitC.nc"
static /*inline*/ error_t /*InitThreeP.InitThree*/MG245XTimerInitC__1__Init__init(void ) reentrant ;
// #line 59
static /*inline*/ void /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__overflow(void ) reentrant ;
// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/MG245XCounterC__1__Counter__overflow(void ) reentrant ;
// # 57 "/opt/mg-original/tos/chips/mg245x/timer/MG245XCounterC.nc"
static /*inline*/ void /*CounterThree16C.NCounter*/MG245XCounterC__1__Timer__overflow(void ) reentrant ;
// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void ) reentrant ;
// # 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__0____nesc_unnamed4337 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};
// #line 133
static /*inline*/ void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void ) reentrant ;
// # 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static /*inline*/ uint8_t SerialPacketInfoActiveMessageP__Info__offset(void ) reentrant ;


static /*inline*/ uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen) reentrant ;


static /*inline*/ uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t _dataLinkLen) reentrant ;
// # 88 "/opt/mg-original/tos/chips/mg245x/MG245XHardware.h"
static /*__inline*/ void __nesc_disable_interrupt() reentrant 
// #line 88
{

  EA = 0;
}

// #line 107
// #line 106
/*__inline*/  __nesc_atomic_t 
__nesc_atomic_start(void )
{

  __nesc_atomic_t result = EA;

// #line 111
  __nesc_disable_interrupt();
  return result;
}



// #line 116
/*__inline*/  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{

  EA = original_SREG;
}

// # 113 "/home/Suchang/work/mg/tos/platforms/mango2/system/SchedulerBasicP.nc"
static /*inline*/ void SchedulerBasicP__Scheduler__init(void ) reentrant 
{
  /* atomic removed: atomic calls only */
  {
    uint8_t i;

    for (i = 0; i < SchedulerBasicP__NUM_TASKS; i++) 
      SchedulerBasicP__m_next[i] = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

// # 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
/*inline*/ static void RealMainP__Scheduler__init(void ) reentrant {
// #line 57
  SchedulerBasicP__Scheduler__init();
// #line 57
}
// #line 57
// # 44 "/opt/mg-original/tos/platforms/mango2/PlatformP.nc"
static /*inline*/ void PlatformP__power_init(void ) reentrant 
// #line 44
{
  /* atomic removed: atomic calls only */
// #line 45
  {
  }
}

// # 69 "/opt/tinyos-2.x/tos/types/TinyError.h"
static /*inline*/  error_t ecombine(error_t r1, error_t r2) reentrant 




{
  return r1 == r2 ? r1 : FAIL;
}

// # 54 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static /*inline*/ error_t HplMG245XTimerAsyncC__Init__init(void ) reentrant 
// #line 54
{
  /* atomic removed: atomic calls only */
  TMOD |= 0x11;
  return SUCCESS;
}

// #line 98
static /*inline*/ void HplMG245XTimerAsyncC__Timer__setScale(void ) reentrant 
// #line 98
{
  /* atomic removed: atomic calls only */
// #line 99
  {
    TR0 = 1;
    TR1 = 1;
  }
}

// # 102 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
/*inline*/ static void /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__setScale(void ) reentrant {
// #line 102
  HplMG245XTimerAsyncC__Timer__setScale();
// #line 102
}
// #line 102
// # 181 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static /*inline*/ void HplMG245XTimerAsyncC__Timer__start(void ) reentrant 
// #line 181
{
  /* atomic removed: atomic calls only */
// #line 182
  ET0 = 1;
}

// # 75 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
/*inline*/ static void /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__start(void ) reentrant {
// #line 75
  HplMG245XTimerAsyncC__Timer__start();
// #line 75
}
// #line 75
// # 76 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static /*inline*/ void HplMG245XTimerAsyncC__Timer__set(uint16_t t) reentrant 
// #line 76
{
  /* atomic removed: atomic calls only */
// #line 77
  {
    TH0 = t >> 8;
    TL0 = t & 0xff;
  }
}

// # 64 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
/*inline*/ static void /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__set(/*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__timer_size t) reentrant {
// #line 64
  HplMG245XTimerAsyncC__Timer__set(t);
// #line 64
}
// #line 64
// # 47 "/opt/mg-original/tos/chips/mg245x/timer/MG245XTimerInitC.nc"
static /*inline*/ error_t /*InitThreeP.InitThree*/MG245XTimerInitC__1__Init__init(void ) reentrant 
// #line 47
{
  /* atomic removed: atomic calls only */
// #line 48
  {
    /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__set(0);
    /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__start();



    /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__setScale();
  }
  return SUCCESS;
}

// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
/*inline*/ static error_t MotePlatformP__SubInit__init(void ) reentrant {
// #line 62
  unsigned char __nesc_result;
// #line 62

// #line 62
  __nesc_result = /*InitThreeP.InitThree*/MG245XTimerInitC__1__Init__init();
// #line 62
  __nesc_result = ecombine(__nesc_result, HplMG245XTimerAsyncC__Init__init());
// #line 62

// #line 62
  return __nesc_result;
// #line 62
}
// #line 62
// # 32 "/home/Suchang/work/mg/tos/platforms/mango2/MotePlatformP.nc"
static /*inline*/ error_t MotePlatformP__PlatformInit__init(void ) reentrant 
// #line 32
{

  WDT |= 0x10;
  WDT &= 0xf7;


  XBYTE[0x2200 + 0xC3] = 0xFF;


  IE |= 0x8A;
  EIE |= 0x11;
  IP |= 0x00;
  EIP |= 0x00;
  XBYTE[0x2200 + 0xF0] = 0x00;
  XBYTE[0x2200 + 0xF2] = 0x3F;
  XBYTE[0x2200 + 0xF3] = 0xF4;
  XBYTE[0x2200 + 0xF4] = 0x71;
  XBYTE[0x2200 + 0xF5] = 0x00;
  if (XBYTE[0x2200 + 0x9F] == 0x96) {
      XBYTE[0x2200 + 0xF1] = 0xE8;
      XBYTE[0x2200 + 0xF6] = 0x00;
      XBYTE[0x2200 + 0xF7] = 0x80;
    }
  else 
// #line 54
    {
      XBYTE[0x2200 + 0xF1] = 0xEC;
      XBYTE[0x2200 + 0xF6] = 0x80;
      XBYTE[0x2200 + 0xF7] = 0x00;
    }
  XBYTE[0x2200 + 0xF8] = 0xC2;





  return MotePlatformP__SubInit__init();
}

// # 88 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
static /*__inline*/ void HplMG245XGeneralIOP__Port17__set(void ) reentrant 
// #line 88
{
  /* atomic removed: atomic calls only */
// #line 88
  {
// #line 88
    P1_7 = 1;
  }
}

// # 38 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
/*inline*/ static void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__HplGeneralIO__set(void ) reentrant {
// #line 38
  HplMG245XGeneralIOP__Port17__set();
// #line 38
}
// #line 38
// # 41 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__set(void ) reentrant 
// #line 41
{
// #line 41
  /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__HplGeneralIO__set();
}

// # 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
/*inline*/ static void LedsP__Led2__set(void ) reentrant {
// #line 40
  /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__set();
// #line 40
}
// #line 40
// # 87 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
static /*__inline*/ void HplMG245XGeneralIOP__Port16__set(void ) reentrant 
// #line 87
{
  /* atomic removed: atomic calls only */
// #line 87
  {
// #line 87
    P1_6 = 1;
  }
}

// # 38 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
/*inline*/ static void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__HplGeneralIO__set(void ) reentrant {
// #line 38
  HplMG245XGeneralIOP__Port16__set();
// #line 38
}
// #line 38
// # 41 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__set(void ) reentrant 
// #line 41
{
// #line 41
  /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__HplGeneralIO__set();
}

// # 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
/*inline*/ static void LedsP__Led1__set(void ) reentrant {
// #line 40
  /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__set();
// #line 40
}
// #line 40
// # 86 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
static /*__inline*/ void HplMG245XGeneralIOP__Port15__set(void ) reentrant 
// #line 86
{
  /* atomic removed: atomic calls only */
// #line 86
  {
// #line 86
    P1_5 = 1;
  }
}

// # 38 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
/*inline*/ static void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__HplGeneralIO__set(void ) reentrant {
// #line 38
  HplMG245XGeneralIOP__Port15__set();
// #line 38
}
// #line 38
// # 41 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__set(void ) reentrant 
// #line 41
{
// #line 41
  /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__HplGeneralIO__set();
}

// # 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
/*inline*/ static void LedsP__Led0__set(void ) reentrant {
// #line 40
  /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__set();
// #line 40
}
// #line 40
// # 88 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
static /*__inline*/ void HplMG245XGeneralIOP__Port17__makeOutput(void ) reentrant 
// #line 88
{
  /* atomic removed: atomic calls only */
// #line 88
  {
// #line 88
    P1OEN &= ~HplMG245XGeneralIOP__BIT7;
  }
}

// # 75 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
/*inline*/ static void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__HplGeneralIO__makeOutput(void ) reentrant {
// #line 75
  HplMG245XGeneralIOP__Port17__makeOutput();
// #line 75
}
// #line 75
// # 47 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__makeOutput(void ) reentrant 
// #line 47
{
// #line 47
  /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__HplGeneralIO__makeOutput();
}

// # 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
/*inline*/ static void LedsP__Led2__makeOutput(void ) reentrant {
// #line 46
  /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__makeOutput();
// #line 46
}
// #line 46
// # 87 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
static /*__inline*/ void HplMG245XGeneralIOP__Port16__makeOutput(void ) reentrant 
// #line 87
{
  /* atomic removed: atomic calls only */
// #line 87
  {
// #line 87
    P1OEN &= ~HplMG245XGeneralIOP__BIT6;
  }
}

// # 75 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
/*inline*/ static void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__HplGeneralIO__makeOutput(void ) reentrant {
// #line 75
  HplMG245XGeneralIOP__Port16__makeOutput();
// #line 75
}
// #line 75
// # 47 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__makeOutput(void ) reentrant 
// #line 47
{
// #line 47
  /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__HplGeneralIO__makeOutput();
}

// # 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
/*inline*/ static void LedsP__Led1__makeOutput(void ) reentrant {
// #line 46
  /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__makeOutput();
// #line 46
}
// #line 46
// # 86 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
static /*__inline*/ void HplMG245XGeneralIOP__Port15__makeOutput(void ) reentrant 
// #line 86
{
  /* atomic removed: atomic calls only */
// #line 86
  {
// #line 86
    P1OEN &= ~HplMG245XGeneralIOP__BIT5;
  }
}

// # 75 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
/*inline*/ static void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__HplGeneralIO__makeOutput(void ) reentrant {
// #line 75
  HplMG245XGeneralIOP__Port15__makeOutput();
// #line 75
}
// #line 75
// # 47 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__makeOutput(void ) reentrant 
// #line 47
{
// #line 47
  /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__HplGeneralIO__makeOutput();
}

// # 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
/*inline*/ static void LedsP__Led0__makeOutput(void ) reentrant {
// #line 46
  /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__makeOutput();
// #line 46
}
// #line 46
// # 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static /*inline*/ error_t LedsP__Init__init(void ) reentrant 
// #line 56
{
  /* atomic removed: atomic calls only */
// #line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
/*inline*/ static error_t PlatformP__MoteInit__init(void ) reentrant {
// #line 62
  unsigned char __nesc_result;
// #line 62

// #line 62
  __nesc_result = LedsP__Init__init();
// #line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
// #line 62

// #line 62
  return __nesc_result;
// #line 62
}
// #line 62
// # 44 "/opt/mg-original/tos/platforms/mango2/MeasureClockC.nc"
static /*inline*/ error_t MeasureClockC__Init__init(void ) reentrant 
// #line 44
{
  /* atomic removed: atomic calls only */



  {
// #line 97
    MeasureClockC__cycles = 12;
  }
// #line 114
  return SUCCESS;
}

// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
/*inline*/ static error_t PlatformP__MeasureClock__init(void ) reentrant {
// #line 62
  unsigned char __nesc_result;
// #line 62

// #line 62
  __nesc_result = MeasureClockC__Init__init();
// #line 62

// #line 62
  return __nesc_result;
// #line 62
}
// #line 62
// # 51 "/opt/mg-original/tos/platforms/mango2/PlatformP.nc"
static /*inline*/ error_t PlatformP__Init__init(void ) reentrant 
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
/*inline*/ static error_t RealMainP__PlatformInit__init(void ) reentrant {
// #line 62
  unsigned char __nesc_result;
// #line 62

// #line 62
  __nesc_result = PlatformP__Init__init();
// #line 62

// #line 62
  return __nesc_result;
// #line 62
}
// #line 62
// # 65 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
/*inline*/ static bool RealMainP__Scheduler__runNextTask(void ) reentrant {
// #line 65
  unsigned char __nesc_result;
// #line 65

// #line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
// #line 65

// #line 65
  return __nesc_result;
// #line 65
}
// #line 65
// # 281 "/usr/lib/ncc/nesc_nx.h"
static /*__inline*/  uint8_t __nesc_ntoh_uint8(const void * source) reentrant 
// #line 281
{
  const uint8_t *base = source;

// #line 283
  return base[0];
}

// # 65 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg) reentrant 
// #line 65
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->_data - sizeof(serial_header_t ));
}

// #line 179
static /*inline*/ am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg) reentrant 
// #line 179
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

// #line 181
  return __nesc_ntoh_uint8(header->type.nxdata);
}

// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t BaseStationP__uartSendTask__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BaseStationP__uartSendTask);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 48 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
/*inline*/ static void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__HplGeneralIO__toggle(void ) reentrant {
// #line 48
  HplMG245XGeneralIOP__Port17__toggle();
// #line 48
}
// #line 48
// # 43 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__toggle(void ) reentrant 
// #line 43
{
// #line 43
  /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__HplGeneralIO__toggle();
}

// # 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
/*inline*/ static void LedsP__Led2__toggle(void ) reentrant {
// #line 42
  /*PlatformLedsC.Led2Impl*/MG245XGpioC__2__GeneralIO__toggle();
// #line 42
}
// #line 42
// # 114 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static /*inline*/ void LedsP__Leds__led2Toggle(void ) reentrant 
// #line 114
{
  LedsP__Led2__toggle();
  ;
// #line 116
  ;
}

// # 100 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
/*inline*/ static void BaseStationP__Leds__led2Toggle(void ) reentrant {
// #line 100
  LedsP__Leds__led2Toggle();
// #line 100
}
// #line 100
// # 105 "BaseStationP.nc"
static /*inline*/ void BaseStationP__failBlink(void ) reentrant 
// #line 105
{
  BaseStationP__Leds__led2Toggle();
}

// #line 222
static /*inline*/ void BaseStationP__UartSend__sendDone(am_id_t id, message_t *msg, error_t error) reentrant 
// #line 222
{
  if (error != SUCCESS) {
    BaseStationP__failBlink();
    }
  else {
// #line 226
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
      if (msg == BaseStationP__uartQueue[BaseStationP__uartOut]) 
        {
          if (++BaseStationP__uartOut >= BaseStationP__UART_QUEUE_LEN) {
            BaseStationP__uartOut = 0;
            }
// #line 231
          if (BaseStationP__uartFull) {
            BaseStationP__uartFull = FALSE;
            }
        }
// #line 234
      __nesc_atomic_end(__nesc_atomic); }
    }
// #line 234
  BaseStationP__uartSendTask__postTask();
}

// # 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
/*inline*/ static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x7d598d98, message_t * msg, error_t error) reentrant {
// #line 110
  BaseStationP__UartSend__sendDone(arg_0x7d598d98, msg, error);
// #line 110
}
// #line 110
// # 106 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result) reentrant 
// #line 106
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

// # 376 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error) reentrant 
// #line 376
{
  return;
}

// # 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
/*inline*/ static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x7d4d0888, message_t * msg, error_t error) reentrant {
// #line 100
  switch (arg_0x7d4d0888) {
// #line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
// #line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
// #line 100
      break;
// #line 100
    default:
// #line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x7d4d0888, msg, error);
// #line 100
      break;
// #line 100
    }
// #line 100
}
// #line 100
// # 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void ) reentrant 
// #line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
// #line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
// #line 164
    error = ECANCEL;
    }
// #line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

// # 86 "/home/Suchang/work/mg/tos/platforms/mango2/system/SchedulerBasicP.nc"
static /*inline*/ bool SchedulerBasicP__isWaiting(uint8_t id) reentrant 
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static /*inline*/ bool SchedulerBasicP__pushTask(uint8_t id) reentrant 
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

// # 212 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which) reentrant 
// #line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

// # 101 "BaseStationP.nc"
static /*inline*/ void BaseStationP__dropBlink(void ) reentrant 
// #line 101
{
  BaseStationP__Leds__led2Toggle();
}

// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t BaseStationP__radioSendTask__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BaseStationP__radioSendTask);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 237 "BaseStationP.nc"
static /*inline*/ message_t *BaseStationP__UartReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len) reentrant 
// #line 239
{
  message_t *ret = msg;
  bool reflectToken = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (!BaseStationP__radioFull) 
      {
        reflectToken = TRUE;
        ret = BaseStationP__radioQueue[BaseStationP__radioIn];
        BaseStationP__radioQueue[BaseStationP__radioIn] = msg;
        if (++BaseStationP__radioIn >= BaseStationP__RADIO_QUEUE_LEN) {
          BaseStationP__radioIn = 0;
          }
// #line 251
        if (BaseStationP__radioIn == BaseStationP__radioOut) {
          BaseStationP__radioFull = TRUE;
          }
        if (!BaseStationP__radioBusy) 
          {
            BaseStationP__radioSendTask__postTask();
            BaseStationP__radioBusy = TRUE;
          }
      }
    else {
      BaseStationP__dropBlink();
      }
// #line 262
    __nesc_atomic_end(__nesc_atomic); }
  if (reflectToken) {
    }


  return ret;
}

// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
/*inline*/ static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x7d595768, message_t * msg, void * payload, uint8_t len) reentrant {
// #line 78
  nx_struct message_t *__nesc_result;
// #line 78

// #line 78
  __nesc_result = BaseStationP__UartReceive__receive(arg_0x7d595768, msg, payload, len);
// #line 78

// #line 78
  return __nesc_result;
// #line 78
}
// #line 78
// # 118 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len) reentrant 
// #line 118
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->_data, len);
}

// # 371 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len) reentrant 
// #line 373
{
  return msg;
}

// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
/*inline*/ static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x7d4d0248, message_t * msg, void * payload, uint8_t len) reentrant {
// #line 78
  nx_struct message_t *__nesc_result;
// #line 78

// #line 78
  switch (arg_0x7d4d0248) {
// #line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
// #line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
// #line 78
      break;
// #line 78
    default:
// #line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x7d4d0248, msg, payload, len);
// #line 78
      break;
// #line 78
    }
// #line 78

// #line 78
  return __nesc_result;
// #line 78
}
// #line 78
// # 57 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static /*inline*/ uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t _dataLinkLen) reentrant 
// #line 57
{
  return _dataLinkLen - sizeof(serial_header_t );
}

// # 365 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t _dataLinkLen) reentrant 
// #line 366
{
  return 0;
}

// # 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
/*inline*/ static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x7d4ce3a8, message_t *msg, uint8_t _dataLinkLen) reentrant {
// #line 31
  unsigned char __nesc_result;
// #line 31

// #line 31
  switch (arg_0x7d4ce3a8) {
// #line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
// #line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, _dataLinkLen);
// #line 31
      break;
// #line 31
    default:
// #line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x7d4ce3a8, msg, _dataLinkLen);
// #line 31
      break;
// #line 31
    }
// #line 31

// #line 31
  return __nesc_result;
// #line 31
}
// #line 31
// # 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static /*inline*/ uint8_t SerialPacketInfoActiveMessageP__Info__offset(void ) reentrant 
// #line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

// # 358 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id) reentrant 
// #line 358
{
  return 0;
}

// # 15 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
/*inline*/ static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x7d4ce3a8) reentrant {
// #line 15
  unsigned char __nesc_result;
// #line 15

// #line 15
  switch (arg_0x7d4ce3a8) {
// #line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
// #line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
// #line 15
      break;
// #line 15
    default:
// #line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x7d4ce3a8);
// #line 15
      break;
// #line 15
    }
// #line 15

// #line 15
  return __nesc_result;
// #line 15
}
// #line 15
// # 275 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void ) reentrant 
// #line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

// #line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
// #line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
// #line 293
    __nesc_atomic_end(__nesc_atomic); }
}

// # 142 "BaseStationP.nc"
static /*inline*/ void BaseStationP__SerialControl__stopDone(error_t error) reentrant 
// #line 142
{
}

// # 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
/*inline*/ static void SerialP__SplitControl__stopDone(error_t error) reentrant {
// #line 138
  BaseStationP__SerialControl__stopDone(error);
// #line 138
}
// #line 138
// # 421 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
static /*inline*/ error_t HplMG245XUartP__Uart1RxControl__stop(void ) reentrant 
// #line 421
{










  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 432
    {
      XBYTE[0x2511 + 0] &= ~0x01;
      ES1 = 0;
    }
// #line 435
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

// # 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
/*inline*/ static error_t /*MG245XUartC.UartP*/MG245XUartP__0__HplUartRxControl__stop(void ) reentrant {
// #line 105
  unsigned char __nesc_result;
// #line 105

// #line 105
  __nesc_result = HplMG245XUartP__Uart1RxControl__stop();
// #line 105

// #line 105
  return __nesc_result;
// #line 105
}
// #line 105
// # 387 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
static /*inline*/ error_t HplMG245XUartP__Uart1TxControl__stop(void ) reentrant 
// #line 387
{









  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 397
    {
      XBYTE[0x2511 + 0] &= ~0x02;
      ES1 = 0;
    }
// #line 400
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

// # 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
/*inline*/ static error_t /*MG245XUartC.UartP*/MG245XUartP__0__HplUartTxControl__stop(void ) reentrant {
// #line 105
  unsigned char __nesc_result;
// #line 105

// #line 105
  __nesc_result = HplMG245XUartP__Uart1TxControl__stop();
// #line 105

// #line 105
  return __nesc_result;
// #line 105
}
// #line 105
// # 79 "/opt/mg-original/tos/chips/mg245x/uart/MG245XUartP.nc"
static /*inline*/ error_t /*MG245XUartC.UartP*/MG245XUartP__0__StdControl__stop(void ) reentrant 
// #line 79
{
  /*MG245XUartC.UartP*/MG245XUartP__0__HplUartTxControl__stop();
  /*MG245XUartC.UartP*/MG245XUartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

// # 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
/*inline*/ static error_t SerialP__SerialControl__stop(void ) reentrant {
// #line 105
  unsigned char __nesc_result;
// #line 105

// #line 105
  __nesc_result = /*MG245XUartC.UartP*/MG245XUartP__0__StdControl__stop();
// #line 105

// #line 105
  return __nesc_result;
// #line 105
}
// #line 105
// # 336 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ void SerialP__SerialFlush__flushDone(void ) reentrant 
// #line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static /*inline*/ void SerialP__defaultSerialFlushTask__runTask(void ) reentrant 
// #line 341
{
  SerialP__SerialFlush__flushDone();
}

// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t SerialP__defaultSerialFlushTask__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 344 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ void SerialP__SerialFlush__default__flush(void ) reentrant 
// #line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

// # 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
/*inline*/ static void SerialP__SerialFlush__flush(void ) reentrant {
// #line 49
  SerialP__SerialFlush__default__flush();
// #line 49
}
// #line 49
// # 332 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ void SerialP__stopDoneTask__runTask(void ) reentrant 
// #line 332
{
  SerialP__SerialFlush__flush();
}

// # 136 "BaseStationP.nc"
static /*inline*/ void BaseStationP__SerialControl__startDone(error_t error) reentrant 
// #line 136
{
  if (error == SUCCESS) {
      BaseStationP__uartFull = FALSE;
    }
}

// # 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
/*inline*/ static void SerialP__SplitControl__startDone(error_t error) reentrant {
// #line 113
  BaseStationP__SerialControl__startDone(error);
// #line 113
}
// #line 113
// # 404 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
static /*inline*/ error_t HplMG245XUartP__Uart1RxControl__start(void ) reentrant 
// #line 404
{









  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 414
    {
      XBYTE[0x2511 + 0] |= 0x01;
      ES1 = 1;
    }
// #line 417
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

// # 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
/*inline*/ static error_t /*MG245XUartC.UartP*/MG245XUartP__0__HplUartRxControl__start(void ) reentrant {
// #line 95
  unsigned char __nesc_result;
// #line 95

// #line 95
  __nesc_result = HplMG245XUartP__Uart1RxControl__start();
// #line 95

// #line 95
  return __nesc_result;
// #line 95
}
// #line 95
// # 134 "/opt/mg-original/tos/chips/mg245x/McuSleepC.nc"
static /*inline*/ void McuSleepC__McuPowerState__update(void ) reentrant 
// #line 134
{
}

// # 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
/*inline*/ static void HplMG245XUartP__McuPowerState__update(void ) reentrant {
// #line 52
  McuSleepC__McuPowerState__update();
// #line 52
}
// #line 52
// # 369 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
static /*inline*/ error_t HplMG245XUartP__Uart1TxControl__start(void ) reentrant 
// #line 369
{









  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 379
    {
      XBYTE[0x2511 + 0] |= 0x02;
      ES1 = 1;
    }
// #line 382
    __nesc_atomic_end(__nesc_atomic); }
  HplMG245XUartP__McuPowerState__update();
  return SUCCESS;
}

// # 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
/*inline*/ static error_t /*MG245XUartC.UartP*/MG245XUartP__0__HplUartTxControl__start(void ) reentrant {
// #line 95
  unsigned char __nesc_result;
// #line 95

// #line 95
  __nesc_result = HplMG245XUartP__Uart1TxControl__start();
// #line 95

// #line 95
  return __nesc_result;
// #line 95
}
// #line 95
// # 73 "/opt/mg-original/tos/chips/mg245x/uart/MG245XUartP.nc"
static /*inline*/ error_t /*MG245XUartC.UartP*/MG245XUartP__0__StdControl__start(void ) reentrant 
// #line 73
{
  /*MG245XUartC.UartP*/MG245XUartP__0__HplUartTxControl__start();
  /*MG245XUartC.UartP*/MG245XUartP__0__HplUartRxControl__start();
  return SUCCESS;
}

// # 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
/*inline*/ static error_t SerialP__SerialControl__start(void ) reentrant {
// #line 95
  unsigned char __nesc_result;
// #line 95

// #line 95
  __nesc_result = /*MG245XUartC.UartP*/MG245XUartP__0__StdControl__start();
// #line 95

// #line 95
  return __nesc_result;
// #line 95
}
// #line 95
// # 322 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ void SerialP__startDoneTask__runTask(void ) reentrant 
// #line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
// #line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

// # 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
/*inline*/ static error_t SerialP__SerialFrameComm__putDelimiter(void ) reentrant {
// #line 56
  unsigned char __nesc_result;
// #line 56

// #line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
// #line 56

// #line 56
  return __nesc_result;
// #line 56
}
// #line 56
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 194 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error) reentrant 
// #line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
// #line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

// # 91 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
/*inline*/ static void SerialP__SendBytePacket__sendCompleted(error_t error) reentrant {
// #line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
// #line 91
}
// #line 91
// # 244 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*__inline*/ bool SerialP__ack_queue_is_empty(void ) reentrant 
// #line 244
{
  bool ret;

// #line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
// #line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static /*__inline*/ uint8_t SerialP__ack_queue_top(void ) reentrant 
// #line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
// #line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static /*inline*/ uint8_t SerialP__ack_queue_pop(void ) reentrant 
// #line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
// #line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
// #line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
// #line 278
  return retval;
}

// #line 559
static /*inline*/ void SerialP__RunTx__runTask(void ) reentrant 
// #line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
// #line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
// #line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

// #line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 605
        goInactive = SerialP__offPending;
// #line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
// #line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

// #line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
// #line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
// #line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
// #line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
// #line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
// #line 649
            __nesc_atomic_end(__nesc_atomic); 
// #line 649
            return;
          }
        }
    }
// #line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
// #line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
// #line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t SerialP__stopDoneTask__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
/*inline*/ static error_t SerialP__RunTx__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 230 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/TransformAlarmCounterC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__startAt(/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type t0, /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type dt) reentrant 
{
  /* atomic removed: atomic calls only */
  {
    /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_t0 = t0;
    /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt = dt;
    /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__set_alarm();
  }
}

// # 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*inline*/ static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt) reentrant {
// #line 103
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__startAt(t0, dt);
// #line 103
}
// #line 103
// # 51 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/AlarmToTimerC.nc"
static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot) reentrant 
{
  /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

// #line 86
static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt) reentrant 
{
// #line 87
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 87
    {
// #line 87
      /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
    }
// #line 88
    __nesc_atomic_end(__nesc_atomic); }
}

// # 129 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
/*inline*/ static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt) reentrant {
// #line 129
  /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
// #line 129
}
// #line 129
// # 224 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static /*inline*/ void HplMG245XTimerAsyncC__Compare__stop(void ) reentrant 
// #line 224
{
  /* atomic removed: atomic calls only */
// #line 225
  ET1 = 0;
}

// # 61 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XCompare.nc"
/*inline*/ static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__stop(void ) reentrant {
// #line 61
  HplMG245XTimerAsyncC__Compare__stop();
// #line 61
}
// #line 61
// # 66 "/opt/mg-original/tos/chips/mg245x/timer/MG245XAlarmC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__stop(void ) reentrant 
// #line 66
{
  /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__stop();
}

// # 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*inline*/ static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__stop(void ) reentrant {
// #line 73
  /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__stop();
// #line 73
}
// #line 73
// # 182 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/TransformAlarmCounterC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__stop(void ) reentrant 
{
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__stop();
}

// # 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*inline*/ static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ) reentrant {
// #line 73
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__stop();
// #line 73
}
// #line 73
// # 64 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/AlarmToTimerC.nc"
static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void ) reentrant 
{
// #line 65
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 65
    {
// #line 65
      /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
    }
// #line 66
    __nesc_atomic_end(__nesc_atomic); }
}

// # 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
/*inline*/ static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ) reentrant {
// #line 78
  /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
// #line 78
}
// #line 78
// #line 136
/*inline*/ static uint32_t /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ) reentrant {
// #line 136
  unsigned long __nesc_result;
// #line 136

// #line 136
  __nesc_result = /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
// #line 136

// #line 136
  return __nesc_result;
// #line 136
}
// #line 136
// # 100 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void ) reentrant 
{




  uint32_t now = /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
// #line 135
        /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

// # 167 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/TransformAlarmCounterC.nc"
static /*inline*/ /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__getNow(void ) reentrant 
{
  return /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__get();
}

// # 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*inline*/ static /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ) reentrant {
// #line 109
  unsigned long __nesc_result;
// #line 109

// #line 109
  __nesc_result = /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__getNow();
// #line 109

// #line 109
  return __nesc_result;
// #line 109
}
// #line 109
// # 58 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
/*inline*/ static /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__timer_size /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__get(void ) reentrant {
// #line 58
  unsigned int __nesc_result;
// #line 58

// #line 58
  __nesc_result = HplMG245XTimerAsyncC__Timer__get();
// #line 58

// #line 58
  return __nesc_result;
// #line 58
}
// #line 58
// # 42 "/opt/mg-original/tos/chips/mg245x/timer/MG245XCounterC.nc"
static /*inline*/ /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__timer_size /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__get(void ) reentrant 
{
  return /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__get();
}

// # 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
/*inline*/ static /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__get(void ) reentrant {
// #line 64
  unsigned int __nesc_result;
// #line 64

// #line 64
  __nesc_result = /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__get();
// #line 64

// #line 64
  return __nesc_result;
// #line 64
}
// #line 64
// # 189 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static /*inline*/ bool HplMG245XTimerAsyncC__overflowed(void ) reentrant 
// #line 189
{
  return TCON & 0x20 ? 1 : 0;
}

static /*inline*/ bool HplMG245XTimerAsyncC__Timer__test(void ) reentrant 
// #line 193
{
  return HplMG245XTimerAsyncC__overflowed();
}

// # 84 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
/*inline*/ static bool /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__test(void ) reentrant {
// #line 84
  unsigned char __nesc_result;
// #line 84

// #line 84
  __nesc_result = HplMG245XTimerAsyncC__Timer__test();
// #line 84

// #line 84
  return __nesc_result;
// #line 84
}
// #line 84
// # 47 "/opt/mg-original/tos/chips/mg245x/timer/MG245XCounterC.nc"
static /*inline*/ bool /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__isOverflowPending(void ) reentrant 
{
  return /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__test();
}

// # 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
/*inline*/ static bool /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__isOverflowPending(void ) reentrant {
// #line 71
  unsigned char __nesc_result;
// #line 71

// #line 71
  __nesc_result = /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__isOverflowPending();
// #line 71

// #line 71
  return __nesc_result;
// #line 71
}
// #line 71
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t MG245XCommCsmaP__sendDone__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MG245XCommCsmaP__sendDone);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 720 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static /*inline*/ void MG245XCommCsmaP__MG245XCommTransmit__sendDone(message_t *p_msg, error_t err) reentrant 
// #line 720
{
  /* atomic removed: atomic calls only */
// #line 721
  MG245XCommCsmaP__sendErr = err;
  MG245XCommCsmaP__sendDone__postTask();
}

// # 87 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommTransmit.nc"
/*inline*/ static void MG245XCommTransmitP__Send__sendDone(message_t *p_msg, error_t error) reentrant {
// #line 87
  MG245XCommCsmaP__MG245XCommTransmit__sendDone(p_msg, error);
// #line 87
}
// #line 87
// # 168 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ void MG245XCommTransmitP__signalDone(error_t err) reentrant 
// #line 168
{
  /* atomic removed: atomic calls only */
// #line 169
  {
    MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_STARTED;
    MG245XCommTransmitP__Send__sendDone(MG245XCommTransmitP__m_msg, err);
  }
}

// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t MG245XCommTransmitP__startWaitCcaTimer__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MG245XCommTransmitP__startWaitCcaTimer);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 48 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
/*inline*/ static uint16_t MG245XCommTransmitP__CsmaBackoff__initial(message_t * m) reentrant {
// #line 48
  unsigned int __nesc_result;
// #line 48

// #line 48
  __nesc_result = MG245XCommCsmaP__CsmaBackoff__initial(m);
// #line 48

// #line 48
  return __nesc_result;
// #line 48
}
// #line 48
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t MG245XCommTransmitP__startSendMsgTimer__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MG245XCommTransmitP__startSendMsgTimer);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 124 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ error_t MG245XCommTransmitP__resend(void ) reentrant 
// #line 124
{
  /* atomic removed: atomic calls only */
// #line 125
  {
    if (MG245XCommTransmitP__m_state != MG245XCommTransmitP__S_STARTED) 
      {
        unsigned char __nesc_temp = 
// #line 127
        FAIL;

// #line 127
        return __nesc_temp;
      }
    if (MG245XCommTransmitP__startTransmission() != SUCCESS) {
        goto RESEND_FAIL;
      }

    if (TRUE == TRUE) {


        MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_BEGIN_MSG_SEND;
        MG245XCommTransmitP__timeValue = 3227;
        MG245XCommTransmitP__startSendMsgTimer__postTask();
      }
    else {
        MG245XCommTransmitP__cancelTransmission();
        RESEND_FAIL: 
          MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_CCA_WAIT;
        MG245XCommTransmitP__timeValue = MG245XCommTransmitP__CsmaBackoff__initial(MG245XCommTransmitP__m_msg) * 
        MG245XCOMM_BACKOFF_PERIOD * 2;
        MG245XCommTransmitP__startWaitCcaTimer__postTask();
      }
  }

  return SUCCESS;
}

// # 89 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static /*inline*/ uint16_t RandomMlcgC__Random__rand16(void ) reentrant 
// #line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

// # 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
/*inline*/ static uint16_t MG245XCommCsmaP__Random__rand16(void ) reentrant {
// #line 52
  unsigned int __nesc_result;
// #line 52

// #line 52
  __nesc_result = RandomMlcgC__Random__rand16();
// #line 52

// #line 52
  return __nesc_result;
// #line 52
}
// #line 52
// # 716 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static /*inline*/ uint16_t MG245XCommCsmaP__CsmaBackoff__congestion(message_t *m) reentrant 
// #line 716
{
  return (MG245XCommCsmaP__Random__rand16() & 0x7) + 1;
}

// # 56 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
/*inline*/ static uint16_t MG245XCommTransmitP__CsmaBackoff__congestion(message_t * m) reentrant {
// #line 56
  unsigned int __nesc_result;
// #line 56

// #line 56
  __nesc_result = MG245XCommCsmaP__CsmaBackoff__congestion(m);
// #line 56

// #line 56
  return __nesc_result;
// #line 56
}
// #line 56
// # 153 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ void MG245XCommTransmitP__congestionBackoff(void ) reentrant 
// #line 153
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 154
    {
      uint16_t time = MG245XCommTransmitP__CsmaBackoff__congestion(MG245XCommTransmitP__m_msg);

      if (time) {
          MG245XCommTransmitP__timeValue = time * MG245XCOMM_BACKOFF_PERIOD * 2;
          MG245XCommTransmitP__startWaitCcaTimer__postTask();
        }
      else {
          MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_STARTED;
          MG245XCommTransmitP__resend();
        }
    }
// #line 165
    __nesc_atomic_end(__nesc_atomic); }
}

// #line 286
static /*inline*/ void MG245XCommTransmitP__attemptSend(void ) reentrant 
// #line 286
{
  /* atomic removed: atomic calls only */
// #line 287
  {
    if (MG245XCommTransmitP__startTransmission() != SUCCESS) {
        goto ATTEMPT_SEND_FAIL;
      }


    if (TRUE == TRUE) {


        MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_BEGIN_MSG_SEND;
        MG245XCommTransmitP__timeValue = 3227;
        MG245XCommTransmitP__startSendMsgTimer__postTask();
      }
    else {
        MG245XCommTransmitP__cancelTransmission();
        ATTEMPT_SEND_FAIL: 
          MG245XCommTransmitP__congestionBackoff();
      }
  }
}

static /*inline*/ void MG245XCommTransmitP__MultipurposeTimer__fired(void ) reentrant 
// #line 308
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 309
    {
      switch (MG245XCommTransmitP__m_state) {
          case MG245XCommTransmitP__S_CCA_WAIT: 
            MG245XCommTransmitP__attemptSend();
          break;
          case MG245XCommTransmitP__S_BEGIN_MSG_SEND: 
            MG245XCommTransmitP__cancelTransmission();
          MG245XCommTransmitP__signalDone(FAIL);
          break;
          case MG245XCommTransmitP__S_ACK_WAIT: 
            MG245XCommTransmitP__signalDone(FAIL);
          break;
          default: 
            break;
        }
    }
// #line 324
    __nesc_atomic_end(__nesc_atomic); }
}

// # 204 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num) reentrant 
{
}

// # 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
/*inline*/ static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7d605c78) reentrant {
// #line 83
  switch (arg_0x7d605c78) {
// #line 83
    case 0U:
// #line 83
      MG245XCommTransmitP__MultipurposeTimer__fired();
// #line 83
      break;
// #line 83
    default:
// #line 83
      /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7d605c78);
// #line 83
      break;
// #line 83
    }
// #line 83
}
// #line 83
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 220 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static /*inline*/ void HplMG245XTimerAsyncC__Compare__start(void ) reentrant 
// #line 220
{
  /* atomic removed: atomic calls only */
// #line 221
  ET1 = 1;
}

// # 58 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XCompare.nc"
/*inline*/ static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__start(void ) reentrant {
// #line 58
  HplMG245XTimerAsyncC__Compare__start();
// #line 58
}
// #line 58
// # 216 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static /*inline*/ void HplMG245XTimerAsyncC__Compare__reset(void ) reentrant 
// #line 216
{
  /* atomic removed: atomic calls only */
// #line 217
  TF1 = 0;
}

// # 55 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XCompare.nc"
/*inline*/ static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__reset(void ) reentrant {
// #line 55
  HplMG245XTimerAsyncC__Compare__reset();
// #line 55
}
// #line 55
// # 256 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static /*inline*/ void HplMG245XTimerAsyncC__Compare__set(uint16_t t) reentrant 
// #line 256
{
  /* atomic removed: atomic calls only */
// #line 257
  {
    TH1 = t >> 8;
    TL1 = t & 0xff;
  }
}

// # 47 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XCompare.nc"
/*inline*/ static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__set(/*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__size_type t) reentrant {
// #line 47
  HplMG245XTimerAsyncC__Compare__set(t);
// #line 47
}
// #line 47
// # 58 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
/*inline*/ static /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__timer_size /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__get(void ) reentrant {
// #line 58
  unsigned int __nesc_result;
// #line 58

// #line 58
  __nesc_result = HplMG245XTimerAsyncC__Timer__get();
// #line 58

// #line 58
  return __nesc_result;
// #line 58
}
// #line 58
// # 75 "/opt/mg-original/tos/chips/mg245x/timer/MG245XAlarmC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__startAt(/*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size t0, /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size dt) reentrant 
// #line 75
{
  /* atomic removed: atomic calls only */






  {

    /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size now;
// #line 85
    /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__timer_size expires;

    ;


    now = /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__get();

    expires = t0 + dt;
    if (expires < now + 2) {
      expires = 2;
      }
    else {
// #line 96
      expires = expires - now;
      }
// #line 97
    expires = 0xffff - expires;
// #line 115
    /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__set(expires - 1);
    /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__reset();
    /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__start();
  }
}

// # 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*inline*/ static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__startAt(/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__size_type t0, /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__size_type dt) reentrant {
// #line 103
  /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__startAt(t0, dt);
// #line 103
}
// #line 103
// # 139 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void ) reentrant 
{
  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

// # 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
/*inline*/ static void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ) reentrant {
// #line 83
  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
// #line 83
}
// #line 83
// # 172 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/TransformAlarmCounterC.nc"
static /*inline*/ /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__getAlarm(void ) reentrant 
{
  /* atomic removed: atomic calls only */
// #line 174
  {
    /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type __nesc_temp = 
// #line 174
    /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_t0 + /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt;

// #line 174
    return __nesc_temp;
  }
}

// # 116 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*inline*/ static /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ) reentrant {
// #line 116
  unsigned long __nesc_result;
// #line 116

// #line 116
  __nesc_result = /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__getAlarm();
// #line 116

// #line 116
  return __nesc_result;
// #line 116
}
// #line 116
// # 67 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/AlarmToTimerC.nc"
static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void ) reentrant 
{
  if (/*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 70
      {
// #line 70
        /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
      }
// #line 71
      __nesc_atomic_end(__nesc_atomic); }
    }
// #line 71
  /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

// # 286 "/usr/lib/ncc/nesc_nx.h"
static /*__inline*/  uint8_t __nesc_hton_uint8(void * target, uint8_t value) reentrant 
// #line 286
{
  uint8_t *base = target;

// #line 288
  base[0] = value;
  return value;
}

// # 149 "BaseStationP.nc"
static /*inline*/ message_t *BaseStationP__RadioSnoop__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len) reentrant 
// #line 151
{
  return BaseStationP__receive(msg, payload, len);
}

// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
/*inline*/ static message_t * MG245XCommActiveMessageP__Snoop__receive(am_id_t arg_0x7d982308, message_t * msg, void * payload, uint8_t len) reentrant {
// #line 78
  nx_struct message_t *__nesc_result;
// #line 78

// #line 78
  __nesc_result = BaseStationP__RadioSnoop__receive(arg_0x7d982308, msg, payload, len);
// #line 78

// #line 78
  return __nesc_result;
// #line 78
}
// #line 78
// # 155 "BaseStationP.nc"
static /*inline*/ message_t *BaseStationP__RadioReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len) reentrant 
// #line 157
{
  return BaseStationP__receive(msg, payload, len);
}

// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
/*inline*/ static message_t * MG245XCommActiveMessageP__Receive__receive(am_id_t arg_0x7d983c60, message_t * msg, void * payload, uint8_t len) reentrant {
// #line 78
  nx_struct message_t *__nesc_result;
// #line 78

// #line 78
  __nesc_result = BaseStationP__RadioReceive__receive(arg_0x7d983c60, msg, payload, len);
// #line 78

// #line 78
  return __nesc_result;
// #line 78
}
// #line 78
// # 322 "/usr/lib/ncc/nesc_nx.h"
static /*__inline*/  uint16_t __nesc_ntoh_leuint16(const void * source) reentrant 
// #line 322
{
  const uint8_t *base = source;

// #line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

// # 61 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static /*inline*/ mg245x_comm_header_t *MG245XCommActiveMessageP__getHeader(message_t *msg) reentrant 
// #line 61
{
  return (mg245x_comm_header_t *)(msg->_data - sizeof(mg245x_comm_header_t ));
}

// #line 125
static /*inline*/ am_addr_t MG245XCommActiveMessageP__AMPacket__destination(message_t *amsg) reentrant 
// #line 125
{
  mg245x_comm_header_t *header = MG245XCommActiveMessageP__getHeader(amsg);

// #line 127
  return __nesc_ntoh_leuint16(header->dest.nxdata);
}

// #line 52
/*inline*/ static am_addr_t MG245XCommActiveMessageP__amAddress(void ) reentrant {
// #line 52
  unsigned int __nesc_result;
// #line 52

// #line 52
  __nesc_result = ActiveMessageAddressC__amAddress();
// #line 52

// #line 52
  return __nesc_result;
// #line 52
}
// #line 52
// #line 121
static /*inline*/ am_addr_t MG245XCommActiveMessageP__AMPacket__address(void ) reentrant 
// #line 121
{
  return MG245XCommActiveMessageP__amAddress();
}

// #line 145
static /*inline*/ bool MG245XCommActiveMessageP__AMPacket__isForMe(message_t *amsg) reentrant 
// #line 145
{
  return MG245XCommActiveMessageP__AMPacket__destination(amsg) == MG245XCommActiveMessageP__AMPacket__address() || 
  MG245XCommActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

// #line 112
static /*inline*/ message_t *MG245XCommActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len) reentrant 
// #line 112
{
  if (MG245XCommActiveMessageP__AMPacket__isForMe(msg)) {
      return MG245XCommActiveMessageP__Receive__receive(MG245XCommActiveMessageP__AMPacket__type(msg), msg, payload, len - MG245XCommActiveMessageP__MG245XCOMM_SIZE);
    }
  else {
      return MG245XCommActiveMessageP__Snoop__receive(MG245XCommActiveMessageP__AMPacket__type(msg), msg, payload, len - MG245XCommActiveMessageP__MG245XCOMM_SIZE);
    }
}

// # 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
/*inline*/ static message_t * MG245XCommReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len) reentrant {
// #line 78
  nx_struct message_t *__nesc_result;
// #line 78

// #line 78
  __nesc_result = MG245XCommActiveMessageP__SubReceive__receive(msg, payload, len);
// #line 78

// #line 78
  return __nesc_result;
// #line 78
}
// #line 78
// # 87 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommReceiveP.nc"
static /*inline*/ uint8_t MG245XCommReceiveP__getLqi(int8_t dBm) reentrant 
// #line 87
{
  uint16_t tmp16;
  uint8_t level;

  if (dBm > 0) {
      level = MG245XCommReceiveP__MG245X_COMM_RECEIVE_MAX_LQI;
    }
  else {
// #line 93
    if (dBm > -100) {
        tmp16 = 100 + dBm;
        tmp16 *= MG245XCommReceiveP__MG245X_COMM_RECEIVE_MAX_LQI - MG245XCommReceiveP__MG245X_COMM_RECEIVE_MIN_LQI;
        tmp16 /= 100;
        level = tmp16 + MG245XCommReceiveP__MG245X_COMM_RECEIVE_MIN_LQI;
      }
    else 
// #line 98
      {
        level = MG245XCommReceiveP__MG245X_COMM_RECEIVE_MIN_LQI;
      }
    }
  return level;
}

// #line 63
static /*inline*/ mg245x_comm_metadata_t *MG245XCommReceiveP__getMetadata(message_t *msg) reentrant 
// #line 63
{
  return (mg245x_comm_metadata_t *)msg->metadata;
}

// #line 59
static /*inline*/ mg245x_comm_header_t *MG245XCommReceiveP__getHeader(message_t *msg) reentrant 
// #line 59
{
  return (mg245x_comm_header_t *)(msg->_data - sizeof(mg245x_comm_header_t ));
}

// #line 105
static /*inline*/ void MG245XCommReceiveP__receiveMsgDone__runTask(void ) reentrant 
// #line 105
{
  mg245x_comm_header_t *header = MG245XCommReceiveP__getHeader(MG245XCommReceiveP__m_p_rx_buf);
  mg245x_comm_metadata_t *metadata = MG245XCommReceiveP__getMetadata(MG245XCommReceiveP__m_p_rx_buf);
  uint8_t *buf = (uint8_t *)header;
  uint8_t length = buf[0];
  int8_t rxRssi;







  rxRssi = XBYTE[0x2200 + 0x75];
  __nesc_hton_uint8(metadata->rssi.nxdata, 45 + rxRssi);
  __nesc_hton_uint8(metadata->lqi.nxdata, MG245XCommReceiveP__getLqi(rxRssi));


  MG245XCommReceiveP__m_p_rx_buf = MG245XCommReceiveP__Receive__receive(MG245XCommReceiveP__m_p_rx_buf, MG245XCommReceiveP__m_p_rx_buf->_data, 
  length);

  MG245XCommReceiveP__packetLock = FALSE;
}

// # 164 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num) reentrant 
{
  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

// # 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
/*inline*/ static void MG245XCommTransmitP__MultipurposeTimer__stop(void ) reentrant {
// #line 78
  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
// #line 78
}
// #line 78
// # 120 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ void MG245XCommTransmitP__stopWaitAckTimer__runTask(void ) reentrant 
// #line 120
{
  MG245XCommTransmitP__MultipurposeTimer__stop();
}

// #line 116
static /*inline*/ void MG245XCommTransmitP__stopSendMsgTimer__runTask(void ) reentrant 
// #line 116
{
  MG245XCommTransmitP__MultipurposeTimer__stop();
}

// # 159 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static /*inline*/ void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt) reentrant 
{
  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

// # 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
/*inline*/ static void MG245XCommTransmitP__MultipurposeTimer__startOneShot(uint32_t dt) reentrant {
// #line 73
  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
// #line 73
}
// #line 73
// # 111 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ void MG245XCommTransmitP__startWaitAckTimer__runTask(void ) reentrant 
// #line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 112
    MG245XCommTransmitP__MultipurposeTimer__startOneShot(
    XBYTE[0x2200 + 0xC3] == 0 ? MG245XCommTransmitP__timeValue : MG245XCommTransmitP__timeValue / 2);
// #line 113
    __nesc_atomic_end(__nesc_atomic); }
}

// #line 106
static /*inline*/ void MG245XCommTransmitP__startWaitCcaTimer__runTask(void ) reentrant 
// #line 106
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 107
    MG245XCommTransmitP__MultipurposeTimer__startOneShot(
    XBYTE[0x2200 + 0xC3] == 0 ? MG245XCommTransmitP__timeValue : MG245XCommTransmitP__timeValue / 2);
// #line 108
    __nesc_atomic_end(__nesc_atomic); }
}

// #line 101
static /*inline*/ void MG245XCommTransmitP__startSendMsgTimer__runTask(void ) reentrant 
// #line 101
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 102
    MG245XCommTransmitP__MultipurposeTimer__startOneShot(
    XBYTE[0x2200 + 0xC3] == 0 ? MG245XCommTransmitP__timeValue : MG245XCommTransmitP__timeValue / 2);
// #line 103
    __nesc_atomic_end(__nesc_atomic); }
}

// # 301 "BaseStationP.nc"
static /*inline*/ void BaseStationP__RadioSend__sendDone(am_id_t id, message_t *msg, error_t error) reentrant 
// #line 301
{
  if (error != SUCCESS) {
    BaseStationP__failBlink();
    }
  else {
// #line 305
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
      if (msg == BaseStationP__radioQueue[BaseStationP__radioOut]) 
        {
          if (++BaseStationP__radioOut >= BaseStationP__RADIO_QUEUE_LEN) {
            BaseStationP__radioOut = 0;
            }
// #line 310
          if (BaseStationP__radioFull) {
            BaseStationP__radioFull = FALSE;
            }
        }
// #line 313
      __nesc_atomic_end(__nesc_atomic); }
    }
// #line 314
  BaseStationP__radioSendTask__postTask();
}

// # 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
/*inline*/ static void MG245XCommActiveMessageP__AMSend__sendDone(am_id_t arg_0x7d9832a0, message_t * msg, error_t error) reentrant {
// #line 110
  BaseStationP__RadioSend__sendDone(arg_0x7d9832a0, msg, error);
// #line 110
}
// #line 110
// # 106 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static /*inline*/ void MG245XCommActiveMessageP__SubSend__sendDone(message_t *msg, error_t result) reentrant 
// #line 106
{
  MG245XCommActiveMessageP__AMSend__sendDone(MG245XCommActiveMessageP__AMPacket__type(msg), msg, result);
}

// # 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
/*inline*/ static void MG245XCommCsmaP__Send__sendDone(message_t * msg, error_t error) reentrant {
// #line 100
  MG245XCommActiveMessageP__SubSend__sendDone(msg, error);
// #line 100
}
// #line 100
// # 725 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static /*inline*/ void MG245XCommCsmaP__sendDone__runTask(void ) reentrant 
// #line 725
{
  error_t packetErr;

// #line 727
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 727
    packetErr = MG245XCommCsmaP__sendErr;
// #line 727
    __nesc_atomic_end(__nesc_atomic); }
  MG245XCommCsmaP__m_state = MG245XCommCsmaP__S_STARTED;
  MG245XCommCsmaP__Send__sendDone(MG245XCommCsmaP__m_msg, packetErr);
}

// # 144 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommReceiveP.nc"
static /*inline*/ void MG245XCommReceiveP__MG245XCommConfig__syncDone(error_t error) reentrant 
// #line 144
{
}

// # 55 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommConfig.nc"
/*inline*/ static void MG245XCommCsmaP__MG245XCommConfig__syncDone(error_t error) reentrant {
// #line 55
  MG245XCommReceiveP__MG245XCommConfig__syncDone(error);
// #line 55
}
// #line 55
// # 662 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static /*inline*/ void MG245XCommCsmaP__syncDone__runTask(void ) reentrant 
// #line 662
{
  MG245XCommCsmaP__MG245XCommConfig__syncDone(SUCCESS);
}

// # 143 "BaseStationP.nc"
static /*inline*/ void BaseStationP__RadioControl__stopDone(error_t error) reentrant 
// #line 143
{
}

// # 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
/*inline*/ static void MG245XCommCsmaP__SplitControl__stopDone(error_t error) reentrant {
// #line 138
  BaseStationP__RadioControl__stopDone(error);
// #line 138
}
// #line 138
// # 391 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static /*inline*/ void MG245XCommCsmaP__stopDone__runTask(void ) reentrant 
// #line 391
{

  MG245XCommCsmaP__m_state = MG245XCommCsmaP__S_STOPPED;
  MG245XCommCsmaP__SplitControl__stopDone(SUCCESS);
}

// # 130 "BaseStationP.nc"
static /*inline*/ void BaseStationP__RadioControl__startDone(error_t error) reentrant 
// #line 130
{
  if (error == SUCCESS) {
      BaseStationP__radioFull = FALSE;
    }
}

// # 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
/*inline*/ static void MG245XCommCsmaP__SplitControl__startDone(error_t error) reentrant {
// #line 113
  BaseStationP__RadioControl__startDone(error);
// #line 113
}
// #line 113
// # 72 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommReceiveP.nc"
static /*inline*/ error_t MG245XCommReceiveP__AsyncStdControl__start(void ) reentrant 
// #line 72
{
  return SUCCESS;
}

// # 183 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ error_t MG245XCommTransmitP__SubControl__start(void ) reentrant 
// #line 183
{
  /* atomic removed: atomic calls only */
// #line 184
  MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_STARTED;
  return SUCCESS;
}

// # 95 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
/*inline*/ static error_t MG245XCommCsmaP__SubControl__start(void ) reentrant {
// #line 95
  unsigned char __nesc_result;
// #line 95

// #line 95
  __nesc_result = MG245XCommTransmitP__SubControl__start();
// #line 95
  __nesc_result = ecombine(__nesc_result, MG245XCommReceiveP__AsyncStdControl__start());
// #line 95

// #line 95
  return __nesc_result;
// #line 95
}
// #line 95
// # 583 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setTxPower(uint8_t power) reentrant 
// #line 583
{
  MG245XCommCsmaP__m_tx_power = power;
  if (XBYTE[0x2200 + 0x9F] == 0x91) {
      switch (power) {
          case 0: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 587
          XBYTE[0x2200 + 0xA1] = 0xFF;
// #line 587
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 587
          break;
          case 1: XBYTE[0x2200 + 0xA0] = 0x96;
// #line 588
          XBYTE[0x2200 + 0xA1] = 0xF8;
// #line 588
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 588
          break;
          case 2: XBYTE[0x2200 + 0xA0] = 0x92;
// #line 589
          XBYTE[0x2200 + 0xA1] = 0xF8;
// #line 589
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 589
          break;
          case 3: XBYTE[0x2200 + 0xA0] = 0x90;
// #line 590
          XBYTE[0x2200 + 0xA1] = 0xF0;
// #line 590
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 590
          break;
          case 4: XBYTE[0x2200 + 0xA0] = 0x1C;
// #line 591
          XBYTE[0x2200 + 0xA1] = 0xF9;
// #line 591
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 591
          break;
          case 5: XBYTE[0x2200 + 0xA0] = 0x1A;
// #line 592
          XBYTE[0x2200 + 0xA1] = 0xFF;
// #line 592
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 592
          break;
          case 6: XBYTE[0x2200 + 0xA0] = 0x1B;
// #line 593
          XBYTE[0x2200 + 0xA1] = 0xE6;
// #line 593
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 593
          break;
          case 7: XBYTE[0x2200 + 0xA0] = 0x18;
// #line 594
          XBYTE[0x2200 + 0xA1] = 0xEE;
// #line 594
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 594
          break;
          case 8: XBYTE[0x2200 + 0xA0] = 0x18;
// #line 595
          XBYTE[0x2200 + 0xA1] = 0xE7;
// #line 595
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 595
          break;
          case 9: XBYTE[0x2200 + 0xA0] = 0x17;
// #line 596
          XBYTE[0x2200 + 0xA1] = 0xE5;
// #line 596
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 596
          break;
          case 10: XBYTE[0x2200 + 0xA0] = 0x16;
// #line 597
          XBYTE[0x2200 + 0xA1] = 0xE5;
// #line 597
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 597
          break;
          case 11: XBYTE[0x2200 + 0xA0] = 0x13;
// #line 598
          XBYTE[0x2200 + 0xA1] = 0xE4;
// #line 598
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 598
          break;
          case 12: XBYTE[0x2200 + 0xA0] = 0x12;
// #line 599
          XBYTE[0x2200 + 0xA1] = 0xE7;
// #line 599
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 599
          break;
          case 13: XBYTE[0x2200 + 0xA0] = 0x12;
// #line 600
          XBYTE[0x2200 + 0xA1] = 0xE1;
// #line 600
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 600
          break;
          case 14: XBYTE[0x2200 + 0xA0] = 0x11;
// #line 601
          XBYTE[0x2200 + 0xA1] = 0xE2;
// #line 601
          XBYTE[0x2200 + 0xA2] = 0x6E;
// #line 601
          break;
          case 15: XBYTE[0x2200 + 0xA0] = 0x11;
// #line 602
          XBYTE[0x2200 + 0xA1] = 0xE1;
// #line 602
          XBYTE[0x2200 + 0xA2] = 0x6D;
// #line 602
          break;
          case 16: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 603
          XBYTE[0x2200 + 0xA1] = 0xFF;
// #line 603
          XBYTE[0x2200 + 0xA2] = 0x1C;
// #line 603
          break;
          case 17: XBYTE[0x2200 + 0xA0] = 0x18;
// #line 604
          XBYTE[0x2200 + 0xA1] = 0xE7;
// #line 604
          XBYTE[0x2200 + 0xA2] = 0x1C;
// #line 604
          break;
          case 18: XBYTE[0x2200 + 0xA0] = 0x13;
// #line 605
          XBYTE[0x2200 + 0xA1] = 0xE4;
// #line 605
          XBYTE[0x2200 + 0xA2] = 0x18;
// #line 605
          break;
          default: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 606
          XBYTE[0x2200 + 0xA1] = 0xFF;
// #line 606
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 606
          break;
        }
    }
  else {
      switch (power) {
          case 0: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 611
          XBYTE[0x2200 + 0xA1] = 0xFF;
// #line 611
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 611
          break;
          case 1: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 612
          XBYTE[0x2200 + 0xA1] = 0xFF;
// #line 612
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 612
          break;
          case 2: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 613
          XBYTE[0x2200 + 0xA1] = 0xFF;
// #line 613
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 613
          break;
          case 3: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 614
          XBYTE[0x2200 + 0xA1] = 0xF5;
// #line 614
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 614
          break;
          case 4: XBYTE[0x2200 + 0xA0] = 0x9D;
// #line 615
          XBYTE[0x2200 + 0xA1] = 0xF0;
// #line 615
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 615
          break;
          case 5: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 616
          XBYTE[0x2200 + 0xA1] = 0xED;
// #line 616
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 616
          break;
          case 6: XBYTE[0x2200 + 0xA0] = 0x95;
// #line 617
          XBYTE[0x2200 + 0xA1] = 0xED;
// #line 617
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 617
          break;
          case 7: XBYTE[0x2200 + 0xA0] = 0x1F;
// #line 618
          XBYTE[0x2200 + 0xA1] = 0xF3;
// #line 618
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 618
          break;
          case 8: XBYTE[0x2200 + 0xA0] = 0x1F;
// #line 619
          XBYTE[0x2200 + 0xA1] = 0xEC;
// #line 619
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 619
          break;
          case 9: XBYTE[0x2200 + 0xA0] = 0x1E;
// #line 620
          XBYTE[0x2200 + 0xA1] = 0xEA;
// #line 620
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 620
          break;
          case 10: XBYTE[0x2200 + 0xA0] = 0x1C;
// #line 621
          XBYTE[0x2200 + 0xA1] = 0xE9;
// #line 621
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 621
          break;
          case 11: XBYTE[0x2200 + 0xA0] = 0x1E;
// #line 622
          XBYTE[0x2200 + 0xA1] = 0xE3;
// #line 622
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 622
          break;
          case 12: XBYTE[0x2200 + 0xA0] = 0x18;
// #line 623
          XBYTE[0x2200 + 0xA1] = 0xE3;
// #line 623
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 623
          break;
          case 13: XBYTE[0x2200 + 0xA0] = 0x18;
// #line 624
          XBYTE[0x2200 + 0xA1] = 0xE2;
// #line 624
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 624
          break;
          case 14: XBYTE[0x2200 + 0xA0] = 0x13;
// #line 625
          XBYTE[0x2200 + 0xA1] = 0xE2;
// #line 625
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 625
          break;
          case 15: XBYTE[0x2200 + 0xA0] = 0x12;
// #line 626
          XBYTE[0x2200 + 0xA1] = 0xE2;
// #line 626
          XBYTE[0x2200 + 0xA2] = 0x6E;
// #line 626
          break;
          case 16: XBYTE[0x2200 + 0xA0] = 0x11;
// #line 627
          XBYTE[0x2200 + 0xA1] = 0xE2;
// #line 627
          XBYTE[0x2200 + 0xA2] = 0x6D;
// #line 627
          break;
          case 17: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 628
          XBYTE[0x2200 + 0xA1] = 0xFF;
// #line 628
          XBYTE[0x2200 + 0xA2] = 0x1C;
// #line 628
          break;
          case 18: XBYTE[0x2200 + 0xA0] = 0x18;
// #line 629
          XBYTE[0x2200 + 0xA1] = 0xE7;
// #line 629
          XBYTE[0x2200 + 0xA2] = 0x1C;
// #line 629
          break;
          default: XBYTE[0x2200 + 0xA0] = 0x9F;
// #line 630
          XBYTE[0x2200 + 0xA1] = 0xFF;
// #line 630
          XBYTE[0x2200 + 0xA2] = 0x6F;
// #line 630
          break;
        }
    }
}

// #line 54
/*inline*/ static am_addr_t MG245XCommCsmaP__amAddress(void ) reentrant {
// #line 54
  unsigned int __nesc_result;
// #line 54

// #line 54
  __nesc_result = ActiveMessageAddressC__amAddress();
// #line 54

// #line 54
  return __nesc_result;
// #line 54
}
// #line 54
// #line 539
static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setShortAddr(uint16_t address) reentrant 
// #line 539
{
  /* atomic removed: atomic calls only */
// #line 540
  {
    MG245XCommCsmaP__m_short = address;
    XBYTE[0x215A + 0] = (uint8_t )address;
    XBYTE[0x215A + 1] = (uint8_t )(address >> 8);
  }
}




static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setPanAddr(uint16_t address) reentrant 
// #line 550
{
  /* atomic removed: atomic calls only */
// #line 551
  {
    MG245XCommCsmaP__m_pan = address;
    XBYTE[0x2158 + 0] = (uint8_t )address;
    XBYTE[0x2158 + 1] = (uint8_t )(address >> 8);
  }
}

// #line 401
static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setChannel(uint8_t channel) reentrant 
// #line 401
{
  /* atomic removed: atomic calls only */
// #line 402
  {
    uint16_t i;
    uint16_t counter;
    uint8_t sta;
    uint8_t f3;
    uint8_t f4;

    if (channel > 26) {
// #line 409
      MG245XCommCsmaP__m_channel = 26;
      }
    else {
// #line 410
      if (channel < 11) {
// #line 410
        MG245XCommCsmaP__m_channel = 11;
        }
      else {
// #line 411
        MG245XCommCsmaP__m_channel = channel;
        }
      }
    if (XBYTE[0x2200 + 0x9F] == 0x91) {
        uint8_t ad;

        switch (channel) {
            case 0x0B: ad = 0x02;
// #line 418
            f3 = 0x06;
// #line 418
            f4 = 0x40;
// #line 418
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 418
            break;
            case 0x0C: ad = 0x02;
// #line 419
            f3 = 0x0C;
// #line 419
            f4 = 0x80;
// #line 419
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 419
            break;
            case 0x0D: ad = 0x02;
// #line 420
            f3 = 0x12;
// #line 420
            f4 = 0xC0;
// #line 420
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 420
            break;
            case 0x0E: ad = 0x02;
// #line 421
            f3 = 0x19;
// #line 421
            f4 = 0x00;
// #line 421
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 421
            break;
            case 0x0F: ad = 0x03;
// #line 422
            f3 = 0xBB;
// #line 422
            f4 = 0x40;
// #line 422
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 422
            break;
            case 0x10: ad = 0x03;
// #line 423
            f3 = 0xC1;
// #line 423
            f4 = 0x80;
// #line 423
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 423
            break;
            case 0x11: ad = 0x03;
// #line 424
            f3 = 0xC7;
// #line 424
            f4 = 0xC0;
// #line 424
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 424
            break;
            case 0x12: ad = 0x02;
// #line 425
            f3 = 0x32;
// #line 425
            f4 = 0x00;
// #line 425
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 425
            break;
            case 0x13: ad = 0x02;
// #line 426
            f3 = 0x38;
// #line 426
            f4 = 0x40;
// #line 426
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 426
            break;
            case 0x14: ad = 0x02;
// #line 427
            f3 = 0x3E;
// #line 427
            f4 = 0x80;
// #line 427
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 427
            break;
            case 0x15: ad = 0x02;
// #line 428
            f3 = 0x44;
// #line 428
            f4 = 0xC0;
// #line 428
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 428
            break;
            case 0x16: ad = 0x02;
// #line 429
            f3 = 0x4B;
// #line 429
            f4 = 0x00;
// #line 429
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 429
            break;
            case 0x17: ad = 0x03;
// #line 430
            f3 = 0xED;
// #line 430
            f4 = 0x40;
// #line 430
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 430
            break;
            case 0x18: ad = 0x03;
// #line 431
            f3 = 0xF3;
// #line 431
            f4 = 0x80;
// #line 431
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 431
            break;
            case 0x19: ad = 0x03;
// #line 432
            f3 = 0xF9;
// #line 432
            f4 = 0xC0;
// #line 432
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 432
            break;
            case 0x1A: ad = 0x03;
// #line 433
            f3 = 0x00;
// #line 433
            f4 = 0x00;
// #line 433
            XBYTE[0x2200 + 0x8B] = 0x2B;
// #line 433
            break;
            default: ad = 0x02;
// #line 434
            f3 = 0x38;
// #line 434
            f4 = 0x40;
// #line 434
            XBYTE[0x2200 + 0x8B] = 0x22;
// #line 434
            break;
          }

        XBYTE[0x2200 + 0x80] = ad;
        XBYTE[0x2200 + 0x86] = f3;
        XBYTE[0x2200 + 0x87] = f4;

        counter = 0;
        while (1) {
            counter += 100;
            XBYTE[0x2200 + 0x89] = 0xEC;

            for (i = 0; i < counter; i++) ;
            XBYTE[0x2200 + 0x89] = 0xEC;
            sta = 0;
            for (i = 0; i < 0x1000; i++) {
                if (XBYTE[0x2200 + 0x8A] & 0x40) {
                    sta = 1;
                    break;
                  }
              }

            if (sta) {
// #line 456
              break;
              }
          }
      }
    else 
// #line 459
      {
        XBYTE[0x2200 + 0x04] = 0x00;
        XBYTE[0x2200 + 0x05] = 0xFF;
        XBYTE[0x2200 + 0x06] = 0x00;
        XBYTE[0x2200 + 0x07] = 0xFF;

        switch (channel) {
            case 11: f3 = 0x06;
// #line 466
            f4 = 0x40;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 467
            break;
            case 12: f3 = 0x0C;
// #line 468
            f4 = 0x80;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 469
            break;
            case 13: f3 = 0x12;
// #line 470
            f4 = 0xC0;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 471
            break;
            case 14: f3 = 0x19;
// #line 472
            f4 = 0x00;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 473
            break;
            case 15: f3 = 0xBB;
// #line 474
            f4 = 0x40;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x03;
// #line 475
            break;
            case 16: f3 = 0xC1;
// #line 476
            f4 = 0x80;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x03;
// #line 477
            break;
            case 17: f3 = 0xC7;
// #line 478
            f4 = 0xC0;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x03;
// #line 479
            break;
            case 18: f3 = 0x32;
// #line 480
            f4 = 0x00;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 481
            break;
            case 19: f3 = 0x38;
// #line 482
            f4 = 0x40;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 483
            break;
            case 20: f3 = 0x3E;
// #line 484
            f4 = 0x80;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 485
            break;
            case 21: f3 = 0x44;
// #line 486
            f4 = 0xC0;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 487
            break;
            case 22: f3 = 0x4B;
// #line 488
            f4 = 0x00;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 489
            break;
            case 23: f3 = 0xED;
// #line 490
            f4 = 0x40;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x03;
// #line 491
            break;
            case 24: f3 = 0xF3;
// #line 492
            f4 = 0x80;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x03;
// #line 493
            break;
            case 25: f3 = 0xF9;
// #line 494
            f4 = 0xC0;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x03;
// #line 495
            break;
            case 26: f3 = 0x00;
// #line 496
            f4 = 0x00;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x03;
// #line 497
            break;
            default: f3 = 0x38;
// #line 498
            f4 = 0x40;
            XBYTE[0x2200 + 0x80] = (*&XBYTE[0x2200 + 0x80] & 0x30) | 0x02;
// #line 499
            break;
          }

        switch (channel) {
            case 26: XBYTE[0x2200 + 0x8B] = 0x3B;
// #line 503
            break;
            default: XBYTE[0x2200 + 0x8B] = 0x32;
// #line 504
            break;
          }

        XBYTE[0x2200 + 0x81] = *&XBYTE[0x2200 + 0x81] & 0x01;
        XBYTE[0x2200 + 0x86] = f3;
        XBYTE[0x2200 + 0x87] = f4;

        counter = 0;
        while (1) {
            counter += 100;
            XBYTE[0x2200 + 0x89] = 0xEF;
            for (i = 0; i < counter; i++) ;
            XBYTE[0x2200 + 0x89] = 0xEF;
            sta = 0;
            for (i = 0; i < 0x1000; i++) {
                if (XBYTE[0x2200 + 0x8A] & 0x40) {
                    sta = 1;
                    break;
                  }
              }
            if (sta) {
// #line 524
              break;
              }
          }
        XBYTE[0x2200 + 0x04] = 0xF7;
        XBYTE[0x2200 + 0x05] = 0xFF;
        XBYTE[0x2200 + 0x06] = 0xFF;
        XBYTE[0x2200 + 0x07] = 0xFF;
      }
  }
}

// #line 570
static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setTrswB(bool enable) reentrant 
// #line 570
{



  if (enable) {
      XBYTE[0x2200 + 0x0D] &= 0xCF;
      XBYTE[0x2200 + 0x0D] |= 0x10;
    }
  else {
      XBYTE[0x2200 + 0x0D] &= 0xCF;
    }
}

// #line 558
static /*inline*/ void MG245XCommCsmaP__MG245XCommConfig__setTrsw(bool enable) reentrant 
// #line 558
{

  if (enable) {
      XBYTE[0x2200 + 0x0D] &= 0x3F;
      XBYTE[0x2200 + 0x0D] |= 0x40;
      XBYTE[0x2200 + 0x79] &= 0x0F;
    }
  else {
      XBYTE[0x2200 + 0x0D] &= 0x3F;
    }
}

// #line 83
static /*inline*/ void MG245XCommCsmaP__SetDelay(uint16_t delay1, uint16_t delay2) reentrant 
// #line 83
{
  uint16_t cnt1;
  uint16_t cnt2;

  cnt1 = delay1;
  cnt2 = delay2;

  while (cnt1) {
      while (cnt2) {
          cnt2 = cnt2 - 1;
        }
      cnt1 = cnt1 - 1;
      cnt2 = delay2;
    }
}

// #line 127
static /*inline*/ void MG245XCommCsmaP__startDone__runTask(void ) reentrant 
// #line 127
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 128
    {
      uint8_t modemOnIntSts;
      uint8_t modemOnIntIdx;
      uint8_t _RFIE;



      if (XBYTE[0x2200 + 0x9F] == 0x91) {

          XBYTE[0x2200 + 0x13] = 0x7F;

          XBYTE[0x2200 + 0x23] = 0xFF;
          XBYTE[0x2200 + 0x25] = 0xE1;
          XBYTE[0x2200 + 0x28] = 0xA2;
          XBYTE[0x2200 + 0x2A] = 0x69;
          XBYTE[0x2200 + 0x2B] = 0xA2;

          XBYTE[0x2200 + 0x31] = 0xD7;
          XBYTE[0x2200 + 0x32] = 0xD7;
          XBYTE[0x2200 + 0x33] = 0xEF;
          XBYTE[0x2200 + 0x3A] = 0xF7;
          XBYTE[0x2200 + 0x3B] = 0x77;
          XBYTE[0x2200 + 0x3C] = 0x88;
          XBYTE[0x2200 + 0x3E] = 0x3F;

          XBYTE[0x2200 + 0x62] = 0xFF;
          XBYTE[0x2200 + 0x6D] = 0x00;
          XBYTE[0x2200 + 0x6F] = 0x00;

          XBYTE[0x2200 + 0x73] = 0xDF;
          XBYTE[0x2200 + 0x79] = 0x9E;

          XBYTE[0x2200 + 0x89] = 0x6C;
          XBYTE[0x2200 + 0x8A] = 0x01;
          XBYTE[0x2200 + 0x8B] = 0x22;
          XBYTE[0x2200 + 0x8C] = 0x80;
          XBYTE[0x2200 + 0x8D] = 0xA8;
          XBYTE[0x2200 + 0x8E] = 0x5A;
          XBYTE[0x2200 + 0x8F] = 0x4F;

          XBYTE[0x2200 + 0x90] = 0x12;
          XBYTE[0x2200 + 0x91] = 0x50;
          XBYTE[0x2200 + 0x92] = 0x22;
          XBYTE[0x2200 + 0x93] = 0x28;
          XBYTE[0x2200 + 0x94] = 0xE8;
          XBYTE[0x2200 + 0x95] = 0x4B;
          XBYTE[0x2200 + 0x99] = 0xF8;
          XBYTE[0x2200 + 0x9B] = 0x04;
          XBYTE[0x2200 + 0x9C] = 0x8A;
          XBYTE[0x2200 + 0x9D] = 0x62;
          XBYTE[0x2200 + 0x9E] = 0xE9;

          XBYTE[0x2200 + 0xA0] = 0x9F;
          XBYTE[0x2200 + 0xA1] = 0xFF;
          XBYTE[0x2200 + 0xA2] = 0x6F;
          XBYTE[0x2200 + 0xA4] = 0x12;
          XBYTE[0x2200 + 0xA7] = 0x34;
          XBYTE[0x2200 + 0xAB] = 0x30;

          XBYTE[0x2200 + 0xCC] = 0xBF;
          XBYTE[0x2200 + 0x0C] = 0xFD;

          XBYTE[0x2200 + 0x02] = 0xFF;
          XBYTE[0x2200 + 0x03] = 0xFF;
          XBYTE[0x2200 + 0x04] = 0xFF;
          XBYTE[0x2200 + 0x05] = 0xFF;
          XBYTE[0x2200 + 0x06] = 0xFF;
          XBYTE[0x2200 + 0x07] = 0xFF;
          XBYTE[0x2200 + 0x01] = 0x84;








          XBYTE[0x2200 + 0x98] = 0x03;
          XBYTE[0x2200 + 0xB5] = 0x6C;
          XBYTE[0x2200 + 0xB0] = 0xC5;
          MG245XCommCsmaP__SetDelay(1, 20000);
          XBYTE[0x2200 + 0xB0] = 0xC9;

          _RFIE = RFIE;
          RFIE = 0;
          XBYTE[0x2200 + 0x77] = 0xF1;
          XBYTE[0x2200 + 0x00] &= 0x7F;
          XBYTE[0x2200 + 0x00] &= 0xBF;

          while (1) {
              modemOnIntSts = XBYTE[0x2200 + 0x7E] & 0x0F;
              if (modemOnIntSts != 0x0F) {
                  modemOnIntIdx = XBYTE[0x2200 + 0x78];
                  EXIF &= 0xEF;
                  if (modemOnIntSts == 0x0E) {
                    break;
                    }
                }
            }
          XBYTE[0x2200 + 0x77] = 0xFE;
          RFIE = _RFIE;
        }
      else {
          XBYTE[0x2200 + 0x0C] = 0xFD;
          XBYTE[0x2200 + 0x40] = 0xC0;
          XBYTE[0x2200 + 0x13] = 0x7F;

          XBYTE[0x2200 + 0x1D] = 0xFF;


          XBYTE[0x2200 + 0x20] = 0xC2;
          XBYTE[0x2200 + 0x21] = 0x81;
          XBYTE[0x2200 + 0x23] = 0xFF;
          XBYTE[0x2200 + 0x25] = 0xDE;
          XBYTE[0x2200 + 0x26] = 0xD9;
          XBYTE[0x2200 + 0x27] = 0x83;
          XBYTE[0x2200 + 0x28] = 0x8B;
          XBYTE[0x2200 + 0x2A] = 0xE0;
          XBYTE[0x2200 + 0x2B] = 0x20;
          XBYTE[0x2200 + 0x2F] = 0xCE;
          XBYTE[0x2200 + 0x30] = 0xD8;
          XBYTE[0x2200 + 0x31] = 0xE7;
          XBYTE[0x2200 + 0x32] = 0xE7;
          XBYTE[0x2200 + 0x33] = 0xEF;
          XBYTE[0x2200 + 0x3A] = 0xF6;
          XBYTE[0x2200 + 0x3B] = 0x77;
          XBYTE[0x2200 + 0x3C] = 0x88;
          XBYTE[0x2200 + 0x3E] = 0x3F;


          XBYTE[0x2200 + 0x89] = 0x6F;
          XBYTE[0x2200 + 0x8A] = 0x0A;
          XBYTE[0x2200 + 0x8B] = 0x32;
          XBYTE[0x2200 + 0x8D] = 0xE8;
          XBYTE[0x2200 + 0x8E] = 0xFA;
          XBYTE[0x2200 + 0x8F] = 0x7F;
          XBYTE[0x2200 + 0x90] = 0x12;
          XBYTE[0x2200 + 0x91] = 0x70;
          XBYTE[0x2200 + 0x92] = 0x12;
          XBYTE[0x2200 + 0x93] = 0x2A;
          XBYTE[0x2200 + 0x94] = 0xF8;
          XBYTE[0x2200 + 0x95] = 0x4F;
          XBYTE[0x2200 + 0x98] = 0x00;
          XBYTE[0x2200 + 0x9B] = 0x01;
          XBYTE[0x2200 + 0x9C] = 0x9F;
          XBYTE[0x2200 + 0x9D] = 0x78;
          XBYTE[0x2200 + 0x9E] = 0xE0;
          XBYTE[0x2200 + 0xA0] = 0x9F;
          XBYTE[0x2200 + 0xA1] = 0xFF;
          XBYTE[0x2200 + 0xA2] = 0x6F;
          XBYTE[0x2200 + 0xA4] = 0x12;
          XBYTE[0x2200 + 0xA7] = 0x11;
          XBYTE[0x2200 + 0xAB] = 0x30;

          XBYTE[0x2200 + 0x04] = 0xF7;
          XBYTE[0x2200 + 0x05] = 0xFF;
          XBYTE[0x2200 + 0x00] &= 0x7F;








          XBYTE[0x2200 + 0x02] = 0xFF;
          XBYTE[0x2200 + 0x03] = 0xFF;
          XBYTE[0x2200 + 0x04] = 0xF7;
          XBYTE[0x2200 + 0x05] = 0xFF;
          XBYTE[0x2200 + 0x06] = 0xFF;
          XBYTE[0x2200 + 0x07] = 0xFF;
          XBYTE[0x2200 + 0x01] = 0x84;



          XBYTE[0x2200 + 0xC0] = 0xC2;
          XBYTE[0x2200 + 0x04] = 0xF7;
          XBYTE[0x2200 + 0x05] = 0xFF;
          XBYTE[0x2200 + 0xB5] = 0x1C;
          XBYTE[0x2200 + 0x97] = 0x06;
          XBYTE[0x2200 + 0x98] = 0x00;
          XBYTE[0x2200 + 0xB0] = 0xC5;

          while (XBYTE[0x2200 + 0xB0] & 0x04) ;
          XBYTE[0x2200 + 0xC0] = 0xFF;
          XBYTE[0x2200 + 0xB5] = 0x08;
          XBYTE[0x2200 + 0xB0] = 0xC9;
          XBYTE[0x2200 + 0x05] = 0x00;

          _RFIE = RFIE;
          RFIE = 0;
          XBYTE[0x2200 + 0x77] = 0xF1;
          XBYTE[0x2200 + 0x00] &= 0x7F;
          XBYTE[0x2200 + 0x00] &= 0xBF;

          while (1) {
              modemOnIntSts = XBYTE[0x2200 + 0x7E] & 0x0F;

              if (modemOnIntSts != 0x0F) {
                  modemOnIntIdx = XBYTE[0x2200 + 0x78];
                  EXIF &= 0xEF;

                  if (modemOnIntSts == 0x0E) {
                    break;
                    }
                }
            }
          XBYTE[0x2200 + 0x77] = 0xFE;
          XBYTE[0x2200 + 0x62] = 0xFF;
          XBYTE[0x2200 + 0x6D] = 0x00;
          XBYTE[0x2200 + 0x6F] = 0x00;
          XBYTE[0x2200 + 0xC4] = 0x7B;
          RFIE = _RFIE;
        }


      XBYTE[0x2191 + 0] = 0x16;
      XBYTE[0x2082 + 0] = 0;
      XBYTE[0x2081 + 0] = 0;
      XBYTE[0x2002 + 0] = 0;
      XBYTE[0x2001 + 0] = 0;









      XBYTE[0x2200 + 0xC0] |= 1 << 0;
      XBYTE[0x2200 + 0xC0] &= ~(1 << 4);

      MG245XCommCsmaP__MG245XCommConfig__setTrsw(FALSE);
      MG245XCommCsmaP__MG245XCommConfig__setTrswB(FALSE);
      MG245XCommCsmaP__MG245XCommConfig__setChannel(MG245XCommCsmaP__m_channel);
      MG245XCommCsmaP__MG245XCommConfig__setPanAddr(MG245XCommCsmaP__m_pan);
      MG245XCommCsmaP__MG245XCommConfig__setShortAddr(MG245XCommCsmaP__amAddress());
      MG245XCommCsmaP__MG245XCommConfig__setTxPower(MG245XCommCsmaP__m_tx_power);


      MG245XCommCsmaP__m_state = MG245XCommCsmaP__S_STARTED;
      MG245XCommCsmaP__SubControl__start();


      RFIP = 0;
      RFIE = 1;
    }
// #line 375
    __nesc_atomic_end(__nesc_atomic); }
  MG245XCommCsmaP__SplitControl__startDone(SUCCESS);
}

// # 86 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
static /*inline*/ void HplMG245XGeneralIOP__Port15__toggle(void ) reentrant 
// #line 86
{
// #line 86
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 86
    {
// #line 86
      P1_5 = ~P1_5;
    }
// #line 87
    __nesc_atomic_end(__nesc_atomic); }
}

// # 48 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
/*inline*/ static void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__HplGeneralIO__toggle(void ) reentrant {
// #line 48
  HplMG245XGeneralIOP__Port15__toggle();
// #line 48
}
// #line 48
// # 43 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__toggle(void ) reentrant 
// #line 43
{
// #line 43
  /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__HplGeneralIO__toggle();
}

// # 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
/*inline*/ static void LedsP__Led0__toggle(void ) reentrant {
// #line 42
  /*PlatformLedsC.Led0Impl*/MG245XGpioC__0__GeneralIO__toggle();
// #line 42
}
// #line 42
// # 84 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static /*inline*/ void LedsP__Leds__led0Toggle(void ) reentrant 
// #line 84
{
  LedsP__Led0__toggle();
  ;
// #line 86
  ;
}

// # 67 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
/*inline*/ static void BaseStationP__Leds__led0Toggle(void ) reentrant {
// #line 67
  LedsP__Leds__led0Toggle();
// #line 67
}
// #line 67
// # 327 "/usr/lib/ncc/nesc_nx.h"
static /*__inline*/  uint16_t __nesc_hton_leuint16(void * target, uint16_t value) reentrant 
// #line 327
{
  uint8_t *base = target;

// #line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

// #line 297
static /*__inline*/  uint8_t __nesc_hton_leuint8(void * target, uint8_t value) reentrant 
// #line 297
{
  uint8_t *base = target;

// #line 299
  base[0] = value;
  return value;
}

// #line 315
static /*__inline*/  uint16_t __nesc_hton_uint16(void * target, uint16_t value) reentrant 
// #line 315
{
  uint8_t *base = target;

// #line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

// #line 303
static /*__inline*/  int8_t __nesc_hton_int8(void * target, int8_t value) reentrant 
// #line 303
{
// #line 303
  __nesc_hton_uint8(target, value);
// #line 303
  return value;
}

// #line 292
static /*__inline*/  uint8_t __nesc_ntoh_leuint8(const void * source) reentrant 
// #line 292
{
  const uint8_t *base = source;

// #line 294
  return base[0];
}

// # 93 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ mg245x_comm_header_t *MG245XCommTransmitP__getHeader(message_t *msg) reentrant 
// #line 93
{
  return (mg245x_comm_header_t *)(msg->_data - sizeof(mg245x_comm_header_t ));
}

// #line 196
static /*inline*/ error_t MG245XCommTransmitP__send(message_t *p_msg, bool cca) reentrant 
// #line 196
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 197
    {
      mg245x_comm_header_t *msg_header = MG245XCommTransmitP__getHeader(p_msg);

      if (MG245XCommTransmitP__m_state != MG245XCommTransmitP__S_STARTED) 
        {
          unsigned char __nesc_temp = 
// #line 201
          FAIL;

          {
// #line 201
            __nesc_atomic_end(__nesc_atomic); 
// #line 201
            return __nesc_temp;
          }
        }






      MG245XCommTransmitP__m_msg = p_msg;

      memcpy(&XBYTE[0x2300 + 0], p_msg, __nesc_ntoh_leuint8(msg_header->length.nxdata) - 1);


      XBYTE[0x2192 + 0] = *&XBYTE[0x2300 + 3];

      if (MG245XCommTransmitP__startTransmission() != SUCCESS) {
          goto SEND_FAIL;
        }



      if (TRUE == TRUE) {


          MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_BEGIN_MSG_SEND;
          MG245XCommTransmitP__timeValue = 3227;
          MG245XCommTransmitP__startSendMsgTimer__postTask();
        }
      else {
          MG245XCommTransmitP__cancelTransmission();
          SEND_FAIL: 
            MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_CCA_WAIT;
          MG245XCommTransmitP__timeValue = MG245XCommTransmitP__CsmaBackoff__initial(MG245XCommTransmitP__m_msg) * 
          MG245XCOMM_BACKOFF_PERIOD * 2;
          MG245XCommTransmitP__startWaitCcaTimer__postTask();
        }
    }
// #line 238
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

static /*inline*/ error_t MG245XCommTransmitP__Send__sendCCA(message_t *p_msg) reentrant 
// #line 243
{
  return MG245XCommTransmitP__send(p_msg, TRUE);
}

// # 50 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommTransmit.nc"
/*inline*/ static error_t MG245XCommCsmaP__MG245XCommTransmit__sendCCA(message_t *p_msg) reentrant {
// #line 50
  unsigned char __nesc_result;
// #line 50

// #line 50
  __nesc_result = MG245XCommTransmitP__Send__sendCCA(p_msg);
// #line 50

// #line 50
  return __nesc_result;
// #line 50
}
// #line 50
// # 68 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
/*inline*/ static am_addr_t MG245XCommCsmaP__AMPacket__address(void ) reentrant {
// #line 68
  unsigned int __nesc_result;
// #line 68

// #line 68
  __nesc_result = MG245XCommActiveMessageP__AMPacket__address();
// #line 68

// #line 68
  return __nesc_result;
// #line 68
}
// #line 68
// # 103 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static /*inline*/ mg245x_comm_metadata_t *MG245XCommCsmaP__getMetadata(message_t *msg) reentrant 
// #line 103
{
  return (mg245x_comm_metadata_t *)msg->metadata;
}

// #line 99
static /*inline*/ mg245x_comm_header_t *MG245XCommCsmaP__getHeader(message_t *msg) reentrant 
// #line 99
{
  return (mg245x_comm_header_t *)(msg->_data - sizeof(mg245x_comm_header_t ));
}

// #line 672
static /*inline*/ error_t MG245XCommCsmaP__Send__send(message_t *p_msg, uint8_t len) reentrant 
// #line 672
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
// #line 673
  mg245x_comm_header_t *header = MG245XCommCsmaP__getHeader(p_msg);
  mg245x_comm_metadata_t *metadata = MG245XCommCsmaP__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 676
    {
      if (MG245XCommCsmaP__m_state != MG245XCommCsmaP__S_STARTED) 
        {
          unsigned char __nesc_temp = 
// #line 678
          FAIL;

          {
// #line 678
            __nesc_atomic_end(__nesc_atomic); 
// #line 678
            return __nesc_temp;
          }
        }
// #line 679
      MG245XCommCsmaP__m_state = MG245XCommCsmaP__S_TRANSMIT;
      MG245XCommCsmaP__m_msg = p_msg;
      __nesc_hton_leuint8(header->dsn.nxdata, ++MG245XCommCsmaP__m_dsn);
    }
// #line 682
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8(header->length.nxdata, len);
  (__nesc_temp42 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));
  (__nesc_temp43 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));
  __nesc_hton_leuint16(header->src.nxdata, MG245XCommCsmaP__AMPacket__address());
  __nesc_hton_leuint8(header->network.nxdata, 0x3F);
  __nesc_hton_int8(metadata->ack.nxdata, FALSE);
  __nesc_hton_uint8(metadata->rssi.nxdata, 0);
  __nesc_hton_uint8(metadata->lqi.nxdata, 0);
  __nesc_hton_uint16(metadata->time.nxdata, 0);





  return MG245XCommCsmaP__MG245XCommTransmit__sendCCA(MG245XCommCsmaP__m_msg);
}

// # 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
/*inline*/ static error_t MG245XCommActiveMessageP__SubSend__send(message_t * msg, uint8_t len) reentrant {
// #line 75
  unsigned char __nesc_result;
// #line 75

// #line 75
  __nesc_result = MG245XCommCsmaP__Send__send(msg, len);
// #line 75

// #line 75
  return __nesc_result;
// #line 75
}
// #line 75
// # 65 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static /*inline*/ error_t MG245XCommActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len) reentrant 
// #line 67
{
  mg245x_comm_header_t *header = MG245XCommActiveMessageP__getHeader(msg);

// #line 69
  __nesc_hton_leuint8(header->type.nxdata, id);
  __nesc_hton_leuint16(header->dest.nxdata, addr);
  __nesc_hton_leuint16(header->destpan.nxdata, TOS_AM_GROUP);

  return MG245XCommActiveMessageP__SubSend__send(msg, len + MG245XCommActiveMessageP__MG245XCOMM_SIZE);
}

// # 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
/*inline*/ static error_t BaseStationP__RadioSend__send(am_id_t arg_0x7dea3940, am_addr_t addr, message_t * msg, uint8_t len) reentrant {
// #line 80
  unsigned char __nesc_result;
// #line 80

// #line 80
  __nesc_result = MG245XCommActiveMessageP__AMSend__send(arg_0x7dea3940, addr, msg, len);
// #line 80

// #line 80
  return __nesc_result;
// #line 80
}
// #line 80
// # 140 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static /*inline*/ void MG245XCommActiveMessageP__AMPacket__setSource(message_t *amsg, am_addr_t addr) reentrant 
// #line 140
{
  mg245x_comm_header_t *header = MG245XCommActiveMessageP__getHeader(amsg);

// #line 142
  __nesc_hton_leuint16(header->src.nxdata, addr);
}

// # 121 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
/*inline*/ static void BaseStationP__RadioAMPacket__setSource(message_t * amsg, am_addr_t addr) reentrant {
// #line 121
  MG245XCommActiveMessageP__AMPacket__setSource(amsg, addr);
// #line 121
}
// #line 121
// # 173 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static /*inline*/ void MG245XCommActiveMessageP__Packet__clear(message_t *msg) reentrant 
// #line 173
{
}

// # 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
/*inline*/ static void BaseStationP__RadioPacket__clear(message_t * msg) reentrant {
// #line 65
  MG245XCommActiveMessageP__Packet__clear(msg);
// #line 65
}
// #line 65
// # 147 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
/*inline*/ static am_id_t BaseStationP__UartAMPacket__type(message_t * amsg) reentrant {
// #line 147
  unsigned char __nesc_result;
// #line 147

// #line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
// #line 147

// #line 147
  return __nesc_result;
// #line 147
}
// #line 147
// # 310 "/usr/lib/ncc/nesc_nx.h"
static /*__inline*/  uint16_t __nesc_ntoh_uint16(const void * source) reentrant 
// #line 310
{
  const uint8_t *base = source;

// #line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

// # 160 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(message_t *amsg) reentrant 
// #line 160
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

// #line 162
  return __nesc_ntoh_uint16(header->src.nxdata);
}

// # 88 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
/*inline*/ static am_addr_t BaseStationP__UartAMPacket__source(message_t * amsg) reentrant {
// #line 88
  unsigned int __nesc_result;
// #line 88

// #line 88
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(amsg);
// #line 88

// #line 88
  return __nesc_result;
// #line 88
}
// #line 88
// # 155 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg) reentrant 
// #line 155
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

// #line 157
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

// # 78 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
/*inline*/ static am_addr_t BaseStationP__UartAMPacket__destination(message_t * amsg) reentrant {
// #line 78
  unsigned int __nesc_result;
// #line 78

// #line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
// #line 78

// #line 78
  return __nesc_result;
// #line 78
}
// #line 78
// # 129 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg) reentrant 
// #line 129
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

// #line 131
  return __nesc_ntoh_uint8(header->length.nxdata);
}

// # 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
/*inline*/ static uint8_t BaseStationP__UartPacket__payloadLength(message_t * msg) reentrant {
// #line 78
  unsigned char __nesc_result;
// #line 78

// #line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
// #line 78

// #line 78
  return __nesc_result;
// #line 78
}
// #line 78
// # 270 "BaseStationP.nc"
static /*inline*/ void BaseStationP__radioSendTask__runTask(void ) reentrant 
// #line 270
{
  uint8_t len;
  am_id_t id;
  am_addr_t addr;
// #line 273
  am_addr_t source;
  message_t *msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (BaseStationP__radioIn == BaseStationP__radioOut && !BaseStationP__radioFull) 
      {
        BaseStationP__radioBusy = FALSE;
        {
// #line 280
          __nesc_atomic_end(__nesc_atomic); 
// #line 280
          return;
        }
      }
// #line 282
    __nesc_atomic_end(__nesc_atomic); }
  msg = BaseStationP__radioQueue[BaseStationP__radioOut];
  len = BaseStationP__UartPacket__payloadLength(msg);
  addr = BaseStationP__UartAMPacket__destination(msg);
  source = BaseStationP__UartAMPacket__source(msg);
  id = BaseStationP__UartAMPacket__type(msg);

  BaseStationP__RadioPacket__clear(msg);
  BaseStationP__RadioAMPacket__setSource(msg, source);

  if (BaseStationP__RadioSend__send(id, addr, msg, len) == SUCCESS) {
    BaseStationP__Leds__led0Toggle();
    }
  else {
      BaseStationP__failBlink();
      BaseStationP__radioSendTask__postTask();
    }
}

// # 87 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
static /*inline*/ void HplMG245XGeneralIOP__Port16__toggle(void ) reentrant 
// #line 87
{
// #line 87
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 87
    {
// #line 87
      P1_6 = ~P1_6;
    }
// #line 88
    __nesc_atomic_end(__nesc_atomic); }
}

// # 48 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIO.nc"
/*inline*/ static void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__HplGeneralIO__toggle(void ) reentrant {
// #line 48
  HplMG245XGeneralIOP__Port16__toggle();
// #line 48
}
// #line 48
// # 43 "/home/Suchang/work/mg/tos/chips/mg245x/pins/MG245XGpioC.nc"
static /*inline*/ void /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__toggle(void ) reentrant 
// #line 43
{
// #line 43
  /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__HplGeneralIO__toggle();
}

// # 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
/*inline*/ static void LedsP__Led1__toggle(void ) reentrant {
// #line 42
  /*PlatformLedsC.Led1Impl*/MG245XGpioC__1__GeneralIO__toggle();
// #line 42
}
// #line 42
// # 99 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static /*inline*/ void LedsP__Leds__led1Toggle(void ) reentrant 
// #line 99
{
  LedsP__Led1__toggle();
  ;
// #line 101
  ;
}

// # 83 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
/*inline*/ static void BaseStationP__Leds__led1Toggle(void ) reentrant {
// #line 83
  LedsP__Leds__led1Toggle();
// #line 83
}
// #line 83
// # 538 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ error_t SerialP__SendBytePacket__startSend(uint8_t b) reentrant 
// #line 538
{
  bool not_busy = FALSE;

// #line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
// #line 542
          EOFF;

          {
// #line 542
            __nesc_atomic_end(__nesc_atomic); 
// #line 542
            return __nesc_temp;
          }
        }
    }
// #line 545
    __nesc_atomic_end(__nesc_atomic); }
// #line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
// #line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

// # 62 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
/*inline*/ static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte) reentrant {
// #line 62
  unsigned char __nesc_result;
// #line 62

// #line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
// #line 62

// #line 62
  return __nesc_result;
// #line 62
}
// #line 62
// # 54 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static /*inline*/ uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen) reentrant 
// #line 54
{
  return upperLen + sizeof(serial_header_t );
}

// # 361 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen) reentrant 
// #line 362
{
  return 0;
}

// # 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
/*inline*/ static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x7d4ce3a8, message_t *msg, uint8_t upperLen) reentrant {
// #line 23
  unsigned char __nesc_result;
// #line 23

// #line 23
  switch (arg_0x7d4ce3a8) {
// #line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
// #line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
// #line 23
      break;
// #line 23
    default:
// #line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x7d4ce3a8, msg, upperLen);
// #line 23
      break;
// #line 23
    }
// #line 23

// #line 23
  return __nesc_result;
// #line 23
}
// #line 23
// # 111 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len) reentrant 
// #line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
// #line 119
            ESIZE;

            {
// #line 119
              __nesc_atomic_end(__nesc_atomic); 
// #line 119
              return __nesc_temp;
            }
          }
        }
// #line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
// #line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

// # 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
/*inline*/ static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len) reentrant {
// #line 75
  unsigned char __nesc_result;
// #line 75

// #line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
// #line 75

// #line 75
  return __nesc_result;
// #line 75
}
// #line 75
// # 138 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void ) reentrant 
// #line 138
{
  return 28;
}

// #line 73
static /*inline*/ error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len) reentrant 
// #line 75
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

// # 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
/*inline*/ static error_t BaseStationP__UartSend__send(am_id_t arg_0x7dee11b8, am_addr_t addr, message_t * msg, uint8_t len) reentrant {
// #line 80
  unsigned char __nesc_result;
// #line 80

// #line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x7dee11b8, addr, msg, len);
// #line 80

// #line 80
  return __nesc_result;
// #line 80
}
// #line 80
// # 196 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(message_t *msg, am_group_t group) reentrant 
// #line 196
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

// #line 198
  __nesc_hton_uint8(header->group.nxdata, group);
}

// # 187 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
/*inline*/ static void BaseStationP__UartAMPacket__setGroup(message_t * amsg, am_group_t grp) reentrant {
// #line 187
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(amsg, grp);
// #line 187
}
// #line 187
// # 170 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(message_t *amsg, am_addr_t addr) reentrant 
// #line 170
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

// #line 172
  __nesc_hton_uint16(header->src.nxdata, addr);
}

// # 121 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
/*inline*/ static void BaseStationP__UartAMPacket__setSource(message_t * amsg, am_addr_t addr) reentrant {
// #line 121
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(amsg, addr);
// #line 121
}
// #line 121
// # 122 "/home/Suchang/work/mg/tos/platforms/mango2/lib/serial/SerialActiveMessageP.nc"
static /*inline*/ void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(message_t *msg) reentrant 
// #line 122
{

  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

// #line 125
  memset(header, 0, sizeof(serial_header_t ));
  return;
}

// # 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
/*inline*/ static void BaseStationP__UartPacket__clear(message_t * msg) reentrant {
// #line 65
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(msg);
// #line 65
}
// #line 65
// # 198 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static /*inline*/ am_group_t MG245XCommActiveMessageP__AMPacket__group(message_t *msg) reentrant 
// #line 198
{
}

// # 177 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
/*inline*/ static am_group_t BaseStationP__RadioAMPacket__group(message_t * amsg) reentrant {
// #line 177
  unsigned char __nesc_result;
// #line 177

// #line 177
  __nesc_result = MG245XCommActiveMessageP__AMPacket__group(amsg);
// #line 177

// #line 177
  return __nesc_result;
// #line 177
}
// #line 177
// # 130 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static /*inline*/ am_addr_t MG245XCommActiveMessageP__AMPacket__source(message_t *amsg) reentrant 
// #line 130
{
  mg245x_comm_header_t *header = MG245XCommActiveMessageP__getHeader(amsg);

// #line 132
  return __nesc_ntoh_leuint16(header->src.nxdata);
}

// # 88 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
/*inline*/ static am_addr_t BaseStationP__RadioAMPacket__source(message_t * amsg) reentrant {
// #line 88
  unsigned int __nesc_result;
// #line 88

// #line 88
  __nesc_result = MG245XCommActiveMessageP__AMPacket__source(amsg);
// #line 88

// #line 88
  return __nesc_result;
// #line 88
}
// #line 88
// #line 78
/*inline*/ static am_addr_t BaseStationP__RadioAMPacket__destination(message_t * amsg) reentrant {
// #line 78
  unsigned int __nesc_result;
// #line 78

// #line 78
  __nesc_result = MG245XCommActiveMessageP__AMPacket__destination(amsg);
// #line 78

// #line 78
  return __nesc_result;
// #line 78
}
// #line 78
// #line 147
/*inline*/ static am_id_t BaseStationP__RadioAMPacket__type(message_t * amsg) reentrant {
// #line 147
  unsigned char __nesc_result;
// #line 147

// #line 147
  __nesc_result = MG245XCommActiveMessageP__AMPacket__type(amsg);
// #line 147

// #line 147
  return __nesc_result;
// #line 147
}
// #line 147
// # 175 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static /*inline*/ uint8_t MG245XCommActiveMessageP__Packet__payloadLength(message_t *msg) reentrant 
// #line 175
{
  return __nesc_ntoh_leuint8(MG245XCommActiveMessageP__getHeader(msg)->length.nxdata) - MG245XCommActiveMessageP__MG245XCOMM_SIZE;
}

// # 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
/*inline*/ static uint8_t BaseStationP__RadioPacket__payloadLength(message_t * msg) reentrant {
// #line 78
  unsigned char __nesc_result;
// #line 78

// #line 78
  __nesc_result = MG245XCommActiveMessageP__Packet__payloadLength(msg);
// #line 78

// #line 78
  return __nesc_result;
// #line 78
}
// #line 78
// # 190 "BaseStationP.nc"
static /*inline*/ void BaseStationP__uartSendTask__runTask(void ) reentrant 
// #line 190
{
  uint8_t len;
  am_id_t id;
  am_addr_t addr;
// #line 193
  am_addr_t src;
  message_t *msg;
  am_group_t grp;

// #line 196
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (BaseStationP__uartIn == BaseStationP__uartOut && !BaseStationP__uartFull) 
      {
        BaseStationP__uartBusy = FALSE;
        {
// #line 200
          __nesc_atomic_end(__nesc_atomic); 
// #line 200
          return;
        }
      }
// #line 202
    __nesc_atomic_end(__nesc_atomic); }
  msg = BaseStationP__uartQueue[BaseStationP__uartOut];
  BaseStationP__tmpLen = len = BaseStationP__RadioPacket__payloadLength(msg);
  id = BaseStationP__RadioAMPacket__type(msg);
  addr = BaseStationP__RadioAMPacket__destination(msg);
  src = BaseStationP__RadioAMPacket__source(msg);
  grp = BaseStationP__RadioAMPacket__group(msg);
  BaseStationP__UartPacket__clear(msg);
  BaseStationP__UartAMPacket__setSource(msg, src);
  BaseStationP__UartAMPacket__setGroup(msg, grp);

  if (BaseStationP__UartSend__send(id, addr, BaseStationP__uartQueue[BaseStationP__uartOut], len) == SUCCESS) {
    BaseStationP__Leds__led1Toggle();
    }
  else {
      BaseStationP__failBlink();
      BaseStationP__uartSendTask__postTask();
    }
}

// # 67 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommReceiveP.nc"
static /*inline*/ error_t MG245XCommReceiveP__Init__init(void ) reentrant 
// #line 67
{
  MG245XCommReceiveP__m_p_rx_buf = &MG245XCommReceiveP__m_rx_buf;
  return SUCCESS;
}

// # 175 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ error_t MG245XCommTransmitP__SoftwareInit__init(void ) reentrant 
// #line 175
{
  /* atomic removed: atomic calls only */
// #line 176
  {
    MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_STOPPED;
    MG245XCommTransmitP__MultipurposeTimer__stop();
  }
  return SUCCESS;
}

// # 107 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static /*inline*/ error_t MG245XCommCsmaP__Init__init(void ) reentrant 
// #line 107
{
  if (MG245XCommCsmaP__m_state != MG245XCommCsmaP__S_PREINIT) {
    return FAIL;
    }
  MG245XCommCsmaP__m_state = MG245XCommCsmaP__S_STOPPED;

  return SUCCESS;
}

// # 55 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static /*inline*/ error_t RandomMlcgC__Init__init(void ) reentrant 
// #line 55
{
  /* atomic removed: atomic calls only */
// #line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

// # 102 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
/*inline*/ static void /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__setScale(void ) reentrant {
// #line 102
  HplMG245XTimerAsyncC__Timer__setScale();
// #line 102
}
// #line 102
// #line 75
/*inline*/ static void /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__start(void ) reentrant {
// #line 75
  HplMG245XTimerAsyncC__Timer__start();
// #line 75
}
// #line 75
// #line 64
/*inline*/ static void /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__set(/*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__timer_size t) reentrant {
// #line 64
  HplMG245XTimerAsyncC__Timer__set(t);
// #line 64
}
// #line 64
// # 47 "/opt/mg-original/tos/chips/mg245x/timer/MG245XTimerInitC.nc"
static /*inline*/ error_t /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Init__init(void ) reentrant 
// #line 47
{
  /* atomic removed: atomic calls only */
// #line 48
  {
    /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__set(0);
    /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__start();



    /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__setScale();
  }
  return SUCCESS;
}

// # 216 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*__inline*/ void SerialP__ackInit(void ) reentrant 
// #line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

// #line 207
static /*__inline*/ void SerialP__rxInit(void ) reentrant 
// #line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

// #line 195
static /*__inline*/ void SerialP__txInit(void ) reentrant 
// #line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
// #line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

// #line 220
static /*inline*/ error_t SerialP__Init__init(void ) reentrant 
// #line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

// # 63 "/opt/mg-original/tos/chips/mg245x/uart/MG245XUartP.nc"
static /*inline*/ error_t /*MG245XUartC.UartP*/MG245XUartP__0__Init__init(void ) reentrant 
// #line 63
{
  /*MG245XUartC.UartP*/MG245XUartP__0__m_rx_buf = (void *)0;
  /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_buf = (void *)0;
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*MG245XUartC.UartP*/MG245XUartP__0__m_byte_time = 200;
    }
  else {
// #line 68
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*MG245XUartC.UartP*/MG245XUartP__0__m_byte_time = 68;
      }
    }
// #line 70
  return SUCCESS;
}

// # 541 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
static /*inline*/ void HplMG245XUartP__setBaudrate(uint8_t channel, uint32_t baudrate) reentrant 
{
  uint8_t dlm = 0;
// #line 543
  uint8_t dll = 0;

// #line 544
  if (XBYTE[0x2200 + 0xC3] == 0) {
      switch (baudrate) 
        {
          case 300: dlm = 0x1D;
// #line 547
          dll = 0xC3;
// #line 547
          break;
          case 600: dlm = 0x0E;
// #line 548
          dll = 0xE1;
// #line 548
          break;
          case 1200: dlm = 0x07;
// #line 549
          dll = 0x71;
// #line 549
          break;
          case 2400: dlm = 0x03;
// #line 550
          dll = 0xB8;
// #line 550
          break;
          case 4800: dlm = 0x01;
// #line 551
          dll = 0xDC;
// #line 551
          break;
          case 9600: dlm = 0x00;
// #line 552
          dll = 0xEE;
// #line 552
          break;
          case 14400: dlm = 0x00;
// #line 553
          dll = 0x9F;
// #line 553
          break;
          case 19200: dlm = 0x00;
// #line 554
          dll = 0x77;
// #line 554
          break;
          case 38400LU: dlm = 0x00;
// #line 555
          dll = 0x3C;
// #line 555
          break;
          case 56000LU: dlm = 0x00;
// #line 556
          dll = 0x29;
// #line 556
          break;
          case 57600LU: dlm = 0x00;
// #line 557
          dll = 0x28;
// #line 557
          break;
          case 76800LU: dlm = 0x00;
// #line 558
          dll = 0x1E;
// #line 558
          break;
          case 115200LU: dlm = 0x00;
// #line 559
          dll = 0x14;
// #line 559
          break;
          case 230400LU: dlm = 0x00;
// #line 560
          dll = 0x0A;
// #line 560
          break;
          case 460800LU: dlm = 0x00;
// #line 561
          dll = 0x05;
// #line 561
          break;
          case 576000LU: dlm = 0x00;
// #line 562
          dll = 0x04;
// #line 562
          break;
          case 1152000LU: dlm = 0x00;
// #line 563
          dll = 0x02;
// #line 563
          break;
          default: dlm = 0x00;
// #line 564
          dll = 0x14;
// #line 564
          break;
        }
    }
  else 
// #line 566
    {
      switch (baudrate) 
        {
          case 300: dlm = 0x0E;
// #line 569
          dll = 0xE1;
// #line 569
          break;
          case 600: dlm = 0x07;
// #line 570
          dll = 0x71;
// #line 570
          break;
          case 1200: dlm = 0x03;
// #line 571
          dll = 0xB8;
// #line 571
          break;
          case 2400: dlm = 0x01;
// #line 572
          dll = 0xDC;
// #line 572
          break;
          case 4800: dlm = 0x00;
// #line 573
          dll = 0xEE;
// #line 573
          break;
          case 9600: dlm = 0x00;
// #line 574
          dll = 0x77;
// #line 574
          break;
          case 14400: dlm = 0x00;
// #line 575
          dll = 0x4F;
// #line 575
          break;
          case 19200: dlm = 0x00;
// #line 576
          dll = 0x3C;
// #line 576
          break;
          case 38400LU: dlm = 0x00;
// #line 577
          dll = 0x1E;
// #line 577
          break;
          case 56000LU: dlm = 0x00;
// #line 578
          dll = 0x14;
// #line 578
          break;
          case 57600LU: dlm = 0x00;
// #line 579
          dll = 0x14;
// #line 579
          break;
          case 76800LU: dlm = 0x00;
// #line 580
          dll = 0x0F;
// #line 580
          break;
          case 115200LU: dlm = 0x00;
// #line 581
          dll = 0x0A;
// #line 581
          break;
          case 230400LU: dlm = 0x00;
// #line 582
          dll = 0x05;
// #line 582
          break;
          case 288000LU: dlm = 0x00;
// #line 583
          dll = 0x04;
// #line 583
          break;
          case 576000LU: dlm = 0x00;
// #line 584
          dll = 0x02;
// #line 584
          break;
          default: dlm = 0x00;
// #line 585
          dll = 0x0A;
// #line 585
          break;
        }
    }
  if (channel == 0) {
      XBYTE[0x2503 + 0] |= 0x80;
      XBYTE[0x2500 + 0] = dll;
      XBYTE[0x2501 + 0] = dlm;
      XBYTE[0x2503 + 0] &= 0x7F;
    }
  else 
// #line 593
    {
      XBYTE[0x2513 + 0] |= 0x80;
      XBYTE[0x2510 + 0] = dll;
      XBYTE[0x2511 + 0] = dlm;
      XBYTE[0x2513 + 0] &= 0x7F;
    }
}

// #line 326
static /*inline*/ error_t HplMG245XUartP__Uart1Init__init(void ) reentrant 
// #line 326
{
  /* atomic removed: atomic calls only */
// #line 352
  {

    XBYTE[0x2512 + 0] = 0x06;
    XBYTE[0x2513 + 0] = 0x03;
    XBYTE[0x2514 + 0] = 0x00;

    HplMG245XUartP__setBaudrate(1, 38400LU);
  }






  return SUCCESS;
}

// # 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
/*inline*/ static error_t RealMainP__SoftwareInit__init(void ) reentrant {
// #line 62
  unsigned char __nesc_result;
// #line 62

// #line 62
  __nesc_result = HplMG245XUartP__Uart1Init__init();
// #line 62
  __nesc_result = ecombine(__nesc_result, /*MG245XUartC.UartP*/MG245XUartP__0__Init__init());
// #line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
// #line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Init__init());
// #line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
// #line 62
  __nesc_result = ecombine(__nesc_result, MG245XCommCsmaP__Init__init());
// #line 62
  __nesc_result = ecombine(__nesc_result, MG245XCommTransmitP__SoftwareInit__init());
// #line 62
  __nesc_result = ecombine(__nesc_result, MG245XCommReceiveP__Init__init());
// #line 62

// #line 62
  return __nesc_result;
// #line 62
}
// #line 62
// # 83 "/opt/mg-original/tos/chips/mg245x/MG245XHardware.h"
static /*__inline*/ void __nesc_enable_interrupt() reentrant 
// #line 83
{

  EA = 1;
}

// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t SerialP__startDoneTask__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 348 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ error_t SerialP__SplitControl__start(void ) reentrant 
// #line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
// #line 351
          EALREADY;

          {
// #line 351
            __nesc_atomic_end(__nesc_atomic); 
// #line 351
            return __nesc_temp;
          }
        }
    }
// #line 354
    __nesc_atomic_end(__nesc_atomic); }
// #line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

// # 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
/*inline*/ static error_t BaseStationP__SerialControl__start(void ) reentrant {
// #line 104
  unsigned char __nesc_result;
// #line 104

// #line 104
  __nesc_result = SerialP__SplitControl__start();
// #line 104

// #line 104
  return __nesc_result;
// #line 104
}
// #line 104
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t MG245XCommCsmaP__startDone__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MG245XCommCsmaP__startDone);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 116 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static /*inline*/ error_t MG245XCommCsmaP__SplitControl__start(void ) reentrant 
// #line 116
{
  if (MG245XCommCsmaP__m_state != MG245XCommCsmaP__S_STOPPED) {
    return FAIL;
    }
  MG245XCommCsmaP__m_state = MG245XCommCsmaP__S_STARTING;
  MG245XCommCsmaP__m_dsn = MG245XCommCsmaP__Random__rand16();
  MG245XCommCsmaP__startDone__postTask();

  return SUCCESS;
}

// # 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
/*inline*/ static error_t BaseStationP__RadioControl__start(void ) reentrant {
// #line 104
  unsigned char __nesc_result;
// #line 104

// #line 104
  __nesc_result = MG245XCommCsmaP__SplitControl__start();
// #line 104

// #line 104
  return __nesc_result;
// #line 104
}
// #line 104
// # 109 "BaseStationP.nc"
static /*inline*/ void BaseStationP__Boot__booted(void ) reentrant 
// #line 109
{
  uint8_t i;

  for (i = 0; i < BaseStationP__UART_QUEUE_LEN; i++) 
    BaseStationP__uartQueue[i] = &BaseStationP__uartQueueBufs[i];
  BaseStationP__uartIn = BaseStationP__uartOut = 0;
  BaseStationP__uartBusy = FALSE;
  BaseStationP__uartFull = TRUE;

  for (i = 0; i < BaseStationP__RADIO_QUEUE_LEN; i++) 
    BaseStationP__radioQueue[i] = &BaseStationP__radioQueueBufs[i];
  BaseStationP__radioIn = BaseStationP__radioOut = 0;
  BaseStationP__radioBusy = FALSE;
  BaseStationP__radioFull = TRUE;

  if (BaseStationP__RadioControl__start() == EALREADY) {
    BaseStationP__radioFull = FALSE;
    }
// #line 126
  if (BaseStationP__SerialControl__start() == EALREADY) {
    BaseStationP__uartFull = FALSE;
    }
}

// # 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
/*inline*/ static void RealMainP__Boot__booted(void ) reentrant {
// #line 60
  BaseStationP__Boot__booted();
// #line 60
}
// #line 60
// # 114 "/opt/mg-original/tos/chips/mg245x/McuSleepC.nc"
static /*inline*/ void McuSleepC__McuSleep__sleep(void ) reentrant 
// #line 114
{
// #line 126
  uint8_t cnt = 10;
  uint8_t ea = EA;

  EA = 1;
  while (--cnt) ;
  EA = ea;
}

// # 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
/*inline*/ static void SchedulerBasicP__McuSleep__sleep(void ) reentrant {
// #line 76
  McuSleepC__McuSleep__sleep();
// #line 76
}
// #line 76
// # 67 "/home/Suchang/work/mg/tos/platforms/mango2/system/SchedulerBasicP.nc"
static /*__inline*/ uint8_t SchedulerBasicP__popTask(void ) reentrant 
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

// #line 72
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

// #line 141
static /*inline*/ void SchedulerBasicP__Scheduler__taskLoop(void ) reentrant 
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
// #line 153
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

// # 72 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
/*inline*/ static void RealMainP__Scheduler__taskLoop(void ) reentrant {
// #line 72
  SchedulerBasicP__Scheduler__taskLoop();
// #line 72
}
// #line 72
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t MG245XCommTransmitP__stopWaitAckTimer__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MG245XCommTransmitP__stopWaitAckTimer);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 97 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ mg245x_comm_metadata_t *MG245XCommTransmitP__getMetadata(message_t *msg) reentrant 
// #line 97
{
  return (mg245x_comm_metadata_t *)msg->metadata;
}

// #line 348
static /*inline*/ void MG245XCommTransmitP__MG245XCommReceive__receiveAckDone(message_t *msg) reentrant 
// #line 348
{
  /* atomic removed: atomic calls only */
// #line 349
  {
    mg245x_comm_header_t *ack_header = MG245XCommTransmitP__getHeader(msg);
    mg245x_comm_header_t *msg_header = MG245XCommTransmitP__getHeader(MG245XCommTransmitP__m_msg);
    mg245x_comm_metadata_t *msg_metadata = MG245XCommTransmitP__getMetadata(MG245XCommTransmitP__m_msg);
    uint8_t *ack_buf = (uint8_t *)ack_header;
    uint8_t length = ack_buf[0];

    if (MG245XCommTransmitP__m_state == MG245XCommTransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.nxdata) == __nesc_ntoh_leuint8(ack_header->dsn.nxdata)) {
        MG245XCommTransmitP__stopWaitAckTimer__postTask();
        __nesc_hton_int8(msg_metadata->ack.nxdata, TRUE);
        __nesc_hton_uint8(msg_metadata->rssi.nxdata, ack_buf[length - 1]);
        __nesc_hton_uint8(msg_metadata->lqi.nxdata, ack_buf[length] & 0x7f);
        MG245XCommTransmitP__signalDone(SUCCESS);
      }
  }
}

// # 67 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommReceive.nc"
/*inline*/ static void MG245XCommReceiveP__MG245XCommReceive__receiveAckDone(message_t *message) reentrant {
// #line 67
  MG245XCommTransmitP__MG245XCommReceive__receiveAckDone(message);
// #line 67
}
// #line 67
// # 365 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ void MG245XCommTransmitP__MG245XCommReceive__sendAck(uint8_t framePend, message_t *msg) reentrant 
// #line 365
{
  /* atomic removed: atomic calls only */
// #line 366
  {
    mg245x_comm_header_t *msg_header = MG245XCommTransmitP__getHeader(msg);
    uint8_t sts;
    uint8_t idx;
    uint16_t wait;
    uint8_t rfie;




    if (MG245XCommTransmitP__m_state != MG245XCommTransmitP__S_STARTED) {
        return;
      }

    rfie = RFIE;
    RFIE = 0;

    EXIF &= 0xEF;




    sts = XBYTE[0x2200 + 0x7E];
    idx = XBYTE[0x2200 + 0x78];

    MG245XCommTransmitP__cancelTransmission();




    XBYTE[0x2300 + 0] = 0x09;
    XBYTE[0x2300 + 1] = 0x02;
    if (framePend) {
// #line 398
      XBYTE[0x2300 + 1] |= 0x10;
      }
// #line 399
    XBYTE[0x2300 + 2] = 0x00;
    XBYTE[0x2300 + 3] = __nesc_ntoh_leuint8(msg_header->dsn.nxdata);
    XBYTE[0x2300 + 4] = (uint8_t )__nesc_ntoh_leuint16(msg_header->destpan.nxdata);
    XBYTE[0x2300 + 5] = (uint8_t )(__nesc_ntoh_leuint16(msg_header->destpan.nxdata) >> 8);
    XBYTE[0x2300 + 6] = (uint8_t )__nesc_ntoh_leuint16(msg_header->src.nxdata);
    XBYTE[0x2300 + 7] = (uint8_t )(__nesc_ntoh_leuint16(msg_header->src.nxdata) >> 8);


    if (MG245XCommTransmitP__startTransmission() != SUCCESS) {
        goto SEND_ACK_FAIL;
      }

    for (wait = 0; wait < 1000; wait++) {
        sts = XBYTE[0x2200 + 0x7E] & 0x0F;

        if (sts != 0x0F) {
            idx = XBYTE[0x2200 + 0x78];
            EXIF &= 0xEF;

            if (sts == 0x0D) {
                break;
              }
          }

        if (wait == 999) {
            MG245XCommTransmitP__cancelTransmission();
          }
      }
    SEND_ACK_FAIL: 



      RFIE = rfie;
  }
}

// # 68 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommReceive.nc"
/*inline*/ static void MG245XCommReceiveP__MG245XCommReceive__sendAck(uint8_t framePend, message_t *message) reentrant {
// #line 68
  MG245XCommTransmitP__MG245XCommReceive__sendAck(framePend, message);
// #line 68
}
// #line 68
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t MG245XCommReceiveP__receiveMsgDone__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MG245XCommReceiveP__receiveMsgDone);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
/*inline*/ static error_t MG245XCommTransmitP__startWaitAckTimer__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MG245XCommTransmitP__startWaitAckTimer);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
/*inline*/ static error_t MG245XCommTransmitP__stopSendMsgTimer__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MG245XCommTransmitP__stopSendMsgTimer);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 271 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static /*inline*/ void MG245XCommTransmitP__MG245XCommReceive__sendMsgDone(void ) reentrant 
// #line 271
{
  /* atomic removed: atomic calls only */
// #line 272
  {
    MG245XCommTransmitP__stopSendMsgTimer__postTask();

    if (XBYTE[0x2300 + 1] & (1 << IEEE154_FCF_ACK_REQ)) {
        MG245XCommTransmitP__m_state = MG245XCommTransmitP__S_ACK_WAIT;
        MG245XCommTransmitP__timeValue = 1333;
        MG245XCommTransmitP__startWaitAckTimer__postTask();
      }
    else {
// #line 280
      if (MG245XCommTransmitP__m_state == MG245XCommTransmitP__S_BEGIN_MSG_SEND) {
          MG245XCommTransmitP__signalDone(SUCCESS);
        }
      }
  }
}

// # 69 "/opt/mg-original/tos/chips/mg245x/comm/MG245XCommReceive.nc"
/*inline*/ static void MG245XCommReceiveP__MG245XCommReceive__sendMsgDone(void ) reentrant {
// #line 69
  MG245XCommTransmitP__MG245XCommReceive__sendMsgDone();
// #line 69
}
// #line 69
// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__fired);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 74 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/AlarmToTimerC.nc"
static /*inline*/ void /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void ) reentrant 
{
// #line 75
  /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

// # 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*inline*/ static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__fired(void ) reentrant {
// #line 78
  /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
// #line 78
}
// #line 78
// # 245 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/TransformAlarmCounterC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__fired(void ) reentrant 
{
  /* atomic removed: atomic calls only */
  {
    if (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt == 0) 
      {
        /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Alarm__fired();
      }
    else 
      {
        /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__set_alarm();
      }
  }
}

// # 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*inline*/ static void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__fired(void ) reentrant {
// #line 78
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__fired();
// #line 78
}
// #line 78
// # 121 "/opt/mg-original/tos/chips/mg245x/timer/MG245XAlarmC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__fired(void ) reentrant 
// #line 121
{
  /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__stop();


  /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__Alarm__fired();
}

// # 51 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XCompare.nc"
/*inline*/ static void HplMG245XTimerAsyncC__Compare__fired(void ) reentrant {
// #line 51
  /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XCompare__fired();
// #line 51
}
// #line 51
// # 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static /*inline*/ void /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void ) reentrant 
{
}

// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
/*inline*/ static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__overflow(void ) reentrant {
// #line 82
  /*HilTimer3MicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
// #line 82
}
// #line 82
// # 154 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/TransformAlarmCounterC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__overflow(void ) reentrant 
{
  /* atomic removed: atomic calls only */
  {
    /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_upper++;
    if ((/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_upper & /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__OVERFLOW_MASK) == 0) {
      /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__overflow();
      }
    if (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_skip_overflows && ! --/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_skip_overflows) {
      /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__set_alarm();
      }
  }
}

// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
/*inline*/ static void /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__overflow(void ) reentrant {
// #line 82
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__overflow();
// #line 82
}
// #line 82
// # 57 "/opt/mg-original/tos/chips/mg245x/timer/MG245XCounterC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__overflow(void ) reentrant 
{
  /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Counter__overflow();
}

// # 128 "/opt/mg-original/tos/chips/mg245x/timer/MG245XAlarmC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__overflow(void ) reentrant 
// #line 128
{
}

// # 59 "/opt/mg-original/tos/chips/mg245x/timer/MG245XTimerInitC.nc"
static /*inline*/ void /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__overflow(void ) reentrant 
// #line 59
{
}

// # 176 "/opt/mg-original/tos/chips/mg245x/uart/MG245XUartP.nc"
static /*inline*/ void /*MG245XUartC.UartP*/MG245XUartP__0__Counter__overflow(void ) reentrant 
// #line 176
{
}

// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
/*inline*/ static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void ) reentrant {
// #line 82
  /*MG245XUartC.UartP*/MG245XUartP__0__Counter__overflow();
// #line 82
}
// #line 82
// # 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*inline*/ void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void ) reentrant 
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper++;
    if ((/*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow();
      }
  }
}

// # 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
/*inline*/ static void /*CounterThree16C.NCounter*/MG245XCounterC__1__Counter__overflow(void ) reentrant {
// #line 82
  /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
// #line 82
}
// #line 82
// # 57 "/opt/mg-original/tos/chips/mg245x/timer/MG245XCounterC.nc"
static /*inline*/ void /*CounterThree16C.NCounter*/MG245XCounterC__1__Timer__overflow(void ) reentrant 
{
  /*CounterThree16C.NCounter*/MG245XCounterC__1__Counter__overflow();
}

// # 59 "/opt/mg-original/tos/chips/mg245x/timer/MG245XTimerInitC.nc"
static /*inline*/ void /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__overflow(void ) reentrant 
// #line 59
{
}

// # 67 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimer.nc"
/*inline*/ static void HplMG245XTimerAsyncC__Timer__overflow(void ) reentrant {
// #line 67
  /*InitThreeP.InitThree*/MG245XTimerInitC__1__Timer__overflow();
// #line 67
  /*CounterThree16C.NCounter*/MG245XCounterC__1__Timer__overflow();
// #line 67
  /*AlarmCounter3MicroP.T3MicroInit*/MG245XTimerInitC__0__Timer__overflow();
// #line 67
  /*AlarmCounter3MicroP.T3MicroAlarm*/MG245XAlarmC__0__HplMG245XTimer__overflow();
// #line 67
  /*AlarmCounter3MicroP.T3MicroCounter*/MG245XCounterC__0__Timer__overflow();
// #line 67
}
// #line 67
// # 616 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
static /*inline*/ void HplMG245XUartP__HplUart0__default__rxDone(uint8_t _data) reentrant 
// #line 616
{
}

// # 51 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
/*inline*/ static void HplMG245XUartP__HplUart0__rxDone(uint8_t _data) reentrant {
// #line 51
  HplMG245XUartP__HplUart0__default__rxDone(_data);
// #line 51
}
// #line 51
// # 615 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
static /*inline*/ void HplMG245XUartP__HplUart0__default__txDone(void ) reentrant 
// #line 615
{
}

// # 49 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
/*inline*/ static void HplMG245XUartP__HplUart0__txDone(void ) reentrant {
// #line 49
  HplMG245XUartP__HplUart0__default__txDone();
// #line 49
}
// #line 49
// # 397 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ void SerialP__SerialFrameComm__dataReceived(uint8_t _data) reentrant 
// #line 397
{
  SerialP__rx_state_machine(FALSE, _data);
}

// # 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
/*inline*/ static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t _data) reentrant {
// #line 94
  SerialP__SerialFrameComm__dataReceived(_data);
// #line 94
}
// #line 94
// # 394 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ void SerialP__SerialFrameComm__delimiterReceived(void ) reentrant 
// #line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

// # 85 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
/*inline*/ static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ) reentrant {
// #line 85
  SerialP__SerialFrameComm__delimiterReceived();
// #line 85
}
// #line 85
// # 73 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static /*inline*/ void HdlcTranslateC__UartStream__receivedByte(uint8_t _data) reentrant 
// #line 73
{






  if (_data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
// #line 85
    if (_data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
// #line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          _data = _data ^ 0x20;
        }
      }
    }
// #line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(_data);
}

// # 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
/*inline*/ static void /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__receivedByte(uint8_t byte) reentrant {
// #line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
// #line 79
}
// #line 79
// # 132 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static /*inline*/ void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error) reentrant 
// #line 132
{
}

// # 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
/*inline*/ static void /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error) reentrant {
// #line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
// #line 99
}
// #line 99
// # 111 "/opt/mg-original/tos/chips/mg245x/uart/MG245XUartP.nc"
static /*inline*/ void /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__rxDone(uint8_t _data) reentrant 
// #line 111
{

  if (/*MG245XUartC.UartP*/MG245XUartP__0__m_rx_buf) {
      /*MG245XUartC.UartP*/MG245XUartP__0__m_rx_buf[/*MG245XUartC.UartP*/MG245XUartP__0__m_rx_pos++] = _data;
      if (/*MG245XUartC.UartP*/MG245XUartP__0__m_rx_pos >= /*MG245XUartC.UartP*/MG245XUartP__0__m_rx_len) {
          uint8_t *buf = /*MG245XUartC.UartP*/MG245XUartP__0__m_rx_buf;

// #line 117
          /*MG245XUartC.UartP*/MG245XUartP__0__m_rx_buf = (void *)0;
          /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__receiveDone(buf, /*MG245XUartC.UartP*/MG245XUartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__receivedByte(_data);
    }
}

// # 51 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
/*inline*/ static void HplMG245XUartP__HplUart1__rxDone(uint8_t _data) reentrant {
// #line 51
  /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__rxDone(_data);
// #line 51
}
// #line 51
// # 401 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ bool SerialP__valid_rx_proto(uint8_t proto) reentrant 
// #line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

// # 203 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void ) reentrant 
// #line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

// #line 199
static /*inline*/ bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void ) reentrant 
// #line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

// #line 226
static /*inline*/ error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void ) reentrant 
// #line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
// #line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

// # 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
/*inline*/ static error_t SerialP__ReceiveBytePacket__startPacket(void ) reentrant {
// #line 62
  unsigned char __nesc_result;
// #line 62

// #line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
// #line 62

// #line 62
  return __nesc_result;
// #line 62
}
// #line 62
// # 311 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*__inline*/ uint16_t SerialP__rx_current_crc(void ) reentrant 
// #line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

// #line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

// # 80 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
/*inline*/ static void SerialP__ReceiveBytePacket__endPacket(error_t result) reentrant {
// #line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
// #line 80
}
// #line 80
// # 221 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void ) reentrant 
// #line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

// # 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
/*inline*/ static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ) reentrant {
// #line 67
  unsigned char __nesc_result;
// #line 67

// #line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
// #line 67

// #line 67
  return __nesc_result;
// #line 67
}
// #line 67
// # 234 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*__inline*/ bool SerialP__ack_queue_is_full(void ) reentrant 
// #line 234
{
  uint8_t tmp;
// #line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
// #line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
// #line 240
    tmp = 0;
    }
// #line 241
  return tmp == tmp2;
}







static /*__inline*/ void SerialP__ack_queue_push(uint8_t token) reentrant 
// #line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
// #line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
// #line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
// #line 256
      SerialP__MaybeScheduleTx();
    }
}

// # 67 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static /*inline*/ void HdlcTranslateC__SerialFrameComm__resetReceive(void ) reentrant 
// #line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

// # 79 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
/*inline*/ static void SerialP__SerialFrameComm__resetReceive(void ) reentrant {
// #line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
// #line 79
}
// #line 79
// # 244 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b) reentrant 
// #line 244
{
  /* atomic removed: atomic calls only */
// #line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
// #line 266
            ;
      }
  }
}

// # 69 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
/*inline*/ static void SerialP__ReceiveBytePacket__byteReceived(uint8_t _data) reentrant {
// #line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(_data);
// #line 69
}
// #line 69
// # 301 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*__inline*/ uint8_t SerialP__rx_buffer_top(void ) reentrant 
// #line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

// #line 303
  return tmp;
}

// #line 305
static /*__inline*/ uint8_t SerialP__rx_buffer_pop(void ) reentrant 
// #line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

// #line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
// #line 307
    SerialP__rxBuf.readPtr = 0;
    }
// #line 308
  return tmp;
}

// #line 297
static /*__inline*/ void SerialP__rx_buffer_push(uint8_t _data) reentrant 
// #line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = _data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
// #line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

// # 65 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
/*inline*/ static error_t SerialP__SerialFrameComm__putData(uint8_t _data) reentrant {
// #line 65
  unsigned char __nesc_result;
// #line 65

// #line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(_data);
// #line 65

// #line 65
  return __nesc_result;
// #line 65
}
// #line 65
// # 529 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ error_t SerialP__SendBytePacket__completeSend(void ) reentrant 
// #line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
// #line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

// # 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
/*inline*/ static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ) reentrant {
// #line 71
  unsigned char __nesc_result;
// #line 71

// #line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
// #line 71

// #line 71
  return __nesc_result;
// #line 71
}
// #line 71
// # 178 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static /*inline*/ uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void ) reentrant 
// #line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
// #line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

// # 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
/*inline*/ static uint8_t SerialP__SendBytePacket__nextByte(void ) reentrant {
// #line 81
  unsigned char __nesc_result;
// #line 81

// #line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
// #line 81

// #line 81
  return __nesc_result;
// #line 81
}
// #line 81
// # 668 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static /*inline*/ void SerialP__SerialFrameComm__putDone(void ) reentrant 
// #line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
// #line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

// #line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

// # 100 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
/*inline*/ static void HdlcTranslateC__SerialFrameComm__putDone(void ) reentrant {
// #line 100
  SerialP__SerialFrameComm__putDone();
// #line 100
}
// #line 100
// # 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
/*inline*/ static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len) reentrant {
// #line 48
  unsigned char __nesc_result;
// #line 48

// #line 48
  __nesc_result = /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__send(buf, len);
// #line 48

// #line 48
  return __nesc_result;
// #line 48
}
// #line 48
// # 118 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static /*inline*/ void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error) reentrant 
// #line 119
{
  /* atomic removed: atomic calls only */
// #line 120
  {
    if (HdlcTranslateC__state.sendEscape) {
        HdlcTranslateC__state.sendEscape = 0;
        HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
        HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
      }
    else {
        HdlcTranslateC__SerialFrameComm__putDone();
      }
  }
}

// # 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
/*inline*/ static void /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error) reentrant {
// #line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
// #line 57
}
// #line 57
// # 492 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
static /*inline*/ void HplMG245XUartP__HplUart1__tx(uint8_t _data) reentrant 
// #line 492
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 493
    {








      XBYTE[0x2510 + 0] = _data;
    }
// #line 503
    __nesc_atomic_end(__nesc_atomic); }
}

// # 48 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
/*inline*/ static void /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__tx(uint8_t _data) reentrant {
// #line 48
  HplMG245XUartP__HplUart1__tx(_data);
// #line 48
}
// #line 48
// # 143 "/opt/mg-original/tos/chips/mg245x/uart/MG245XUartP.nc"
static /*inline*/ void /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__txDone(void ) reentrant 
// #line 143
{
  if (/*MG245XUartC.UartP*/MG245XUartP__0__m_tx_buf) {
      if (/*MG245XUartC.UartP*/MG245XUartP__0__m_tx_pos < /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_len) {
          /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__tx(/*MG245XUartC.UartP*/MG245XUartP__0__m_tx_buf[/*MG245XUartC.UartP*/MG245XUartP__0__m_tx_pos++]);
        }
      else {
          uint8_t *buf = /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_buf;

// #line 150
          /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_buf = (void *)0;
          /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__sendDone(buf, /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_len, SUCCESS);
        }
    }
}

// # 49 "/opt/mg-original/tos/chips/mg245x/uart/HplMG245XUart.nc"
/*inline*/ static void HplMG245XUartP__HplUart1__txDone(void ) reentrant {
// #line 49
  /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__txDone();
// #line 49
}
// #line 49
// # 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
// #line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
// #line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
// #line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

// # 126 "/home/Suchang/work/mg/tos/platforms/mango2/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void ) reentrant 
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
// #line 130
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
// #line 134
          FALSE;

// #line 134
          return __nesc_temp;
        }
      }
  }
// #line 137
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

// #line 167
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id) reentrant 
{
}

// # 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7e031ec8) reentrant {
// #line 75
  switch (arg_0x7e031ec8) {
// #line 75
    case BaseStationP__uartSendTask:
// #line 75
      BaseStationP__uartSendTask__runTask();
// #line 75
      break;
// #line 75
    case BaseStationP__radioSendTask:
// #line 75
      BaseStationP__radioSendTask__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommCsmaP__startDone:
// #line 75
      MG245XCommCsmaP__startDone__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommCsmaP__stopDone:
// #line 75
      MG245XCommCsmaP__stopDone__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommCsmaP__syncDone:
// #line 75
      MG245XCommCsmaP__syncDone__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommCsmaP__sendDone:
// #line 75
      MG245XCommCsmaP__sendDone__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommTransmitP__startSendMsgTimer:
// #line 75
      MG245XCommTransmitP__startSendMsgTimer__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommTransmitP__startWaitCcaTimer:
// #line 75
      MG245XCommTransmitP__startWaitCcaTimer__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommTransmitP__startWaitAckTimer:
// #line 75
      MG245XCommTransmitP__startWaitAckTimer__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommTransmitP__stopSendMsgTimer:
// #line 75
      MG245XCommTransmitP__stopSendMsgTimer__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommTransmitP__stopWaitAckTimer:
// #line 75
      MG245XCommTransmitP__stopWaitAckTimer__runTask();
// #line 75
      break;
// #line 75
    case MG245XCommReceiveP__receiveMsgDone:
// #line 75
      MG245XCommReceiveP__receiveMsgDone__runTask();
// #line 75
      break;
// #line 75
    case /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__fired:
// #line 75
      /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
// #line 75
      break;
// #line 75
    case /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
// #line 75
      /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
// #line 75
      break;
// #line 75
    case SerialP__RunTx:
// #line 75
      SerialP__RunTx__runTask();
// #line 75
      break;
// #line 75
    case SerialP__startDoneTask:
// #line 75
      SerialP__startDoneTask__runTask();
// #line 75
      break;
// #line 75
    case SerialP__stopDoneTask:
// #line 75
      SerialP__stopDoneTask__runTask();
// #line 75
      break;
// #line 75
    case SerialP__defaultSerialFlushTask:
// #line 75
      SerialP__defaultSerialFlushTask__runTask();
// #line 75
      break;
// #line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
// #line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
// #line 75
      break;
// #line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
// #line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
// #line 75
      break;
// #line 75
    default:
// #line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7e031ec8);
// #line 75
      break;
// #line 75
    }
// #line 75
}
// #line 75
// # 88 "/home/Suchang/work/mg/tos/chips/mg245x/pins/HplMG245XGeneralIOP.nc"
static void HplMG245XGeneralIOP__Port17__toggle(void ) reentrant 
// #line 88
{
// #line 88
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 88
    {
// #line 88
      P1_7 = ~P1_7;
    }
// #line 89
    __nesc_atomic_end(__nesc_atomic); }
}

// # 162 "/home/Suchang/work/mg/tos/platforms/mango2/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id) reentrant 
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 164
    {
// #line 164
      {
        unsigned char __nesc_temp = 
// #line 164
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
// #line 164
          __nesc_atomic_end(__nesc_atomic); 
// #line 164
          return __nesc_temp;
        }
      }
    }
// #line 167
    __nesc_atomic_end(__nesc_atomic); }
}

// # 357 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void ) reentrant 
// #line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
// #line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
// #line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
// #line 370
      SerialP__offPending = TRUE;
    }
}

// # 98 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void ) reentrant 
// #line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
// #line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

// # 127 "/opt/mg-original/tos/chips/mg245x/uart/MG245XUartP.nc"
static error_t /*MG245XUartC.UartP*/MG245XUartP__0__UartStream__send(uint8_t *buf, uint16_t len) reentrant 
// #line 127
{

  if (len == 0) {
    return FAIL;
    }
  else {
// #line 131
    if (/*MG245XUartC.UartP*/MG245XUartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
// #line 134
  /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_buf = buf;
  /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_len = len;
  /*MG245XUartC.UartP*/MG245XUartP__0__m_tx_pos = 0;
  /*MG245XUartC.UartP*/MG245XUartP__0__HplUart__tx(buf[/*MG245XUartC.UartP*/MG245XUartP__0__m_tx_pos++]);

  return SUCCESS;
}

// # 518 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void ) reentrant 
// #line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
// #line 525
    __nesc_atomic_end(__nesc_atomic); }
}

// # 89 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/AlarmToTimerC.nc"
static uint32_t /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void ) reentrant 
{
// #line 90
  uint32_t rslt;

// #line 90
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 90
    {
// #line 90
      rslt = /*HilTimer3MicroC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
    }
// #line 91
    __nesc_atomic_end(__nesc_atomic); }
// #line 90
  return rslt;
}

// # 101 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/TransformAlarmCounterC.nc"
static /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__get(void ) reentrant 
{
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type rv = 0;

  /* atomic removed: atomic calls only */
// #line 105
  {
    /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__upper_count_type high = /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_upper;
    /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_size_type low = /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__get();

// #line 108
    if (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__isOverflowPending()) 
      {






        high++;
        low = /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__CounterFrom__get();
      }
    {
      /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type high_to = high;
      /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type low_to = low >> /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__LOW_SHIFT_RIGHT;

// #line 122
      rv = (high_to << /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__HIGH_SHIFT_LEFT) | low_to;
    }
  }
  return rv;
}

// # 62 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
static uint16_t HplMG245XTimerAsyncC__Timer__get(void ) reentrant 
// #line 62
{
  uint16_t getHigh = TH0;
  uint16_t getLow = TL0;

  return (getHigh << 8) | getLow;
}

// # 73 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now) reentrant 
{
  uint16_t num;

  for (num = 0; num < /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
// #line 90
                timer->t0 += timer->dt;
                }
              /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

// # 73 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommTransmitP.nc"
static error_t MG245XCommTransmitP__startTransmission(void ) reentrant 
// #line 73
{
  uint8_t rxSts = XBYTE[0x2200 + 0x70] & 0x70;

  if (rxSts != 0x00 && rxSts != 0x10) {
      return FAIL;
    }

  XBYTE[0x2002 + 0] = 0;
  XBYTE[0x2200 + 0x00] &= 0xFB;
  return SUCCESS;
}

static void MG245XCommTransmitP__cancelTransmission(void ) reentrant 
// #line 85
{
  XBYTE[0x2200 + 0x00] |= 0x04;
  XBYTE[0x2200 + 0xCC] &= 0xFE;
  XBYTE[0x2200 + 0xCC] |= 0x01;
  XBYTE[0x2200 + 0xCC] &= 0xFD;
  XBYTE[0x2200 + 0xCC] |= 0x02;
}

// # 69 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void ) reentrant 
// #line 69
{
  uint32_t mlcg;
// #line 70
  uint32_t p;
// #line 70
  uint32_t q;
 uint32_t tmpseed;

// #line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint32_t )33614U * (uint32_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
// #line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

// # 712 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommCsmaP.nc"
static uint16_t MG245XCommCsmaP__CsmaBackoff__initial(message_t *m) reentrant 
// #line 712
{
  return (MG245XCommCsmaP__Random__rand16() & 0x1f) + 1;
}

// # 187 "/home/Suchang/work/mg/tos/platforms/mango2/lib/timer/TransformAlarmCounterC.nc"
static void /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__set_alarm(void ) reentrant 
{
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type now = /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__Counter__get();
// #line 189
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type elapsed = now - /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_t0;
// #line 189
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type remaining;

  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_skip_overflows = 0;
  if (elapsed >= /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt) 
    {
      remaining = 0;
      /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_t0 += /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt;
      /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt = 0;
    }
  else 
    {
      remaining = /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt - elapsed;




      if (remaining > (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type )/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__MAX_DELAY * 2) 
        {
          if (remaining >= (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type )/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__MAX_DELAY * 2 * (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type )256) {
            /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_skip_overflows = 255;
            }
          else {
// #line 210
            /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_skip_overflows = remaining / ((/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type )/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__MAX_DELAY * 2);
            }
// #line 211
          return;
        }

      if (remaining > (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__to_size_type )/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__MAX_DELAY) 
        {
          /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_t0 = now + /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__MAX_DELAY;
          /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt = remaining - /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__MAX_DELAY;
          remaining = /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__MAX_DELAY;
        }
      else 
        {
          /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_t0 += /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt;
          /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__m_dt = 0;
        }
    }
  /*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__AlarmFrom__startAt((/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_size_type )now << 1, 
  (/*AlarmCounter3MicroP.Transform32*/TransformAlarmCounterC__0__from_size_type )remaining << 1);
}

// # 106 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void ) reentrant 
// #line 106
{
  am_addr_t myAddr;

// #line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 108
    myAddr = ActiveMessageAddressC__addr;
// #line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

// # 161 "BaseStationP.nc"
static message_t *BaseStationP__receive(message_t *msg, void *payload, uint8_t len) reentrant 
// #line 161
{
  message_t *ret = msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
// #line 164
    {
      if (!BaseStationP__uartFull) 
        {
          ret = BaseStationP__uartQueue[BaseStationP__uartIn];
          BaseStationP__uartQueue[BaseStationP__uartIn] = msg;

          BaseStationP__uartIn = (BaseStationP__uartIn + 1) % BaseStationP__UART_QUEUE_LEN;

          if (BaseStationP__uartIn == BaseStationP__uartOut) {
            BaseStationP__uartFull = TRUE;
            }
          if (!BaseStationP__uartBusy) 
            {
              BaseStationP__uartSendTask__postTask();
              BaseStationP__uartBusy = TRUE;
            }
        }
      else {
        BaseStationP__dropBlink();
        }
    }
// #line 184
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}

// # 150 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommActiveMessageP.nc"
static am_id_t MG245XCommActiveMessageP__AMPacket__type(message_t *amsg) reentrant 
// #line 150
{
  mg245x_comm_header_t *header = MG245XCommActiveMessageP__getHeader(amsg);

// #line 152
  return __nesc_ntoh_leuint8(header->type.nxdata);
}

// # 144 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot) reentrant 
{
  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

// #line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimer3MicroC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

// # 146 "/home/Suchang/work/mg/tos/chips/mg245x/comm/MG245XCommReceiveP.nc"
void __vector_8(void) interrupt 8
// #line 146
{
  uint8_t intStatus;

  uint8_t intIndex;
  uint8_t len;

  uint16_t fcf;

  static uint8_t nextFifo = 0;


  intStatus = XBYTE[0x2200 + 0x7E] & 0x0F;
  intIndex = XBYTE[0x2200 + 0x78];
  EXIF &= 0xEF;

  if (intStatus == 0x07) {
      if (MG245XCommReceiveP__packetLock == TRUE) {
          return;
        }

      XBYTE[0x2200 + 0x9E] = 0xE0;


      if (!nextFifo) {
          len = XBYTE[0x2400 + 0];

          fcf = (uint16_t )(XBYTE[0x2400 + 0x02] << 8) | 
          XBYTE[0x2400 + 0x01];
        }
      else {
          len = XBYTE[0x2400 + 0x80];

          fcf = (uint16_t )(XBYTE[0x2400 + 0x82] << 8) | 
          XBYTE[0x2400 + 0x81];
        }


      if (len < 0x05 || len > MAC_PACKET_SIZE) {
          goto PACKET_ERROR;
        }








      if (fcf != 0x8861 && fcf != 0x8841 && fcf != 0x0002) {
          goto PACKET_ERROR;
        }

      if (!nextFifo) {
          if (XBYTE[0x2400 + 0x04] != *&XBYTE[0x2158 + 0] || 
          XBYTE[0x2400 + 0x05] != *&XBYTE[0x2158 + 1]) {
              goto PACKET_ERROR;
            }

          if (XBYTE[0x2400 + 0x06] != 0xFF || 
          XBYTE[0x2400 + 0x07] != 0xFF) {
              if (XBYTE[0x2400 + 0x06] != *&XBYTE[0x215A + 0] || 
              XBYTE[0x2400 + 0x07] != *&XBYTE[0x215A + 1]) {
                  goto PACKET_ERROR;
                }
            }

          memcpy(MG245XCommReceiveP__m_p_rx_buf,&XBYTE[0x2400 + 0], len - 1);
          XBYTE[0x2081 + 0] = 0x80;
          nextFifo = 1;
        }
      else {
          if (XBYTE[0x2400 + 0x84] != *&XBYTE[0x2158 + 0] || 
          XBYTE[0x2400 + 0x85] != *&XBYTE[0x2158 + 1]) {
              goto PACKET_ERROR;
            }

          if (XBYTE[0x2400 + 0x86] != 0xFF || 
          XBYTE[0x2400 + 0x87] != 0xFF) {
              if (XBYTE[0x2400 + 0x86] != *&XBYTE[0x215A + 0] || 
              XBYTE[0x2400 + 0x87] != *&XBYTE[0x215A + 1]) {
                  goto PACKET_ERROR;
                }
            }
          memcpy(MG245XCommReceiveP__m_p_rx_buf,&XBYTE[0x2400 + 0x80], len - 1);
          XBYTE[0x2081 + 0] = 0x00;
          nextFifo = 0;
        }

      {
        mg245x_comm_header_t *header = MG245XCommReceiveP__getHeader(MG245XCommReceiveP__m_p_rx_buf);
        mg245x_comm_metadata_t *metadata = MG245XCommReceiveP__getMetadata(MG245XCommReceiveP__m_p_rx_buf);
        uint8_t type = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 0x07;

// #line 238
        __nesc_hton_uint16(metadata->time.nxdata, 0xffff);

        if (type == IEEE154_TYPE_ACK) {
            MG245XCommReceiveP__MG245XCommReceive__receiveAckDone(MG245XCommReceiveP__m_p_rx_buf);
          }
        else {
// #line 243
          if (type == IEEE154_TYPE_DATA) {
              if ((uint8_t )__nesc_ntoh_leuint16(header->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {
// #line 266
                  MG245XCommReceiveP__MG245XCommReceive__sendAck(0, MG245XCommReceiveP__m_p_rx_buf);
                }






              if (MG245XCommReceiveP__receiveMsgDone__postTask() == SUCCESS) {
                  MG245XCommReceiveP__packetLock = TRUE;
                }
            }
          }
// #line 278
        return;
      }
      PACKET_ERROR: 
        nextFifo = 0;
      XBYTE[0x2081 + 0] = 0x00;
    }
  else {
// #line 284
    if (intStatus == 0x0D) {
        MG245XCommReceiveP__MG245XCommReceive__sendMsgDone();
      }
    else {
// #line 287
      if (intStatus == 0x0B) {
          XBYTE[0x2200 + 0x9E] = 0xED;
        }
      }
    }
}

// # 279 "/opt/mg-original/tos/chips/mg245x/timer/HplMG245XTimerAsyncC.nc"
void __vector_3(void) interrupt 3
// #line 279
{
  HplMG245XTimerAsyncC__Compare__fired();
}








void __vector_1(void) interrupt 1
// #line 290
{
  HplMG245XTimerAsyncC__Timer__overflow();
}

// # 288 "/home/Suchang/work/mg/tos/chips/mg245x/uart/HplMG245XUartP.nc"
void __vector_4(void) interrupt 4
// #line 288
{
// #line 305
  uint8_t intId;

  intId = (XBYTE[0x2502 + 0] >> 1) & 0x07;

  if (intId == 0x02) {
      HplMG245XUartP__HplUart0__rxDone(XBYTE[0x2500 + 0]);
    }
  else {
// #line 312
    if (intId == 0x01) {
        HplMG245XUartP__HplUart0__txDone();
      }
    }
}

// #line 507
void __vector_7(void) interrupt 7
// #line 507
{
// #line 523
  uint8_t intId;

  intId = (XBYTE[0x2512 + 0] >> 1) & 0x07;

  if (intId == 0x02) {
      HplMG245XUartP__HplUart1__rxDone(XBYTE[0x2510 + 0]);
    }
  else {
// #line 530
    if (intId == 0x01) {
        HplMG245XUartP__HplUart1__txDone();
      }
    }
}

// # 412 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t _data) reentrant 
// #line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, _data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = _data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = _data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(_data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

// # 91 "/opt/tinyos-2.x/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b) reentrant 
// #line 91
{
  crc = (uint8_t )(crc >> 8) | (crc << 8);
  crc ^= b;
  crc ^= (uint8_t )(crc & 0xff) >> 4;
  crc ^= crc << 12;
  crc ^= (crc & 0xff) << 5;
  return crc;
}

// # 296 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result) reentrant 
// #line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
// #line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
// #line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

// # 106 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t _data) reentrant 
// #line 106
{
  if (_data == HDLC_CTLESC_BYTE || _data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = _data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = _data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

