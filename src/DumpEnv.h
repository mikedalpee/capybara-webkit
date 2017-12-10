#include "SocketCommand.h"

class DumpEnv : public SocketCommand {
  Q_OBJECT;

 public:
  DumpEnv(WebPageManager *, QStringList &arguments, QObject *parent = 0);
  virtual void start();

 private:
  QString m_buffer;
};
