#ifndef CONFIGDATAS_H
#define CONFIGDATAS_H

#include "ui_configwidget.h"
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>
#include <QFrame>

namespace ConfigSpace
{
class ConfigDatas:public QWidget,public Ui::ConfigWidget
{
    Q_OBJECT
    public:
        ConfigDatas (QWidget * parent = 0);
         ~ConfigDatas ();
    protected slots:
        void record();
    private:
        QStringList m_listofconfigkeys;
        QFrame * m_frame;
        QGridLayout * m_layout;
        Ui::ConfigWidget *ui;
};
}

#endif
