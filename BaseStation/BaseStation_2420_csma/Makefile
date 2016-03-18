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

CFLAGS += -I. \
          -I$(TOSDIR)/platforms/telosg/ \
          -I$(TOSDIR)/platforms/telosg/chips/cc1200 \
          -I$(TOSDIR)/chips/cc2420 \
          -I$(TOSDIR)/chips/cc2420/csma \
          -I$(TOSDIR)/chips/cc2420/control \
          -I$(TOSDIR)/chips/cc2420/interfaces \
          -I$(TOSDIR)/chips/cc2420/receive \
          -I$(TOSDIR)/chips/cc2420/packet \
          -I$(TOSDIR)/chips/cc2420/spi \
          -I$(TOSDIR)/chips/cc2420/transmit

include $(MAKERULES)

