#include "DumpEnv.h"
#include "WebPage.h"
#include "WebPageManager.h"

DumpEnv::DumpEnv(WebPageManager *manager, QStringList &arguments, QObject *parent) : SocketCommand(manager, arguments, parent)
{
  m_buffer = "";
}

void DumpEnv::start()
{
  QStringList env = QProcessEnvironment::systemEnvironment().toStringList();
  foreach (QString pair, env) {
    m_buffer.append(pair);
    m_buffer.append("\n");
  }
  finish(true, m_buffer);
}
