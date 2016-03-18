# Copyright (c) 2010-2015 Sinbinet Corp.
# All rights reserved.
#
# author Suchang Lee <suchanglee@sinbinet.com>
# author Sukun Kim <sukunkim@sinbinet.com>

COMPONENT=BaseStationC

CC2420_CHANNEL=0x1A
DEFAULT_LOCAL_GROUP=0x2A
# CFLAGS += -DMG245XCOMM_DEF_RFPOWER=0 # For debugging
# CFLAGS += -DTOSH_DATA_LENGTH=40 # For debugging


PFLAGS += -DCC1200_TEST

CC1200_TOSDIR=../../cc1200

CFLAGS += -I. \
          -I$(CC1200_TOSDIR)/platforms/telosg/ \
          -I$(CC1200_TOSDIR)/platforms/telosg/chips/cc1200 \
          -I$(CC1200_TOSDIR)/chips/cc1200 \
          -I$(CC1200_TOSDIR)/chips/cc1200/csma \
          -I$(CC1200_TOSDIR)/chips/cc1200/control \
          -I$(CC1200_TOSDIR)/chips/cc1200/interfaces \
          -I$(CC1200_TOSDIR)/chips/cc1200/receive \
          -I$(CC1200_TOSDIR)/chips/cc1200/packet \
          -I$(CC1200_TOSDIR)/chips/cc1200/spi \
          -I$(CC1200_TOSDIR)/chips/cc1200/transmit

CFLAGS += -I. \
#       -I$(CC1200_TOSDIR)/platforms/telosg/ \
#       -I$(CC1200_TOSDIR)/platforms/telosg/chips/cc1200 \
#       -I$(CC1200_TOSDIR)/platforms/telosg/chips/stm25p \
#       -I$(CC1200_TOSDIR)/chips/cc1200 \
#       -I$(CC1200_TOSDIR)/chips/cc1200/alarm \
#       -I$(CC1200_TOSDIR)/chips/cc1200/control \
#       -I$(CC1200_TOSDIR)/chips/cc1200/csma \
#       -I$(CC1200_TOSDIR)/chips/cc1200/interfaces \
#       -I$(CC1200_TOSDIR)/chips/cc1200/link \
#       -I$(CC1200_TOSDIR)/chips/cc1200/lowpan \
#       -I$(CC1200_TOSDIR)/chips/cc1200/lpl \
#       -I$(CC1200_TOSDIR)/chips/cc1200/packet \
#       -I$(CC1200_TOSDIR)/chips/cc1200/receive \
#       -I$(CC1200_TOSDIR)/chips/cc1200/spi \
#       -I$(CC1200_TOSDIR)/chips/cc1200/transmit \
#       -I$(CC1200_TOSDIR)/chips/cc1200/unique \
#       -I$(CC1200_TOSDIR)/chips/cc1200/security


PLATFORM_TYPE=EXT
#PLATFORM_TYPE=MCT

ifeq ($(PLATFORM_TYPE), EXT)
CFLAGS += -I. \
          -I$(CC1200_TOSDIR)/system/
else ifeq ($(PLATFORM_TYPE), MCT)
$(warning Platform Type = $(PLATFORM_TYPE))
CFLAGS += -DDATA_COLLECTOR_PLATFORM_$(PLATFORM_TYPE)
CFLAGS += -DDATA_COLLECTOR_PLATFORM_TYPE=DATA_COLLECTOR_TYPE_$(PLATFORM_TYPE)

CFLAGS += -I./tos/system
CFLAGS += -I./tos/chips/msp430/timer
CFLAGS += -I./tos/platforms/pdm
CFLAGS += -I./tos/platforms/pdm/chips/stm25p
endif

include $(MAKERULES)
