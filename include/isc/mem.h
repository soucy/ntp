/*
 * libntp local override of isc/mem.h to stub it out.
 *
 * include/isc is searched before any of the lib/isc include
 * directories and should be used only for replacement NTP headers
 * overriding headers of the same name under lib/isc.
 *
 * NOTE: this assumes the system malloc is thread-safe and does
 *	 not use any normal lib/isc locking.
 */

/*
 * Copyright (C) 2004-2009  Internet Systems Consortium, Inc. ("ISC")
 * Copyright (C) 1997-2001  Internet Software Consortium.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/* $Id: mem.h,v 1.78.120.3 2009/02/11 03:07:01 jinmei Exp $ */

#ifndef ISC_MEM_H
#define ISC_MEM_H 1

#include <stdio.h>

#include <isc/lang.h>
#include <isc/mutex.h>
#include <isc/platform.h>
#include <isc/types.h>
#include <isc/xml.h>

#include <ntp_stdlib.h>


#define isc_mem_get(c, cnt)		emalloc((cnt))
#define isc_mem_allocate(c, cnt)	emalloc((cnt))
#define isc_mem_reallocate(c, mem, cnt)	erealloc((mem), (cnt))
#define isc_mem_put(c, mem, cnt)	free((mem))
#define isc_mem_free(c, mem)		free((mem))
#define isc_mem_strdup(c, str)		estrdup((str))
#define isc_mem_attach(src, ptgt)	do { *(ptgt) = (src); } while (0)
#define isc_mem_detach(c)		((void)(c))
#define isc_mem_printallactive(s)	fprintf(s, "isc_mem_printallactive() stubbed.\n")

#endif /* ISC_MEM_H */
