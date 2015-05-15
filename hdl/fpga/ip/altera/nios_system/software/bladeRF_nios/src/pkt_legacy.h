/* This file is part of the bladeRF project:
 *   http://www.github.com/nuand/bladeRF
 *
 * Copyright (c) 2015 Nuand LLC
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef PKT_LEGACY_PKT_H_
#define PKT_LEGACY_PKT_H_

#include <stdint.h>
#include "pkt_handler.h"
#include "nios_pkt_legacy.h"    /* Shared definitions between NIOII & host */

#define PKT_LEGACY_MAGIC              ((uint8_t) UART_PKT_MAGIC)
#define PKT_LEGACY_REQUIRED_BYTES     PKT_BUFLEN

void pkt_legacy(struct pkt_buf *b);

#define PKT_LEGACY { \
    .magic          = PKT_LEGACY_MAGIC, \
    .bytes_required = PKT_LEGACY_REQUIRED_BYTES, \
    .exec           = pkt_legacy }

#endif