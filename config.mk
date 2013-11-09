# program version
VERSION = 0.1
# program name
PROG_NAME = newtons

# Customize below to fit your needs.

# paths

# includes and libs
INCS =
LIBS =

# flags
CPPFLAGS = -DVERSION=\"${VERSION}\"
CFLAGS = -pedantic -Wall -Wextra -O3 ${INCS} ${CPPFLAGS}
LDFLAGS = -s ${LIBS}

# compiler and linker
CC = gcc
LD = ${CC}
