#***************************************************************************
#
# Project    _|_|_|_|  _|_|    _|    _|    _|_|_|
#              _|    _|    _|  _|    _|  _|    _|
#              _|    _|    _|  _|    _|  _|    _|  _|
#              _|    _|    _|    _|_|_|    _|_|_|_|
#                                    _|
#                                _|_|
#
#
# Copyright (C) 2020 - 2021, Joshua Mak, <jmakhack@protonmail.com>, et al.
#
############################################################################

.DEFAULT_GOAL:=all
CC:=gcc
CFLAGS:=-c -g -Wall
DIRGUARD=@mkdir -p $(@D)
ODIR:=obj
SDIR:=src
BDIR:=bin
TDIR:=tests
EXEC:=mya
TEST:=check_mya
LIBS:=-lcurl -ljson-c
TLIB:=-lcheck
UNAME:=$(shell uname)

ifeq ($(UNAME),Darwin)
	LIBS+=-largp
endif

TARGET:=$(addprefix $(BDIR)/, $(EXEC))

_OBJ:=$(EXEC).o
OBJ:=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(TARGET): $(OBJ)
	$(DIRGUARD)
	$(CC) -o $@ $^ $(LIBS)

$(addprefix $(ODIR)/, %.o): $(addprefix $(SDIR)/, %.c)
	$(DIRGUARD)
	$(CC) $(CFLAGS) $< -o $@

$(addprefix $(TDIR)/, %): $(addprefix $(TDIR)/, %.c)
	$(CC) $(TLIB) $< -o $@ 

.PHONY: all test clean

all: $(TARGET) test

test: $(addprefix $(TDIR)/, $(TEST))
	$(addprefix $(TDIR)/, $(TEST))

clean:
	rm -rf $(ODIR) $(BDIR) $(addprefix $(TDIR)/, $(TEST)) *~
