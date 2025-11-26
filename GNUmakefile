include $(GNUSTEP_MAKEFILES)/common.make

ADDITIONAL_CFLAGS            += -g3 -gdwarf-5 -O0 -fstandalone-debug -fno-limit-debug-info
ADDITIONAL_OBJCFLAGS         += -g3 -gdwarf-5 -O0 -fstandalone-debug -fno-limit-debug-info -DDEBUG_GRAPHVIZ=1
TOOL_NAME = HelloWorld
HelloWorld_HEADERS = Entity.h
HelloWorld_OBJC_FILES = main.m Entity.m
HelloWorld_RESOURCE_FILES =

include $(GNUSTEP_MAKEFILES)/tool.make
