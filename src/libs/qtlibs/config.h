/**
 * A library for Qt app
 *
 * LICENSE: The GNU Lesser General Public License, version 3.0
 *
 * @author      Akira Ohgaki <akiraohgaki@gmail.com>
 * @copyright   Akira Ohgaki
 * @license     https://opensource.org/licenses/LGPL-3.0  The GNU Lesser General Public License, version 3.0
 * @link        https://github.com/akiraohgaki/qtlibs
 */

#pragma once

#include <QObject>
#include <QJsonObject>

namespace qtlibs {

class Config : public QObject
{
    Q_OBJECT

public:
    explicit Config(const QString &configDirPath, QObject *parent = 0);

    QString configDirPath() const;
    void setConfigDirPath(const QString &configDirPath);

    QJsonObject get(const QString &name);
    bool set(const QString &name, const QJsonObject &object);

private:
    QString configDirPath_;
};

} // namespace qtlibs