#############################################################################
# Makefile for building: lin_guider
# Generated by qmake (2.01a) (Qt 4.8.6) on: Thu Dec 3 20:58:05 2015
# Project:  lin_guider.pro
# Template: app
# Command: /usr/bin/qmake-qt4 CONFIG+=release -o Makefile lin_guider.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -Iinclude -Iinclude/io_dev -Iinclude/video_dev -I. -Irelease/.moc -Irelease/.ui
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/arm-linux-gnueabihf -lusb-1.0 -ldl -lrt -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = release/.obj/

####### Files

SOURCES       = src/io_dev/io_nexstar.cpp \
		src/io_dev/io_qhy5ii.cpp \
		src/io_dev/io_atik.cpp \
		src/io_dev/io_sx.cpp \
		src/video_dev/qhy5ii_core.cpp \
		src/video_dev/video_qhy5ii.cpp \
		src/video_dev/video_atik.cpp \
		src/io_dev/io_asi.cpp \
		src/video_dev/atik_core.cpp \
		src/video_dev/sxccdusb.cpp \
		src/video_dev/video_sx.cpp \
		src/video_dev/sx_core.cpp \
		src/video_dev/video_asi.cpp \
		src/video_dev/asi_core.cpp \
		src/io_dev/io_gpio.cpp \
		src/io_dev/io_gpusb.cpp \
		src/settings.cpp \
		src/filters.cpp \
		src/io_dev/io_qhy6.cpp \
		src/video_dev/qhy6_core.cpp \
		src/video_dev/video_qhy6.cpp \
		src/io_dev/io_null.cpp \
		src/io_dev/io_qhy5.cpp \
		src/io_dev/io_ftdi.cpp \
		src/io_dev/io_lpt.cpp \
		src/video_dev/video_null.cpp \
		src/video_dev/video_dsi2pro.cpp \
		src/video_dev/video_qhy5.cpp \
		src/video_dev/video_pwc.cpp \
		src/video_dev/video_uvc.cpp \
		src/bayer.cpp \
		src/lusb.cpp \
		src/video_dev/qhy5_core.cpp \
		src/server.cpp \
		src/common.cpp \
		src/avilib.cpp \
		src/mrecorder.cpp \
		src/about.cpp \
		src/fio.cpp \
		src/maindef.cpp \
		src/params.cpp \
		src/setup_video.cpp \
		src/rcalibration.cpp \
		src/matr.cpp \
		src/vect.cpp \
		src/gmath.cpp \
		src/guider.cpp \
		src/scroll_graph.cpp \
		src/decoder.cpp \
		src/video.cpp \
		src/setup_driver.cpp \
		src/main.cpp \
		src/utils.cpp \
		src/io_driver.cpp \
		src/lin_guider.cpp release/.moc/moc_settings.cpp \
		release/.moc/moc_server.cpp \
		release/.moc/moc_common.cpp \
		release/.moc/moc_mrecorder.cpp \
		release/.moc/moc_about.cpp \
		release/.moc/moc_setup_video.cpp \
		release/.moc/moc_rcalibration.cpp \
		release/.moc/moc_guider.cpp \
		release/.moc/moc_video.cpp \
		release/.moc/moc_setup_driver.cpp \
		release/.moc/moc_lin_guider.cpp \
		release/.rcc/qrc_lin_guider.cpp
