/*
 * Copyright (c) 2012, Samuel Rivas <samuelrivas@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name the author nor the names of its contributors may
 *       be used to endorse or promote products derived from this software
 *       without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _SC_LOG_H_
#define _SC_LOG_H_

#include <glib.h>

/* Debug log messages */
#define DEBUG(__format, ...) {                                          \
    g_debug("%s:%d " __format, __FILE__, __LINE__, ##__VA_ARGS__);      \
  }

#define INFO(__message, ...) {                  \
    g_message(__message, ##__VA_ARGS__);        \
  }

#define WARNING(__message, ...) {               \
    g_warning(__message, ##__VA_ARGS__);        \
  }

/* This aborts the program */
#define PANIC(__message, ...) {                                         \
    g_log(G_LOG_DOMAIN, G_LOG_LEVEL_ERROR,                              \
          "%s:%d " __message, __FILE__, __LINE__, ##__VA_ARGS__);       \
  }

/** \brief Syntactic sugar for panicing stating a bug was found */
#define BUG {HUC_PANIC("You have found a bug. Please report")}

#endif
