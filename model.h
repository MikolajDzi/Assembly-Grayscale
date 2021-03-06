#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <QPixmap>

class Model
{
private:
    QPixmap previewImage;
    QPixmap asmImage;
    QPixmap cImage;
    QString imagePath;
    int methodIndex;
    int previewWidth;
    int previewHeight;
    int resultWidth;
    int resultHeight;
public:
    Model();
    void setPreviewImage(QPixmap pixmap);
    void setAsmImage(QPixmap pixmap);
    void setCImage(QPixmap pixmap);
    void setImagePath(QString path);
    void setMethodIndex(int number);
    void setPreviewWidth(int number);
    void setPreviewHeight(int number);
    void setResultWidth(int number);
    void setResultHeight(int number);
    QPixmap getPreviewImage();
    QPixmap getAsmImage();
    QPixmap getCImage();
    QString getImagePath();
    int getMethodIndex();
    int getPreviewWidth();
    int getPreviewHeight();
    int getResultWidth();
    int getResultHeight();
};

#endif // MODEL_H