OBJECTS       = release/.obj/io_nexstar.o \
		release/.obj/io_qhy5ii.o \
		release/.obj/io_atik.o \
		release/.obj/io_sx.o \
		release/.obj/qhy5ii_core.o \
		release/.obj/video_qhy5ii.o \
		release/.obj/video_atik.o \
		release/.obj/io_asi.o \
		release/.obj/atik_core.o \
		release/.obj/sxccdusb.o \
		release/.obj/video_sx.o \
		release/.obj/sx_core.o \
		release/.obj/video_asi.o \
		release/.obj/asi_core.o \
		release/.obj/io_gpio.o \
		release/.obj/io_gpusb.o \
		release/.obj/settings.o \
		release/.obj/filters.o \
		release/.obj/io_qhy6.o \
		release/.obj/qhy6_core.o \
		release/.obj/video_qhy6.o \
		release/.obj/io_null.o \
		release/.obj/io_qhy5.o \
		release/.obj/io_ftdi.o \
		release/.obj/io_lpt.o \
		release/.obj/video_null.o \
		release/.obj/video_dsi2pro.o \
		release/.obj/video_qhy5.o \
		release/.obj/video_pwc.o \
		release/.obj/video_uvc.o \
		release/.obj/bayer.o \
		release/.obj/lusb.o \
		release/.obj/qhy5_core.o \
		release/.obj/server.o \
		release/.obj/common.o \
		release/.obj/avilib.o \
		release/.obj/mrecorder.o \
		release/.obj/about.o \
		release/.obj/fio.o \
		release/.obj/maindef.o \
		release/.obj/params.o \
		release/.obj/setup_video.o \
		release/.obj/rcalibration.o \
		release/.obj/matr.o \
		release/.obj/vect.o \
		release/.obj/gmath.o \
		release/.obj/guider.o \
		release/.obj/scroll_graph.o \
		release/.obj/decoder.o \
		release/.obj/video.o \
		release/.obj/setup_driver.o \
		release/.obj/main.o \
		release/.obj/utils.o \
		release/.obj/io_driver.o \
		release/.obj/lin_guider.o \
		release/.obj/moc_settings.o \
		release/.obj/moc_server.o \
		release/.obj/moc_common.o \
		release/.obj/moc_mrecorder.o \
		release/.obj/moc_about.o \
		release/.obj/moc_setup_video.o \
		release/.obj/moc_rcalibration.o \
		release/.obj/moc_guider.o \
		release/.obj/moc_video.o \
		release/.obj/moc_setup_driver.o \
		release/.obj/moc_lin_guider.o \
		release/.obj/qrc_lin_guider.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		lin_guider.pro
QMAKE_TARGET  = lin_guider
DESTDIR       = 
TARGET        = lin_guider

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): release/.ui/ui_settings.h release/.ui/ui_mrecorder.h release/.ui/ui_about.h release/.ui/ui_setup_video.h release/.ui/ui_rcalibration.h release/.ui/ui_guider.h release/.ui/ui_setup_driver.h release/.ui/ui_lin_guider.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: lin_guider.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/lib/arm-linux-gnueabihf/libQtGui.prl \
		/usr/lib/arm-linux-gnueabihf/libQtCore.prl
	$(QMAKE) CONFIG+=release -o Makefile lin_guider.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/lib/arm-linux-gnueabihf/libQtGui.prl:
/usr/lib/arm-linux-gnueabihf/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) CONFIG+=release -o Makefile lin_guider.pro

