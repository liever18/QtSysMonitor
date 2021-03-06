/*
 * -----------------------------------
 * QtSysMonitor
 * -----------------------------------
 *
 * This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ---------------------------------------------------------------------------
 * Started By: Navjot Singh <weavebytes@gmail.com> in November 2016
 *
 * Organization:Weavebytes Infotech Pvt Ltd
 * ---------------------------------------------------------------------------
 */

#ifndef DISKINFO_H
#define DISKINFO_H

#include <QObject>

/**
 * @brief The DiskInfo class
 *
 * Class for getting information for disks/partitions on system,
 * their total disk size, used/free space etc.
 */
class DiskInfo : public QObject
{
    Q_OBJECT
public:
    explicit DiskInfo(QObject *parent = 0);

    /**
     * @brief getDisksInfo
     * Function gets latest information about all disks
     *
     * Note:-
     * ------
     * Qt will be using platform specific source codes for
     * Linux, Mac, Windows to obtain this informaiton.
     */
    void getDisksInfo();

signals:

public slots:
};

#endif // DISKINFO_H
