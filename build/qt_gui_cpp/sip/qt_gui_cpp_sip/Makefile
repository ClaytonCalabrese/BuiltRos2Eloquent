TARGET = "/opt/workspace/build/qt_gui_cpp/src/qt_gui_cpp_sip/libqt_gui_cpp_sip".so
OFILES = siplibqt_gui_cpp_sipcmodule.o siplibqt_gui_cpp_sipQList0101qt_gui_cppPluginProvider.o siplibqt_gui_cpp_sipQList0101qt_gui_cppPluginDescriptor.o siplibqt_gui_cpp_sipQMap0100QString0100QString.o siplibqt_gui_cpp_sipqt_gui_cppSettings.o siplibqt_gui_cpp_sipqt_gui_cppRosPluginlibPluginProvider_ForPlugins.o siplibqt_gui_cpp_sipqt_gui_cppRosPluginlibPluginProvider_ForPluginProviders.o siplibqt_gui_cpp_sipqt_gui_cppRecursivePluginProvider.o siplibqt_gui_cpp_sipqt_gui_cppPluginDescriptor.o siplibqt_gui_cpp_sipqt_gui_cppPluginContext.o siplibqt_gui_cpp_sipqt_gui_cppPluginBridge.o siplibqt_gui_cpp_sipqt_gui_cppPlugin.o siplibqt_gui_cpp_sipqt_gui_cppGenericProxy.o siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.o siplibqt_gui_cpp_sipqt_gui_cppPluginProvider.o siplibqt_gui_cpp_sipqt_gui_cpp.o
HFILES = sipAPIlibqt_gui_cpp_sip.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_NO_DEBUG -DQT_CORE_LIB -DQT_GUI_LIB -I. -I/opt/workspace/src/ros-visualization/qt_gui_core/qt_gui_cpp/src/qt_gui_cpp_sip/../../include -I/opt/workspace/install/ament_index_cpp/include -I/opt/workspace/install/console_bridge_vendor/include -I/opt/workspace/install/class_loader/include -I/opt/workspace/install/rcutils/include -I/usr/include -I/opt/workspace/install/pluginlib/include -I/usr/include/python3.6m -I/usr/share/qt5/mkspecs/linux-g++ -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtPrintSupport -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/X11R6/include
CFLAGS =  -g -O2 -fdebug-prefix-map=/build/sip4-6EjBPW/sip4-4.19.7+dfsg=. -fstack-protector-strong -Wformat -Werror=format-security  -Wdate-time -D_FORTIFY_SOURCE=2 -fPIC -Wall -W -D_REENTRANT
CXXFLAGS = -std=c++14  -g -O2 -fdebug-prefix-map=/build/sip4-6EjBPW/sip4-4.19.7+dfsg=. -fstack-protector-strong -Wformat -Werror=format-security  -Wdate-time -D_FORTIFY_SOURCE=2 -fPIC -Wall -W -D_REENTRANT
LFLAGS =  -Wl,-Bsymbolic-functions -Wl,-z,relro -shared -Wl,-rpath,/usr/lib/x86_64-linux-gnu -Wl,--version-script="/opt/workspace/build/qt_gui_cpp/src/qt_gui_cpp_sip/libqt_gui_cpp_sip".exp
LIBS = -Llib -L/usr/lib/x86_64-linux-gnu -L/usr/X11R6/lib -lstdc++fs /usr/lib/x86_64-linux-gnu/libtinyxml2.so /opt/workspace/install/ament_index_cpp/lib/libament_index_cpp.so /usr/lib/libPocoFoundation.so.50 /opt/workspace/install/console_bridge_vendor/lib/libconsole_bridge.so.0.4 /opt/workspace/install/class_loader/lib/libclass_loader.so /opt/workspace/install/rcutils/lib/librcutils.so /opt/workspace/install/rcutils/lib/librcutils.so /opt/workspace/install/rcutils/lib/librcutils.so /usr/lib/x86_64-linux-gnu/libtinyxml2.so /usr/lib/x86_64-linux-gnu/libpython3.6m.so /opt/workspace/build/qt_gui_cpp/src/qt_gui_cpp/libqt_gui_cpp.a -lQt5Core -lpthread -lQt5Gui -lQt5Core -lpthread -lQt5Widgets -lQt5PrintSupport -lXext -lX11 -lm -lpthread
MOC = moc-qt5
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: PyInit_libqt_gui_cpp_sip; local: *; };' > "/opt/workspace/build/qt_gui_cpp/src/qt_gui_cpp_sip/libqt_gui_cpp_sip".exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python3/dist-packages || mkdir -p $(DESTDIR)/usr/lib/python3/dist-packages
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python3/dist-packages/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f siplibqt_gui_cpp_sipcmodule.o
	-rm -f siplibqt_gui_cpp_sipQList0101qt_gui_cppPluginProvider.o
	-rm -f siplibqt_gui_cpp_sipQList0101qt_gui_cppPluginDescriptor.o
	-rm -f siplibqt_gui_cpp_sipQMap0100QString0100QString.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppSettings.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppRosPluginlibPluginProvider_ForPlugins.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppRosPluginlibPluginProvider_ForPluginProviders.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppRecursivePluginProvider.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppPluginDescriptor.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppPluginContext.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppPluginBridge.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppPlugin.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppGenericProxy.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cppPluginProvider.o
	-rm -f siplibqt_gui_cpp_sipqt_gui_cpp.o
	-rm -f "/opt/workspace/build/qt_gui_cpp/src/qt_gui_cpp_sip/libqt_gui_cpp_sip".exp