dist: 
	@$(CHK_DIR_EXISTS) release/.obj/lin_guider1.0.0 || $(MKDIR) release/.obj/lin_guider1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) release/.obj/lin_guider1.0.0/ && $(COPY_FILE) --parents include/io_dev/io_nexstar.h include/io_dev/io_qhy5ii.h include/video_dev/qhy5ii_core.h include/video_dev/video_qhy5ii.h include/io_dev/io_gpio.h include/io_dev/io_gpusb.h include/settings.h include/filters.h include/io_dev/io_qhy6.h include/video_dev/qhy6_core.h include/video_dev/video_qhy6.h include/io_dev/io_null.h include/io_dev/io_qhy5.h include/io_dev/io_atik.h include/io_dev/io_asi.h include/io_dev/io_sx.h include/io_dev/io_ftdi.h include/io_dev/io_lpt.h include/video_dev/video_null.h include/video_dev/video_dsi2pro.h include/video_dev/video_qhy5.h include/video_dev/video_atik.h include/video_dev/atik_core.h include/video_dev/atikccdusb.h include/video_dev/video_sx.h include/video_dev/sx_core.h include/video_dev/video_asi.h include/video_dev/asi_core.h include/video_dev/sxccdusb.h include/video_dev/video_pwc.h include/video_dev/video_uvc.h include/bayer.h include/lusb.h include/video_dev/qhy5_core.h include/server.h include/common.h include/mrecorder.h include/avilib.h include/about.h include/fio.h include/maindef.h include/pwc-ioctl.h include/params.h include/setup_video.h include/rcalibration.h include/matr.h include/vect.h include/gmath.h include/guider.h include/scroll_graph.h include/decoder.h include/video.h include/setup_driver.h include/timer.h include/utils.h include/io_driver.h include/lin_guider.h release/.obj/lin_guider1.0.0/ && $(COPY_FILE) --parents rc/lin_guider.qrc release/.obj/lin_guider1.0.0/ && $(COPY_FILE) --parents src/io_dev/io_nexstar.cpp src/io_dev/io_qhy5ii.cpp src/io_dev/io_atik.cpp src/io_dev/io_sx.cpp src/video_dev/qhy5ii_core.cpp src/video_dev/video_qhy5ii.cpp src/video_dev/video_atik.cpp src/io_dev/io_asi.cpp src/video_dev/atik_core.cpp src/video_dev/sxccdusb.cpp src/video_dev/video_sx.cpp src/video_dev/sx_core.cpp src/video_dev/video_asi.cpp src/video_dev/asi_core.cpp src/io_dev/io_gpio.cpp src/io_dev/io_gpusb.cpp src/settings.cpp src/filters.cpp src/io_dev/io_qhy6.cpp src/video_dev/qhy6_core.cpp src/video_dev/video_qhy6.cpp src/io_dev/io_null.cpp src/io_dev/io_qhy5.cpp src/io_dev/io_ftdi.cpp src/io_dev/io_lpt.cpp src/video_dev/video_null.cpp src/video_dev/video_dsi2pro.cpp src/video_dev/video_qhy5.cpp src/video_dev/video_pwc.cpp src/video_dev/video_uvc.cpp src/bayer.cpp src/lusb.cpp src/video_dev/qhy5_core.cpp src/server.cpp src/common.cpp src/avilib.cpp src/mrecorder.cpp src/about.cpp src/fio.cpp src/maindef.cpp src/params.cpp src/setup_video.cpp src/rcalibration.cpp src/matr.cpp src/vect.cpp src/gmath.cpp src/guider.cpp src/scroll_graph.cpp src/decoder.cpp src/video.cpp src/setup_driver.cpp src/main.cpp src/utils.cpp src/io_driver.cpp src/lin_guider.cpp release/.obj/lin_guider1.0.0/ && $(COPY_FILE) --parents ui/settings.ui ui/mrecorder.ui ui/about.ui ui/setup_video.ui ui/rcalibration.ui ui/guider.ui ui/setup_driver.ui ui/lin_guider.ui release/.obj/lin_guider1.0.0/ && (cd `dirname release/.obj/lin_guider1.0.0` && $(TAR) lin_guider1.0.0.tar lin_guider1.0.0 && $(COMPRESS) lin_guider1.0.0.tar) && $(MOVE) `dirname release/.obj/lin_guider1.0.0`/lin_guider1.0.0.tar.gz . && $(DEL_FILE) -r release/.obj/lin_guider1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: release/.moc/moc_settings.cpp release/.moc/moc_server.cpp release/.moc/moc_common.cpp release/.moc/moc_mrecorder.cpp release/.moc/moc_about.cpp release/.moc/moc_setup_video.cpp release/.moc/moc_rcalibration.cpp release/.moc/moc_guider.cpp release/.moc/moc_video.cpp release/.moc/moc_setup_driver.cpp release/.moc/moc_lin_guider.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) release/.moc/moc_settings.cpp release/.moc/moc_server.cpp release/.moc/moc_common.cpp release/.moc/moc_mrecorder.cpp release/.moc/moc_about.cpp release/.moc/moc_setup_video.cpp release/.moc/moc_rcalibration.cpp release/.moc/moc_guider.cpp release/.moc/moc_video.cpp release/.moc/moc_setup_driver.cpp release/.moc/moc_lin_guider.cpp
release/.moc/moc_settings.cpp: release/.ui/ui_settings.h \
		include/server.h \
		include/common.h \
		include/maindef.h \
		include/gmath.h \
		include/io_driver.h \
		include/vect.h \
		include/matr.h \
		include/guider.h \
		release/.ui/ui_guider.h \
		include/scroll_graph.h \
		include/fio.h \
		include/settings.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/settings.h -o release/.moc/moc_settings.cpp

release/.moc/moc_server.cpp: include/server.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/server.h -o release/.moc/moc_server.cpp

release/.moc/moc_common.cpp: include/maindef.h \
		include/gmath.h \
		include/io_driver.h \
		include/vect.h \
		include/matr.h \
		include/common.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/common.h -o release/.moc/moc_common.cpp

release/.moc/moc_mrecorder.cpp: release/.ui/ui_mrecorder.h \
		include/avilib.h \
		include/mrecorder.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/mrecorder.h -o release/.moc/moc_mrecorder.cpp

