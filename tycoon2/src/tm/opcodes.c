/*
 * This file is part of the Tycoon-2 system.
 *
 * The Tycoon-2 system is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation (Version 2).
 *
 * The Tycoon-2 system is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public
 * License along with the Tycoon-2 system; see the file LICENSE.
 * If not, write to AB 4.02, Softwaresysteme, TU Hamburg-Harburg
 * D-21071 Hamburg, Germany. http://www.sts.tu-harburg.de
 * 
 * Copyright (c) 1996-1998 Higher-Order GmbH, Hamburg. All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>

static struct {
  const char *name;
  int argBytes;
} opcodes[] = {
#define TVM_OP(x,n,s)   { #x, n },
#include "opcodes.h"
  { NULL }
};

int main(int argc, char *argv[])
{
  int i;

  for(i=0; opcodes[i].name != NULL; ++i) {
    printf("%d\t%s\t%d\n", i, opcodes[i].name, opcodes[i].argBytes);
  }
  return EXIT_SUCCESS;
}

