TEMPLATE = subdirs
CONFIG += debug
SUBDIRS += src/webkit_server.pro
test {
  SUBDIRS += test/testwebkitserver.pro
}
