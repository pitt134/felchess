#ifndef BOARDWIDGET_H
#define BOARDWIDGET_H

#include <QWidget>
#include <QColor>
#include <QtSvg/QtSvg>

#include <QDebug>

#include "../painter.h"
#include "../../model/apiece.h"
#include "../../model/king.h"

class King;

/**
  * Widget po vykreslovani hraci plochy..
  */
class BoardWidget : public QWidget
{
    Q_OBJECT
public:

    /**
      * Vytvoreni noveho widgetu pro herni plochu.
      * @param *parent Ukazatel na rodice/vlastnika.
      */
    explicit BoardWidget(QWidget * parent = 0);

    /**
      * Zniceni OpenGL widgetu.
      */
    virtual ~BoardWidget(void);

protected:


    /**
      * Prestineni funkce zmeny velikosti.
      * @param event Udalost o zmene velikosti.
      */
    virtual void resizeEvent(QResizeEvent * event);

    /**
      * Prestineni funkce na kresleni na widget.
      * @param event Udalost o prekresleni.
      */
    virtual void paintEvent(QPaintEvent * event);

    /**
      * Zpracovani kliku mysi do hraci plochy.
      * @param event Udalost o kliku mysi.
      */
    virtual void mousePressEvent(QMouseEvent * event);

private:

    /**
      * Kreslitko na platno.
      */
    Painter painter;

private slots:

    /**
      * Prelozi widget.
      */
    void retranslateSlot(void);



};

#endif // BOARDWIDGET_H