release/.moc/moc_about.cpp: release/.ui/ui_about.h \
		include/about.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/about.h -o release/.moc/moc_about.cpp

release/.moc/moc_setup_video.cpp: release/.ui/ui_setup_video.h \
		include/video.h \
		include/maindef.h \
		include/setup_video.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/setup_video.h -o release/.moc/moc_setup_video.cpp

release/.moc/moc_rcalibration.cpp: release/.ui/ui_rcalibration.h \
		include/gmath.h \
		include/maindef.h \
		include/io_driver.h \
		include/vect.h \
		include/matr.h \
		include/rcalibration.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/rcalibration.h -o release/.moc/moc_rcalibration.cpp

release/.moc/moc_guider.cpp: include/common.h \
		include/maindef.h \
		include/gmath.h \
		include/io_driver.h \
		include/vect.h \
		include/matr.h \
		release/.ui/ui_guider.h \
		include/scroll_graph.h \
		include/fio.h \
		include/guider.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/guider.h -o release/.moc/moc_guider.cpp

release/.moc/moc_video.cpp: include/maindef.h \
		include/video.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/video.h -o release/.moc/moc_video.cpp

release/.moc/moc_setup_driver.cpp: release/.ui/ui_setup_driver.h \
		include/io_driver.h \
		include/setup_driver.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/setup_driver.h -o release/.moc/moc_setup_driver.cpp

release/.moc/moc_lin_guider.cpp: release/.ui/ui_lin_guider.h \
		include/common.h \
		include/maindef.h \
		include/gmath.h \
		include/io_driver.h \
		include/vect.h \
		include/matr.h \
		include/setup_driver.h \
		release/.ui/ui_setup_driver.h \
		include/setup_video.h \
		release/.ui/ui_setup_video.h \
		include/video.h \
		include/rcalibration.h \
		release/.ui/ui_rcalibration.h \
		include/mrecorder.h \
		release/.ui/ui_mrecorder.h \
		include/avilib.h \
		include/server.h \
		include/guider.h \
		release/.ui/ui_guider.h \
		include/scroll_graph.h \
		include/fio.h \
		include/about.h \
		release/.ui/ui_about.h \
		include/settings.h \
		release/.ui/ui_settings.h \
		include/timer.h \
		include/lin_guider.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) include/lin_guider.h -o release/.moc/moc_lin_guider.cpp

compiler_rcc_make_all: release/.rcc/qrc_lin_guider.cpp
compiler_rcc_clean:
	-$(DEL_FILE) release/.rcc/qrc_lin_guider.cpp
release/.rcc/qrc_lin_guider.cpp: rc/lin_guider.qrc \
		rc/about.png \
		rc/video.png \
		rc/adjust2fit.png \
		rc/calibr2guider.png \
		rc/lin_guider.png \
		rc/guiding.png \
		rc/record.png \
		rc/calibration.png \
		rc/driver.png \
		rc/settings.png
	/usr/lib/arm-linux-gnueabihf/qt4/bin/rcc -name lin_guider rc/lin_guider.qrc -o release/.rcc/qrc_lin_guider.cpp

compiler_image_collection_make_all: release/.ui/qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) release/.ui/qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: release/.ui/ui_settings.h release/.ui/ui_mrecorder.h release/.ui/ui_about.h release/.ui/ui_setup_video.h release/.ui/ui_rcalibration.h release/.ui/ui_guider.h release/.ui/ui_setup_driver.h release/.ui/ui_lin_guider.h
compiler_uic_clean:
	-$(DEL_FILE) release/.ui/ui_settings.h release/.ui/ui_mrecorder.h release/.ui/ui_about.h release/.ui/ui_setup_video.h release/.ui/ui_rcalibration.h release/.ui/ui_guider.h release/.ui/ui_setup_driver.h release/.ui/ui_lin_guider.h
release/.ui/ui_settings.h: ui/settings.ui
	/usr/lib/arm-linux-gnueabihf/qt4/bin/uic ui/settings.ui -o release/.ui/ui_settings.h

release/.ui/ui_mrecorder.h: ui/mrecorder.ui
	/usr/lib/arm-linux-gnueabihf/qt4/bin/uic ui/mrecorder.ui -o release/.ui/ui_mrecorder.h

release/.ui/ui_about.h: ui/about.ui
	/usr/lib/arm-linux-gnueabihf/qt4/bin/uic ui/about.ui -o release/.ui/ui_about.h

