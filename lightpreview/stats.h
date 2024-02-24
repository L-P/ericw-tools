#pragma once

#include <QWidget>

struct mbsp_t;
class QTableWidget;

class StatsPanel : public QWidget
{
private:
    QTableWidget *m_table;
public:
    StatsPanel(QWidget *parent = nullptr);

private:
    void addStat(const QString &str, int value);

public:
    void updateWithBSP(const mbsp_t *bsp);
};
