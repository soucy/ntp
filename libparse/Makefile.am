NULL=
#AUTOMAKE_OPTIONS = ../util/ansi2knr no-dependencies
AUTOMAKE_OPTIONS = 
BUILT_SOURCES =
noinst_LIBRARIES = @MAKE_LIBPARSE@ @MAKE_LIBPARSE_KERNEL@
EXTRA_LIBRARIES = libparse.a libparse_kernel.a
EXTRA_PROGRAMS = parsestreams parsesolaris
noinst_PROGRAMS = @MAKE_PARSEKMODULE@
CLEANFILES = libparse.a libparse_kernel.a info_trimble.c

K_CFLAGS = -DPARSESTREAM -DNTP_NEED_BOPS

libparse_a_SOURCES = parse.c \
		     parse_conf.c \
		     clk_meinberg.c \
		     clk_schmid.c \
		     clk_rawdcf.c \
		     clk_trimtsip.c \
		     clk_dcf7000.c \
		     clk_trimtaip.c \
		     clk_rcc8000.c \
		     clk_hopf6021.c \
		     clk_computime.c \
		     clk_varitext.c \
		     data_mbg.c \
		     info_trimble.c \
		     trim_info.c \
		     binio.c \
		     ieee754io.c \
		     mfp_mul.c \
		     gpstolfp.c \
		     $(NULL)

libparse_kernel_a_SOURCES = 
libparse_kernel_a_LIBADD =	\
	kparse.o		\
	kparse_conf.o		\
	kclk_computime.o	\
	kclk_dcf7000.o		\
	kclk_hopf6021.o		\
	kclk_meinberg.o		\
	kclk_rawdcf.o		\
	kclk_rcc8000.o		\
	kclk_schmid.o		\
	kclk_trimtaip.o		\
	kclk_trimtsip.o		\
	kclk_varitext.o		\
	kbinio.o		\
	kieee754io.o		\
	kmfp_mul.o		\
	kgpstolfp.o		\
	$(NULL)


INCLUDES = -I$(top_srcdir)/include -I$(top_srcdir)/lib/isc/include \
	-I$(top_srcdir)/lib/isc/nothreads/include \
	-I$(top_srcdir)/lib/isc/unix/include -I$(top_srcdir)/kernel

ETAGS_ARGS = Makefile.am

EXTRA_DIST = parsesolaris.c parsestreams.c mkinfo_scmd.sed mkinfo_rcmd.sed info_trimble.c

#
# create info_trimble.c
#
info_trimble.c: $(top_srcdir)/include/trimble.h mkinfo_rcmd.sed mkinfo_scmd.sed
	@rm -f $@
	sed -n -f $(srcdir)/mkinfo_scmd.sed $(top_srcdir)/include/trimble.h  > $@ || rm -f $@
	sed -n -f $(srcdir)/mkinfo_rcmd.sed $(top_srcdir)/include/trimble.h >> $@ || rm -f $@

kieee754io.o: ieee754io.c
	 $(COMPILE) $(K_CFLAGS) -c $(srcdir)/ieee754io.c -o $@

kmfp_mul.o: mfp_mul.c
	 $(COMPILE) $(K_CFLAGS) -c $(srcdir)/mfp_mul.c -o $@

kgpstolfp.o: gpstolfp.c
	 $(COMPILE) $(K_CFLAGS) -c $(srcdir)/gpstolfp.c -o $@

kbinio.o: binio.c
	 $(COMPILE) $(K_CFLAGS) -c $(srcdir)/binio.c -o $@

kclk_computime.o: clk_computime.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_computime.c -o $@

kclk_computime_.o: clk_computime_.c
	$(COMPILE) $(K_CFLAGS) -c clk_computime_.c -o $@

kclk_dcf7000.o: clk_dcf7000.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_dcf7000.c -o $@

kclk_dcf7000_.o: clk_dcf7000_.c
	$(COMPILE) $(K_CFLAGS) -c clk_dcf7000_.c -o $@

kclk_hopf6021.o: clk_hopf6021.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_hopf6021.c -o $@

kclk_hopf6021_.o: clk_hopf6021_.c
	$(COMPILE) $(K_CFLAGS) -c clk_hopf6021_.c -o $@

kclk_meinberg.o: clk_meinberg.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_meinberg.c -o $@

kclk_meinberg_.o: clk_meinberg_.c
	$(COMPILE) $(K_CFLAGS) -c clk_meinberg_.c -o $@

kclk_rawdcf.o: clk_rawdcf.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_rawdcf.c -o $@

kclk_rawdcf_.o: clk_rawdcf_.c
	$(COMPILE) $(K_CFLAGS) -c clk_rawdcf_.c -o $@

kclk_rcc8000.o: clk_rcc8000.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_rcc8000.c -o $@

kclk_rcc8000_.o: clk_rcc8000_.c
	$(COMPILE) $(K_CFLAGS) -c clk_rcc8000_.c -o $@

kclk_schmid.o: clk_schmid.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_schmid.c -o $@

kclk_schmid_.o: clk_schmid_.c
	$(COMPILE) $(K_CFLAGS) -c clk_schmid_.c -o $@

kclk_trimtaip.o: clk_trimtaip.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_trimtaip.c -o $@

kclk_trimtaip_.o: clk_trimtaip_.c
	$(COMPILE) $(K_CFLAGS) -c clk_trimtaip_.c -o $@

kclk_trimtsip.o: clk_trimtsip.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_trimtsip.c -o $@

kclk_trimtsip_.o: clk_trimtsip_.c
	$(COMPILE) $(K_CFLAGS) -c clk_trimtsip_.c -o $@

kclk_varitext.o: clk_varitext.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_varitext.c -o $@

kclk_varitext_.o: clk_varitext_.c
	$(COMPILE) $(K_CFLAGS) -c clk_varitext_.c -o $@

kclk_wharton.o: clk_wharton.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/clk_wharton.c -o $@

kclk_wharton_.o: clk_wharton_.c
	$(COMPILE) $(K_CFLAGS) -c clk_wharton_.c -o $@

kparse.o: parse.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/parse.c -o $@

kparse_.o: parse_.c
	$(COMPILE) $(K_CFLAGS) -c parse_.c -o $@

kparse_conf.o: parse_conf.c
	$(COMPILE) $(K_CFLAGS) -c $(srcdir)/parse_conf.c -o $@

kparse_conf_.o: parse_conf_.c
	$(COMPILE) $(K_CFLAGS) -c parse_conf_.c -o $@

parsestreams.loadable_module.o: $(parsestreams_OBJECTS) libparse_kernel.a ../libntp/libntp.a
	$(LD) -r -o $@ $(parsestreams_OBJECTS) libparse_kernel.a ../libntp/libntp.a

parse: $(parsesolaris_OBJECTS) libparse_kernel.a ../libntp/libntp.a
	$(LD) -r -o $@ $(parsesolaris_OBJECTS) libparse_kernel.a ../libntp/libntp.a

../libntp/libntp.a:
	cd ../libntp && $(MAKE)

parsesolaris.o: sys/systm.h

sys/systm.h:
	mkdir sys && \
	sed -e '/ffs(.*)/d' < /usr/include/sys/systm.h > sys/systm.h

include $(top_srcdir)/depsver.mf