release/.ui/ui_setup_video.h: ui/setup_video.ui
	/usr/lib/arm-linux-gnueabihf/qt4/bin/uic ui/setup_video.ui -o release/.ui/ui_setup_video.h

release/.ui/ui_rcalibration.h: ui/rcalibration.ui
	/usr/lib/arm-linux-gnueabihf/qt4/bin/uic ui/rcalibration.ui -o release/.ui/ui_rcalibration.h

release/.ui/ui_guider.h: ui/guider.ui
	/usr/lib/arm-linux-gnueabihf/qt4/bin/uic ui/guider.ui -o release/.ui/ui_guider.h

release/.ui/ui_setup_driver.h: ui/setup_driver.ui
	/usr/lib/arm-linux-gnueabihf/qt4/bin/uic ui/setup_driver.ui -o release/.ui/ui_setup_driver.h

release/.ui/ui_lin_guider.h: ui/lin_guider.ui
	/usr/lib/arm-linux-gnueabihf/qt4/bin/uic ui/lin_guider.ui -o release/.ui/ui_lin_guider.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

release/.obj/io_nexstar.o: src/io_dev/io_nexstar.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_nexstar.o src/io_dev/io_nexstar.cpp

release/.obj/io_qhy5ii.o: src/io_dev/io_qhy5ii.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_qhy5ii.o src/io_dev/io_qhy5ii.cpp

release/.obj/io_atik.o: src/io_dev/io_atik.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_atik.o src/io_dev/io_atik.cpp

release/.obj/io_sx.o: src/io_dev/io_sx.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_sx.o src/io_dev/io_sx.cpp

release/.obj/qhy5ii_core.o: src/video_dev/qhy5ii_core.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/qhy5ii_core.o src/video_dev/qhy5ii_core.cpp

release/.obj/video_qhy5ii.o: src/video_dev/video_qhy5ii.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_qhy5ii.o src/video_dev/video_qhy5ii.cpp

release/.obj/video_atik.o: src/video_dev/video_atik.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_atik.o src/video_dev/video_atik.cpp

release/.obj/io_asi.o: src/io_dev/io_asi.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_asi.o src/io_dev/io_asi.cpp

release/.obj/atik_core.o: src/video_dev/atik_core.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/atik_core.o src/video_dev/atik_core.cpp

release/.obj/sxccdusb.o: src/video_dev/sxccdusb.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/sxccdusb.o src/video_dev/sxccdusb.cpp

release/.obj/video_sx.o: src/video_dev/video_sx.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_sx.o src/video_dev/video_sx.cpp

release/.obj/sx_core.o: src/video_dev/sx_core.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/sx_core.o src/video_dev/sx_core.cpp

release/.obj/video_asi.o: src/video_dev/video_asi.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_asi.o src/video_dev/video_asi.cpp

release/.obj/asi_core.o: src/video_dev/asi_core.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/asi_core.o src/video_dev/asi_core.cpp

release/.obj/io_gpio.o: src/io_dev/io_gpio.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_gpio.o src/io_dev/io_gpio.cpp

release/.obj/io_gpusb.o: src/io_dev/io_gpusb.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_gpusb.o src/io_dev/io_gpusb.cpp

release/.obj/settings.o: src/settings.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/settings.o src/settings.cpp

release/.obj/filters.o: src/filters.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/filters.o src/filters.cpp

release/.obj/io_qhy6.o: src/io_dev/io_qhy6.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_qhy6.o src/io_dev/io_qhy6.cpp

release/.obj/qhy6_core.o: src/video_dev/qhy6_core.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/qhy6_core.o src/video_dev/qhy6_core.cpp

release/.obj/video_qhy6.o: src/video_dev/video_qhy6.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_qhy6.o src/video_dev/video_qhy6.cpp

release/.obj/io_null.o: src/io_dev/io_null.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_null.o src/io_dev/io_null.cpp

release/.obj/io_qhy5.o: src/io_dev/io_qhy5.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_qhy5.o src/io_dev/io_qhy5.cpp

release/.obj/io_ftdi.o: src/io_dev/io_ftdi.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_ftdi.o src/io_dev/io_ftdi.cpp

release/.obj/io_lpt.o: src/io_dev/io_lpt.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_lpt.o src/io_dev/io_lpt.cpp

release/.obj/video_null.o: src/video_dev/video_null.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_null.o src/video_dev/video_null.cpp

