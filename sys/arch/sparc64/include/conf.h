/*	$OpenBSD: conf.h,v 1.9 2002/01/13 02:06:45 jason Exp $	*/
/*	$NetBSD: conf.h,v 1.9 2001/03/26 12:33:26 lukem Exp $	*/

/*-
 * Copyright (c) 1996 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Christos Zoulas.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *        This product includes software developed by the NetBSD
 *        Foundation, Inc. and its contributors.
 * 4. Neither the name of The NetBSD Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#define mmread mmrw
#define mmwrite mmrw
cdev_decl(mm);

cdev_decl(crypto);

cdev_decl(ksyms);

cdev_decl(openprom);

/* open, close, ioctl */
#define cdev_openprom_init(c,n) { \
	dev_init(c,n,open), dev_init(c,n,close), (dev_type_read((*))) enodev, \
	(dev_type_write((*))) enodev, dev_init(c,n,ioctl), \
	(dev_type_stop((*))) nullop, 0, (dev_type_select((*))) enodev, \
	(dev_type_mmap((*))) enodev }

#define	cdev_gen_init(c,n) { \
	dev_init(c,n,open), dev_init(c,n,close), dev_init(c,n,read), \
	dev_init(c,n,write), dev_init(c,n,ioctl), (dev_type_stop((*))) nullop, \
	0, dev_init(c,n,select), (dev_type_mmap((*))) enodev }

cdev_decl(cn);

cdev_decl(zs);

bdev_decl(fd);
cdev_decl(fd);

cdev_decl(fb);

cdev_decl(ms);

cdev_decl(kbd);
cdev_decl(kd);

cdev_decl(bwtwo);

cdev_decl(cgtwo);

cdev_decl(cgthree);

cdev_decl(cgfour);

cdev_decl(cgsix);

cdev_decl(cgeight);

cdev_decl(tcx);

cdev_decl(cgfourteen);

cdev_decl(bpp);
cdev_decl(lpt);

cdev_decl(scsibus);

bdev_decl(wd);
cdev_decl(wd);

cdev_decl(sabtty);

cdev_decl(pcons);

cdev_decl(com);

cdev_decl(usb);
cdev_decl(uhid);
cdev_decl(ugen);
cdev_decl(ulpt);
cdev_decl(urio);
cdev_decl(ucom);
cdev_decl(uscanner);

cdev_decl(mtty);
cdev_decl(mbpp);
cdev_decl(stty);
cdev_decl(sbpp);
