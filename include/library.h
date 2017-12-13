/*
 * PLUG - software to operate Fender Mustang amplifier
 *        Linux replacement for Fender FUSE software
 *
 * Copyright (C) 2017  offa
 * Copyright (C) 2010-2016  piorekf <piorek@piorekf.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBRARY_H
#define LIBRARY_H

#include <memory>
#include <QDialog>
#include <QFileDialog>
#include <QDir>
#include <QResizeEvent>

namespace Ui {
    class Library;
}

class Library : public QDialog
{
    Q_OBJECT

public:
    explicit Library(char names[100][32], QWidget *parent = nullptr);
    ~Library();

private:
    const std::unique_ptr<Ui::Library> ui;
    const std::unique_ptr<QFileInfoList> files;
    void resizeEvent(QResizeEvent *);

private slots:
    void load_slot(int);
    void get_directory();
    void get_files(QString);
    void load_file(int);
    void change_font_size(int);
    void change_font_family(QFont);

signals:
    void directory_changed(QString);
};

#endif // LIBRARY_H