release/.obj/video_dsi2pro.o: src/video_dev/video_dsi2pro.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_dsi2pro.o src/video_dev/video_dsi2pro.cpp

release/.obj/video_qhy5.o: src/video_dev/video_qhy5.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_qhy5.o src/video_dev/video_qhy5.cpp

release/.obj/video_pwc.o: src/video_dev/video_pwc.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_pwc.o src/video_dev/video_pwc.cpp

release/.obj/video_uvc.o: src/video_dev/video_uvc.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video_uvc.o src/video_dev/video_uvc.cpp

release/.obj/bayer.o: src/bayer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/bayer.o src/bayer.cpp

release/.obj/lusb.o: src/lusb.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/lusb.o src/lusb.cpp

release/.obj/qhy5_core.o: src/video_dev/qhy5_core.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/qhy5_core.o src/video_dev/qhy5_core.cpp

release/.obj/server.o: src/server.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/server.o src/server.cpp

release/.obj/common.o: src/common.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/common.o src/common.cpp

release/.obj/avilib.o: src/avilib.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/avilib.o src/avilib.cpp

release/.obj/mrecorder.o: src/mrecorder.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/mrecorder.o src/mrecorder.cpp

release/.obj/about.o: src/about.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/about.o src/about.cpp

release/.obj/fio.o: src/fio.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/fio.o src/fio.cpp

release/.obj/maindef.o: src/maindef.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/maindef.o src/maindef.cpp

release/.obj/params.o: src/params.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/params.o src/params.cpp

release/.obj/setup_video.o: src/setup_video.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/setup_video.o src/setup_video.cpp

release/.obj/rcalibration.o: src/rcalibration.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/rcalibration.o src/rcalibration.cpp

release/.obj/matr.o: src/matr.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/matr.o src/matr.cpp

release/.obj/vect.o: src/vect.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/vect.o src/vect.cpp

release/.obj/gmath.o: src/gmath.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/gmath.o src/gmath.cpp

release/.obj/guider.o: src/guider.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/guider.o src/guider.cpp

release/.obj/scroll_graph.o: src/scroll_graph.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/scroll_graph.o src/scroll_graph.cpp

release/.obj/decoder.o: src/decoder.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/decoder.o src/decoder.cpp

release/.obj/video.o: src/video.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/video.o src/video.cpp

release/.obj/setup_driver.o: src/setup_driver.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/setup_driver.o src/setup_driver.cpp

release/.obj/main.o: src/main.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/main.o src/main.cpp

release/.obj/utils.o: src/utils.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/utils.o src/utils.cpp

release/.obj/io_driver.o: src/io_driver.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/io_driver.o src/io_driver.cpp

release/.obj/lin_guider.o: src/lin_guider.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/lin_guider.o src/lin_guider.cpp

release/.obj/moc_settings.o: release/.moc/moc_settings.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_settings.o release/.moc/moc_settings.cpp

release/.obj/moc_server.o: release/.moc/moc_server.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_server.o release/.moc/moc_server.cpp

release/.obj/moc_common.o: release/.moc/moc_common.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_common.o release/.moc/moc_common.cpp

release/.obj/moc_mrecorder.o: release/.moc/moc_mrecorder.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_mrecorder.o release/.moc/moc_mrecorder.cpp

release/.obj/moc_about.o: release/.moc/moc_about.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_about.o release/.moc/moc_about.cpp

release/.obj/moc_setup_video.o: release/.moc/moc_setup_video.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_setup_video.o release/.moc/moc_setup_video.cpp

release/.obj/moc_rcalibration.o: release/.moc/moc_rcalibration.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_rcalibration.o release/.moc/moc_rcalibration.cpp

release/.obj/moc_guider.o: release/.moc/moc_guider.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_guider.o release/.moc/moc_guider.cpp

release/.obj/moc_video.o: release/.moc/moc_video.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_video.o release/.moc/moc_video.cpp

release/.obj/moc_setup_driver.o: release/.moc/moc_setup_driver.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_setup_driver.o release/.moc/moc_setup_driver.cpp

release/.obj/moc_lin_guider.o: release/.moc/moc_lin_guider.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/moc_lin_guider.o release/.moc/moc_lin_guider.cpp

release/.obj/qrc_lin_guider.o: release/.rcc/qrc_lin_guider.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o release/.obj/qrc_lin_guider.o release/.rcc/qrc_lin_guider.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

